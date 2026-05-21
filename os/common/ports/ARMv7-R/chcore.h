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
 * @file    ARMv7-R/chcore.h
 * @brief   ARMv7-R architecture port macros and structures.
 *
 * @addtogroup ARMV7R_CORE
 * @{
 */

#ifndef CHCORE_H
#define CHCORE_H

/* Inclusion of the Cortex-R implementation specific parameters.*/
#include "crparams.h"
#include "mpu_v7r.h"

/*===========================================================================*/
/* Module constants.                                                         */
/*===========================================================================*/

/* The following code is not processed when the file is included from an
   asm module because those intrinsic macros are not necessarily defined
   by the assembler too.*/
#if !defined(_FROM_ASM_)

/**
 * @brief   Compiler name and version.
 */
#if defined(__GNUC__) || defined(__DOXYGEN__)
#define PORT_COMPILER_NAME              "GCC " __VERSION__

#else
#error "unsupported compiler"
#endif

#endif /* !defined(_FROM_ASM_) */
/** @} */

/**
 * @name    Port Capabilities and Constants
 * @{
 */
/**
 * @brief   This port does not currently expose a realtime counter.
 */
#define PORT_SUPPORTS_RT                FALSE

/**
 * @brief   Natural alignment constant.
 * @note    It is the minimum alignment for pointer-size variables.
 */
#define PORT_NATURAL_ALIGN              sizeof (void *)

/**
 * @brief   Stack initial alignment constant.
 * @note    It is the alignment required for the stack pointer.
 */
#define PORT_STACK_ALIGN                8U

/**
 * @brief   Working Areas alignment constant.
 * @note    It is the alignment to be enforced for thread working areas.
 */
#define PORT_WORKING_AREA_ALIGN         8U
/** @} */

/**
 * @name    ARMv7-R variants
 * @{
 */
#define ARM_CORE_CORTEX_R8              8
/** @} */

/**
 * @name    Architecture
 * @{
 */
/**
 * @brief   Macro defining an ARMv7-R architecture.
 */
#define PORT_ARCHITECTURE_ARMV7R

/* ARM core check.*/
#if (CORTEX_MODEL == ARM_CORE_CORTEX_R8) || defined(__DOXYGEN__)
  #define PORT_ARCHITECTURE_ARM_CORTEXR8
  #define PORT_ARCHITECTURE_NAME        "ARMv7-R"
  #define PORT_CORE_VARIANT_NAME        "ARM Cortex-R8"

#else
  #error "unknown or unsupported ARMv7-R core"
#endif

#define PORT_INFO                       "Pure ARM mode"
/** @} */

/*===========================================================================*/
/* Module pre-compile time settings.                                         */
/*===========================================================================*/

/**
 * @brief   Stack size for the system idle thread.
 * @details This size depends on the idle thread implementation, usually
 *          the idle thread should take no more space than those reserved
 *          by @p PORT_INT_REQUIRED_STACK.
 */
#if !defined(PORT_IDLE_THREAD_STACK_SIZE) || defined(__DOXYGEN__)
#define PORT_IDLE_THREAD_STACK_SIZE     64
#endif

/**
 * @brief   Per-thread stack overhead for interrupts servicing.
 * @details This constant is used in the calculation of the correct working
 *          area size.
 */
#if !defined(PORT_INT_REQUIRED_STACK) || defined(__DOXYGEN__)
#define PORT_INT_REQUIRED_STACK         32
#endif

/**
 * @brief   Enables the use of the WFI instruction in the idle thread loop.
 */
#if !defined(PORT_ENABLE_WFI_IDLE) || defined(__DOXYGEN__)
#define PORT_ENABLE_WFI_IDLE            FALSE
#endif

/**
 * @brief   FPU support in context switch.
 * @details Activating this option activates the FPU support in the kernel.
 */
#if !defined(CORTEX_USE_FPU)
#define CORTEX_USE_FPU                  FALSE
#elif (CORTEX_USE_FPU == TRUE) && (CORTEX_HAS_FPU == FALSE)
/* This setting requires an FPU presence check in case it is externally
   redefined.*/
#error "the selected core does not have an FPU"
#endif

/**
 * @brief   Enables MPU static initialization.
 * @details The initialization is performed according to the various
 *          @p PORT_MPU_DRBARx_INIT, @p PORT_MPU_DRSRx_INIT and
 *          @p PORT_MPU_DRACRx_INIT settings.
 * @note    The default is disabled because enabling an ARMv7-R MPU without
 *          a complete memory map prevents all unmatched accesses.
 */
#if !defined(PORT_MPU_INITIALIZE) || defined(__DOXYGEN__)
#define PORT_MPU_INITIALIZE             FALSE
#elif (PORT_MPU_INITIALIZE == TRUE) && (CORTEX_HAS_MPU == FALSE)
/* This setting requires an MPU presence check in case it is externally
   redefined.*/
#error "the selected core does not have an MPU"
#endif

/**
 * @brief   Number of static MPU regions.
 */
#if !defined(PORT_MPU_REGIONS) || defined(__DOXYGEN__)
#define PORT_MPU_REGIONS                CORTEX_MPU_REGIONS
#endif

/**
 * @name    MPU Data Region Size and Enable register constants
 * @{
 */
#define PORT_MPU_DRSR_ENABLE            MPU_DRSR_ENABLE
#define PORT_MPU_DRSR_SIZE(n)           MPU_DRSR_SIZE(n)
#define PORT_MPU_DRSR_SIZE_256          MPU_DRSR_SIZE_256
#define PORT_MPU_DRSR_SIZE_512          MPU_DRSR_SIZE_512
#define PORT_MPU_DRSR_SIZE_1K           MPU_DRSR_SIZE_1K
#define PORT_MPU_DRSR_SIZE_2K           MPU_DRSR_SIZE_2K
#define PORT_MPU_DRSR_SIZE_4K           MPU_DRSR_SIZE_4K
#define PORT_MPU_DRSR_SIZE_8K           MPU_DRSR_SIZE_8K
#define PORT_MPU_DRSR_SIZE_16K          MPU_DRSR_SIZE_16K
#define PORT_MPU_DRSR_SIZE_32K          MPU_DRSR_SIZE_32K
#define PORT_MPU_DRSR_SIZE_64K          MPU_DRSR_SIZE_64K
#define PORT_MPU_DRSR_SIZE_128K         MPU_DRSR_SIZE_128K
#define PORT_MPU_DRSR_SIZE_256K         MPU_DRSR_SIZE_256K
#define PORT_MPU_DRSR_SIZE_512K         MPU_DRSR_SIZE_512K
#define PORT_MPU_DRSR_SIZE_1M           MPU_DRSR_SIZE_1M
#define PORT_MPU_DRSR_SIZE_2M           MPU_DRSR_SIZE_2M
#define PORT_MPU_DRSR_SIZE_4M           MPU_DRSR_SIZE_4M
#define PORT_MPU_DRSR_SIZE_8M           MPU_DRSR_SIZE_8M
#define PORT_MPU_DRSR_SIZE_16M          MPU_DRSR_SIZE_16M
#define PORT_MPU_DRSR_SIZE_32M          MPU_DRSR_SIZE_32M
#define PORT_MPU_DRSR_SIZE_64M          MPU_DRSR_SIZE_64M
#define PORT_MPU_DRSR_SIZE_128M         MPU_DRSR_SIZE_128M
#define PORT_MPU_DRSR_SIZE_256M         MPU_DRSR_SIZE_256M
#define PORT_MPU_DRSR_SIZE_512M         MPU_DRSR_SIZE_512M
#define PORT_MPU_DRSR_SIZE_1G           MPU_DRSR_SIZE_1G
#define PORT_MPU_DRSR_SIZE_2G           MPU_DRSR_SIZE_2G
#define PORT_MPU_DRSR_SIZE_4G           MPU_DRSR_SIZE_4G
#define PORT_MPU_DRSR_SRD(n)            MPU_DRSR_SRD(n)
/** @} */

/**
 * @name    MPU Data Region Access Control register constants
 * @{
 */
#define PORT_MPU_DRACR_B                MPU_DRACR_B
#define PORT_MPU_DRACR_C                MPU_DRACR_C
#define PORT_MPU_DRACR_S                MPU_DRACR_S
#define PORT_MPU_DRACR_TEX(n)           MPU_DRACR_TEX(n)
#define PORT_MPU_DRACR_AP(n)            MPU_DRACR_AP(n)
#define PORT_MPU_DRACR_XN               MPU_DRACR_XN
#define PORT_MPU_DRACR_AP_NA_NA         MPU_DRACR_AP_NA_NA
#define PORT_MPU_DRACR_AP_RW_NA         MPU_DRACR_AP_RW_NA
#define PORT_MPU_DRACR_AP_RW_RO         MPU_DRACR_AP_RW_RO
#define PORT_MPU_DRACR_AP_RW_RW         MPU_DRACR_AP_RW_RW
#define PORT_MPU_DRACR_AP_RO_NA         MPU_DRACR_AP_RO_NA
#define PORT_MPU_DRACR_AP_RO_RO         MPU_DRACR_AP_RO_RO
/** @} */

/**
 * @brief   MPU Data Region Base Address register initializer.
 */
#define PORT_MPU_DRBAR(base)            MPU_DRBAR_ADDR(base)

#if !defined(PORT_MPU_DRBAR0_INIT) || defined(__DOXYGEN__)
#define PORT_MPU_DRBAR0_INIT            0U
#endif
#if !defined(PORT_MPU_DRSR0_INIT) || defined(__DOXYGEN__)
#define PORT_MPU_DRSR0_INIT             0U
#endif
#if !defined(PORT_MPU_DRACR0_INIT) || defined(__DOXYGEN__)
#define PORT_MPU_DRACR0_INIT            0U
#endif
#if !defined(PORT_MPU_DRBAR1_INIT) || defined(__DOXYGEN__)
#define PORT_MPU_DRBAR1_INIT            0U
#endif
#if !defined(PORT_MPU_DRSR1_INIT) || defined(__DOXYGEN__)
#define PORT_MPU_DRSR1_INIT             0U
#endif
#if !defined(PORT_MPU_DRACR1_INIT) || defined(__DOXYGEN__)
#define PORT_MPU_DRACR1_INIT            0U
#endif
#if !defined(PORT_MPU_DRBAR2_INIT) || defined(__DOXYGEN__)
#define PORT_MPU_DRBAR2_INIT            0U
#endif
#if !defined(PORT_MPU_DRSR2_INIT) || defined(__DOXYGEN__)
#define PORT_MPU_DRSR2_INIT             0U
#endif
#if !defined(PORT_MPU_DRACR2_INIT) || defined(__DOXYGEN__)
#define PORT_MPU_DRACR2_INIT            0U
#endif
#if !defined(PORT_MPU_DRBAR3_INIT) || defined(__DOXYGEN__)
#define PORT_MPU_DRBAR3_INIT            0U
#endif
#if !defined(PORT_MPU_DRSR3_INIT) || defined(__DOXYGEN__)
#define PORT_MPU_DRSR3_INIT             0U
#endif
#if !defined(PORT_MPU_DRACR3_INIT) || defined(__DOXYGEN__)
#define PORT_MPU_DRACR3_INIT            0U
#endif
#if !defined(PORT_MPU_DRBAR4_INIT) || defined(__DOXYGEN__)
#define PORT_MPU_DRBAR4_INIT            0U
#endif
#if !defined(PORT_MPU_DRSR4_INIT) || defined(__DOXYGEN__)
#define PORT_MPU_DRSR4_INIT             0U
#endif
#if !defined(PORT_MPU_DRACR4_INIT) || defined(__DOXYGEN__)
#define PORT_MPU_DRACR4_INIT            0U
#endif
#if !defined(PORT_MPU_DRBAR5_INIT) || defined(__DOXYGEN__)
#define PORT_MPU_DRBAR5_INIT            0U
#endif
#if !defined(PORT_MPU_DRSR5_INIT) || defined(__DOXYGEN__)
#define PORT_MPU_DRSR5_INIT             0U
#endif
#if !defined(PORT_MPU_DRACR5_INIT) || defined(__DOXYGEN__)
#define PORT_MPU_DRACR5_INIT            0U
#endif
#if !defined(PORT_MPU_DRBAR6_INIT) || defined(__DOXYGEN__)
#define PORT_MPU_DRBAR6_INIT            0U
#endif
#if !defined(PORT_MPU_DRSR6_INIT) || defined(__DOXYGEN__)
#define PORT_MPU_DRSR6_INIT             0U
#endif
#if !defined(PORT_MPU_DRACR6_INIT) || defined(__DOXYGEN__)
#define PORT_MPU_DRACR6_INIT            0U
#endif
#if !defined(PORT_MPU_DRBAR7_INIT) || defined(__DOXYGEN__)
#define PORT_MPU_DRBAR7_INIT            0U
#endif
#if !defined(PORT_MPU_DRSR7_INIT) || defined(__DOXYGEN__)
#define PORT_MPU_DRSR7_INIT             0U
#endif
#if !defined(PORT_MPU_DRACR7_INIT) || defined(__DOXYGEN__)
#define PORT_MPU_DRACR7_INIT            0U
#endif
#if !defined(PORT_MPU_DRBAR8_INIT) || defined(__DOXYGEN__)
#define PORT_MPU_DRBAR8_INIT            0U
#endif
#if !defined(PORT_MPU_DRSR8_INIT) || defined(__DOXYGEN__)
#define PORT_MPU_DRSR8_INIT             0U
#endif
#if !defined(PORT_MPU_DRACR8_INIT) || defined(__DOXYGEN__)
#define PORT_MPU_DRACR8_INIT            0U
#endif
#if !defined(PORT_MPU_DRBAR9_INIT) || defined(__DOXYGEN__)
#define PORT_MPU_DRBAR9_INIT            0U
#endif
#if !defined(PORT_MPU_DRSR9_INIT) || defined(__DOXYGEN__)
#define PORT_MPU_DRSR9_INIT             0U
#endif
#if !defined(PORT_MPU_DRACR9_INIT) || defined(__DOXYGEN__)
#define PORT_MPU_DRACR9_INIT            0U
#endif
#if !defined(PORT_MPU_DRBAR10_INIT) || defined(__DOXYGEN__)
#define PORT_MPU_DRBAR10_INIT           0U
#endif
#if !defined(PORT_MPU_DRSR10_INIT) || defined(__DOXYGEN__)
#define PORT_MPU_DRSR10_INIT            0U
#endif
#if !defined(PORT_MPU_DRACR10_INIT) || defined(__DOXYGEN__)
#define PORT_MPU_DRACR10_INIT           0U
#endif
#if !defined(PORT_MPU_DRBAR11_INIT) || defined(__DOXYGEN__)
#define PORT_MPU_DRBAR11_INIT           0U
#endif
#if !defined(PORT_MPU_DRSR11_INIT) || defined(__DOXYGEN__)
#define PORT_MPU_DRSR11_INIT            0U
#endif
#if !defined(PORT_MPU_DRACR11_INIT) || defined(__DOXYGEN__)
#define PORT_MPU_DRACR11_INIT           0U
#endif
#if !defined(PORT_MPU_DRBAR12_INIT) || defined(__DOXYGEN__)
#define PORT_MPU_DRBAR12_INIT           0U
#endif
#if !defined(PORT_MPU_DRSR12_INIT) || defined(__DOXYGEN__)
#define PORT_MPU_DRSR12_INIT            0U
#endif
#if !defined(PORT_MPU_DRACR12_INIT) || defined(__DOXYGEN__)
#define PORT_MPU_DRACR12_INIT           0U
#endif
#if !defined(PORT_MPU_DRBAR13_INIT) || defined(__DOXYGEN__)
#define PORT_MPU_DRBAR13_INIT           0U
#endif
#if !defined(PORT_MPU_DRSR13_INIT) || defined(__DOXYGEN__)
#define PORT_MPU_DRSR13_INIT            0U
#endif
#if !defined(PORT_MPU_DRACR13_INIT) || defined(__DOXYGEN__)
#define PORT_MPU_DRACR13_INIT           0U
#endif
#if !defined(PORT_MPU_DRBAR14_INIT) || defined(__DOXYGEN__)
#define PORT_MPU_DRBAR14_INIT           0U
#endif
#if !defined(PORT_MPU_DRSR14_INIT) || defined(__DOXYGEN__)
#define PORT_MPU_DRSR14_INIT            0U
#endif
#if !defined(PORT_MPU_DRACR14_INIT) || defined(__DOXYGEN__)
#define PORT_MPU_DRACR14_INIT           0U
#endif
#if !defined(PORT_MPU_DRBAR15_INIT) || defined(__DOXYGEN__)
#define PORT_MPU_DRBAR15_INIT           0U
#endif
#if !defined(PORT_MPU_DRSR15_INIT) || defined(__DOXYGEN__)
#define PORT_MPU_DRSR15_INIT            0U
#endif
#if !defined(PORT_MPU_DRACR15_INIT) || defined(__DOXYGEN__)
#define PORT_MPU_DRACR15_INIT           0U
#endif
#if !defined(PORT_MPU_DRBAR16_INIT) || defined(__DOXYGEN__)
#define PORT_MPU_DRBAR16_INIT           0U
#endif
#if !defined(PORT_MPU_DRSR16_INIT) || defined(__DOXYGEN__)
#define PORT_MPU_DRSR16_INIT            0U
#endif
#if !defined(PORT_MPU_DRACR16_INIT) || defined(__DOXYGEN__)
#define PORT_MPU_DRACR16_INIT           0U
#endif
#if !defined(PORT_MPU_DRBAR17_INIT) || defined(__DOXYGEN__)
#define PORT_MPU_DRBAR17_INIT           0U
#endif
#if !defined(PORT_MPU_DRSR17_INIT) || defined(__DOXYGEN__)
#define PORT_MPU_DRSR17_INIT            0U
#endif
#if !defined(PORT_MPU_DRACR17_INIT) || defined(__DOXYGEN__)
#define PORT_MPU_DRACR17_INIT           0U
#endif
#if !defined(PORT_MPU_DRBAR18_INIT) || defined(__DOXYGEN__)
#define PORT_MPU_DRBAR18_INIT           0U
#endif
#if !defined(PORT_MPU_DRSR18_INIT) || defined(__DOXYGEN__)
#define PORT_MPU_DRSR18_INIT            0U
#endif
#if !defined(PORT_MPU_DRACR18_INIT) || defined(__DOXYGEN__)
#define PORT_MPU_DRACR18_INIT           0U
#endif
#if !defined(PORT_MPU_DRBAR19_INIT) || defined(__DOXYGEN__)
#define PORT_MPU_DRBAR19_INIT           0U
#endif
#if !defined(PORT_MPU_DRSR19_INIT) || defined(__DOXYGEN__)
#define PORT_MPU_DRSR19_INIT            0U
#endif
#if !defined(PORT_MPU_DRACR19_INIT) || defined(__DOXYGEN__)
#define PORT_MPU_DRACR19_INIT           0U
#endif
#if !defined(PORT_MPU_DRBAR20_INIT) || defined(__DOXYGEN__)
#define PORT_MPU_DRBAR20_INIT           0U
#endif
#if !defined(PORT_MPU_DRSR20_INIT) || defined(__DOXYGEN__)
#define PORT_MPU_DRSR20_INIT            0U
#endif
#if !defined(PORT_MPU_DRACR20_INIT) || defined(__DOXYGEN__)
#define PORT_MPU_DRACR20_INIT           0U
#endif
#if !defined(PORT_MPU_DRBAR21_INIT) || defined(__DOXYGEN__)
#define PORT_MPU_DRBAR21_INIT           0U
#endif
#if !defined(PORT_MPU_DRSR21_INIT) || defined(__DOXYGEN__)
#define PORT_MPU_DRSR21_INIT            0U
#endif
#if !defined(PORT_MPU_DRACR21_INIT) || defined(__DOXYGEN__)
#define PORT_MPU_DRACR21_INIT           0U
#endif
#if !defined(PORT_MPU_DRBAR22_INIT) || defined(__DOXYGEN__)
#define PORT_MPU_DRBAR22_INIT           0U
#endif
#if !defined(PORT_MPU_DRSR22_INIT) || defined(__DOXYGEN__)
#define PORT_MPU_DRSR22_INIT            0U
#endif
#if !defined(PORT_MPU_DRACR22_INIT) || defined(__DOXYGEN__)
#define PORT_MPU_DRACR22_INIT           0U
#endif
#if !defined(PORT_MPU_DRBAR23_INIT) || defined(__DOXYGEN__)
#define PORT_MPU_DRBAR23_INIT           0U
#endif
#if !defined(PORT_MPU_DRSR23_INIT) || defined(__DOXYGEN__)
#define PORT_MPU_DRSR23_INIT            0U
#endif
#if !defined(PORT_MPU_DRACR23_INIT) || defined(__DOXYGEN__)
#define PORT_MPU_DRACR23_INIT           0U
#endif

/*===========================================================================*/
/* Derived constants and error checks.                                       */
/*===========================================================================*/

#if (PORT_MPU_INITIALIZE == TRUE) &&                                    \
    ((PORT_MPU_REGIONS < 1U) || (PORT_MPU_REGIONS > 24U))
#error "invalid PORT_MPU_REGIONS value"
#endif

/* Inclusion of SMP support, if enabled.*/
#if (CH_CFG_SMP_MODE == TRUE) || defined(__DOXYGEN__)
#if !defined(_FROM_ASM_)
#if !defined(__CHIBIOS_RT__)
#error "SMP is supported in RT only"
#endif

#include "chcoresmp.h"

#if !defined(PORT_CORES_NUMBER)
#error "PORT_CORES_NUMBER not defined in chcoresmp.h"
#endif

#endif
#else /* CH_CFG_SMP_MODE != TRUE */
#endif /* CH_CFG_SMP_MODE != TRUE */

/*===========================================================================*/
/* Module data structures and types.                                         */
/*===========================================================================*/

/* The following code is not processed when the file is included from an
   asm module.*/
#if !defined(_FROM_ASM_)

/**
 * @brief   Interrupt saved context.
 * @details This structure represents the stack frame saved during an
 *          interrupt handler when preemption is required.
 */
struct port_extctx {
  uint32_t              spsr_irq;
  uint32_t              lr_irq;
  uint32_t              r0;
  uint32_t              r1;
  uint32_t              r2;
  uint32_t              r3;
  uint32_t              r12;
  uint32_t              lr_usr;
};

/**
 * @brief   System saved context.
 * @details This structure represents the inner stack frame during a context
 *          switch.
 */
struct port_intctx {
#if (CORTEX_USE_FPU == TRUE) || defined(__DOXYGEN__)
  uint64_t              d[16];
  uint32_t              fpscr;
#endif
  uint32_t              r4;
  uint32_t              r5;
  uint32_t              r6;
  uint32_t              r7;
  uint32_t              r8;
  uint32_t              r9;
  uint32_t              r10;
  uint32_t              r11;
  uint32_t              lr;
};

/**
 * @brief   Platform dependent part of the @p thread_t structure.
 * @details In this port the structure just holds a pointer to the
 *          @p port_intctx structure representing the stack pointer
 *          at context switch time.
 */
struct port_context {
  struct port_intctx    *sp;
};

/*===========================================================================*/
/* Module macros.                                                            */
/*===========================================================================*/

/**
 * @brief   Priority level verification macro.
 * @note    IRQ priorities are interrupt-controller specific.
 */
#define PORT_IRQ_IS_VALID_PRIORITY(n) false

/**
 * @brief   Priority level verification macro.
 * @note    IRQ priorities are interrupt-controller specific.
 */
#define PORT_IRQ_IS_VALID_KERNEL_PRIORITY(n) false

/**
 * @brief   Optimized thread function declaration macro.
 */
#define PORT_THD_FUNCTION(tname, arg) void tname(void *arg)

/**
 * @brief   Initialization of FPU part of thread context.
 */
#if (CORTEX_USE_FPU == TRUE) || defined(__DOXYGEN__)
#define __PORT_SETUP_CONTEXT_FPU(tp)                                        \
  (tp)->ctx.sp->fpscr = 0U
#else
#define __PORT_SETUP_CONTEXT_FPU(tp)
#endif

/**
 * @brief   Platform dependent part of the @p chThdCreateI() API.
 * @details This code usually setup the context switching frame represented
 *          by an @p port_intctx structure.
 */
#define PORT_SETUP_CONTEXT(tp, wbase, wtop, pf, arg) {                      \
  (tp)->ctx.sp = (struct port_intctx *)((uint8_t *)(wtop) -                 \
                                        sizeof (struct port_intctx));       \
  __PORT_SETUP_CONTEXT_FPU(tp);                                             \
  (tp)->ctx.sp->r4 = (uint32_t)(pf);                                        \
  (tp)->ctx.sp->r5 = (uint32_t)(arg);                                       \
  (tp)->ctx.sp->lr = (uint32_t)__port_thread_start;                         \
}

