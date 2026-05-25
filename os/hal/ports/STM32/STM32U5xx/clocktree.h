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
 * @file    clocktree.h
 * @brief   Generated clock tree description header.
 *
 * @addtogroup CLOCKTREE
 * @{
 */
#ifndef CLOCKTREE_H
#define CLOCKTREE_H

/*===========================================================================*/
/* Driver constants.                                                         */
/*===========================================================================*/

/**
 * @name    Dynamic clock point indexes and names
 * @{
 */
#define CLK_HSI16               0U
#define CLK_HSI48               1U
#define CLK_SHSI                2U
#define CLK_HSE                 3U
#define CLK_MSIS                4U
#define CLK_MSIK                5U
#define CLK_SYSCLK              6U
#define CLK_ARRAY_SIZE          7U

#define CLK_POINT_NAMES                                                     \
  {                                                                         \
    "HSI16",                                                                \
    "HSI48",                                                                \
    "SHSI",                                                                 \
    "HSE",                                                                  \
    "MSIS",                                                                 \
    "MSIK",                                                                 \
    "SYSCLK"                                                                \
  }
/** @} */

/**
 * @name    Generated support definitions
 * @{
 */
#define RCC_ICSCR1_MSISRANGE_RANGE0_48M     ((0U) << RCC_ICSCR1_MSISRANGE_Pos)
#define RCC_ICSCR1_MSISRANGE_RANGE1_24M     ((1U) << RCC_ICSCR1_MSISRANGE_Pos)
#define RCC_ICSCR1_MSISRANGE_RANGE2_16M     ((2U) << RCC_ICSCR1_MSISRANGE_Pos)
#define RCC_ICSCR1_MSISRANGE_RANGE3_12M     ((3U) << RCC_ICSCR1_MSISRANGE_Pos)
#define RCC_ICSCR1_MSISRANGE_RANGE4_4M      ((4U) << RCC_ICSCR1_MSISRANGE_Pos)
#define RCC_ICSCR1_MSISRANGE_RANGE5_2M      ((5U) << RCC_ICSCR1_MSISRANGE_Pos)
#define RCC_ICSCR1_MSISRANGE_RANGE6_1333K   ((6U) << RCC_ICSCR1_MSISRANGE_Pos)
#define RCC_ICSCR1_MSISRANGE_RANGE7_1M      ((7U) << RCC_ICSCR1_MSISRANGE_Pos)
#define RCC_ICSCR1_MSISRANGE_RANGE8_3072K   ((8U) << RCC_ICSCR1_MSISRANGE_Pos)
#define RCC_ICSCR1_MSISRANGE_RANGE9_1536K   ((9U) << RCC_ICSCR1_MSISRANGE_Pos)
#define RCC_ICSCR1_MSISRANGE_RANGE10_1024K  ((10U) << RCC_ICSCR1_MSISRANGE_Pos)
#define RCC_ICSCR1_MSISRANGE_RANGE11_768K   ((11U) << RCC_ICSCR1_MSISRANGE_Pos)
#define RCC_ICSCR1_MSISRANGE_RANGE12_400K   ((12U) << RCC_ICSCR1_MSISRANGE_Pos)
#define RCC_ICSCR1_MSISRANGE_RANGE13_200K   ((13U) << RCC_ICSCR1_MSISRANGE_Pos)
#define RCC_ICSCR1_MSISRANGE_RANGE14_133K   ((14U) << RCC_ICSCR1_MSISRANGE_Pos)
#define RCC_ICSCR1_MSISRANGE_RANGE15_100K   ((15U) << RCC_ICSCR1_MSISRANGE_Pos)
#define RCC_ICSCR1_MSIKRANGE_RANGE0_48M     ((0U) << RCC_ICSCR1_MSIKRANGE_Pos)
#define RCC_ICSCR1_MSIKRANGE_RANGE1_24M     ((1U) << RCC_ICSCR1_MSIKRANGE_Pos)
#define RCC_ICSCR1_MSIKRANGE_RANGE2_16M     ((2U) << RCC_ICSCR1_MSIKRANGE_Pos)
#define RCC_ICSCR1_MSIKRANGE_RANGE3_12M     ((3U) << RCC_ICSCR1_MSIKRANGE_Pos)
#define RCC_ICSCR1_MSIKRANGE_RANGE4_4M      ((4U) << RCC_ICSCR1_MSIKRANGE_Pos)
#define RCC_ICSCR1_MSIKRANGE_RANGE5_2M      ((5U) << RCC_ICSCR1_MSIKRANGE_Pos)
#define RCC_ICSCR1_MSIKRANGE_RANGE6_1333K   ((6U) << RCC_ICSCR1_MSIKRANGE_Pos)
#define RCC_ICSCR1_MSIKRANGE_RANGE7_1M      ((7U) << RCC_ICSCR1_MSIKRANGE_Pos)
#define RCC_ICSCR1_MSIKRANGE_RANGE8_3072K   ((8U) << RCC_ICSCR1_MSIKRANGE_Pos)
#define RCC_ICSCR1_MSIKRANGE_RANGE9_1536K   ((9U) << RCC_ICSCR1_MSIKRANGE_Pos)
#define RCC_ICSCR1_MSIKRANGE_RANGE10_1024K  ((10U) << RCC_ICSCR1_MSIKRANGE_Pos)
#define RCC_ICSCR1_MSIKRANGE_RANGE11_768K   ((11U) << RCC_ICSCR1_MSIKRANGE_Pos)
#define RCC_ICSCR1_MSIKRANGE_RANGE12_400K   ((12U) << RCC_ICSCR1_MSIKRANGE_Pos)
#define RCC_ICSCR1_MSIKRANGE_RANGE13_200K   ((13U) << RCC_ICSCR1_MSIKRANGE_Pos)
#define RCC_ICSCR1_MSIKRANGE_RANGE14_133K   ((14U) << RCC_ICSCR1_MSIKRANGE_Pos)
#define RCC_ICSCR1_MSIKRANGE_RANGE15_100K   ((15U) << RCC_ICSCR1_MSIKRANGE_Pos)
#define RCC_ICSCR1_MSIBIAS_CONTINUOUS       ((0U) << RCC_ICSCR1_MSIBIAS_Pos)
#define RCC_ICSCR1_MSIBIAS_SAMPLING         ((1U) << RCC_ICSCR1_MSIBIAS_Pos)
#define RCC_ICSCR1_MSIRGSEL_CSR             ((0U) << RCC_ICSCR1_MSIRGSEL_Pos)
#define RCC_ICSCR1_MSIRGSEL_ICSCR1          ((1U) << RCC_ICSCR1_MSIRGSEL_Pos)
#define RCC_BDCR_LSIPREDIV_DIV1             0U
#define RCC_BDCR_LSIPREDIV_DIV128           RCC_BDCR_LSIPREDIV
/** @} */

/**
 * @name    Generated mux selector constants
 * @{
 */
#define RCC_ICSCR1_MSISRANGE_MSIRC0         ((0U) << 28U)
#define RCC_ICSCR1_MSISRANGE_MSIRC1         ((4U) << 28U)
#define RCC_ICSCR1_MSISRANGE_MSIRC2         ((8U) << 28U)
#define RCC_ICSCR1_MSISRANGE_MSIRC3         ((12U) << 28U)

#define RCC_ICSCR1_MSIKRANGE_MSIRC0         ((0U) << 24U)
#define RCC_ICSCR1_MSIKRANGE_MSIRC1         ((4U) << 24U)
#define RCC_ICSCR1_MSIKRANGE_MSIRC2         ((8U) << 24U)
#define RCC_ICSCR1_MSIKRANGE_MSIRC3         ((12U) << 24U)

/** @} */

/**
 * @name    Generated scaler selector constants
 * @{
 */
#define RCC_ICSCR1_MSISRANGE_DIV1           ((0U) << 28U)
#define RCC_ICSCR1_MSISRANGE_DIV2           ((1U) << 28U)
#define RCC_ICSCR1_MSISRANGE_DIV3           ((2U) << 28U)
#define RCC_ICSCR1_MSISRANGE_DIV4           ((3U) << 28U)

#define RCC_ICSCR1_MSIKRANGE_DIV1           ((0U) << 24U)
#define RCC_ICSCR1_MSIKRANGE_DIV2           ((1U) << 24U)
#define RCC_ICSCR1_MSIKRANGE_DIV3           ((2U) << 24U)
#define RCC_ICSCR1_MSIKRANGE_DIV4           ((3U) << 24U)
/** @} */

/*===========================================================================*/
/* Driver pre-compile time settings.                                         */
/*===========================================================================*/

/**
 * @name    Clock tree configurations
 * @{
 */
/**
 * @brief   Enables dynamic clock handling.
 */
#if !defined(STM32_CFG_CLOCK_DYNAMIC) || defined(__DOXYGEN__)
  #define STM32_CFG_CLOCK_DYNAMIC           FALSE
#endif

/**
 * @brief   Selects the core voltage scaling range.
 */
#if !defined(STM32_CFG_PWR_VOSR) || defined(__DOXYGEN__)
  #define STM32_CFG_PWR_VOSR                PWR_VOSR_VOS_RANGE1
#endif

/**
 * @brief   Selects the LSI oscillator output divider.
 */
#if !defined(STM32_CFG_LSI_PREDIV) || defined(__DOXYGEN__)
  #define STM32_CFG_LSI_PREDIV              RCC_BDCR_LSIPREDIV_DIV1
#endif

/**
 * @brief   Selects the MSIS frequency range.
 */
#if !defined(STM32_CFG_MSIS_RANGE) || defined(__DOXYGEN__)
  #define STM32_CFG_MSIS_RANGE              RCC_ICSCR1_MSISRANGE_RANGE4_4M
#endif

/**
 * @brief   Selects the MSIK frequency range.
 */
#if !defined(STM32_CFG_MSIK_RANGE) || defined(__DOXYGEN__)
  #define STM32_CFG_MSIK_RANGE              RCC_ICSCR1_MSIKRANGE_RANGE4_4M
#endif

/**
 * @brief   Selects the MSI bias mode.
 */
#if !defined(STM32_CFG_MSIBIAS) || defined(__DOXYGEN__)
  #define STM32_CFG_MSIBIAS                 RCC_ICSCR1_MSIBIAS_CONTINUOUS
#endif

/**
 * @brief   Enables the HSI16 clock source.
 */
#if !defined(STM32_CFG_HSI16_ENABLE) || defined(__DOXYGEN__)
  #define STM32_CFG_HSI16_ENABLE            FALSE
#endif

/**
 * @brief   Enables the HSI48 clock source.
 */
#if !defined(STM32_CFG_HSI48_ENABLE) || defined(__DOXYGEN__)
  #define STM32_CFG_HSI48_ENABLE            FALSE
#endif

/**
 * @brief   Enables the SHSI clock source.
 */
#if !defined(STM32_CFG_SHSI_ENABLE) || defined(__DOXYGEN__)
  #define STM32_CFG_SHSI_ENABLE             FALSE
#endif

/**
 * @brief   Enables the HSE clock source.
 */
#if !defined(STM32_CFG_HSE_ENABLE) || defined(__DOXYGEN__)
  #define STM32_CFG_HSE_ENABLE              FALSE
#endif

/**
 * @brief   Enables the LSE clock source.
 */
#if !defined(STM32_CFG_LSE_ENABLE) || defined(__DOXYGEN__)
  #define STM32_CFG_LSE_ENABLE              FALSE
#endif

/**
 * @brief   Enables the LSI clock source.
 */
#if !defined(STM32_CFG_LSI_ENABLE) || defined(__DOXYGEN__)
  #define STM32_CFG_LSI_ENABLE              FALSE
#endif

/**
 * @brief   Selects the SYSCLK clock source.
 * @note    Allowed sources:
 *          - MSIS.
 *          - HSI16.
 *          - HSE.
 */
#if !defined(STM32_CFG_SYSCLK_SEL) || defined(__DOXYGEN__)
  #define STM32_CFG_SYSCLK_SEL              RCC_CFGR1_SW_MSIS
#endif
/** @} */

/*===========================================================================*/
/* Derived constants and error checks.                                       */
/*===========================================================================*/

/**
 * @name    Clock point derived constants and checks
 * @{
 */
/*
 * Extra configuration checks.
 */
#if !defined(TRUE) && !defined(__DOXYGEN__)
  #error "TRUE not defined"
#endif
#if !defined(FALSE) && !defined(__DOXYGEN__)
  #error "FALSE not defined"
#endif
#if !((STM32_CFG_CLOCK_DYNAMIC == TRUE) || (STM32_CFG_CLOCK_DYNAMIC == FALSE)) && \
    !defined(__DOXYGEN__)
  #error "invalid STM32_CFG_CLOCK_DYNAMIC value specified"
#endif

#if !defined(PWR_VOSR_VOS_RANGE1) && !defined(__DOXYGEN__)
  #error "PWR_VOSR_VOS_RANGE1 not defined"
#endif
#if !defined(PWR_VOSR_VOS_RANGE2) && !defined(__DOXYGEN__)
  #error "PWR_VOSR_VOS_RANGE2 not defined"
#endif
#if !defined(PWR_VOSR_VOS_RANGE3) && !defined(__DOXYGEN__)
  #error "PWR_VOSR_VOS_RANGE3 not defined"
#endif
#if !defined(PWR_VOSR_VOS_RANGE4) && !defined(__DOXYGEN__)
  #error "PWR_VOSR_VOS_RANGE4 not defined"
#endif
#if !((STM32_CFG_PWR_VOSR == PWR_VOSR_VOS_RANGE1) ||                        \
     (STM32_CFG_PWR_VOSR == PWR_VOSR_VOS_RANGE2) ||                         \
     (STM32_CFG_PWR_VOSR == PWR_VOSR_VOS_RANGE3) ||                         \
     (STM32_CFG_PWR_VOSR == PWR_VOSR_VOS_RANGE4)) && !defined(__DOXYGEN__)
  #error "invalid STM32_CFG_PWR_VOSR value specified"
