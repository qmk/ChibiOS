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
 * @file    ARM-common/mpu_v7r.h
 * @brief   ARMv7-R MPU support macros and structures.
 *
 * @addtogroup ARMV7R_MPU
 * @{
 */

#ifndef MPU_V7R_H
#define MPU_V7R_H

/*===========================================================================*/
/* Driver constants.                                                         */
/*===========================================================================*/

/**
 * @name    MPU Data Region Size and Enable register constants
 * @{
 */
#define MPU_DRSR_ENABLE                 (1U << 0)
#define MPU_DRSR_SIZE_MASK              (31U << 1)
#define MPU_DRSR_SIZE(n)                ((n) << 1)
#define MPU_DRSR_SIZE_256               MPU_DRSR_SIZE(7U)
#define MPU_DRSR_SIZE_512               MPU_DRSR_SIZE(8U)
#define MPU_DRSR_SIZE_1K                MPU_DRSR_SIZE(9U)
#define MPU_DRSR_SIZE_2K                MPU_DRSR_SIZE(10U)
#define MPU_DRSR_SIZE_4K                MPU_DRSR_SIZE(11U)
#define MPU_DRSR_SIZE_8K                MPU_DRSR_SIZE(12U)
#define MPU_DRSR_SIZE_16K               MPU_DRSR_SIZE(13U)
#define MPU_DRSR_SIZE_32K               MPU_DRSR_SIZE(14U)
#define MPU_DRSR_SIZE_64K               MPU_DRSR_SIZE(15U)
#define MPU_DRSR_SIZE_128K              MPU_DRSR_SIZE(16U)
#define MPU_DRSR_SIZE_256K              MPU_DRSR_SIZE(17U)
#define MPU_DRSR_SIZE_512K              MPU_DRSR_SIZE(18U)
#define MPU_DRSR_SIZE_1M                MPU_DRSR_SIZE(19U)
#define MPU_DRSR_SIZE_2M                MPU_DRSR_SIZE(20U)
#define MPU_DRSR_SIZE_4M                MPU_DRSR_SIZE(21U)
#define MPU_DRSR_SIZE_8M                MPU_DRSR_SIZE(22U)
#define MPU_DRSR_SIZE_16M               MPU_DRSR_SIZE(23U)
#define MPU_DRSR_SIZE_32M               MPU_DRSR_SIZE(24U)
#define MPU_DRSR_SIZE_64M               MPU_DRSR_SIZE(25U)
#define MPU_DRSR_SIZE_128M              MPU_DRSR_SIZE(26U)
#define MPU_DRSR_SIZE_256M              MPU_DRSR_SIZE(27U)
#define MPU_DRSR_SIZE_512M              MPU_DRSR_SIZE(28U)
#define MPU_DRSR_SIZE_1G                MPU_DRSR_SIZE(29U)
#define MPU_DRSR_SIZE_2G                MPU_DRSR_SIZE(30U)
#define MPU_DRSR_SIZE_4G                MPU_DRSR_SIZE(31U)
#define MPU_DRSR_SRD_MASK               (255U << 8)
#define MPU_DRSR_SRD(n)                 ((n) << 8)
/** @} */

/**
 * @name    MPU Data Region Access Control register constants
 * @{
 */
#define MPU_DRACR_B                     (1U << 0)
#define MPU_DRACR_C                     (1U << 1)
#define MPU_DRACR_S                     (1U << 2)
#define MPU_DRACR_TEX_MASK              (7U << 3)
#define MPU_DRACR_TEX(n)                ((n) << 3)
#define MPU_DRACR_AP_MASK               (7U << 8)
#define MPU_DRACR_AP(n)                 ((n) << 8)
#define MPU_DRACR_XN                    (1U << 12)
#define MPU_DRACR_AP_NA_NA              MPU_DRACR_AP(0U)
#define MPU_DRACR_AP_RW_NA              MPU_DRACR_AP(1U)
#define MPU_DRACR_AP_RW_RO              MPU_DRACR_AP(2U)
#define MPU_DRACR_AP_RW_RW              MPU_DRACR_AP(3U)
#define MPU_DRACR_AP_RO_NA              MPU_DRACR_AP(5U)
#define MPU_DRACR_AP_RO_RO              MPU_DRACR_AP(6U)
/** @} */

/**
 * @name    MPU Data Region Base Address register constants
 * @{
 */
#define MPU_DRBAR_ADDR_MASK             0xFFFFFFE0U
#define MPU_DRBAR_ADDR(n)               ((n) & MPU_DRBAR_ADDR_MASK)
/** @} */

/**
 * @name    System Control Register constants
 * @{
 */
#define MPU_SCTLR_ENABLE                (1U << 0)
/** @} */

/*===========================================================================*/
/* Driver pre-compile time settings.                                         */
/*===========================================================================*/

/*===========================================================================*/
/* Derived constants and error checks.                                       */
/*===========================================================================*/

/*===========================================================================*/
/* Driver data structures and types.                                         */
/*===========================================================================*/

#if !defined(_FROM_ASM_) || defined(__DOXYGEN__)
typedef struct {
  uint32_t              drbar;
  uint32_t              drsr;
  uint32_t              dracr;
} mpu_region_t;
#endif

/*===========================================================================*/
/* Driver macros.                                                            */
/*===========================================================================*/

/*===========================================================================*/
/* External declarations.                                                    */
/*===========================================================================*/

/*===========================================================================*/
/* Driver inline functions.                                                  */
/*===========================================================================*/

/**
 * @brief   Enables the MPU.
 *
 * @api
 */
#if !defined(_FROM_ASM_) || defined(__DOXYGEN__)
static inline void mpuEnable(void) {
  uint32_t sctlr;

  __asm volatile ("mrc     p15, 0, %[p0], c1, c0, 0"
                  : [p0] "=r" (sctlr) : : "memory");
  sctlr |= MPU_SCTLR_ENABLE;
  __asm volatile ("mcr     p15, 0, %[p0], c1, c0, 0"
                  : : [p0] "r" (sctlr) : "memory");
  __asm volatile ("dsb" : : : "memory");
  __asm volatile ("isb" : : : "memory");
}
#endif

/**
 * @brief   Disables the MPU.
 *
 * @api
 */
#if !defined(_FROM_ASM_) || defined(__DOXYGEN__)
static inline void mpuDisable(void) {
  uint32_t sctlr;

  __asm volatile ("mrc     p15, 0, %[p0], c1, c0, 0"
                  : [p0] "=r" (sctlr) : : "memory");
  sctlr &= ~MPU_SCTLR_ENABLE;
  __asm volatile ("mcr     p15, 0, %[p0], c1, c0, 0"
                  : : [p0] "r" (sctlr) : "memory");
  __asm volatile ("isb" : : : "memory");
}
#endif

/**
 * @brief   Configures an MPU region.
 *
 * @param[in] region    the region number
 * @param[in] drbar     DRBAR register initialization value
 * @param[in] drsr      DRSR register initialization value
 * @param[in] dracr     DRACR register initialization value
 *
 * @api
 */
#if !defined(_FROM_ASM_) || defined(__DOXYGEN__)
static inline void mpuConfigureRegion(uint32_t region,
                                      uint32_t drbar,
                                      uint32_t drsr,
                                      uint32_t dracr) {

  __asm volatile ("mcr     p15, 0, %[p0], c6, c2, 0"
                  : : [p0] "r" (region) : "memory");
  __asm volatile ("mcr     p15, 0, %[p0], c6, c1, 0"
                  : : [p0] "r" (drbar) : "memory");
  __asm volatile ("mcr     p15, 0, %[p0], c6, c1, 2"
                  : : [p0] "r" (drsr) : "memory");
  __asm volatile ("mcr     p15, 0, %[p0], c6, c1, 4"
                  : : [p0] "r" (dracr) : "memory");
}
#endif

/**
 * @brief   Configures an MPU region from a descriptor.
 *
 * @param[in] region    the region number
 * @param[in] mpurp     pointer to the region descriptor
 *
 * @api
 */
#if !defined(_FROM_ASM_) || defined(__DOXYGEN__)
static inline void mpuConfigureRegionFromTable(uint32_t region,
                                               const mpu_region_t *mpurp) {

  mpuConfigureRegion(region, mpurp->drbar, mpurp->drsr, mpurp->dracr);
}
#endif

#endif /* MPU_V7R_H */

/** @} */