/**
 * @brief   Computes the thread working area global size.
 * @note    There is no need to perform alignments in this macro.
 */
#define PORT_WA_SIZE(n) (sizeof(struct port_intctx) +                       \
                         sizeof(struct port_extctx) +                       \
                         ((size_t)(n)) + ((size_t)(PORT_INT_REQUIRED_STACK)))

/**
 * @brief   IRQ prologue code.
 * @details IRQ entry is centralized in the port IRQ handler.
 */
#define PORT_IRQ_PROLOGUE()

/**
 * @brief   IRQ epilogue code.
 * @details IRQ exit and preemption are centralized in the port IRQ handler.
 */
#define PORT_IRQ_EPILOGUE()

/**
 * @brief   IRQ handler function declaration.
 * @note    Regular IRQ handlers are plain functions dispatched by the
 *          interrupt-controller abstraction.
 */
#ifdef __cplusplus
#define PORT_IRQ_HANDLER(id) extern "C" void id(void)
#else
#define PORT_IRQ_HANDLER(id) void id(void)
#endif

/**
 * @brief   Fast IRQ handler function declaration.
 * @note    FIQ handlers must not use normal RTOS APIs.
 */
#ifdef __cplusplus
#define PORT_FAST_IRQ_HANDLER(id) extern "C" void id(void)
#else
#define PORT_FAST_IRQ_HANDLER(id) void id(void)
#endif

