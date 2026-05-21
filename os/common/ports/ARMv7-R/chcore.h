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

#if CORTEX_USE_FPU == TRUE
#error "ARMv7-R FPU context switching is not implemented yet"
#endif

/*===========================================================================*/
/* Derived constants and error checks.                                       */
/*===========================================================================*/

/*===========================================================================*/
/* Module data structures and types.                                         */
/*===========================================================================*/

/* The following code is not processed when the file is included from an
   asm module.*/
#if !defined(_FROM_ASM_)

/**
 * @brief   Generic ARM register.
 */
typedef void *regarm_t;

/**
 * @brief   Interrupt saved context.
 * @details This structure represents the stack frame saved during an
 *          interrupt handler when preemption is required.
 */
struct port_extctx {
  regarm_t              spsr_irq;
  regarm_t              lr_irq;
  regarm_t              r0;
  regarm_t              r1;
  regarm_t              r2;
  regarm_t              r3;
  regarm_t              r12;
  regarm_t              lr_usr;
};

/**
 * @brief   System saved context.
 * @details This structure represents the inner stack frame during a context
 *          switch.
 */
struct port_intctx {
  regarm_t              r4;
  regarm_t              r5;
  regarm_t              r6;
  regarm_t              r7;
  regarm_t              r8;
  regarm_t              r9;
  regarm_t              r10;
  regarm_t              r11;
  regarm_t              lr;
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
 * @brief   Platform dependent part of the @p chThdCreateI() API.
 * @details This code usually setup the context switching frame represented
 *          by an @p port_intctx structure.
 */
#define PORT_SETUP_CONTEXT(tp, wbase, wtop, pf, arg) {                      \
  (tp)->ctx.sp = (struct port_intctx *)((uint8_t *)(wtop) -                 \
                                        sizeof (struct port_intctx));       \
  (tp)->ctx.sp->r4 = (regarm_t)(pf);                                        \
  (tp)->ctx.sp->r5 = (regarm_t)(arg);                                       \
  (tp)->ctx.sp->lr = (regarm_t)(__port_thread_start);                       \
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
}

/**
 * @brief   Kernel-unlock action.
 * @details In this port it enables both IRQ and FIQ sources.
 */
static inline void port_unlock(void) {

  __asm volatile ("cpsie   if" : : : "memory");
}

/**
 * @brief   Kernel-lock action from an interrupt handler.
 * @note    Empty in this port.
 */
static inline void port_lock_from_isr(void) {

}

/**
 * @brief   Kernel-unlock action from an interrupt handler.
 * @note    Empty in this port.
 */
static inline void port_unlock_from_isr(void) {

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