#endif

#if !((STM32_CFG_LSI_PREDIV == RCC_BDCR_LSIPREDIV_DIV1) ||                  \
     (STM32_CFG_LSI_PREDIV == RCC_BDCR_LSIPREDIV_DIV128)) &&                \
    !defined(__DOXYGEN__)
  #error "invalid STM32_CFG_LSI_PREDIV value specified"
#endif

#if !((STM32_CFG_MSIS_RANGE == RCC_ICSCR1_MSISRANGE_RANGE0_48M) ||          \
     (STM32_CFG_MSIS_RANGE == RCC_ICSCR1_MSISRANGE_RANGE1_24M) ||           \
     (STM32_CFG_MSIS_RANGE == RCC_ICSCR1_MSISRANGE_RANGE2_16M) ||           \
     (STM32_CFG_MSIS_RANGE == RCC_ICSCR1_MSISRANGE_RANGE3_12M) ||           \
     (STM32_CFG_MSIS_RANGE == RCC_ICSCR1_MSISRANGE_RANGE4_4M) ||            \
     (STM32_CFG_MSIS_RANGE == RCC_ICSCR1_MSISRANGE_RANGE5_2M) ||            \
     (STM32_CFG_MSIS_RANGE == RCC_ICSCR1_MSISRANGE_RANGE6_1333K) ||         \
     (STM32_CFG_MSIS_RANGE == RCC_ICSCR1_MSISRANGE_RANGE7_1M) ||            \
     (STM32_CFG_MSIS_RANGE == RCC_ICSCR1_MSISRANGE_RANGE8_3072K) ||         \
     (STM32_CFG_MSIS_RANGE == RCC_ICSCR1_MSISRANGE_RANGE9_1536K) ||         \
     (STM32_CFG_MSIS_RANGE == RCC_ICSCR1_MSISRANGE_RANGE10_1024K) ||        \
     (STM32_CFG_MSIS_RANGE == RCC_ICSCR1_MSISRANGE_RANGE11_768K) ||         \
     (STM32_CFG_MSIS_RANGE == RCC_ICSCR1_MSISRANGE_RANGE12_400K) ||         \
     (STM32_CFG_MSIS_RANGE == RCC_ICSCR1_MSISRANGE_RANGE13_200K) ||         \
     (STM32_CFG_MSIS_RANGE == RCC_ICSCR1_MSISRANGE_RANGE14_133K) ||         \
     (STM32_CFG_MSIS_RANGE == RCC_ICSCR1_MSISRANGE_RANGE15_100K)) &&        \
    !defined(__DOXYGEN__)
  #error "invalid STM32_CFG_MSIS_RANGE value specified"
#endif