/**
 * @brief   Performs a context switch between two threads.
 * @details This is the most critical code in any port, this function
 *          is responsible for the context switch between 2 threads.
 *
 * @param[in] ntp       the thread to be switched in
 * @param[in] otp       the thread to be switched out
 */
#if CH_DBG_ENABLE_STACK_CHECK == TRUE
#define port_switch(ntp, otp) {                                             \
  register struct port_intctx *r13 asm ("r13");                             \
  if ((stkline_t *)(r13 - 1) < (otp)->wabase) {                             \
    chSysHalt("stack overflow");                                            \
  }                                                                         \
  __port_switch_arm(ntp, otp);                                              \
}
#else
#define port_switch(ntp, otp) __port_switch_arm(ntp, otp)
#endif

/*===========================================================================*/
/* External declarations.                                                    */
/*===========================================================================*/

#ifdef __cplusplus
extern "C" {
#endif
  void __port_switch_arm(thread_t *ntp, thread_t *otp);
  void __port_thread_start(void);
  bool __port_irq_dispatch(void);
#if PORT_MPU_INITIALIZE == TRUE
  void __port_mpu_init(void);
#endif
#ifdef __cplusplus
}
#endif

/*===========================================================================*/
/* Module inline functions.                                                  */
/*===========================================================================*/

