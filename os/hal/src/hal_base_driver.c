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

/**
 * @file    hal_base_driver.h
 * @brief   Ancestor class for all stateful HAL drivers.
 *
 * @addtogroup HAL_BASE_DRIVER
 * @{
 */

#include "hal.h"

/*===========================================================================*/
/* Driver local definitions.                                                 */
/*===========================================================================*/

/*===========================================================================*/
/* Driver exported variables.                                                */
/*===========================================================================*/

/*===========================================================================*/
/* Driver local variables and types.                                         */
/*===========================================================================*/

/*===========================================================================*/
/* Driver local functions.                                                   */
/*===========================================================================*/

/*===========================================================================*/
/* Driver exported functions.                                                */
/*===========================================================================*/

/**
 * @brief   Driver open.
 * @details Returns a reference to the driver, on the 1st open the peripheral
 *          is physically initialized. An implementation-dependent default
 *          configuration is used for initialization.
 *
 * @param[in] ip        Pointer to a @p base_driver_c structure.
 * @return              The operation status.
 */
msg_t drvOpen(void *ip) {
  base_driver_c *objp = (base_driver_c *)ip;
  msg_t msg;

  if (objp->opencnt == 0U) {
    /* Physically starting the peripheral.*/
    msg = objp->vmt->start(objp);
    if (msg == HAL_RET_SUCCESS) {
      objp->opencnt++;
      objp->state = HAL_DRV_STATE_READY;
    }
    else {
      objp->state = HAL_DRV_STATE_STOP;
    }
  }
  else {
    msg = HAL_RET_SUCCESS;
  }

  return msg;
}

/**
 * @brief   Driver close.
 * @details Releases a reference to the driver, when the count reaches zero
 *          then the peripheral is physically uninitialized.
 *
 * @param[in] ip        Pointer to a @p base_driver_c structure.
 *
 * @api
 */
void drvClose(void *ip) {
  base_driver_c *objp = (base_driver_c *)ip;

  osalDbgAssert(objp->opencnt > 0U, "not opened");

  if (--objp->opencnt == 0U) {
    objp->state = HAL_DRV_STATE_STOP;
    objp->vmt->stop(ip);
  }
}

/** @} */