#if !((STM32_CFG_MSIK_RANGE == RCC_ICSCR1_MSIKRANGE_RANGE0_48M) ||          \
     (STM32_CFG_MSIK_RANGE == RCC_ICSCR1_MSIKRANGE_RANGE1_24M) ||           \
     (STM32_CFG_MSIK_RANGE == RCC_ICSCR1_MSIKRANGE_RANGE2_16M) ||           \
     (STM32_CFG_MSIK_RANGE == RCC_ICSCR1_MSIKRANGE_RANGE3_12M) ||           \
     (STM32_CFG_MSIK_RANGE == RCC_ICSCR1_MSIKRANGE_RANGE4_4M) ||            \
     (STM32_CFG_MSIK_RANGE == RCC_ICSCR1_MSIKRANGE_RANGE5_2M) ||            \
     (STM32_CFG_MSIK_RANGE == RCC_ICSCR1_MSIKRANGE_RANGE6_1333K) ||         \
     (STM32_CFG_MSIK_RANGE == RCC_ICSCR1_MSIKRANGE_RANGE7_1M) ||            \
     (STM32_CFG_MSIK_RANGE == RCC_ICSCR1_MSIKRANGE_RANGE8_3072K) ||         \
     (STM32_CFG_MSIK_RANGE == RCC_ICSCR1_MSIKRANGE_RANGE9_1536K) ||         \
     (STM32_CFG_MSIK_RANGE == RCC_ICSCR1_MSIKRANGE_RANGE10_1024K) ||        \
     (STM32_CFG_MSIK_RANGE == RCC_ICSCR1_MSIKRANGE_RANGE11_768K) ||         \
     (STM32_CFG_MSIK_RANGE == RCC_ICSCR1_MSIKRANGE_RANGE12_400K) ||         \
     (STM32_CFG_MSIK_RANGE == RCC_ICSCR1_MSIKRANGE_RANGE13_200K) ||         \
     (STM32_CFG_MSIK_RANGE == RCC_ICSCR1_MSIKRANGE_RANGE14_133K) ||         \
     (STM32_CFG_MSIK_RANGE == RCC_ICSCR1_MSIKRANGE_RANGE15_100K)) &&        \
    !defined(__DOXYGEN__)
  #error "invalid STM32_CFG_MSIK_RANGE value specified"
#endif

#if !((STM32_CFG_MSIBIAS == RCC_ICSCR1_MSIBIAS_CONTINUOUS) ||               \
     (STM32_CFG_MSIBIAS == RCC_ICSCR1_MSIBIAS_SAMPLING)) && !defined(__DOXYGEN__)
  #error "invalid STM32_CFG_MSIBIAS value specified"
#endif

/*
 * Derived configuration macros.
 */
#define STM32_DCFG_MSISRC_SEL               (STM32_CFG_MSIS_RANGE &         \
                                             (12U << RCC_ICSCR1_MSISRANGE_Pos))

#define STM32_DCFG_MSISDIV_VALUE            ((((STM32_CFG_MSIS_RANGE >> RCC_ICSCR1_MSISRANGE_Pos) & \
                                               3U) + 1U))

#define STM32_DCFG_MSIKRC_SEL               (STM32_CFG_MSIK_RANGE &         \
                                             (12U << RCC_ICSCR1_MSIKRANGE_Pos))

#define STM32_DCFG_MSIKDIV_VALUE            ((((STM32_CFG_MSIK_RANGE >> RCC_ICSCR1_MSIKRANGE_Pos) & \
                                               3U) + 1U))

/**
 * @name    Frequency limits for vos1 state
 * @{
 */
#if defined(STM32_HSE_BYPASS) || \
    defined(__DOXYGEN__)
#define STM32_VOS1_HSECLK_MIN               4000000
#define STM32_VOS1_HSECLK_MAX               50000000
#else
#define STM32_VOS1_HSECLK_MIN               4000000
#define STM32_VOS1_HSECLK_MAX               50000000
#endif
#if defined(STM32_LSE_BYPASS) || \
    defined(__DOXYGEN__)
#define STM32_VOS1_LSECLK_MIN               5000
#define STM32_VOS1_LSECLK_MAX               40000
#else
#define STM32_VOS1_LSECLK_MIN               32768
#define STM32_VOS1_LSECLK_MAX               32768
#endif
#define STM32_VOS1_PLLIN_MIN                4000000
#define STM32_VOS1_PLLIN_MAX                16000000
#define STM32_VOS1_PLLVCO_MIN               128000000
#define STM32_VOS1_PLLVCO_MAX               544000000
#define STM32_VOS1_PLLP_MIN                 1000000
#define STM32_VOS1_PLLP_MAX                 208000000
#define STM32_VOS1_PLLQ_MIN                 1000000
#define STM32_VOS1_PLLQ_MAX                 208000000
#define STM32_VOS1_PLLR_MIN                 1000000
#define STM32_VOS1_PLLR_MAX                 208000000
#define STM32_VOS1_SYSCLK_MAX               160000000
#define STM32_VOS1_HCLK_MAX                 160000000
#define STM32_VOS1_PCLK1_MAX                160000000
#define STM32_VOS1_PCLK2_MAX                160000000
#define STM32_VOS1_PCLK3_MAX                160000000
#define STM32_VOS1_ADCCLK_MAX               55000000
/** @} */

/**
 * @name    Frequency limits for vos2 state
 * @{
 */
#if defined(STM32_HSE_BYPASS) || \
    defined(__DOXYGEN__)
#define STM32_VOS2_HSECLK_MIN               4000000
#define STM32_VOS2_HSECLK_MAX               50000000
#else
#define STM32_VOS2_HSECLK_MIN               4000000
#define STM32_VOS2_HSECLK_MAX               50000000
#endif
#if defined(STM32_LSE_BYPASS) || \
    defined(__DOXYGEN__)
#define STM32_VOS2_LSECLK_MIN               5000
#define STM32_VOS2_LSECLK_MAX               40000
#else
#define STM32_VOS2_LSECLK_MIN               32768
#define STM32_VOS2_LSECLK_MAX               32768
#endif
#define STM32_VOS2_PLLIN_MIN                4000000
#define STM32_VOS2_PLLIN_MAX                16000000
#define STM32_VOS2_PLLVCO_MIN               128000000
#define STM32_VOS2_PLLVCO_MAX               544000000
#define STM32_VOS2_PLLP_MIN                 1000000
#define STM32_VOS2_PLLP_MAX                 110000000
#define STM32_VOS2_PLLQ_MIN                 1000000
#define STM32_VOS2_PLLQ_MAX                 110000000
#define STM32_VOS2_PLLR_MIN                 1000000
#define STM32_VOS2_PLLR_MAX                 110000000
#define STM32_VOS2_SYSCLK_MAX               110000000
#define STM32_VOS2_HCLK_MAX                 110000000
#define STM32_VOS2_PCLK1_MAX                110000000
#define STM32_VOS2_PCLK2_MAX                110000000
#define STM32_VOS2_PCLK3_MAX                110000000
#define STM32_VOS2_ADCCLK_MAX               55000000
/** @} */

/**
 * @name    Frequency limits for vos3 state
 * @{
 */
#if defined(STM32_HSE_BYPASS) || \
    defined(__DOXYGEN__)
#define STM32_VOS3_HSECLK_MIN               4000000
#define STM32_VOS3_HSECLK_MAX               50000000
#else
#define STM32_VOS3_HSECLK_MIN               4000000
#define STM32_VOS3_HSECLK_MAX               50000000
#endif
#if defined(STM32_LSE_BYPASS) || \
    defined(__DOXYGEN__)
#define STM32_VOS3_LSECLK_MIN               5000
#define STM32_VOS3_LSECLK_MAX               40000
#else
#define STM32_VOS3_LSECLK_MIN               32768
#define STM32_VOS3_LSECLK_MAX               32768
#endif
#define STM32_VOS3_PLLIN_MIN                4000000
#define STM32_VOS3_PLLIN_MAX                16000000
#define STM32_VOS3_PLLVCO_MIN               128000000
#define STM32_VOS3_PLLVCO_MAX               330000000
#define STM32_VOS3_PLLP_MIN                 1000000
#define STM32_VOS3_PLLP_MAX                 55000000
#define STM32_VOS3_PLLQ_MIN                 1000000
#define STM32_VOS3_PLLQ_MAX                 55000000
#define STM32_VOS3_PLLR_MIN                 1000000
#define STM32_VOS3_PLLR_MAX                 55000000
#define STM32_VOS3_SYSCLK_MAX               55000000
#define STM32_VOS3_HCLK_MAX                 55000000
#define STM32_VOS3_PCLK1_MAX                55000000
#define STM32_VOS3_PCLK2_MAX                55000000
#define STM32_VOS3_PCLK3_MAX                55000000
#define STM32_VOS3_ADCCLK_MAX               55000000
/** @} */

/**
 * @name    Frequency limits for vos4 state
 * @{
 */
#if defined(STM32_HSE_BYPASS) || \
    defined(__DOXYGEN__)
#define STM32_VOS4_HSECLK_MIN               4000000
#define STM32_VOS4_HSECLK_MAX               25000000
#else
#define STM32_VOS4_HSECLK_MIN               4000000
#define STM32_VOS4_HSECLK_MAX               25000000
#endif
#if defined(STM32_LSE_BYPASS) || \
    defined(__DOXYGEN__)
