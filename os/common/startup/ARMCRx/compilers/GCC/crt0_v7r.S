/*
    ChibiOS - Copyright (C) 2006-2026 Giovanni Di Sirio.

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

        http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.
*/

/**
 * @file    crt0_v7r.S
 * @brief   Generic ARMv7-R startup file for ChibiOS.
 *
 * @addtogroup ARMCRx_GCC_STARTUP_V7R
 * @{
 */

/*===========================================================================*/
/* Module constants.                                                         */
/*===========================================================================*/

#if !defined(FALSE) || defined(__DOXYGEN__)
#define FALSE                               0
#endif

#if !defined(TRUE) || defined(__DOXYGEN__)
#define TRUE                                1
#endif

#define MODE_USR                            0x10
#define MODE_FIQ                            0x11
#define MODE_IRQ                            0x12
#define MODE_SVC                            0x13
#define MODE_ABT                            0x17
#define MODE_UND                            0x1B
#define MODE_SYS                            0x1F

#define I_BIT                               0x80
#define F_BIT                               0x40

#define CPACR_CP10_CP11_FULL_ACCESS         0x00F00000
#define FPEXC_EN                            (1 << 30)

/*===========================================================================*/
/* Module pre-compile time settings.                                         */
/*===========================================================================*/

/**
 * @brief   VBAR special register initialization.
 * @details VBAR is initialized to point to the vectors table.
 */
#if !defined(CRT0_VBAR_INIT) || defined(__DOXYGEN__)
#define CRT0_VBAR_INIT                      TRUE
#endif

/**
 * @brief   Core initialization switch.
 */
#if !defined(CRT0_INIT_CORE) || defined(__DOXYGEN__)
#define CRT0_INIT_CORE                      TRUE
#endif

/**
 * @brief   FPU initialization switch.
 */
#if !defined(CRT0_INIT_FPU) || defined(__DOXYGEN__)
#if defined(CORTEX_USE_FPU) || defined(__DOXYGEN__)
#define CRT0_INIT_FPU                       CORTEX_USE_FPU
#else
#define CRT0_INIT_FPU                       FALSE
#endif
#endif

/**
 * @brief   FPU FPSCR register initialization value.
 * @note    Only used if @p CRT0_INIT_FPU is equal to @p TRUE.
 */
#if !defined(CRT0_FPSCR_INIT) || defined(__DOXYGEN__)
#define CRT0_FPSCR_INIT                     0
#endif

/**
 * @brief   Stack segments fill pattern.
 */
#if !defined(CRT0_STACKS_FILL_PATTERN) || defined(__DOXYGEN__)
#define CRT0_STACKS_FILL_PATTERN            0x55555555
#endif

/**
 * @brief   Stack segments initialization switch.
 */
#if !defined(CRT0_INIT_STACKS) || defined(__DOXYGEN__)
#define CRT0_INIT_STACKS                    TRUE
#endif

/**
 * @brief   Vectors table initialization.
 * @details Vectors are copied in RAM on startup.
 */
#if !defined(CRT0_INIT_VECTORS) || defined(__DOXYGEN__)
#define CRT0_INIT_VECTORS                   FALSE
#endif

/**
 * @brief   DATA segment initialization switch.
 */
#if !defined(CRT0_INIT_DATA) || defined(__DOXYGEN__)
#define CRT0_INIT_DATA                      TRUE
#endif

/**
 * @brief   BSS segment initialization switch.
 */
#if !defined(CRT0_INIT_BSS) || defined(__DOXYGEN__)
#define CRT0_INIT_BSS                       TRUE
#endif

/**
 * @brief   RAM areas initialization switch.
 */
#if !defined(CRT0_INIT_RAM_AREAS) || defined(__DOXYGEN__)
#define CRT0_INIT_RAM_AREAS                 TRUE
#endif

/**
 * @brief   Constructors invocation switch.
 */
#if !defined(CRT0_CALL_CONSTRUCTORS) || defined(__DOXYGEN__)
#define CRT0_CALL_CONSTRUCTORS              TRUE
#endif

/**
 * @brief   Destructors invocation switch.
 */
#if !defined(CRT0_CALL_DESTRUCTORS) || defined(__DOXYGEN__)
#define CRT0_CALL_DESTRUCTORS               TRUE
#endif

/**
 * @brief   Number of extra cores.
 */
#if !defined(CRT0_EXTRA_CORES_NUMBER) || defined(__DOXYGEN__)
#define CRT0_EXTRA_CORES_NUMBER             0
#endif

/*===========================================================================*/
/* Code section.                                                             */
/*===========================================================================*/

#if !defined(__DOXYGEN__)

                .syntax unified
                .cpu    cortex-r8
#if CRT0_INIT_FPU == TRUE
                .fpu    vfpv3-d16
#endif
                .arm
                .text

                .macro  CRT0_SET_VBAR_SYMBOL source
#if CRT0_VBAR_INIT == TRUE
                ldr     r0, =\source
                mcr     p15, 0, r0, c12, c0, 0
                dsb
                isb
#endif
                .endm

                .macro  CRT0_SET_VBAR_REG reg
#if CRT0_VBAR_INIT == TRUE
                mcr     p15, 0, \reg, c12, c0, 0
                dsb
                isb
#endif
                .endm

                .macro  CRT0_SETUP_FPU
#if CRT0_INIT_FPU == TRUE
                mrc     p15, 0, r0, c1, c0, 2
                ldr     r1, =CPACR_CP10_CP11_FULL_ACCESS
                orr     r0, r0, r1
                mcr     p15, 0, r0, c1, c0, 2
                isb

                vmrs    r0, fpexc
                ldr     r1, =FPEXC_EN
                orr     r0, r0, r1
                vmsr    fpexc, r0

                ldr     r0, =CRT0_FPSCR_INIT
                vmsr    fpscr, r0
