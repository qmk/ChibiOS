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
#include "hal_buffered_sio.h"

#include "portab.h"

#include "chprintf.h"
#include "shell.h"

static BufferedSIODriver bsio1;
static uint8_t rxbuf[32];
static uint8_t txbuf[32];

/*===========================================================================*/
/* Command line related.                                                     */
/*===========================================================================*/

#define SHELL_WA_SIZE   THD_WORKING_AREA_SIZE(2048)

/* Can be measured using dd if=/dev/xxxx of=/dev/null bs=512 count=10000.*/
static void cmd_write(BaseSequentialStream *chp, int argc, char *argv[]) {
  static uint8_t buf[] =
      "0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef"
      "0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef"
      "0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef"
      "0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef"
      "0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef"
      "0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef"
      "0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef"
      "0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef"
      "0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef"
      "0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef"
      "0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef"
      "0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef"
      "0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef"
      "0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef"
      "0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef"
      "0123456789abcdef0123456789abcdef0123456789abcdef0123456789abcdef";

  (void)argv;
  if (argc > 0) {
    chprintf(chp, "Usage: write\r\n");
    return;
  }

  while (chnGetTimeout((BaseChannel *)chp, TIME_IMMEDIATE) == Q_TIMEOUT) {
#if 1
    /* Writing in channel mode.*/
    chnWrite(&bsio1, buf, sizeof buf - 1);
#else
    /* Writing in buffer mode.*/
    (void) obqGetEmptyBufferTimeout(&PORTAB_SDU1.obqueue, TIME_INFINITE);
    memcpy(PORTAB_SDU1.obqueue.ptr, buf, SERIAL_USB_BUFFERS_SIZE);
    obqPostFullBuffer(&PORTAB_SDU1.obqueue, SERIAL_USB_BUFFERS_SIZE);
#endif
  }
  chprintf(chp, "\r\n\nstopped\r\n");
}

static const ShellCommand commands[] = {
  {"write", cmd_write},
  {NULL, NULL}
};

static const ShellConfig shell_cfg1 = {
  (BaseSequentialStream *)&bsio1,
  commands
};

/*===========================================================================*/
/* Generic code.                                                             */
/*===========================================================================*/

/*
 * RX consumer thread, times are in milliseconds.
 */
static THD_WORKING_AREA(waThread1, 256);
static THD_FUNCTION(Thread1, arg) {
  size_t n;

  (void)arg;

  chRegSetThreadName("consumer");

  while (true) {
    sioevents_t errors;
    uint8_t buf[16];

    n = chnRead(&PORTAB_SIO2, buf, 16);
    if (n == 0U) {
      break;
    }
    n = chnWrite(&PORTAB_SIO1, buf, n);
    if (n == 0) {
      break;
    }
    errors = sioGetAndClearErrors(&PORTAB_SIO2);
    (void) errors;

    if (sioSynchronizeRXIdle(&PORTAB_SIO2, TIME_INFINITE) < MSG_OK) {
      break;
    }
  }
}

/*
 * Application entry point.
 */
int main(void) {
  thread_t *tp;

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
   * Board-dependent setup code.
   */
  portab_setup();

  /*
   * Activates the SIO drivers using the default configuration.
   */
  sioStart(&PORTAB_SIO1, NULL);
  sioStart(&PORTAB_SIO2, NULL);

  /*
   * Creates the RX consumer thread.
   */
  tp = chThdCreateStatic(waThread1, sizeof(waThread1),
                         NORMALPRIO + 1, Thread1, NULL);

  /*
   * Short TX writes.
   */
  do {
    char c;

    for (c = 'A'; c <= 'Z'; c++) {
      chnWrite(&PORTAB_SIO2, (const uint8_t *)&c, 1);
      sioSynchronizeTXEnd(&PORTAB_SIO2, TIME_INFINITE);
      chThdSleepMilliseconds(10);
    }
  } while (palReadLine(PORTAB_LINE_BUTTON) != PORTAB_BUTTON_PRESSED);

  /* Waiting button release.*/
  while (palReadLine(PORTAB_LINE_BUTTON) == PORTAB_BUTTON_PRESSED) {
    chThdSleepMilliseconds(100);
  }

  /*
   * Long TX writes.
   */
  do {
    chnWrite(&PORTAB_SIO2, (const uint8_t *)"Hello World!!!\r\n", 16);
    sioSynchronizeTXEnd(&PORTAB_SIO2, TIME_INFINITE);
    chThdSleepMilliseconds(100);
  } while (palReadLine(PORTAB_LINE_BUTTON) != PORTAB_BUTTON_PRESSED);

  /* Waiting button release.*/
  while (palReadLine(PORTAB_LINE_BUTTON) == PORTAB_BUTTON_PRESSED) {
    chThdSleepMilliseconds(100);
  }

  /*
   * Stopping SIOs.
   */
  sioStop(&PORTAB_SIO1);
  sioStop(&PORTAB_SIO2);
  chThdWait(tp);

  /*
   * Starting a buffered SIO, it must behave exactly as a serial driver.
   */
  bsioObjectInit(&bsio1, &PORTAB_SIO1,
                 rxbuf, sizeof rxbuf,
                 txbuf, sizeof txbuf);
  bsioStart(&bsio1, NULL);

  /*
   * Normal main() thread activity, spawning shells.
   */
  while (true) {
    tp = chThdCreateFromHeap(NULL, SHELL_WA_SIZE,
                             "shell", NORMALPRIO + 1,
                             shellThread, (void *)&shell_cfg1);
    chThdWait(tp);               /* Waiting termination.             */
    chThdSleepMilliseconds(1000);
  }
  return 0;
}