#define STM32_VOS4_LSECLK_MIN               5000
#define STM32_VOS4_LSECLK_MAX               40000
#else
#define STM32_VOS4_LSECLK_MIN               32768
#define STM32_VOS4_LSECLK_MAX               32768
#endif
#define STM32_VOS4_PLLIN_MIN                0
#define STM32_VOS4_PLLIN_MAX                0
#define STM32_VOS4_PLLVCO_MIN               0
#define STM32_VOS4_PLLVCO_MAX               0
#define STM32_VOS4_PLLP_MIN                 0
#define STM32_VOS4_PLLP_MAX                 0
#define STM32_VOS4_PLLQ_MIN                 0
#define STM32_VOS4_PLLQ_MAX                 0
#define STM32_VOS4_PLLR_MIN                 0
#define STM32_VOS4_PLLR_MAX                 0
#define STM32_VOS4_SYSCLK_MAX               25000000
#define STM32_VOS4_HCLK_MAX                 25000000
#define STM32_VOS4_PCLK1_MAX                25000000
#define STM32_VOS4_PCLK2_MAX                25000000
#define STM32_VOS4_PCLK3_MAX                25000000
#define STM32_VOS4_ADCCLK_MAX               25000000
/** @} */

/*
 * Selected frequency limits.
 */
#if (STM32_CFG_PWR_VOSR == PWR_VOSR_VOS_RANGE1) || \
    defined(__DOXYGEN__)
#define STM32_HSECLK_MIN                    STM32_VOS1_HSECLK_MIN
#define STM32_HSECLK_MAX                    STM32_VOS1_HSECLK_MAX
#define STM32_LSECLK_MIN                    STM32_VOS1_LSECLK_MIN
#define STM32_LSECLK_MAX                    STM32_VOS1_LSECLK_MAX
#define STM32_PLLIN_MIN                     STM32_VOS1_PLLIN_MIN
#define STM32_PLLIN_MAX                     STM32_VOS1_PLLIN_MAX
#define STM32_PLLVCO_MIN                    STM32_VOS1_PLLVCO_MIN
#define STM32_PLLVCO_MAX                    STM32_VOS1_PLLVCO_MAX
#define STM32_PLLP_MIN                      STM32_VOS1_PLLP_MIN
#define STM32_PLLP_MAX                      STM32_VOS1_PLLP_MAX
#define STM32_PLLQ_MIN                      STM32_VOS1_PLLQ_MIN
#define STM32_PLLQ_MAX                      STM32_VOS1_PLLQ_MAX
#define STM32_PLLR_MIN                      STM32_VOS1_PLLR_MIN
#define STM32_PLLR_MAX                      STM32_VOS1_PLLR_MAX
#define STM32_SYSCLK_MAX                    STM32_VOS1_SYSCLK_MAX
#define STM32_HCLK_MAX                      STM32_VOS1_HCLK_MAX
#define STM32_PCLK1_MAX                     STM32_VOS1_PCLK1_MAX
#define STM32_PCLK2_MAX                     STM32_VOS1_PCLK2_MAX
#define STM32_PCLK3_MAX                     STM32_VOS1_PCLK3_MAX
#define STM32_ADCCLK_MAX                    STM32_VOS1_ADCCLK_MAX
#elif (STM32_CFG_PWR_VOSR == PWR_VOSR_VOS_RANGE2)
#define STM32_HSECLK_MIN                    STM32_VOS2_HSECLK_MIN
#define STM32_HSECLK_MAX                    STM32_VOS2_HSECLK_MAX
#define STM32_LSECLK_MIN                    STM32_VOS2_LSECLK_MIN
#define STM32_LSECLK_MAX                    STM32_VOS2_LSECLK_MAX
#define STM32_PLLIN_MIN                     STM32_VOS2_PLLIN_MIN
#define STM32_PLLIN_MAX                     STM32_VOS2_PLLIN_MAX
#define STM32_PLLVCO_MIN                    STM32_VOS2_PLLVCO_MIN
#define STM32_PLLVCO_MAX                    STM32_VOS2_PLLVCO_MAX
#define STM32_PLLP_MIN                      STM32_VOS2_PLLP_MIN
#define STM32_PLLP_MAX                      STM32_VOS2_PLLP_MAX
#define STM32_PLLQ_MIN                      STM32_VOS2_PLLQ_MIN
#define STM32_PLLQ_MAX                      STM32_VOS2_PLLQ_MAX
#define STM32_PLLR_MIN                      STM32_VOS2_PLLR_MIN
#define STM32_PLLR_MAX                      STM32_VOS2_PLLR_MAX
#define STM32_SYSCLK_MAX                    STM32_VOS2_SYSCLK_MAX
#define STM32_HCLK_MAX                      STM32_VOS2_HCLK_MAX
#define STM32_PCLK1_MAX                     STM32_VOS2_PCLK1_MAX
#define STM32_PCLK2_MAX                     STM32_VOS2_PCLK2_MAX
#define STM32_PCLK3_MAX                     STM32_VOS2_PCLK3_MAX
#define STM32_ADCCLK_MAX                    STM32_VOS2_ADCCLK_MAX
#elif (STM32_CFG_PWR_VOSR == PWR_VOSR_VOS_RANGE3)
#define STM32_HSECLK_MIN                    STM32_VOS3_HSECLK_MIN
#define STM32_HSECLK_MAX                    STM32_VOS3_HSECLK_MAX
#define STM32_LSECLK_MIN                    STM32_VOS3_LSECLK_MIN
#define STM32_LSECLK_MAX                    STM32_VOS3_LSECLK_MAX
#define STM32_PLLIN_MIN                     STM32_VOS3_PLLIN_MIN
#define STM32_PLLIN_MAX                     STM32_VOS3_PLLIN_MAX
#define STM32_PLLVCO_MIN                    STM32_VOS3_PLLVCO_MIN
#define STM32_PLLVCO_MAX                    STM32_VOS3_PLLVCO_MAX
#define STM32_PLLP_MIN                      STM32_VOS3_PLLP_MIN
#define STM32_PLLP_MAX                      STM32_VOS3_PLLP_MAX
#define STM32_PLLQ_MIN                      STM32_VOS3_PLLQ_MIN
#define STM32_PLLQ_MAX                      STM32_VOS3_PLLQ_MAX
#define STM32_PLLR_MIN                      STM32_VOS3_PLLR_MIN
#define STM32_PLLR_MAX                      STM32_VOS3_PLLR_MAX
#define STM32_SYSCLK_MAX                    STM32_VOS3_SYSCLK_MAX
#define STM32_HCLK_MAX                      STM32_VOS3_HCLK_MAX
#define STM32_PCLK1_MAX                     STM32_VOS3_PCLK1_MAX
#define STM32_PCLK2_MAX                     STM32_VOS3_PCLK2_MAX
#define STM32_PCLK3_MAX                     STM32_VOS3_PCLK3_MAX
#define STM32_ADCCLK_MAX                    STM32_VOS3_ADCCLK_MAX
#elif (STM32_CFG_PWR_VOSR == PWR_VOSR_VOS_RANGE4)
#define STM32_HSECLK_MIN                    STM32_VOS4_HSECLK_MIN
#define STM32_HSECLK_MAX                    STM32_VOS4_HSECLK_MAX
#define STM32_LSECLK_MIN                    STM32_VOS4_LSECLK_MIN
#define STM32_LSECLK_MAX                    STM32_VOS4_LSECLK_MAX
#define STM32_PLLIN_MIN                     STM32_VOS4_PLLIN_MIN
#define STM32_PLLIN_MAX                     STM32_VOS4_PLLIN_MAX
#define STM32_PLLVCO_MIN                    STM32_VOS4_PLLVCO_MIN
#define STM32_PLLVCO_MAX                    STM32_VOS4_PLLVCO_MAX
#define STM32_PLLP_MIN                      STM32_VOS4_PLLP_MIN
#define STM32_PLLP_MAX                      STM32_VOS4_PLLP_MAX
#define STM32_PLLQ_MIN                      STM32_VOS4_PLLQ_MIN
#define STM32_PLLQ_MAX                      STM32_VOS4_PLLQ_MAX
#define STM32_PLLR_MIN                      STM32_VOS4_PLLR_MIN
#define STM32_PLLR_MAX                      STM32_VOS4_PLLR_MAX
#define STM32_SYSCLK_MAX                    STM32_VOS4_SYSCLK_MAX
#define STM32_HCLK_MAX                      STM32_VOS4_HCLK_MAX
#define STM32_PCLK1_MAX                     STM32_VOS4_PCLK1_MAX
#define STM32_PCLK2_MAX                     STM32_VOS4_PCLK2_MAX
#define STM32_PCLK3_MAX                     STM32_VOS4_PCLK3_MAX
#define STM32_ADCCLK_MAX                    STM32_VOS4_ADCCLK_MAX
#else
  #error "unable to select clock frequency limits"
