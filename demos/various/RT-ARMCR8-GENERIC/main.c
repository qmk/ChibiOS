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

#include "ch.h"

static volatile uint32_t thread_counter;
static volatile uint32_t main_counter;
#if CORTEX_USE_FPU == TRUE
static volatile uint32_t fpu_thread_counter;
static volatile uint32_t fpu_main_counter;
static volatile uint32_t fpu_error_counter;
#endif

/*
 * RTOS example thread.
 */
static THD_WORKING_AREA(waThread1, 128);
static THD_FUNCTION(Thread1, arg) {

  (void)arg;

  chRegSetThreadName("counter");

  while (true) {
    thread_counter++;
    chThdYield();
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
    chThdYield();
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
    chThdYield();
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