/**
 * @brief   Port-related initialization code.
 */
static inline void port_init(os_instance_t *oip) {

  (void)oip;

  /* Starting in a known IRQ configuration.*/
  __asm volatile ("cpsid   i" : : : "memory");
  __asm volatile ("cpsie   f" : : : "memory");

#if PORT_MPU_INITIALIZE == TRUE
  __port_mpu_init();
#endif

#if defined(port_smp_init)
  port_smp_init(oip);
#endif
}

/**
 * @brief   Returns a word encoding the current interrupts status.
 *
 * @return              The interrupts status.
 */
static inline syssts_t port_get_irq_status(void) {
  syssts_t sts;

  __asm volatile ("mrs     %[p0], CPSR" : [p0] "=r" (sts) :);

  /*lint -save -e530 [9.1] Asm instruction not seen by lint.*/
  return sts;
  /*lint -restore*/
}

/**
 * @brief   Checks the interrupt status.
 *
 * @param[in] sts       the interrupt status word
 *
 * @return              The interrupt status.
 * @retval false        the word specified a disabled interrupts status.
 * @retval true         the word specified an enabled interrupts status.
 */
static inline bool port_irq_enabled(syssts_t sts) {

  return (sts & (syssts_t)0x80) == (syssts_t)0;
}

/**
 * @brief   Determines the current execution context.
 *
 * @return              The execution context.
 * @retval false        not running in ISR mode.
 * @retval true         running in ISR mode.
 */
