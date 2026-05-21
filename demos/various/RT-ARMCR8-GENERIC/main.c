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

#include <stdint.h>

#include "armcr8.h"

/*
 * RTOS include, disabled until the ARMv7-R port is available.
 */
/* #include "ch.h" */

static volatile uint32_t seconds_counter;

/*
 * RTOS example thread, disabled until the ARMv7-R port is available.
 */
/*
static THD_WORKING_AREA(waThread1, 128);
static THD_FUNCTION(Thread1, arg) {

  (void)arg;

  chRegSetThreadName("counter");

  while (true) {
    chThdSleepMilliseconds(1000);
    seconds_counter++;
  }
}
*/

/*
 * Application entry point.
 */
int main(void) {

  /*
   * System initializations, disabled until the ARMv7-R port is available.
   */
  /*
  chSysInit();

  (void) chThdCreateStatic(waThread1,
                           sizeof(waThread1),
                           NORMALPRIO,
                           Thread1,
                           NULL);
  */

  while (1) {
    seconds_counter++;
  }
}
