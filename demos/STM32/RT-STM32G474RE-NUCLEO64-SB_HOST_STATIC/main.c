/*
    ChibiOS - Copyright (C) 2006..2018 Giovanni Di Sirio

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
#include "hal.h"
#include "rt_test_root.h"
#include "oslib_test_root.h"

static THD_WORKING_AREA(waUnprivileged1, 256);

/*
 * Green LED blinker thread, times are in milliseconds.
 */
static THD_WORKING_AREA(waThread1, 256);
static THD_FUNCTION(Thread1, arg) {

  (void)arg;
  chRegSetThreadName("blinker");
  while (true) {
    palClearLine(LINE_LED_GREEN);
    chThdSleepMilliseconds(500);
    palSetLine(LINE_LED_GREEN);
    chThdSleepMilliseconds(500);
  }
}

/*
 * Application entry point.
 */
int main(void) {

  /*
   * System initializations.
   * - HAL initialization, this also initializes the configured device drivers
   *   and performs the board-specific initializations.
   * - Kernel initialization, the main() function becomes a thread and the
   *   RTOS is active.
   */
  halInit();
  chSysInit();

  /*
   * Activates the Serial or SIO driver using the default configuration.
   */
  sioStart(&LPSIOD1, NULL);
  sioStartOperation(&LPSIOD1, NULL);

  /*
   * Creates the blinker thread.
   */
  chThdCreateStatic(waThread1, sizeof(waThread1), NORMALPRIO, Thread1, NULL);

  /*
   * Creates an unprivileged thread.
   */
  mpuConfigureRegion(MPU_REGION_0,
                     0x08070000U,
                     MPU_RASR_ATTR_AP_RO_RO |
                     MPU_RASR_ATTR_CACHEABLE_WT_NWA |
                     MPU_RASR_SIZE_64K |
                     MPU_RASR_ENABLE);
  mpuConfigureRegion(MPU_REGION_1,
                     0x20020000U,
                     MPU_RASR_ATTR_AP_RW_RW |
                     MPU_RASR_ATTR_CACHEABLE_WB_WA |
                     MPU_RASR_SIZE_4K |
                     MPU_RASR_ENABLE);
  unprivileged_thread_descriptor_t utd = {
    .name       = "unprivileged",
    .wbase      = waUnprivileged1,
    .wend       = THD_WORKING_AREA_END(waUnprivileged1),
    .prio       = NORMALPRIO + 1,
    .u_pc       = 0x08070001U,
    .u_psp      = 0x20020000U,
    .arg        = NULL
  };
  chThdCreateUnprivileged(&utd);

  /*
   * Normal main() thread activity, in this demo it does nothing except
   * sleeping in a loop and check the button state.
   */
  while (true) {
   if (palReadLine(LINE_BUTTON)) {
      test_execute((BaseSequentialStream *)&LPSIOD1, &rt_test_suite);
      test_execute((BaseSequentialStream *)&LPSIOD1, &oslib_test_suite);
    }
    chThdSleepMilliseconds(500);
  }
}