static inline bool port_is_isr_context(void) {
  syssts_t sts;
  syssts_t mode;

  __asm volatile ("mrs     %[p0], CPSR" : [p0] "=r" (sts) :);
  mode = sts & (syssts_t)0x1F;

  /*lint -save -e530 -e438 [9.1, 9.7] Asm instruction not seen by lint.*/
  return (mode == (syssts_t)0x12) || (mode == (syssts_t)0x11);
  /*lint -restore*/
}

/**
 * @brief   Kernel-lock action.
 * @details In this port it disables IRQ sources and keeps FIQ sources
 *          unchanged.
 */
static inline void port_lock(void) {

  __asm volatile ("cpsid   i" : : : "memory");
#if CH_CFG_SMP_MODE == TRUE
  port_spinlock_take();
#endif
}

/**
 * @brief   Kernel-unlock action.
 * @details In this port it enables both IRQ and FIQ sources.
 */
static inline void port_unlock(void) {

#if CH_CFG_SMP_MODE == TRUE
  port_spinlock_release();
#endif
  __asm volatile ("cpsie   if" : : : "memory");
}

/**
 * @brief   Kernel-lock action from an interrupt handler.
 * @note    Empty in single-core configurations.
 */
static inline void port_lock_from_isr(void) {

#if CH_CFG_SMP_MODE == TRUE
  port_spinlock_take();
#endif
}

