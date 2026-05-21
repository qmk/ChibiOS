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
 * @file    ARMCR8/crparams.h
 * @brief   Generic ARM Cortex-R8 parameters.
 *
 * @defgroup ARMCRx_ARMCR8 ARMCR8 Generic Parameters
 * @ingroup ARMCRx_SPECIFIC
 * @{
 */

#ifndef CRPARAMS_H
#define CRPARAMS_H

/**
 * @brief   Cortex core model.
 */
#define CORTEX_MODEL            8

/**
 * @brief   Floating Point unit presence.
 */
#if !defined(ARMCR8_HAS_FPU) || defined(__DOXYGEN__)
#define ARMCR8_HAS_FPU          0
#endif

#define CORTEX_HAS_FPU          ARMCR8_HAS_FPU

/**
 * @brief   Generic Interrupt Controller presence.
 */
#if !defined(ARMCR8_HAS_GIC) || defined(__DOXYGEN__)
#define ARMCR8_HAS_GIC          0
#endif

/**
 * @brief   Vectored Interrupt Controller presence.
 */
#if !defined(ARMCR8_HAS_VIC) || defined(__DOXYGEN__)
#define ARMCR8_HAS_VIC          0
#endif

/**
 * @brief   MPU presence.
 */
#if !defined(ARMCR8_HAS_MPU) || defined(__DOXYGEN__)
#define ARMCR8_HAS_MPU          0
#endif

#define CORTEX_HAS_MPU          ARMCR8_HAS_MPU

/**
 * @brief   Number of MPU regions.
 */
#if !defined(ARMCR8_MPU_REGIONS) || defined(__DOXYGEN__)
#define ARMCR8_MPU_REGIONS      24
#endif

#define CORTEX_MPU_REGIONS      ARMCR8_MPU_REGIONS

/**
 * @brief   Instruction cache presence.
 */
#if !defined(ARMCR8_HAS_ICACHE) || defined(__DOXYGEN__)
#define ARMCR8_HAS_ICACHE       0
#endif

/**
 * @brief   Data cache presence.
 */
#if !defined(ARMCR8_HAS_DCACHE) || defined(__DOXYGEN__)
#define ARMCR8_HAS_DCACHE       0
#endif

/**
 * @brief   DTCM presence.
 */
#if !defined(ARMCR8_HAS_DTCM) || defined(__DOXYGEN__)
#define ARMCR8_HAS_DTCM         0
#endif

/**
 * @brief   ECC presence.
 */
#if !defined(ARMCR8_HAS_ECC) || defined(__DOXYGEN__)
#define ARMCR8_HAS_ECC          0
#endif

#endif /* CRPARAMS_H */

/** @} */
