/*
    ChibiOS - Copyright (C) 2006-2026 Giovanni Di Sirio.

    This file is part of ChibiOS.

    ChibiOS is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation version 3 of the License.

    ChibiOS is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

/**
 * @file    ARMv7-R/compilers/GCC/chcoreasm.S
 * @brief   ARMv7-R port low level code.
 *
 * @addtogroup ARMV7R_GCC_CORE
 * @{
 */

#define _FROM_ASM_
#include "chlicense.h"
#include "chconf.h"
#include "crparams.h"

#define FALSE 0
#define TRUE 1

#if !defined(__DOXYGEN__)

/*
 * RTOS-specific context offset.
 */
#if defined(_CHIBIOS_RT_CONF_)
#define CONTEXT_OFFSET  12

#elif defined(_CHIBIOS_NIL_CONF_)
#define CONTEXT_OFFSET  0

#else
#error "invalid chconf.h"
#endif

                .set    MODE_USR, 0x10
                .set    MODE_FIQ, 0x11
                .set    MODE_IRQ, 0x12
                .set    MODE_SVC, 0x13
                .set    MODE_ABT, 0x17
                .set    MODE_UND, 0x1B
                .set    MODE_SYS, 0x1F

                .equ    I_BIT, 0x80
                .equ    F_BIT, 0x40

                .syntax unified
                .cpu    cortex-r8
                .arm
                .text

                .balign 16

                .global __port_switch_arm
__port_switch_arm:
                stmfd   sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
#if CORTEX_USE_FPU == TRUE
                vmrs    r2, fpscr
                stmfd   sp!, {r2}
                vstmdb  sp!, {d0-d15}
#endif
                str     sp, [r1, #CONTEXT_OFFSET]
                ldr     sp, [r0, #CONTEXT_OFFSET]
#if CORTEX_USE_FPU == TRUE
                vldmia  sp!, {d0-d15}
                ldmfd   sp!, {r2}
                vmsr    fpscr, r2
#endif
                ldmfd   sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}

/*
 * Common IRQ entry point.
 *
 * The interrupt-controller specific code is centralized in
 * __port_irq_dispatch(), which is expected to claim, dispatch and complete
 * the current interrupt. It returns non-zero when preemption is required.
 *
 * System stack frame structure after a context switch in the interrupt handler:
 *
 * High +------------+
 *      |   LR_USR   | -+
 *      |     r12    |  |
 *      |     r3     |  |
 *      |     r2     |  | External context: IRQ handler frame
 *      |     r1     |  |
 *      |     r0     |  |
 *      |   LR_IRQ   |  |   (user code return address)
 *      |   PSR_USR  | -+   (user code status)
 *      |    ....    | <- chSchDoReschedule() stack frame
 *      |     LR     | -+   (system code return address)
 *      |     r11    |  |
 *      |     r10    |  |
 *      |     r9     |  |
 *      |     r8     |  | Internal context: chSysSwitch() frame
 *      |     r7     |  |
 *      |     r6     |  |
 *      |     r5     |  |
 * SP-> |     r4     | -+
 * Low  +------------+
 */
                .balign 16
                .global Irq_Handler
Irq_Handler:
                stmfd   sp!, {r0-r3, r12, lr}
                bl      __port_irq_dispatch
                cmp     r0, #0
                ldmfd   sp!, {r0-r3, r12, lr}
                beq     .Lirq_return

                /* Now the frame is created in the system stack, the IRQ
                   stack is empty.*/
                msr     CPSR_c, #(MODE_SYS | I_BIT)
                stmfd   sp!, {r0-r3, r12, lr}
                msr     CPSR_c, #(MODE_IRQ | I_BIT)
                mrs     r0, SPSR
                mov     r1, lr
                msr     CPSR_c, #(MODE_SYS | I_BIT)
                stmfd   sp!, {r0, r1}

                /* Context switch.*/
#if CH_DBG_SYSTEM_STATE_CHECK
                bl      __dbg_check_lock
#endif
                bl      chSchDoPreemption
#if CH_DBG_SYSTEM_STATE_CHECK
                bl      __dbg_check_unlock
#endif

                /* Re-establish the IRQ conditions again.*/
                ldmfd   sp!, {r0, r1}
                msr     CPSR_c, #(MODE_IRQ | I_BIT)
                msr     SPSR_fsxc, r0
                mov     lr, r1
                msr     CPSR_c, #(MODE_SYS | I_BIT)
                ldmfd   sp!, {r0-r3, r12, lr}
                msr     CPSR_c, #(MODE_IRQ | I_BIT)
.Lirq_return:
                subs    pc, lr, #4

/*
 * Threads trampoline code.
 */
                .balign 16
                .globl  __port_thread_start
__port_thread_start:
#if CH_DBG_SYSTEM_STATE_CHECK
                bl      __dbg_check_unlock
#endif
                msr     CPSR_c, #MODE_SYS
                mov     r0, r5
                mov     lr, pc
                bx      r4
                mov     r0, #0              /* MSG_OK */
                bl      chThdExit
.zombies:       b       .zombies

#endif /* !defined(__DOXYGEN__) */

/** @} */