#endif

/**
 * @brief   NONE clock derived enable state.
 */
#define STM32_NONE_ENABLED                  FALSE

/**
 * @brief   HSI16 clock derived enable state.
 */
#define STM32_HSI16_ENABLED                 STM32_CFG_HSI16_ENABLE

/**
 * @brief   HSI48 clock derived enable state.
 */
#define STM32_HSI48_ENABLED                 STM32_CFG_HSI48_ENABLE

/**
 * @brief   SHSI clock derived enable state.
 */
#define STM32_SHSI_ENABLED                  STM32_CFG_SHSI_ENABLE

/**
 * @brief   HSE clock derived enable state.
 */
#define STM32_HSE_ENABLED                   STM32_CFG_HSE_ENABLE

/**
 * @brief   LSE clock derived enable state.
 */
#define STM32_LSE_ENABLED                   STM32_CFG_LSE_ENABLE

/**
 * @brief   LSI clock derived enable state.
 */
#define STM32_LSI_ENABLED                   STM32_CFG_LSI_ENABLE

/**
 * @brief   MSIRC0 clock derived enable state.
 */
#define STM32_MSIRC0_ENABLED                (((STM32_MSISRC_ENABLED == TRUE) && \
                                              (STM32_DCFG_MSISRC_SEL == RCC_ICSCR1_MSISRANGE_MSIRC0)) || \
                                             ((STM32_MSIKRC_ENABLED == TRUE) && \
                                              (STM32_DCFG_MSIKRC_SEL == RCC_ICSCR1_MSIKRANGE_MSIRC0)))

/**
 * @brief   MSIRC1 clock derived enable state.
 */
#define STM32_MSIRC1_ENABLED                (((STM32_MSISRC_ENABLED == TRUE) && \
                                              (STM32_DCFG_MSISRC_SEL == RCC_ICSCR1_MSISRANGE_MSIRC1)) || \
                                             ((STM32_MSIKRC_ENABLED == TRUE) && \
                                              (STM32_DCFG_MSIKRC_SEL == RCC_ICSCR1_MSIKRANGE_MSIRC1)))

/**
 * @brief   MSIRC2 clock derived enable state.
 */
#define STM32_MSIRC2_ENABLED                (((STM32_MSISRC_ENABLED == TRUE) && \
                                              (STM32_DCFG_MSISRC_SEL == RCC_ICSCR1_MSISRANGE_MSIRC2)) || \
                                             ((STM32_MSIKRC_ENABLED == TRUE) && \
                                              (STM32_DCFG_MSIKRC_SEL == RCC_ICSCR1_MSIKRANGE_MSIRC2)))

/**
 * @brief   MSIRC3 clock derived enable state.
 */
#define STM32_MSIRC3_ENABLED                (((STM32_MSISRC_ENABLED == TRUE) && \
                                              (STM32_DCFG_MSISRC_SEL == RCC_ICSCR1_MSISRANGE_MSIRC3)) || \
                                             ((STM32_MSIKRC_ENABLED == TRUE) && \
                                              (STM32_DCFG_MSIKRC_SEL == RCC_ICSCR1_MSIKRANGE_MSIRC3)))

/**
 * @brief   MSISRC clock derived enable state.
 */
#define STM32_MSISRC_ENABLED                ((STM32_MSISDIV_ENABLED == TRUE))

/**
 * @brief   MSISDIV clock derived enable state.
 */
#define STM32_MSISDIV_ENABLED               ((STM32_MSIS_ENABLED == TRUE))

/**
 * @brief   MSIS clock derived enable state.
 */
#define STM32_MSIS_ENABLED                  (((STM32_SYSCLK_ENABLED == TRUE) && \
                                              (STM32_CFG_SYSCLK_SEL == RCC_CFGR1_SW_MSIS)))

/**
 * @brief   MSIKRC clock derived enable state.
 */
#define STM32_MSIKRC_ENABLED                ((STM32_MSIKDIV_ENABLED == TRUE))

/**
 * @brief   MSIKDIV clock derived enable state.
 */
#define STM32_MSIKDIV_ENABLED               ((STM32_MSIK_ENABLED == TRUE))

/**
 * @brief   MSIK clock derived enable state.
 */
#define STM32_MSIK_ENABLED                  TRUE

/**
 * @brief   SYSCLK clock derived enable state.
 */
#define STM32_SYSCLK_ENABLED                TRUE

/*--- Macros and checks for the NONE clock point. --------------------------*/

/**
 * @brief   NONE nominal source frequency.
 */
#define STM32_NONE_SOURCE_FREQ              0U

/**
 * @brief   NONE clock register bits.
 */
#define STM32_NONE_BITS                     0U

/**
 * @brief   Pseudo-clock for disabled sources clock point.
 */
#define STM32_NONE_FREQ                     0U

/*--- Macros and checks for the HSI16 clock point. -------------------------*/

#if !((STM32_CFG_HSI16_ENABLE == TRUE) || (STM32_CFG_HSI16_ENABLE == FALSE)) && \
    !defined(__DOXYGEN__)
  #error "invalid STM32_CFG_HSI16_ENABLE value specified"
#endif

#if !defined(RCC_CFGR1_SW_HSI16) && !defined(__DOXYGEN__)
  #error "RCC_CFGR1_SW_HSI16 not defined"
#endif
#if !((STM32_HSI16_ENABLED == TRUE) || !((STM32_SYSCLK_ENABLED == TRUE) &&  \
      (STM32_CFG_SYSCLK_SEL == RCC_CFGR1_SW_HSI16))) && !defined(__DOXYGEN__)
  #error "HSI16 not enabled, required by SYSCLK"
#endif

/**
 * @brief   HSI16 nominal source frequency.
 */
#define STM32_HSI16_SOURCE_FREQ             16000000U

/**
 * @brief   HSI16 clock register bits.
 */
#if (STM32_HSI16_ENABLED == TRUE) || defined(__DOXYGEN__)
  #define STM32_CR_HSI16_BITS               (RCC_CR_HSION | RCC_CR_HSIKERON)
#else
  #define STM32_CR_HSI16_BITS               0U
#endif

/**
 * @brief   16 MHz high speed internal oscillator clock point.
 */
#if (STM32_HSI16_ENABLED == TRUE) || defined(__DOXYGEN__)
  #define STM32_HSI16_FREQ                  STM32_HSI16_SOURCE_FREQ
#else
  #define STM32_HSI16_FREQ                  0U
#endif

/*--- Macros and checks for the HSI48 clock point. -------------------------*/

#if !((STM32_CFG_HSI48_ENABLE == TRUE) || (STM32_CFG_HSI48_ENABLE == FALSE)) && \
    !defined(__DOXYGEN__)
  #error "invalid STM32_CFG_HSI48_ENABLE value specified"
#endif

/**
 * @brief   HSI48 nominal source frequency.
 */
#define STM32_HSI48_SOURCE_FREQ             48000000U

/**
 * @brief   HSI48 clock register bits.
 */
#if (STM32_HSI48_ENABLED == TRUE) || defined(__DOXYGEN__)
  #define STM32_CR_HSI48_BITS               RCC_CR_HSI48ON
#else
  #define STM32_CR_HSI48_BITS               0U
#endif

/**
 * @brief   48 MHz high speed internal oscillator clock point.
 */
#if (STM32_HSI48_ENABLED == TRUE) || defined(__DOXYGEN__)
  #define STM32_HSI48_FREQ                  STM32_HSI48_SOURCE_FREQ
#else
  #define STM32_HSI48_FREQ                  0U
#endif

/*--- Macros and checks for the SHSI clock point. --------------------------*/

#if !((STM32_CFG_SHSI_ENABLE == TRUE) || (STM32_CFG_SHSI_ENABLE == FALSE)) && \
    !defined(__DOXYGEN__)
  #error "invalid STM32_CFG_SHSI_ENABLE value specified"
#endif

/**
 * @brief   SHSI nominal source frequency.
 */
#define STM32_SHSI_SOURCE_FREQ              48000000U

/**
 * @brief   SHSI clock register bits.
 */
#if (STM32_SHSI_ENABLED == TRUE) || defined(__DOXYGEN__)
  #define STM32_CR_SHSI_BITS                RCC_CR_SHSION
#else
  #define STM32_CR_SHSI_BITS                0U
#endif

