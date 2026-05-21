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
 * @file    ARMCR8/armcr8.h
 * @brief   Generic ARM Cortex-R8 CMSIS device header.
 *
 * @addtogroup ARMCRx_ARMCR8
 * @{
 */

#ifndef ARMCR8_H
#define ARMCR8_H

#include "crparams.h"

#define __CR8_REV              0x0000U
#define __FPU_PRESENT          ARMCR8_HAS_FPU
#define __VIC_PRESENT          ARMCR8_HAS_VIC
#define __GIC_PRESENT          ARMCR8_HAS_GIC
#define __MPU_PRESENT          ARMCR8_HAS_MPU
#define __ICACHE_PRESENT       ARMCR8_HAS_ICACHE
#define __DCACHE_PRESENT       ARMCR8_HAS_DCACHE
#define __DTCM_PRESENT         ARMCR8_HAS_DTCM
#define __ECC_PRESENT          ARMCR8_HAS_ECC

/**
 * @brief   Placeholder interrupt number type.
 * @details This is intentionally minimal. Real platforms are expected to
 *          replace this header with the vendor device header, or to extend
 *          it with the platform interrupt map.
 */
typedef enum {
  ARMCR8_GenericIRQ0_IRQn = 0
} IRQn_Type;

#include "core_cr8.h"

#endif /* ARMCR8_H */

/** @} */
