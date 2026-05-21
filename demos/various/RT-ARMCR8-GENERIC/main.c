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

#include "armcr8.h"
#include "ch.h"

#define R8_RENODE_PRIVATE_TIMER_BASE 0xAE000600U
#define R8_RENODE_PRIVATE_TIMER_IRQ  29U
#define R8_RENODE_PRIVATE_TIMER_FREQ 667000000U

#define PTIMER_CONTROL_ENABLE        (1U << 0)
#define PTIMER_CONTROL_AUTO_RELOAD   (1U << 1)
#define PTIMER_CONTROL_IRQ_ENABLE    (1U << 2)
#define PTIMER_ISR_EVENT             (1U << 0)

typedef struct {
  volatile uint32_t LOAD;
  volatile uint32_t COUNTER;
  volatile uint32_t CONTROL;
  volatile uint32_t ISR;
} r8_private_timer_t;

#define R8_PRIVATE_TIMER ((r8_private_timer_t *)R8_RENODE_PRIVATE_TIMER_BASE)

static volatile uint32_t thread_counter;
static volatile uint32_t main_counter;
#if CORTEX_USE_FPU == TRUE
static volatile uint32_t fpu_thread_counter;
static volatile uint32_t fpu_main_counter;
static volatile uint32_t fpu_error_counter;
#endif

/*
 * Demo-private IRQ dispatcher.
 */
bool __port_irq_dispatch(void) {
  IRQn_Type irqn;
  bool preemption_required;

  preemption_required = false;
  irqn = GIC_AcknowledgePending();

  if (irqn == (IRQn_Type)R8_RENODE_PRIVATE_TIMER_IRQ) {
    R8_PRIVATE_TIMER->ISR = PTIMER_ISR_EVENT;

    chSysLockFromISR();
    chSysTimerHandlerI();
    preemption_required = chSchIsPreemptionRequired();
    chSysUnlockFromISR();
  }

  GIC_EndInterrupt(irqn);

  return preemption_required;
}

static void gic_init(void) {

  GIC_Enable();
  GIC_SetPriority((IRQn_Type)R8_RENODE_PRIVATE_TIMER_IRQ, 0x80U);
  GIC_SetTarget((IRQn_Type)R8_RENODE_PRIVATE_TIMER_IRQ, 1U);
  GIC_EnableIRQ((IRQn_Type)R8_RENODE_PRIVATE_TIMER_IRQ);
}

static void timer_init(void) {
  uint32_t interval;

  interval = (R8_RENODE_PRIVATE_TIMER_FREQ / CH_CFG_ST_FREQUENCY) - 1U;

  R8_PRIVATE_TIMER->CONTROL = 0U;
  R8_PRIVATE_TIMER->ISR     = PTIMER_ISR_EVENT;
  R8_PRIVATE_TIMER->LOAD    = interval;
  R8_PRIVATE_TIMER->CONTROL = PTIMER_CONTROL_ENABLE |
                              PTIMER_CONTROL_AUTO_RELOAD |
                              PTIMER_CONTROL_IRQ_ENABLE;
}

/*
 * RTOS example thread.
 */
static THD_WORKING_AREA(waThread1, 128);
static THD_FUNCTION(Thread1, arg) {

  (void)arg;

  chRegSetThreadName("counter");

  while (true) {
    chThdSleepMilliseconds(100);
    thread_counter++;
  }
}

#if CORTEX_USE_FPU == TRUE
/*
 * FPU context test thread.
 */
static THD_WORKING_AREA(waThread2, 256);
static THD_FUNCTION(Thread2, arg) {
  register double marker asm ("d8");
  double expected;

  (void)arg;

  chRegSetThreadName("fpu");

  marker = 1000.0;
  expected = 1000.0;

  while (true) {
    __asm volatile ("" : "+w" (marker));
    chThdSleepMilliseconds(10);
    __asm volatile ("" : "+w" (marker));

    if (marker != expected) {
      fpu_error_counter++;
      marker = expected;
    }

    marker += 1.0;
    expected += 1.0;
    fpu_thread_counter++;
  }
}
#endif

/*
 * Application entry point.
 */
int main(void) {
#if CORTEX_USE_FPU == TRUE
  register double marker asm ("d8");
  double expected;
#endif

  gic_init();
  timer_init();

  /*
   * System initialization, the main() function becomes a thread and the
   * RTOS is active.
   */
  chSysInit();

  (void) chThdCreateStatic(waThread1,
                           sizeof(waThread1),
                           NORMALPRIO,
                           Thread1,
                           NULL);

#if CORTEX_USE_FPU == TRUE
  (void) chThdCreateStatic(waThread2,
                           sizeof(waThread2),
                           NORMALPRIO,
                           Thread2,
                           NULL);

  marker = 2000.0;
  expected = 2000.0;
#endif

  while (true) {
#if CORTEX_USE_FPU == TRUE
    __asm volatile ("" : "+w" (marker));
#endif
    main_counter++;
    chThdSleepMilliseconds(200);
#if CORTEX_USE_FPU == TRUE
    __asm volatile ("" : "+w" (marker));

    if (marker != expected) {
      fpu_error_counter++;
      marker = expected;
    }

    marker += 1.0;
    expected += 1.0;
    fpu_main_counter++;
#endif
  }
}