/**
 * @brief   Kernel-unlock action from an interrupt handler.
 * @note    Empty in single-core configurations.
 */
static inline void port_unlock_from_isr(void) {

#if CH_CFG_SMP_MODE == TRUE
  port_spinlock_release();
#endif
}

/**
 * @brief   Disables all the interrupt sources.
 * @details In this port it disables both IRQ and FIQ sources.
 */
static inline void port_disable(void) {

  __asm volatile ("cpsid   if" : : : "memory");
}

/**
 * @brief   Disables the interrupt sources below kernel-level priority.
 * @note    In this port it disables IRQ sources and enables FIQ sources.
 */
static inline void port_suspend(void) {

  __asm volatile ("cpsid   i" : : : "memory");
  __asm volatile ("cpsie   f" : : : "memory");
}

/**
 * @brief   Enables all the interrupt sources.
 * @note    In this port it enables both IRQ and FIQ sources.
 */
static inline void port_enable(void) {

  __asm volatile ("cpsie   if" : : : "memory");
}

/**
 * @brief   Returns the current value of the realtime counter.
 *
 * @return              The realtime counter value.
 */
static inline rtcnt_t port_rt_get_counter_value(void) {

  return 0;
}

/**
 * @brief   Enters an architecture-dependent IRQ-waiting mode.
 * @details The function is meant to return when an interrupt becomes pending.
 */
static inline void port_wait_for_interrupt(void) {

#if PORT_ENABLE_WFI_IDLE == TRUE
  __asm volatile ("wfi");
#endif
}

#endif /* !defined(_FROM_ASM_) */

/*===========================================================================*/
/* Module late inclusions.                                                   */
/*===========================================================================*/

#if !defined(_FROM_ASM_)

#if CH_CFG_ST_TIMEDELTA > 0
#include "chcore_timer.h"
#endif /* CH_CFG_ST_TIMEDELTA > 0 */

#endif /* !defined(_FROM_ASM_) */

#endif /* CHCORE_H */

/** @} */