/**
 * @brief   48 MHz secure high speed internal oscillator clock point.
 */
#if (STM32_SHSI_ENABLED == TRUE) || defined(__DOXYGEN__)
  #define STM32_SHSI_FREQ                   STM32_SHSI_SOURCE_FREQ
#else
  #define STM32_SHSI_FREQ                   0U
#endif

/*--- Macros and checks for the HSE clock point. ---------------------------*/

#if !((STM32_CFG_HSE_ENABLE == TRUE) || (STM32_CFG_HSE_ENABLE == FALSE)) && \
    !defined(__DOXYGEN__)
  #error "invalid STM32_CFG_HSE_ENABLE value specified"
#endif

#if !defined(RCC_CFGR1_SW_HSE) && !defined(__DOXYGEN__)
  #error "RCC_CFGR1_SW_HSE not defined"
#endif
#if !((STM32_HSE_ENABLED == TRUE) || !((STM32_SYSCLK_ENABLED == TRUE) &&    \
      (STM32_CFG_SYSCLK_SEL == RCC_CFGR1_SW_HSE))) && !defined(__DOXYGEN__)
  #error "HSE not enabled, required by SYSCLK"
#endif

/**
 * @brief   HSE nominal source frequency.
 */
#define STM32_HSE_SOURCE_FREQ               STM32_HSECLK

/**
 * @brief   HSE clock register bits.
 */
#if (STM32_HSE_ENABLED == TRUE) || defined(__DOXYGEN__)
  #define STM32_CR_HSE_BITS                 (RCC_CR_HSEON | STM32_HSE_MODE_BITS)
#else
  #define STM32_CR_HSE_BITS                 0U
#endif

/**
 * @brief   High speed external oscillator clock point.
 */
#if (STM32_HSE_ENABLED == TRUE) || defined(__DOXYGEN__)
  #define STM32_HSE_FREQ                    STM32_HSE_SOURCE_FREQ
#else
  #define STM32_HSE_FREQ                    0U
#endif

#if !((STM32_HSE_ENABLED != TRUE) || (STM32_HSE_FREQ >= STM32_HSECLK_MIN)) && \
    !defined(__DOXYGEN__)
  #error "STM32_HSE_FREQ below minimum frequency"
#endif

#if !((STM32_HSE_ENABLED != TRUE) || (STM32_HSE_FREQ <= STM32_HSECLK_MAX)) && \
    !defined(__DOXYGEN__)
  #error "STM32_HSE_FREQ above maximum frequency"
#endif

/*--- Macros and checks for the LSE clock point. ---------------------------*/

#if !((STM32_CFG_LSE_ENABLE == TRUE) || (STM32_CFG_LSE_ENABLE == FALSE)) && \
    !defined(__DOXYGEN__)
  #error "invalid STM32_CFG_LSE_ENABLE value specified"
#endif

/**
 * @brief   LSE nominal source frequency.
 */
#define STM32_LSE_SOURCE_FREQ               STM32_LSECLK

/**
 * @brief   LSE clock register bits.
 */
#if (STM32_LSE_ENABLED == TRUE) || defined(__DOXYGEN__)
  #define STM32_BDCR_LSE_BITS               (RCC_BDCR_LSEON |               \
                                             STM32_LSE_MODE_BITS)
#else
  #define STM32_BDCR_LSE_BITS               0U
#endif

/**
 * @brief   Low speed external oscillator clock point.
 */
#if (STM32_LSE_ENABLED == TRUE) || defined(__DOXYGEN__)
  #define STM32_LSE_FREQ                    STM32_LSE_SOURCE_FREQ
#else
  #define STM32_LSE_FREQ                    0U
#endif

#if !((STM32_LSE_ENABLED != TRUE) || (STM32_LSE_FREQ >= STM32_LSECLK_MIN)) && \
    !defined(__DOXYGEN__)
  #error "STM32_LSE_FREQ below minimum frequency"
#endif

#if !((STM32_LSE_ENABLED != TRUE) || (STM32_LSE_FREQ <= STM32_LSECLK_MAX)) && \
    !defined(__DOXYGEN__)
  #error "STM32_LSE_FREQ above maximum frequency"
#endif

/*--- Macros and checks for the LSI clock point. ---------------------------*/

#if !((STM32_CFG_LSI_ENABLE == TRUE) || (STM32_CFG_LSI_ENABLE == FALSE)) && \
    !defined(__DOXYGEN__)
  #error "invalid STM32_CFG_LSI_ENABLE value specified"
#endif

/**
 * @brief   LSI nominal source frequency.
 */
#define STM32_LSI_SOURCE_FREQ               32000U

/**
 * @brief   LSI clock register bits.
 */
#if (STM32_LSI_ENABLED == TRUE) || defined(__DOXYGEN__)
  #define STM32_BDCR_LSI_BITS               (RCC_BDCR_LSION |               \
                                             STM32_CFG_LSI_PREDIV)
#else
  #define STM32_BDCR_LSI_BITS               0U
#endif

/**
 * @brief   Low speed internal oscillator clock point.
 */
#if (STM32_LSI_ENABLED == FALSE) && !defined(__DOXYGEN__)
  #define STM32_LSI_FREQ                    0U
#elif (STM32_CFG_LSI_PREDIV == RCC_BDCR_LSIPREDIV_DIV128) || \
    defined(__DOXYGEN__)
  #define STM32_LSI_FREQ                    250U
#else
  #define STM32_LSI_FREQ                    32000U
#endif

/*--- Macros and checks for the MSIRC0 clock point. ------------------------*/

/**
 * @brief   MSIRC0 nominal source frequency.
 */
#define STM32_MSIRC0_SOURCE_FREQ            48000000U

/**
 * @brief   MSIRC0 clock register bits.
 */
#define STM32_MSIRC0_BITS                   0U

/**
 * @brief   48 MHz internal MSI RC oscillator clock point.
 */
#if (STM32_MSIRC0_ENABLED == TRUE) || defined(__DOXYGEN__)
  #define STM32_MSIRC0_FREQ                 STM32_MSIRC0_SOURCE_FREQ
#else
  #define STM32_MSIRC0_FREQ                 0U
#endif

/*--- Macros and checks for the MSIRC1 clock point. ------------------------*/

/**
 * @brief   MSIRC1 nominal source frequency.
 */
#define STM32_MSIRC1_SOURCE_FREQ            4000000U

/**
 * @brief   MSIRC1 clock register bits.
 */
#define STM32_MSIRC1_BITS                   0U

/**
 * @brief   4 MHz internal MSI RC oscillator clock point.
 */
#if (STM32_MSIRC1_ENABLED == TRUE) || defined(__DOXYGEN__)
  #define STM32_MSIRC1_FREQ                 STM32_MSIRC1_SOURCE_FREQ
#else
  #define STM32_MSIRC1_FREQ                 0U
#endif

/*--- Macros and checks for the MSIRC2 clock point. ------------------------*/

/**
 * @brief   MSIRC2 nominal source frequency.
 */
#define STM32_MSIRC2_SOURCE_FREQ            3072000U

/**
 * @brief   MSIRC2 clock register bits.
 */
#define STM32_MSIRC2_BITS                   0U

/**
 * @brief   3.072 MHz internal MSI RC oscillator clock point.
 */
#if (STM32_MSIRC2_ENABLED == TRUE) || defined(__DOXYGEN__)
  #define STM32_MSIRC2_FREQ                 STM32_MSIRC2_SOURCE_FREQ
#else
  #define STM32_MSIRC2_FREQ                 0U
#endif

/*--- Macros and checks for the MSIRC3 clock point. ------------------------*/

/**
 * @brief   MSIRC3 nominal source frequency.
 */
#define STM32_MSIRC3_SOURCE_FREQ            400000U

/**
 * @brief   MSIRC3 clock register bits.
 */
#define STM32_MSIRC3_BITS                   0U

/**
 * @brief   400 kHz internal MSI RC oscillator clock point.
 */
#if (STM32_MSIRC3_ENABLED == TRUE) || defined(__DOXYGEN__)
  #define STM32_MSIRC3_FREQ                 STM32_MSIRC3_SOURCE_FREQ
#else
  #define STM32_MSIRC3_FREQ                 0U
#endif

/*--- Macros and checks for the MSISRC clock point. ------------------------*/

/**
 * @brief   MSISRC clock register bits.
 */
#if (STM32_DCFG_MSISRC_SEL == RCC_ICSCR1_MSISRANGE_MSIRC0) ||               \
    defined(__DOXYGEN__)
  #if (STM32_MSISRC_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_MSISRC_BITS               RCC_ICSCR1_MSISRANGE_MSIRC0
  #else
    #define STM32_MSISRC_BITS               0U
  #endif
