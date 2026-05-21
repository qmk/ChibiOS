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
 * @file    ARMv7-R/chcore.c
 * @brief   ARMv7-R port code.
 *
 * @addtogroup ARMV7R_CORE
 * @{
 */

#include "ch.h"

/*===========================================================================*/
/* Module local definitions.                                                 */
/*===========================================================================*/

/*===========================================================================*/
/* Module exported variables.                                                */
/*===========================================================================*/

/*===========================================================================*/
/* Module local types.                                                       */
/*===========================================================================*/

/*===========================================================================*/
/* Module local variables.                                                   */
/*===========================================================================*/

#if PORT_MPU_INITIALIZE == TRUE
static const mpu_region_t port_mpu_regions[24] = {
  {PORT_MPU_DRBAR0_INIT,  PORT_MPU_DRSR0_INIT,  PORT_MPU_DRACR0_INIT},
  {PORT_MPU_DRBAR1_INIT,  PORT_MPU_DRSR1_INIT,  PORT_MPU_DRACR1_INIT},
  {PORT_MPU_DRBAR2_INIT,  PORT_MPU_DRSR2_INIT,  PORT_MPU_DRACR2_INIT},
  {PORT_MPU_DRBAR3_INIT,  PORT_MPU_DRSR3_INIT,  PORT_MPU_DRACR3_INIT},
  {PORT_MPU_DRBAR4_INIT,  PORT_MPU_DRSR4_INIT,  PORT_MPU_DRACR4_INIT},
  {PORT_MPU_DRBAR5_INIT,  PORT_MPU_DRSR5_INIT,  PORT_MPU_DRACR5_INIT},
  {PORT_MPU_DRBAR6_INIT,  PORT_MPU_DRSR6_INIT,  PORT_MPU_DRACR6_INIT},
  {PORT_MPU_DRBAR7_INIT,  PORT_MPU_DRSR7_INIT,  PORT_MPU_DRACR7_INIT},
  {PORT_MPU_DRBAR8_INIT,  PORT_MPU_DRSR8_INIT,  PORT_MPU_DRACR8_INIT},
  {PORT_MPU_DRBAR9_INIT,  PORT_MPU_DRSR9_INIT,  PORT_MPU_DRACR9_INIT},
  {PORT_MPU_DRBAR10_INIT, PORT_MPU_DRSR10_INIT, PORT_MPU_DRACR10_INIT},
  {PORT_MPU_DRBAR11_INIT, PORT_MPU_DRSR11_INIT, PORT_MPU_DRACR11_INIT},
  {PORT_MPU_DRBAR12_INIT, PORT_MPU_DRSR12_INIT, PORT_MPU_DRACR12_INIT},
  {PORT_MPU_DRBAR13_INIT, PORT_MPU_DRSR13_INIT, PORT_MPU_DRACR13_INIT},
  {PORT_MPU_DRBAR14_INIT, PORT_MPU_DRSR14_INIT, PORT_MPU_DRACR14_INIT},
  {PORT_MPU_DRBAR15_INIT, PORT_MPU_DRSR15_INIT, PORT_MPU_DRACR15_INIT},
  {PORT_MPU_DRBAR16_INIT, PORT_MPU_DRSR16_INIT, PORT_MPU_DRACR16_INIT},
  {PORT_MPU_DRBAR17_INIT, PORT_MPU_DRSR17_INIT, PORT_MPU_DRACR17_INIT},
  {PORT_MPU_DRBAR18_INIT, PORT_MPU_DRSR18_INIT, PORT_MPU_DRACR18_INIT},
  {PORT_MPU_DRBAR19_INIT, PORT_MPU_DRSR19_INIT, PORT_MPU_DRACR19_INIT},
  {PORT_MPU_DRBAR20_INIT, PORT_MPU_DRSR20_INIT, PORT_MPU_DRACR20_INIT},
  {PORT_MPU_DRBAR21_INIT, PORT_MPU_DRSR21_INIT, PORT_MPU_DRACR21_INIT},
  {PORT_MPU_DRBAR22_INIT, PORT_MPU_DRSR22_INIT, PORT_MPU_DRACR22_INIT},
  {PORT_MPU_DRBAR23_INIT, PORT_MPU_DRSR23_INIT, PORT_MPU_DRACR23_INIT}
};
#endif

/*===========================================================================*/
/* Module local functions.                                                   */
/*===========================================================================*/

/*===========================================================================*/
/* Module exported functions.                                                */
/*===========================================================================*/

#if PORT_MPU_INITIALIZE == TRUE
/**
 * @brief   Statically programs the ARMv7-R MPU.
 *
 * @note    The MPU is temporarily disabled while programming all configured
 *          regions then enabled again.
 */
void __port_mpu_init(void) {
  uint32_t i;

  mpuDisable();

  for (i = 0U; i < PORT_MPU_REGIONS; i++) {
    mpuConfigureRegionFromTable(i, &port_mpu_regions[i]);
  }

  __asm volatile ("dsb" : : : "memory");
  __asm volatile ("isb" : : : "memory");

  mpuEnable();
}
#endif

/**
 * @brief   IRQ dispatch hook.
 * @details Platforms are expected to override this function with an
 *          interrupt-controller specific dispatcher. It must return
 *          @p true if the common IRQ epilogue has to perform preemption.
 *
 * @return              The preemption request state.
 */
CC_WEAK bool __port_irq_dispatch(void) {

  return false;
}

/** @} */