#endif
                .endm

                .macro  CRT0_COPY_VECTORS
#if CRT0_INIT_VECTORS == TRUE
                ldr     r1, =__textvectors_base__
                ldr     r2, =__vectors_base__
                ldr     r3, =__vectors_end__
                mov     r4, r2
1:
                cmp     r2, r3
                bhs     2f
                ldr     r0, [r1], #4
                str     r0, [r2], #4
                b       1b
2:
                CRT0_SET_VBAR_REG r4
#endif
                .endm

                .macro  CRT0_INIT_MODE_STACKS prefix
                cpsid   if

                ldr     r0, =__\prefix\()und_stack_end__
                msr     CPSR_c, #(MODE_UND | I_BIT | F_BIT)
                mov     sp, r0

                ldr     r0, =__\prefix\()abt_stack_end__
                msr     CPSR_c, #(MODE_ABT | I_BIT | F_BIT)
                mov     sp, r0

                ldr     r0, =__\prefix\()fiq_stack_end__
                msr     CPSR_c, #(MODE_FIQ | I_BIT | F_BIT)
                mov     sp, r0

                ldr     r0, =__\prefix\()irq_stack_end__
                msr     CPSR_c, #(MODE_IRQ | I_BIT | F_BIT)
                mov     sp, r0

                ldr     r0, =__\prefix\()svc_stack_end__
                msr     CPSR_c, #(MODE_SVC | I_BIT | F_BIT)
                mov     sp, r0

                ldr     r0, =__\prefix\()sys_stack_end__
                msr     CPSR_c, #(MODE_SYS | I_BIT | F_BIT)
                mov     sp, r0
                .endm

                .macro  CRT0_FILL_STACK base, end
                ldr     r1, =\base
                ldr     r2, =\end
1:
                cmp     r1, r2
                bhs     2f
                str     r0, [r1], #4
                b       1b
2:
                .endm

                .macro  CRT0_INIT_STACK_AREAS prefix
#if CRT0_INIT_STACKS == TRUE
                ldr     r0, =CRT0_STACKS_FILL_PATTERN
                CRT0_FILL_STACK __\prefix\()und_stack_base__, __\prefix\()und_stack_end__
                CRT0_FILL_STACK __\prefix\()abt_stack_base__, __\prefix\()abt_stack_end__
                CRT0_FILL_STACK __\prefix\()fiq_stack_base__, __\prefix\()fiq_stack_end__
                CRT0_FILL_STACK __\prefix\()irq_stack_base__, __\prefix\()irq_stack_end__
                CRT0_FILL_STACK __\prefix\()svc_stack_base__, __\prefix\()svc_stack_end__
                CRT0_FILL_STACK __\prefix\()sys_stack_base__, __\prefix\()sys_stack_end__
#endif
                .endm

/*
 * CRT0 entry point.
 */
                .align  4
                .global _crt0_entry
_crt0_entry:
                CRT0_INIT_MODE_STACKS
                CRT0_SET_VBAR_SYMBOL _vectors
                CRT0_SETUP_FPU

#if CRT0_INIT_CORE == TRUE
                bl      __cpu_init
#endif

                bl      __early_init

                CRT0_INIT_STACK_AREAS

                CRT0_COPY_VECTORS

#if CRT0_INIT_DATA == TRUE
                ldr     r1, =__textdata_base__
                ldr     r2, =__data_base__
                ldr     r3, =__data_end__
1:
                cmp     r2, r3
                bhs     2f
                ldr     r0, [r1], #4
                str     r0, [r2], #4
                b       1b
2:
#endif

#if CRT0_INIT_BSS == TRUE
                mov     r0, #0
                ldr     r1, =__bss_base__
                ldr     r2, =__bss_end__
1:
                cmp     r1, r2
                bhs     2f
                str     r0, [r1], #4
                b       1b
2:
#endif

#if CRT0_INIT_RAM_AREAS == TRUE
                bl      __init_ram_areas
#endif

                bl      __late_init

#if CRT0_CALL_CONSTRUCTORS == TRUE
                ldr     r4, =__init_array_base__
                ldr     r5, =__init_array_end__
1:
                cmp     r4, r5
                bhs     2f
                ldr     r1, [r4], #4
                blx     r1
                b       1b
2:
#endif

                bl      main

#if CRT0_CALL_DESTRUCTORS == TRUE
                ldr     r4, =__fini_array_base__
                ldr     r5, =__fini_array_end__
1:
                cmp     r4, r5
                bhs     2f
                ldr     r1, [r4], #4
                blx     r1
                b       1b
2:
#endif

                b       __default_exit

                .macro  CRT0_EXTRA_CORE_ENTRY core
                .align  4
                .global _crt0_c\core\()_entry
_crt0_c\core\()_entry:
                CRT0_INIT_MODE_STACKS c\core\()_
                CRT0_SET_VBAR_SYMBOL _vectors
                CRT0_SETUP_FPU

#if CRT0_INIT_CORE == TRUE
                bl      __c\core\()_cpu_init
#endif

                bl      __c\core\()_early_init

                CRT0_INIT_STACK_AREAS c\core\()_

                bl      __c\core\()_late_init

                bl      c\core\()_main

                b       __c\core\()_default_exit
                .endm

#if CRT0_EXTRA_CORES_NUMBER > 0
                CRT0_EXTRA_CORE_ENTRY 1
#endif

#if CRT0_EXTRA_CORES_NUMBER > 1
#error "unsupported number of extra cores"
#endif

#endif /* !defined(__DOXYGEN__) */

/** @} */