#elif (STM32_DCFG_MSISRC_SEL == RCC_ICSCR1_MSISRANGE_MSIRC1)
  #if (STM32_MSISRC_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_MSISRC_BITS               RCC_ICSCR1_MSISRANGE_MSIRC1
  #else
    #define STM32_MSISRC_BITS               0U
  #endif
#elif (STM32_DCFG_MSISRC_SEL == RCC_ICSCR1_MSISRANGE_MSIRC2)
  #if (STM32_MSISRC_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_MSISRC_BITS               RCC_ICSCR1_MSISRANGE_MSIRC2
  #else
    #define STM32_MSISRC_BITS               0U
  #endif
#elif (STM32_DCFG_MSISRC_SEL == RCC_ICSCR1_MSISRANGE_MSIRC3)
  #if (STM32_MSISRC_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_MSISRC_BITS               RCC_ICSCR1_MSISRANGE_MSIRC3
  #else
    #define STM32_MSISRC_BITS               0U
  #endif
#else
  #error "invalid STM32_DCFG_MSISRC_SEL value specified"
#endif

/**
 * @brief   MSIS internal RC selection clock point.
 */
#if ((STM32_MSISRC_ENABLED == TRUE) && \
     (STM32_DCFG_MSISRC_SEL == RCC_ICSCR1_MSISRANGE_MSIRC0)) || \
    defined(__DOXYGEN__)
  #define STM32_MSISRC_FREQ                 STM32_MSIRC0_FREQ
#elif (STM32_MSISRC_ENABLED == TRUE) && \
      (STM32_DCFG_MSISRC_SEL == RCC_ICSCR1_MSISRANGE_MSIRC1)
  #define STM32_MSISRC_FREQ                 STM32_MSIRC1_FREQ
#elif (STM32_MSISRC_ENABLED == TRUE) && \
      (STM32_DCFG_MSISRC_SEL == RCC_ICSCR1_MSISRANGE_MSIRC2)
  #define STM32_MSISRC_FREQ                 STM32_MSIRC2_FREQ
#elif (STM32_MSISRC_ENABLED == TRUE) && \
      (STM32_DCFG_MSISRC_SEL == RCC_ICSCR1_MSISRANGE_MSIRC3)
  #define STM32_MSISRC_FREQ                 STM32_MSIRC3_FREQ
#else
  #define STM32_MSISRC_FREQ                 0U
#endif

/*--- Macros and checks for the MSISDIV clock point. -----------------------*/

/**
 * @brief   MSISDIV clock register bits.
 */
#if (STM32_DCFG_MSISDIV_VALUE == 1) || defined(__DOXYGEN__)
  #if (STM32_MSISDIV_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_MSISDIV_BITS              RCC_ICSCR1_MSISRANGE_DIV1
  #else
    #define STM32_MSISDIV_BITS              0U
  #endif
#elif (STM32_DCFG_MSISDIV_VALUE == 2)
  #if (STM32_MSISDIV_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_MSISDIV_BITS              RCC_ICSCR1_MSISRANGE_DIV2
  #else
    #define STM32_MSISDIV_BITS              0U
  #endif
#elif (STM32_DCFG_MSISDIV_VALUE == 3)
  #if (STM32_MSISDIV_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_MSISDIV_BITS              RCC_ICSCR1_MSISRANGE_DIV3
  #else
    #define STM32_MSISDIV_BITS              0U
  #endif
#elif (STM32_DCFG_MSISDIV_VALUE == 4)
  #if (STM32_MSISDIV_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_MSISDIV_BITS              RCC_ICSCR1_MSISRANGE_DIV4
  #else
    #define STM32_MSISDIV_BITS              0U
  #endif
#else
  #error "invalid STM32_DCFG_MSISDIV_VALUE value specified"
#endif

/**
 * @brief   MSIS range divider clock point.
 */
#if (STM32_MSISDIV_ENABLED == TRUE) || defined(__DOXYGEN__)
  #define STM32_MSISDIV_FREQ                (STM32_MSISRC_FREQ /            \
                                             STM32_DCFG_MSISDIV_VALUE)
#else
  #define STM32_MSISDIV_FREQ                0U
#endif

/*--- Macros and checks for the MSIS clock point. --------------------------*/

/**
 * @brief   MSIS clock register bits.
 */
#if (STM32_MSIS_ENABLED == TRUE) || defined(__DOXYGEN__)
  #define STM32_CR_MSIS_BITS                RCC_CR_MSISON
#else
  #define STM32_CR_MSIS_BITS                0U
#endif

#if (STM32_MSIS_ENABLED == TRUE) || defined(__DOXYGEN__)
  #define STM32_ICSCR1_MSIS_BITS            (RCC_ICSCR1_MSIRGSEL_ICSCR1 |   \
                                             STM32_CFG_MSIBIAS)
#else
  #define STM32_ICSCR1_MSIS_BITS            0U
#endif

/**
 * @brief   MSI system oscillator clock point.
 */
#if (STM32_MSIS_ENABLED == TRUE) || defined(__DOXYGEN__)
  #define STM32_MSIS_FREQ                   STM32_MSISDIV_FREQ
#else
  #define STM32_MSIS_FREQ                   0U
#endif

/*--- Macros and checks for the MSIKRC clock point. ------------------------*/

/**
 * @brief   MSIKRC clock register bits.
 */
#if (STM32_DCFG_MSIKRC_SEL == RCC_ICSCR1_MSIKRANGE_MSIRC0) ||               \
    defined(__DOXYGEN__)
  #if (STM32_MSIKRC_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_MSIKRC_BITS               RCC_ICSCR1_MSIKRANGE_MSIRC0
  #else
    #define STM32_MSIKRC_BITS               0U
  #endif
#elif (STM32_DCFG_MSIKRC_SEL == RCC_ICSCR1_MSIKRANGE_MSIRC1)
  #if (STM32_MSIKRC_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_MSIKRC_BITS               RCC_ICSCR1_MSIKRANGE_MSIRC1
  #else
    #define STM32_MSIKRC_BITS               0U
  #endif
#elif (STM32_DCFG_MSIKRC_SEL == RCC_ICSCR1_MSIKRANGE_MSIRC2)
  #if (STM32_MSIKRC_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_MSIKRC_BITS               RCC_ICSCR1_MSIKRANGE_MSIRC2
  #else
    #define STM32_MSIKRC_BITS               0U
  #endif
#elif (STM32_DCFG_MSIKRC_SEL == RCC_ICSCR1_MSIKRANGE_MSIRC3)
  #if (STM32_MSIKRC_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_MSIKRC_BITS               RCC_ICSCR1_MSIKRANGE_MSIRC3
  #else
    #define STM32_MSIKRC_BITS               0U
  #endif
#else
  #error "invalid STM32_DCFG_MSIKRC_SEL value specified"
#endif

/**
 * @brief   MSIK internal RC selection clock point.
 */
#if ((STM32_MSIKRC_ENABLED == TRUE) && \
     (STM32_DCFG_MSIKRC_SEL == RCC_ICSCR1_MSIKRANGE_MSIRC0)) || \
    defined(__DOXYGEN__)
  #define STM32_MSIKRC_FREQ                 STM32_MSIRC0_FREQ
#elif (STM32_MSIKRC_ENABLED == TRUE) && \
      (STM32_DCFG_MSIKRC_SEL == RCC_ICSCR1_MSIKRANGE_MSIRC1)
  #define STM32_MSIKRC_FREQ                 STM32_MSIRC1_FREQ
#elif (STM32_MSIKRC_ENABLED == TRUE) && \
      (STM32_DCFG_MSIKRC_SEL == RCC_ICSCR1_MSIKRANGE_MSIRC2)
  #define STM32_MSIKRC_FREQ                 STM32_MSIRC2_FREQ
#elif (STM32_MSIKRC_ENABLED == TRUE) && \
      (STM32_DCFG_MSIKRC_SEL == RCC_ICSCR1_MSIKRANGE_MSIRC3)
  #define STM32_MSIKRC_FREQ                 STM32_MSIRC3_FREQ
#else
  #define STM32_MSIKRC_FREQ                 0U
#endif

/*--- Macros and checks for the MSIKDIV clock point. -----------------------*/

/**
 * @brief   MSIKDIV clock register bits.
 */
#if (STM32_DCFG_MSIKDIV_VALUE == 1) || defined(__DOXYGEN__)
  #if (STM32_MSIKDIV_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_MSIKDIV_BITS              RCC_ICSCR1_MSIKRANGE_DIV1
  #else
    #define STM32_MSIKDIV_BITS              0U
  #endif
#elif (STM32_DCFG_MSIKDIV_VALUE == 2)
  #if (STM32_MSIKDIV_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_MSIKDIV_BITS              RCC_ICSCR1_MSIKRANGE_DIV2
  #else
    #define STM32_MSIKDIV_BITS              0U
  #endif
#elif (STM32_DCFG_MSIKDIV_VALUE == 3)
  #if (STM32_MSIKDIV_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_MSIKDIV_BITS              RCC_ICSCR1_MSIKRANGE_DIV3
  #else
    #define STM32_MSIKDIV_BITS              0U
  #endif
#elif (STM32_DCFG_MSIKDIV_VALUE == 4)
  #if (STM32_MSIKDIV_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_MSIKDIV_BITS              RCC_ICSCR1_MSIKRANGE_DIV4
  #else
    #define STM32_MSIKDIV_BITS              0U
  #endif
#else
  #error "invalid STM32_DCFG_MSIKDIV_VALUE value specified"
#endif

/**
 * @brief   MSIK range divider clock point.
 */
#if (STM32_MSIKDIV_ENABLED == TRUE) || defined(__DOXYGEN__)
  #define STM32_MSIKDIV_FREQ                (STM32_MSIKRC_FREQ /            \
                                             STM32_DCFG_MSIKDIV_VALUE)
#else
  #define STM32_MSIKDIV_FREQ                0U
#endif

/*--- Macros and checks for the MSIK clock point. --------------------------*/

/**
 * @brief   MSIK clock register bits.
 */
#if (STM32_MSIK_ENABLED == TRUE) || defined(__DOXYGEN__)
  #define STM32_CR_MSIK_BITS                RCC_CR_MSIKON
#else
  #define STM32_CR_MSIK_BITS                0U
#endif

#if (STM32_MSIK_ENABLED == TRUE) || defined(__DOXYGEN__)
  #define STM32_ICSCR1_MSIK_BITS            (RCC_ICSCR1_MSIRGSEL_ICSCR1 |   \
                                             STM32_CFG_MSIBIAS)
#else
  #define STM32_ICSCR1_MSIK_BITS            0U
#endif

/**
 * @brief   MSI kernel oscillator clock point.
 */
#if (STM32_MSIK_ENABLED == TRUE) || defined(__DOXYGEN__)
  #define STM32_MSIK_FREQ                   STM32_MSIKDIV_FREQ
#else
  #define STM32_MSIK_FREQ                   0U
#endif

/*--- Macros and checks for the SYSCLK clock point. ------------------------*/

/**
 * @brief   SYSCLK clock register bits.
 */
#if (STM32_CFG_SYSCLK_SEL == RCC_CFGR1_SW_MSIS) || defined(__DOXYGEN__)
  #define STM32_SYSCLK_BITS                 RCC_CFGR1_SW_MSIS
#elif (STM32_CFG_SYSCLK_SEL == RCC_CFGR1_SW_HSI16)
  #define STM32_SYSCLK_BITS                 RCC_CFGR1_SW_HSI16
#elif (STM32_CFG_SYSCLK_SEL == RCC_CFGR1_SW_HSE)
  #define STM32_SYSCLK_BITS                 RCC_CFGR1_SW_HSE
#else
  #error "invalid STM32_CFG_SYSCLK_SEL value specified"
#endif

/**
 * @brief   System clock clock point.
 */
#if ((STM32_SYSCLK_ENABLED == TRUE) && \
     (STM32_CFG_SYSCLK_SEL == RCC_CFGR1_SW_MSIS)) || \
    defined(__DOXYGEN__)
  #define STM32_SYSCLK_FREQ                 STM32_MSIS_FREQ
#elif (STM32_SYSCLK_ENABLED == TRUE) && \
      (STM32_CFG_SYSCLK_SEL == RCC_CFGR1_SW_HSI16)
  #define STM32_SYSCLK_FREQ                 STM32_HSI16_FREQ
#elif (STM32_SYSCLK_ENABLED == TRUE) && \
      (STM32_CFG_SYSCLK_SEL == RCC_CFGR1_SW_HSE)
  #define STM32_SYSCLK_FREQ                 STM32_HSE_FREQ
#else
  #define STM32_SYSCLK_FREQ                 0U
#endif

#if !defined(RCC_CFGR1_SW_MSIS) && !defined(__DOXYGEN__)
  #error "RCC_CFGR1_SW_MSIS not defined"
#endif
#if !(!((STM32_SYSCLK_ENABLED == TRUE) &&                                   \
      (STM32_CFG_SYSCLK_SEL == RCC_CFGR1_SW_MSIS)) ||                       \
     (STM32_MSIS_FREQ <= STM32_SYSCLK_MAX)) && !defined(__DOXYGEN__)
  #error "STM32_SYSCLK_FREQ above maximum frequency"
#endif

#if !(!((STM32_SYSCLK_ENABLED == TRUE) &&                                   \
      (STM32_CFG_SYSCLK_SEL == RCC_CFGR1_SW_HSI16)) ||                      \
     (STM32_HSI16_FREQ <= STM32_SYSCLK_MAX)) && !defined(__DOXYGEN__)
  #error "STM32_SYSCLK_FREQ above maximum frequency"
#endif

#if !(!((STM32_SYSCLK_ENABLED == TRUE) &&                                   \
      (STM32_CFG_SYSCLK_SEL == RCC_CFGR1_SW_HSE)) ||                        \
     (STM32_HSE_FREQ <= STM32_SYSCLK_MAX)) && !defined(__DOXYGEN__)
  #error "STM32_SYSCLK_FREQ above maximum frequency"
#endif
/** @} */

/*===========================================================================*/
/* Driver data structures and types.                                         */
/*===========================================================================*/

/*===========================================================================*/
/* Driver macros.                                                            */
/*===========================================================================*/

/**
 * @name    Current clock point values
 * @{
 */
#define STM32_NONE_CLOCK                    STM32_NONE_FREQ
#define STM32_HSI16_CLOCK                   hal_lld_get_clock_point(CLK_HSI16)
#define STM32_HSI48_CLOCK                   hal_lld_get_clock_point(CLK_HSI48)
#define STM32_SHSI_CLOCK                    hal_lld_get_clock_point(CLK_SHSI)
#define STM32_HSE_CLOCK                     hal_lld_get_clock_point(CLK_HSE)
#define STM32_LSE_CLOCK                     STM32_LSE_FREQ
#define STM32_LSI_CLOCK                     STM32_LSI_FREQ
#define STM32_MSIRC0_CLOCK                  STM32_MSIRC0_FREQ
#define STM32_MSIRC1_CLOCK                  STM32_MSIRC1_FREQ
#define STM32_MSIRC2_CLOCK                  STM32_MSIRC2_FREQ
#define STM32_MSIRC3_CLOCK                  STM32_MSIRC3_FREQ
#define STM32_MSISRC_CLOCK                  STM32_MSISRC_FREQ
#define STM32_MSISDIV_CLOCK                 STM32_MSISDIV_FREQ
#define STM32_MSIS_CLOCK                    hal_lld_get_clock_point(CLK_MSIS)
#define STM32_MSIKRC_CLOCK                  STM32_MSIKRC_FREQ
#define STM32_MSIKDIV_CLOCK                 STM32_MSIKDIV_FREQ
#define STM32_MSIK_CLOCK                    hal_lld_get_clock_point(CLK_MSIK)
#define STM32_SYSCLK_CLOCK                  hal_lld_get_clock_point(CLK_SYSCLK)
/** @} */

/**
 * @brief   Returns the frequency of a clock point in Hz.
 * @note    Static implementation.
 *
 * @param[in] clkpt     clock point to be returned
 * @return              The clock point frequency in Hz or zero if the
 *                      frequency is unknown.
 *
 * @notapi
 */
#if (STM32_CFG_CLOCK_DYNAMIC == FALSE) || defined(__DOXYGEN__)
#define hal_lld_get_clock_point(clkpt)                                      \
  ((clkpt) == CLK_HSI16        ? STM32_HSI16_FREQ         :                 \
   (clkpt) == CLK_HSI48        ? STM32_HSI48_FREQ         :                 \
   (clkpt) == CLK_SHSI         ? STM32_SHSI_FREQ          :                 \
   (clkpt) == CLK_HSE          ? STM32_HSE_FREQ           :                 \
   (clkpt) == CLK_MSIS         ? STM32_MSIS_FREQ          :                 \
   (clkpt) == CLK_MSIK         ? STM32_MSIK_FREQ          :                 \
   (clkpt) == CLK_SYSCLK       ? STM32_SYSCLK_FREQ        :                 \
   0U)
#endif

/*===========================================================================*/
/* External declarations.                                                    */
/*===========================================================================*/

#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif

#endif /* CLOCKTREE_H */

/** @} */
