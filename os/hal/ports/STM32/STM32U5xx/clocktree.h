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
#define CLK_PLL1IN              6U
#define CLK_PLL1REF             7U
#define CLK_PLL1VCO             8U
#define CLK_PLL1P               9U
#define CLK_PLL1Q               10U
#define CLK_PLL1R               11U
#define CLK_PLL2IN              12U
#define CLK_PLL2REF             13U
#define CLK_PLL2VCO             14U
#define CLK_PLL2P               15U
#define CLK_PLL2Q               16U
#define CLK_PLL2R               17U
#define CLK_PLL3IN              18U
#define CLK_PLL3REF             19U
#define CLK_PLL3VCO             20U
#define CLK_PLL3P               21U
#define CLK_PLL3Q               22U
#define CLK_PLL3R               23U
#define CLK_SYSCLK              24U
#define CLK_HCLK                25U
#define CLK_PCLK1               26U
#define CLK_PCLK1TIM            27U
#define CLK_PCLK2               28U
#define CLK_PCLK2TIM            29U
#define CLK_PCLK3               30U
#define CLK_ARRAY_SIZE          31U

#define CLK_POINT_NAMES                                                     \
  {                                                                         \
    "HSI16",                                                                \
    "HSI48",                                                                \
    "SHSI",                                                                 \
    "HSE",                                                                  \
    "MSIS",                                                                 \
    "MSIK",                                                                 \
    "PLL1IN",                                                               \
    "PLL1REF",                                                              \
    "PLL1VCO",                                                              \
    "PLL1P",                                                                \
    "PLL1Q",                                                                \
    "PLL1R",                                                                \
    "PLL2IN",                                                               \
    "PLL2REF",                                                              \
    "PLL2VCO",                                                              \
    "PLL2P",                                                                \
    "PLL2Q",                                                                \
    "PLL2R",                                                                \
    "PLL3IN",                                                               \
    "PLL3REF",                                                              \
    "PLL3VCO",                                                              \
    "PLL3P",                                                                \
    "PLL3Q",                                                                \
    "PLL3R",                                                                \
    "SYSCLK",                                                               \
    "HCLK",                                                                 \
    "PCLK1",                                                                \
    "PCLK1TIM",                                                             \
    "PCLK2",                                                                \
    "PCLK2TIM",                                                             \
    "PCLK3"                                                                 \
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
#define RCC_BDCR_LSCOSEL_NOCLOCK            0U
#define RCC_BDCR_LSCOSEL_LSI                RCC_BDCR_LSCOEN
#define RCC_BDCR_LSCOSEL_LSE                (RCC_BDCR_LSCOEN | RCC_BDCR_LSCOSEL)
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

#define RCC_PLL1CFGR_PLL1SRC_NOCLOCK        ((0U) << 0U)
#define RCC_PLL1CFGR_PLL1SRC_MSIS           ((1U) << 0U)
#define RCC_PLL1CFGR_PLL1SRC_HSI16          ((2U) << 0U)
#define RCC_PLL1CFGR_PLL1SRC_HSE            ((3U) << 0U)

#define RCC_PLL2CFGR_PLL2SRC_NOCLOCK        ((0U) << 0U)
#define RCC_PLL2CFGR_PLL2SRC_MSIS           ((1U) << 0U)
#define RCC_PLL2CFGR_PLL2SRC_HSI16          ((2U) << 0U)
#define RCC_PLL2CFGR_PLL2SRC_HSE            ((3U) << 0U)

#define RCC_PLL3CFGR_PLL3SRC_NOCLOCK        ((0U) << 0U)
#define RCC_PLL3CFGR_PLL3SRC_MSIS           ((1U) << 0U)
#define RCC_PLL3CFGR_PLL3SRC_HSI16          ((2U) << 0U)
#define RCC_PLL3CFGR_PLL3SRC_HSE            ((3U) << 0U)

#define RCC_CFGR1_SW_MSIS                   ((0U) << 0U)
#define RCC_CFGR1_SW_HSI16                  ((1U) << 0U)
#define RCC_CFGR1_SW_HSE                    ((2U) << 0U)
#define RCC_CFGR1_SW_PLL1P                  ((3U) << 0U)

#define RCC_BDCR_RTCSEL_NOCLOCK             ((0U) << 8U)
#define RCC_BDCR_RTCSEL_LSE                 ((1U) << 8U)
#define RCC_BDCR_RTCSEL_LSI                 ((2U) << 8U)
#define RCC_BDCR_RTCSEL_HSEDIV              ((3U) << 8U)

#define RCC_CCIPR3_LPTIM1SEL_MSIK           ((0U) << 10U)
#define RCC_CCIPR3_LPTIM1SEL_LSI            ((1U) << 10U)
#define RCC_CCIPR3_LPTIM1SEL_HSI16          ((2U) << 10U)
#define RCC_CCIPR3_LPTIM1SEL_LSE            ((3U) << 10U)

#define RCC_CCIPR1_LPTIM2SEL_PCLK1          ((0U) << 18U)
#define RCC_CCIPR1_LPTIM2SEL_LSI            ((1U) << 18U)
#define RCC_CCIPR1_LPTIM2SEL_HSI16          ((2U) << 18U)
#define RCC_CCIPR1_LPTIM2SEL_LSE            ((3U) << 18U)

#define RCC_CCIPR3_LPTIM34SEL_MSIK          ((0U) << 8U)
#define RCC_CCIPR3_LPTIM34SEL_LSI           ((1U) << 8U)
#define RCC_CCIPR3_LPTIM34SEL_HSI16         ((2U) << 8U)
#define RCC_CCIPR3_LPTIM34SEL_LSE           ((3U) << 8U)
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

#define RCC_CFGR2_HPRE_DIV1                 ((0U) << 0U)
#define RCC_CFGR2_HPRE_DIV2                 ((8U) << 0U)
#define RCC_CFGR2_HPRE_DIV4                 ((9U) << 0U)
#define RCC_CFGR2_HPRE_DIV8                 ((10U) << 0U)
#define RCC_CFGR2_HPRE_DIV16                ((11U) << 0U)
#define RCC_CFGR2_HPRE_DIV64                ((12U) << 0U)
#define RCC_CFGR2_HPRE_DIV128               ((13U) << 0U)
#define RCC_CFGR2_HPRE_DIV256               ((14U) << 0U)
#define RCC_CFGR2_HPRE_DIV512               ((15U) << 0U)

#define RCC_CFGR2_PPRE1_DIV1                ((0U) << 4U)
#define RCC_CFGR2_PPRE1_DIV2                ((4U) << 4U)
#define RCC_CFGR2_PPRE1_DIV4                ((5U) << 4U)
#define RCC_CFGR2_PPRE1_DIV8                ((6U) << 4U)
#define RCC_CFGR2_PPRE1_DIV16               ((7U) << 4U)

#define RCC_CFGR2_PPRE2_DIV1                ((0U) << 8U)
#define RCC_CFGR2_PPRE2_DIV2                ((4U) << 8U)
#define RCC_CFGR2_PPRE2_DIV4                ((5U) << 8U)
#define RCC_CFGR2_PPRE2_DIV8                ((6U) << 8U)
#define RCC_CFGR2_PPRE2_DIV16               ((7U) << 8U)

#define RCC_CFGR3_PPRE3_DIV1                ((0U) << 4U)
#define RCC_CFGR3_PPRE3_DIV2                ((4U) << 4U)
#define RCC_CFGR3_PPRE3_DIV4                ((5U) << 4U)
#define RCC_CFGR3_PPRE3_DIV8                ((6U) << 4U)
#define RCC_CFGR3_PPRE3_DIV16               ((7U) << 4U)
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
 * @brief   Enables demand for the PLL1 P output clock.
 */
#if !defined(STM32_CFG_PLL1P_REQUIRED) || defined(__DOXYGEN__)
  #define STM32_CFG_PLL1P_REQUIRED          FALSE
#endif

/**
 * @brief   Enables demand for the PLL1 Q output clock.
 */
#if !defined(STM32_CFG_PLL1Q_REQUIRED) || defined(__DOXYGEN__)
  #define STM32_CFG_PLL1Q_REQUIRED          FALSE
#endif

/**
 * @brief   Enables demand for the PLL1 R output clock.
 */
#if !defined(STM32_CFG_PLL1R_REQUIRED) || defined(__DOXYGEN__)
  #define STM32_CFG_PLL1R_REQUIRED          FALSE
#endif

/**
 * @brief   Enables demand for the PLL2 P output clock.
 */
#if !defined(STM32_CFG_PLL2P_REQUIRED) || defined(__DOXYGEN__)
  #define STM32_CFG_PLL2P_REQUIRED          FALSE
#endif

/**
 * @brief   Enables demand for the PLL2 Q output clock.
 */
#if !defined(STM32_CFG_PLL2Q_REQUIRED) || defined(__DOXYGEN__)
  #define STM32_CFG_PLL2Q_REQUIRED          FALSE
#endif

/**
 * @brief   Enables demand for the PLL2 R output clock.
 */
#if !defined(STM32_CFG_PLL2R_REQUIRED) || defined(__DOXYGEN__)
  #define STM32_CFG_PLL2R_REQUIRED          FALSE
#endif

/**
 * @brief   Enables demand for the PLL3 P output clock.
 */
#if !defined(STM32_CFG_PLL3P_REQUIRED) || defined(__DOXYGEN__)
  #define STM32_CFG_PLL3P_REQUIRED          FALSE
#endif

/**
 * @brief   Enables demand for the PLL3 Q output clock.
 */
#if !defined(STM32_CFG_PLL3Q_REQUIRED) || defined(__DOXYGEN__)
  #define STM32_CFG_PLL3Q_REQUIRED          FALSE
#endif

/**
 * @brief   Enables demand for the PLL3 R output clock.
 */
#if !defined(STM32_CFG_PLL3R_REQUIRED) || defined(__DOXYGEN__)
  #define STM32_CFG_PLL3R_REQUIRED          FALSE
#endif

/**
 * @brief   Enables demand for the LPTIM1 clock.
 */
#if !defined(STM32_CFG_LPTIM1_REQUIRED) || defined(__DOXYGEN__)
  #define STM32_CFG_LPTIM1_REQUIRED         FALSE
#endif

/**
 * @brief   Enables demand for the LPTIM2 clock.
 */
#if !defined(STM32_CFG_LPTIM2_REQUIRED) || defined(__DOXYGEN__)
  #define STM32_CFG_LPTIM2_REQUIRED         FALSE
#endif

/**
 * @brief   Enables demand for the LPTIM3 and LPTIM4 clocks.
 */
#if !defined(STM32_CFG_LPTIM34_REQUIRED) || defined(__DOXYGEN__)
  #define STM32_CFG_LPTIM34_REQUIRED        FALSE
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
 * @brief   Selects the PLL1IN clock source.
 * @note    Allowed sources:
 *          - NONE.
 *          - MSIS.
 *          - HSI16.
 *          - HSE.
 */
#if !defined(STM32_CFG_PLL1IN_SEL) || defined(__DOXYGEN__)
  #define STM32_CFG_PLL1IN_SEL              RCC_PLL1CFGR_PLL1SRC_MSIS
#endif

/**
 * @brief   Configures the PLL1REF clock divider value.
 */
#if !defined(STM32_CFG_PLL1REF_VALUE) || defined(__DOXYGEN__)
  #define STM32_CFG_PLL1REF_VALUE           1
#endif

/**
 * @brief   Configures the PLL1VCO clock multiplier value.
 */
#if !defined(STM32_CFG_PLL1VCO_VALUE) || defined(__DOXYGEN__)
  #define STM32_CFG_PLL1VCO_VALUE           32
#endif

/**
 * @brief   Configures the PLL1P clock divider value.
 */
#if !defined(STM32_CFG_PLL1P_VALUE) || defined(__DOXYGEN__)
  #define STM32_CFG_PLL1P_VALUE             4
#endif

/**
 * @brief   Configures the PLL1Q clock divider value.
 */
#if !defined(STM32_CFG_PLL1Q_VALUE) || defined(__DOXYGEN__)
  #define STM32_CFG_PLL1Q_VALUE             4
#endif

/**
 * @brief   Configures the PLL1R clock divider value.
 */
#if !defined(STM32_CFG_PLL1R_VALUE) || defined(__DOXYGEN__)
  #define STM32_CFG_PLL1R_VALUE             4
#endif

/**
 * @brief   Selects the PLL2IN clock source.
 * @note    Allowed sources:
 *          - NONE.
 *          - MSIS.
 *          - HSI16.
 *          - HSE.
 */
#if !defined(STM32_CFG_PLL2IN_SEL) || defined(__DOXYGEN__)
  #define STM32_CFG_PLL2IN_SEL              RCC_PLL2CFGR_PLL2SRC_MSIS
#endif

/**
 * @brief   Configures the PLL2REF clock divider value.
 */
#if !defined(STM32_CFG_PLL2REF_VALUE) || defined(__DOXYGEN__)
  #define STM32_CFG_PLL2REF_VALUE           1
#endif

/**
 * @brief   Configures the PLL2VCO clock multiplier value.
 */
#if !defined(STM32_CFG_PLL2VCO_VALUE) || defined(__DOXYGEN__)
  #define STM32_CFG_PLL2VCO_VALUE           32
#endif

/**
 * @brief   Configures the PLL2P clock divider value.
 */
#if !defined(STM32_CFG_PLL2P_VALUE) || defined(__DOXYGEN__)
  #define STM32_CFG_PLL2P_VALUE             4
#endif

/**
 * @brief   Configures the PLL2Q clock divider value.
 */
#if !defined(STM32_CFG_PLL2Q_VALUE) || defined(__DOXYGEN__)
  #define STM32_CFG_PLL2Q_VALUE             4
#endif

/**
 * @brief   Configures the PLL2R clock divider value.
 */
#if !defined(STM32_CFG_PLL2R_VALUE) || defined(__DOXYGEN__)
  #define STM32_CFG_PLL2R_VALUE             4
#endif

/**
 * @brief   Selects the PLL3IN clock source.
 * @note    Allowed sources:
 *          - NONE.
 *          - MSIS.
 *          - HSI16.
 *          - HSE.
 */
#if !defined(STM32_CFG_PLL3IN_SEL) || defined(__DOXYGEN__)
  #define STM32_CFG_PLL3IN_SEL              RCC_PLL3CFGR_PLL3SRC_MSIS
#endif

/**
 * @brief   Configures the PLL3REF clock divider value.
 */
#if !defined(STM32_CFG_PLL3REF_VALUE) || defined(__DOXYGEN__)
  #define STM32_CFG_PLL3REF_VALUE           1
#endif

/**
 * @brief   Configures the PLL3VCO clock multiplier value.
 */
#if !defined(STM32_CFG_PLL3VCO_VALUE) || defined(__DOXYGEN__)
  #define STM32_CFG_PLL3VCO_VALUE           32
#endif

/**
 * @brief   Configures the PLL3P clock divider value.
 */
#if !defined(STM32_CFG_PLL3P_VALUE) || defined(__DOXYGEN__)
  #define STM32_CFG_PLL3P_VALUE             4
#endif

/**
 * @brief   Configures the PLL3Q clock divider value.
 */
#if !defined(STM32_CFG_PLL3Q_VALUE) || defined(__DOXYGEN__)
  #define STM32_CFG_PLL3Q_VALUE             4
#endif

/**
 * @brief   Configures the PLL3R clock divider value.
 */
#if !defined(STM32_CFG_PLL3R_VALUE) || defined(__DOXYGEN__)
  #define STM32_CFG_PLL3R_VALUE             4
#endif

/**
 * @brief   Selects the SYSCLK clock source.
 * @note    Allowed sources:
 *          - MSIS.
 *          - HSI16.
 *          - HSE.
 *          - PLL1P.
 */
#if !defined(STM32_CFG_SYSCLK_SEL) || defined(__DOXYGEN__)
  #define STM32_CFG_SYSCLK_SEL              RCC_CFGR1_SW_MSIS
#endif

/**
 * @brief   Configures the HCLK clock divider value.
 */
#if !defined(STM32_CFG_HCLK_VALUE) || defined(__DOXYGEN__)
  #define STM32_CFG_HCLK_VALUE              1
#endif

/**
 * @brief   Configures the PCLK1 clock divider value.
 */
#if !defined(STM32_CFG_PCLK1_VALUE) || defined(__DOXYGEN__)
  #define STM32_CFG_PCLK1_VALUE             1
#endif

/**
 * @brief   Configures the PCLK2 clock divider value.
 */
#if !defined(STM32_CFG_PCLK2_VALUE) || defined(__DOXYGEN__)
  #define STM32_CFG_PCLK2_VALUE             1
#endif

/**
 * @brief   Configures the PCLK3 clock divider value.
 */
#if !defined(STM32_CFG_PCLK3_VALUE) || defined(__DOXYGEN__)
  #define STM32_CFG_PCLK3_VALUE             1
#endif

/**
 * @brief   Selects the RTC clock source.
 * @note    Allowed sources:
 *          - NONE.
 *          - LSE.
 *          - LSI.
 *          - HSEDIV.
 */
#if !defined(STM32_CFG_RTC_SEL) || defined(__DOXYGEN__)
  #define STM32_CFG_RTC_SEL                 RCC_BDCR_RTCSEL_NOCLOCK
#endif

/**
 * @brief   Selects the LSCO clock source.
 * @note    Allowed sources:
 *          - NONE.
 *          - LSI.
 *          - LSESYS.
 */
#if !defined(STM32_CFG_LSCO_SEL) || defined(__DOXYGEN__)
  #define STM32_CFG_LSCO_SEL                RCC_BDCR_LSCOSEL_NOCLOCK
#endif

/**
 * @brief   Selects the LPTIM1 clock source.
 * @note    Allowed sources:
 *          - MSIK.
 *          - LSI.
 *          - HSI16.
 *          - LSESYS.
 */
#if !defined(STM32_CFG_LPTIM1_SEL) || defined(__DOXYGEN__)
  #define STM32_CFG_LPTIM1_SEL              RCC_CCIPR3_LPTIM1SEL_MSIK
#endif

/**
 * @brief   Selects the LPTIM2 clock source.
 * @note    Allowed sources:
 *          - PCLK1.
 *          - LSI.
 *          - HSI16.
 *          - LSESYS.
 */
#if !defined(STM32_CFG_LPTIM2_SEL) || defined(__DOXYGEN__)
  #define STM32_CFG_LPTIM2_SEL              RCC_CCIPR1_LPTIM2SEL_PCLK1
#endif

/**
 * @brief   Selects the LPTIM34 clock source.
 * @note    Allowed sources:
 *          - MSIK.
 *          - LSI.
 *          - HSI16.
 *          - LSESYS.
 */
#if !defined(STM32_CFG_LPTIM34_SEL) || defined(__DOXYGEN__)
  #define STM32_CFG_LPTIM34_SEL             RCC_CCIPR3_LPTIM34SEL_MSIK
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

#if !((STM32_CFG_PLL1P_REQUIRED == TRUE) ||                                 \
     (STM32_CFG_PLL1P_REQUIRED == FALSE)) && !defined(__DOXYGEN__)
  #error "invalid STM32_CFG_PLL1P_REQUIRED value specified"
#endif

#if !((STM32_CFG_PLL1Q_REQUIRED == TRUE) ||                                 \
     (STM32_CFG_PLL1Q_REQUIRED == FALSE)) && !defined(__DOXYGEN__)
  #error "invalid STM32_CFG_PLL1Q_REQUIRED value specified"
#endif

#if !((STM32_CFG_PLL1R_REQUIRED == TRUE) ||                                 \
     (STM32_CFG_PLL1R_REQUIRED == FALSE)) && !defined(__DOXYGEN__)
  #error "invalid STM32_CFG_PLL1R_REQUIRED value specified"
#endif

#if !((STM32_CFG_PLL2P_REQUIRED == TRUE) ||                                 \
     (STM32_CFG_PLL2P_REQUIRED == FALSE)) && !defined(__DOXYGEN__)
  #error "invalid STM32_CFG_PLL2P_REQUIRED value specified"
#endif

#if !((STM32_CFG_PLL2Q_REQUIRED == TRUE) ||                                 \
     (STM32_CFG_PLL2Q_REQUIRED == FALSE)) && !defined(__DOXYGEN__)
  #error "invalid STM32_CFG_PLL2Q_REQUIRED value specified"
#endif

#if !((STM32_CFG_PLL2R_REQUIRED == TRUE) ||                                 \
     (STM32_CFG_PLL2R_REQUIRED == FALSE)) && !defined(__DOXYGEN__)
  #error "invalid STM32_CFG_PLL2R_REQUIRED value specified"
#endif

#if !((STM32_CFG_PLL3P_REQUIRED == TRUE) ||                                 \
     (STM32_CFG_PLL3P_REQUIRED == FALSE)) && !defined(__DOXYGEN__)
  #error "invalid STM32_CFG_PLL3P_REQUIRED value specified"
#endif

#if !((STM32_CFG_PLL3Q_REQUIRED == TRUE) ||                                 \
     (STM32_CFG_PLL3Q_REQUIRED == FALSE)) && !defined(__DOXYGEN__)
  #error "invalid STM32_CFG_PLL3Q_REQUIRED value specified"
#endif

#if !((STM32_CFG_PLL3R_REQUIRED == TRUE) ||                                 \
     (STM32_CFG_PLL3R_REQUIRED == FALSE)) && !defined(__DOXYGEN__)
  #error "invalid STM32_CFG_PLL3R_REQUIRED value specified"
#endif

#if !((STM32_CFG_LPTIM1_REQUIRED == TRUE) ||                                \
     (STM32_CFG_LPTIM1_REQUIRED == FALSE)) && !defined(__DOXYGEN__)
  #error "invalid STM32_CFG_LPTIM1_REQUIRED value specified"
#endif

#if !((STM32_CFG_LPTIM2_REQUIRED == TRUE) ||                                \
     (STM32_CFG_LPTIM2_REQUIRED == FALSE)) && !defined(__DOXYGEN__)
  #error "invalid STM32_CFG_LPTIM2_REQUIRED value specified"
#endif

#if !((STM32_CFG_LPTIM34_REQUIRED == TRUE) ||                               \
     (STM32_CFG_LPTIM34_REQUIRED == FALSE)) && !defined(__DOXYGEN__)
  #error "invalid STM32_CFG_LPTIM34_REQUIRED value specified"
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
#define STM32_MSIS_ENABLED                  (((STM32_PLL1IN_ENABLED == TRUE) && \
                                              (STM32_CFG_PLL1IN_SEL == RCC_PLL1CFGR_PLL1SRC_MSIS)) || \
                                             ((STM32_PLL2IN_ENABLED == TRUE) && \
                                              (STM32_CFG_PLL2IN_SEL == RCC_PLL2CFGR_PLL2SRC_MSIS)) || \
                                             ((STM32_PLL3IN_ENABLED == TRUE) && \
                                              (STM32_CFG_PLL3IN_SEL == RCC_PLL3CFGR_PLL3SRC_MSIS)) || \
                                             ((STM32_SYSCLK_ENABLED == TRUE) && \
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
#define STM32_MSIK_ENABLED                  (((STM32_LPTIM1_ENABLED == TRUE) && \
                                              (STM32_CFG_LPTIM1_SEL == RCC_CCIPR3_LPTIM1SEL_MSIK)) || \
                                             ((STM32_LPTIM34_ENABLED == TRUE) && \
                                              (STM32_CFG_LPTIM34_SEL == RCC_CCIPR3_LPTIM34SEL_MSIK)))

/**
 * @brief   PLL1IN clock derived enable state.
 */
#define STM32_PLL1IN_ENABLED                ((STM32_PLL1REF_ENABLED == TRUE))

/**
 * @brief   PLL1REF clock derived enable state.
 */
#define STM32_PLL1REF_ENABLED               ((STM32_PLL1VCO_ENABLED == TRUE))

/**
 * @brief   PLL1VCO clock derived enable state.
 */
#define STM32_PLL1VCO_ENABLED               ((STM32_PLL1P_ENABLED == TRUE) || \
                                             (STM32_PLL1Q_ENABLED == TRUE) || \
                                             (STM32_PLL1R_ENABLED == TRUE))

/**
 * @brief   PLL1P clock derived enable state.
 */
#define STM32_PLL1P_ENABLED                 ((STM32_CFG_PLL1P_REQUIRED == TRUE) || \
                                             ((STM32_SYSCLK_ENABLED == TRUE) && \
                                              (STM32_CFG_SYSCLK_SEL == RCC_CFGR1_SW_PLL1P)))

/**
 * @brief   PLL1Q clock derived enable state.
 */
#define STM32_PLL1Q_ENABLED                 ((STM32_CFG_PLL1Q_REQUIRED == TRUE))

/**
 * @brief   PLL1R clock derived enable state.
 */
#define STM32_PLL1R_ENABLED                 ((STM32_CFG_PLL1R_REQUIRED == TRUE))

/**
 * @brief   PLL2IN clock derived enable state.
 */
#define STM32_PLL2IN_ENABLED                ((STM32_PLL2REF_ENABLED == TRUE))

/**
 * @brief   PLL2REF clock derived enable state.
 */
#define STM32_PLL2REF_ENABLED               ((STM32_PLL2VCO_ENABLED == TRUE))

/**
 * @brief   PLL2VCO clock derived enable state.
 */
#define STM32_PLL2VCO_ENABLED               ((STM32_PLL2P_ENABLED == TRUE) || \
                                             (STM32_PLL2Q_ENABLED == TRUE) || \
                                             (STM32_PLL2R_ENABLED == TRUE))

/**
 * @brief   PLL2P clock derived enable state.
 */
#define STM32_PLL2P_ENABLED                 ((STM32_CFG_PLL2P_REQUIRED == TRUE))

/**
 * @brief   PLL2Q clock derived enable state.
 */
#define STM32_PLL2Q_ENABLED                 ((STM32_CFG_PLL2Q_REQUIRED == TRUE))

/**
 * @brief   PLL2R clock derived enable state.
 */
#define STM32_PLL2R_ENABLED                 ((STM32_CFG_PLL2R_REQUIRED == TRUE))

/**
 * @brief   PLL3IN clock derived enable state.
 */
#define STM32_PLL3IN_ENABLED                ((STM32_PLL3REF_ENABLED == TRUE))

/**
 * @brief   PLL3REF clock derived enable state.
 */
#define STM32_PLL3REF_ENABLED               ((STM32_PLL3VCO_ENABLED == TRUE))

/**
 * @brief   PLL3VCO clock derived enable state.
 */
#define STM32_PLL3VCO_ENABLED               ((STM32_PLL3P_ENABLED == TRUE) || \
                                             (STM32_PLL3Q_ENABLED == TRUE) || \
                                             (STM32_PLL3R_ENABLED == TRUE))

/**
 * @brief   PLL3P clock derived enable state.
 */
#define STM32_PLL3P_ENABLED                 ((STM32_CFG_PLL3P_REQUIRED == TRUE))

/**
 * @brief   PLL3Q clock derived enable state.
 */
#define STM32_PLL3Q_ENABLED                 ((STM32_CFG_PLL3Q_REQUIRED == TRUE))

/**
 * @brief   PLL3R clock derived enable state.
 */
#define STM32_PLL3R_ENABLED                 ((STM32_CFG_PLL3R_REQUIRED == TRUE))

/**
 * @brief   SYSCLK clock derived enable state.
 */
#define STM32_SYSCLK_ENABLED                TRUE

/**
 * @brief   HCLK clock derived enable state.
 */
#define STM32_HCLK_ENABLED                  TRUE

/**
 * @brief   PCLK1 clock derived enable state.
 */
#define STM32_PCLK1_ENABLED                 TRUE

/**
 * @brief   PCLK1TIM clock derived enable state.
 */
#define STM32_PCLK1TIM_ENABLED              TRUE

/**
 * @brief   PCLK2 clock derived enable state.
 */
#define STM32_PCLK2_ENABLED                 TRUE

/**
 * @brief   PCLK2TIM clock derived enable state.
 */
#define STM32_PCLK2TIM_ENABLED              TRUE

/**
 * @brief   PCLK3 clock derived enable state.
 */
#define STM32_PCLK3_ENABLED                 TRUE

/**
 * @brief   HSEDIV clock derived enable state.
 */
#define STM32_HSEDIV_ENABLED                (((STM32_RTC_ENABLED == TRUE) && \
                                              (STM32_CFG_RTC_SEL == RCC_BDCR_RTCSEL_HSEDIV)))

/**
 * @brief   LSESYS clock derived enable state.
 */
#define STM32_LSESYS_ENABLED                (((STM32_LSCO_ENABLED == TRUE) && \
                                              (STM32_CFG_LSCO_SEL == RCC_BDCR_LSCOSEL_LSE)) || \
                                             ((STM32_LPTIM1_ENABLED == TRUE) && \
                                              (STM32_CFG_LPTIM1_SEL == RCC_CCIPR3_LPTIM1SEL_LSE)) || \
                                             ((STM32_LPTIM2_ENABLED == TRUE) && \
                                              (STM32_CFG_LPTIM2_SEL == RCC_CCIPR1_LPTIM2SEL_LSE)) || \
                                             ((STM32_LPTIM34_ENABLED == TRUE) && \
                                              (STM32_CFG_LPTIM34_SEL == RCC_CCIPR3_LPTIM34SEL_LSE)))

/**
 * @brief   RTC clock derived enable state.
 */
#define STM32_RTC_ENABLED                   TRUE

/**
 * @brief   LSCO clock derived enable state.
 */
#define STM32_LSCO_ENABLED                  TRUE

/**
 * @brief   LPTIM1 clock derived enable state.
 */
#define STM32_LPTIM1_ENABLED                ((STM32_CFG_LPTIM1_REQUIRED == TRUE))

/**
 * @brief   LPTIM2 clock derived enable state.
 */
#define STM32_LPTIM2_ENABLED                ((STM32_CFG_LPTIM2_REQUIRED == TRUE))

/**
 * @brief   LPTIM34 clock derived enable state.
 */
#define STM32_LPTIM34_ENABLED               ((STM32_CFG_LPTIM34_REQUIRED == TRUE))

/**
 * @brief   IWDG clock derived enable state.
 */
#define STM32_IWDG_ENABLED                  (((HAL_USE_WDG == TRUE) &&      \
                                              (STM32_WDG_USE_IWDG == TRUE)))

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

#if !defined(RCC_PLL1CFGR_PLL1SRC_HSI16) && !defined(__DOXYGEN__)
  #error "RCC_PLL1CFGR_PLL1SRC_HSI16 not defined"
#endif
#if !((STM32_HSI16_ENABLED == TRUE) || !((STM32_PLL1IN_ENABLED == TRUE) &&  \
      (STM32_CFG_PLL1IN_SEL == RCC_PLL1CFGR_PLL1SRC_HSI16))) &&             \
    !defined(__DOXYGEN__)
  #error "HSI16 not enabled, required by PLL1IN"
#endif

#if !defined(RCC_PLL2CFGR_PLL2SRC_HSI16) && !defined(__DOXYGEN__)
  #error "RCC_PLL2CFGR_PLL2SRC_HSI16 not defined"
#endif
#if !((STM32_HSI16_ENABLED == TRUE) || !((STM32_PLL2IN_ENABLED == TRUE) &&  \
      (STM32_CFG_PLL2IN_SEL == RCC_PLL2CFGR_PLL2SRC_HSI16))) &&             \
    !defined(__DOXYGEN__)
  #error "HSI16 not enabled, required by PLL2IN"
#endif

#if !defined(RCC_PLL3CFGR_PLL3SRC_HSI16) && !defined(__DOXYGEN__)
  #error "RCC_PLL3CFGR_PLL3SRC_HSI16 not defined"
#endif
#if !((STM32_HSI16_ENABLED == TRUE) || !((STM32_PLL3IN_ENABLED == TRUE) &&  \
      (STM32_CFG_PLL3IN_SEL == RCC_PLL3CFGR_PLL3SRC_HSI16))) &&             \
    !defined(__DOXYGEN__)
  #error "HSI16 not enabled, required by PLL3IN"
#endif

#if !defined(RCC_CFGR1_SW_HSI16) && !defined(__DOXYGEN__)
  #error "RCC_CFGR1_SW_HSI16 not defined"
#endif
#if !((STM32_HSI16_ENABLED == TRUE) || !((STM32_SYSCLK_ENABLED == TRUE) &&  \
      (STM32_CFG_SYSCLK_SEL == RCC_CFGR1_SW_HSI16))) && !defined(__DOXYGEN__)
  #error "HSI16 not enabled, required by SYSCLK"
#endif

#if !defined(RCC_CCIPR3_LPTIM1SEL_HSI16) && !defined(__DOXYGEN__)
  #error "RCC_CCIPR3_LPTIM1SEL_HSI16 not defined"
#endif
#if !((STM32_HSI16_ENABLED == TRUE) || !((STM32_LPTIM1_ENABLED == TRUE) &&  \
      (STM32_CFG_LPTIM1_SEL == RCC_CCIPR3_LPTIM1SEL_HSI16))) &&             \
    !defined(__DOXYGEN__)
  #error "HSI16 not enabled, required by LPTIM1"
#endif

#if !defined(RCC_CCIPR1_LPTIM2SEL_HSI16) && !defined(__DOXYGEN__)
  #error "RCC_CCIPR1_LPTIM2SEL_HSI16 not defined"
#endif
#if !((STM32_HSI16_ENABLED == TRUE) || !((STM32_LPTIM2_ENABLED == TRUE) &&  \
      (STM32_CFG_LPTIM2_SEL == RCC_CCIPR1_LPTIM2SEL_HSI16))) &&             \
    !defined(__DOXYGEN__)
  #error "HSI16 not enabled, required by LPTIM2"
#endif

#if !defined(RCC_CCIPR3_LPTIM34SEL_HSI16) && !defined(__DOXYGEN__)
  #error "RCC_CCIPR3_LPTIM34SEL_HSI16 not defined"
#endif
#if !((STM32_HSI16_ENABLED == TRUE) || !((STM32_LPTIM34_ENABLED == TRUE) && \
      (STM32_CFG_LPTIM34_SEL == RCC_CCIPR3_LPTIM34SEL_HSI16))) &&           \
    !defined(__DOXYGEN__)
  #error "HSI16 not enabled, required by LPTIM34"
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

#if !defined(RCC_PLL1CFGR_PLL1SRC_HSE) && !defined(__DOXYGEN__)
  #error "RCC_PLL1CFGR_PLL1SRC_HSE not defined"
#endif
#if !((STM32_HSE_ENABLED == TRUE) || !((STM32_PLL1IN_ENABLED == TRUE) &&    \
      (STM32_CFG_PLL1IN_SEL == RCC_PLL1CFGR_PLL1SRC_HSE))) &&               \
    !defined(__DOXYGEN__)
  #error "HSE not enabled, required by PLL1IN"
#endif

#if !defined(RCC_PLL2CFGR_PLL2SRC_HSE) && !defined(__DOXYGEN__)
  #error "RCC_PLL2CFGR_PLL2SRC_HSE not defined"
#endif
#if !((STM32_HSE_ENABLED == TRUE) || !((STM32_PLL2IN_ENABLED == TRUE) &&    \
      (STM32_CFG_PLL2IN_SEL == RCC_PLL2CFGR_PLL2SRC_HSE))) &&               \
    !defined(__DOXYGEN__)
  #error "HSE not enabled, required by PLL2IN"
#endif

#if !defined(RCC_PLL3CFGR_PLL3SRC_HSE) && !defined(__DOXYGEN__)
  #error "RCC_PLL3CFGR_PLL3SRC_HSE not defined"
#endif
#if !((STM32_HSE_ENABLED == TRUE) || !((STM32_PLL3IN_ENABLED == TRUE) &&    \
      (STM32_CFG_PLL3IN_SEL == RCC_PLL3CFGR_PLL3SRC_HSE))) &&               \
    !defined(__DOXYGEN__)
  #error "HSE not enabled, required by PLL3IN"
#endif

#if !defined(RCC_CFGR1_SW_HSE) && !defined(__DOXYGEN__)
  #error "RCC_CFGR1_SW_HSE not defined"
#endif
#if !((STM32_HSE_ENABLED == TRUE) || !((STM32_SYSCLK_ENABLED == TRUE) &&    \
      (STM32_CFG_SYSCLK_SEL == RCC_CFGR1_SW_HSE))) && !defined(__DOXYGEN__)
  #error "HSE not enabled, required by SYSCLK"
#endif

#if !defined(STM32_HSEDIV_ENABLED) && !defined(__DOXYGEN__)
  #error "STM32_HSEDIV_ENABLED not defined"
#endif
#if !((STM32_HSE_ENABLED == TRUE) || !((STM32_HSEDIV_ENABLED == TRUE))) &&  \
    !defined(__DOXYGEN__)
  #error "HSE not enabled, required by HSEDIV"
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

#if !defined(STM32_LSESYS_ENABLED) && !defined(__DOXYGEN__)
  #error "STM32_LSESYS_ENABLED not defined"
#endif
#if !((STM32_LSE_ENABLED == TRUE) || !((STM32_LSESYS_ENABLED == TRUE))) &&  \
    !defined(__DOXYGEN__)
  #error "LSE not enabled, required by LSESYS"
#endif

#if !defined(RCC_BDCR_RTCSEL_LSE) && !defined(__DOXYGEN__)
  #error "RCC_BDCR_RTCSEL_LSE not defined"
#endif
#if !((STM32_LSE_ENABLED == TRUE) || !((STM32_RTC_ENABLED == TRUE) &&       \
      (STM32_CFG_RTC_SEL == RCC_BDCR_RTCSEL_LSE))) && !defined(__DOXYGEN__)
  #error "LSE not enabled, required by RTC"
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

#if !defined(RCC_BDCR_RTCSEL_LSI) && !defined(__DOXYGEN__)
  #error "RCC_BDCR_RTCSEL_LSI not defined"
#endif
#if !((STM32_LSI_ENABLED == TRUE) || !((STM32_RTC_ENABLED == TRUE) &&       \
      (STM32_CFG_RTC_SEL == RCC_BDCR_RTCSEL_LSI))) && !defined(__DOXYGEN__)
  #error "LSI not enabled, required by RTC"
#endif

#if !((STM32_LSI_ENABLED == TRUE) || !((STM32_LSCO_ENABLED == TRUE) &&      \
      (STM32_CFG_LSCO_SEL == RCC_BDCR_LSCOSEL_LSI))) && !defined(__DOXYGEN__)
  #error "LSI not enabled, required by LSCO"
#endif

#if !defined(RCC_CCIPR3_LPTIM1SEL_LSI) && !defined(__DOXYGEN__)
  #error "RCC_CCIPR3_LPTIM1SEL_LSI not defined"
#endif
#if !((STM32_LSI_ENABLED == TRUE) || !((STM32_LPTIM1_ENABLED == TRUE) &&    \
      (STM32_CFG_LPTIM1_SEL == RCC_CCIPR3_LPTIM1SEL_LSI))) &&               \
    !defined(__DOXYGEN__)
  #error "LSI not enabled, required by LPTIM1"
#endif

#if !defined(RCC_CCIPR1_LPTIM2SEL_LSI) && !defined(__DOXYGEN__)
  #error "RCC_CCIPR1_LPTIM2SEL_LSI not defined"
#endif
#if !((STM32_LSI_ENABLED == TRUE) || !((STM32_LPTIM2_ENABLED == TRUE) &&    \
      (STM32_CFG_LPTIM2_SEL == RCC_CCIPR1_LPTIM2SEL_LSI))) &&               \
    !defined(__DOXYGEN__)
  #error "LSI not enabled, required by LPTIM2"
#endif

#if !defined(RCC_CCIPR3_LPTIM34SEL_LSI) && !defined(__DOXYGEN__)
  #error "RCC_CCIPR3_LPTIM34SEL_LSI not defined"
#endif
#if !((STM32_LSI_ENABLED == TRUE) || !((STM32_LPTIM34_ENABLED == TRUE) &&   \
      (STM32_CFG_LPTIM34_SEL == RCC_CCIPR3_LPTIM34SEL_LSI))) &&             \
    !defined(__DOXYGEN__)
  #error "LSI not enabled, required by LPTIM34"
#endif

#if !defined(STM32_IWDG_ENABLED) && !defined(__DOXYGEN__)
  #error "STM32_IWDG_ENABLED not defined"
#endif
#if !((STM32_LSI_ENABLED == TRUE) || !((STM32_IWDG_ENABLED == TRUE))) &&    \
    !defined(__DOXYGEN__)
  #error "LSI not enabled, required by IWDG"
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

/*--- Macros and checks for the PLL1IN clock point. ------------------------*/

/**
 * @brief   PLL1IN clock register bits.
 */
#if (STM32_PLL1IN_ENABLED == FALSE)
  #define STM32_PLL1IN_BITS                 RCC_PLL1CFGR_PLL1SRC_NOCLOCK
#elif (STM32_CFG_PLL1IN_SEL == RCC_PLL1CFGR_PLL1SRC_NOCLOCK) ||             \
      defined(__DOXYGEN__)
  #if (STM32_PLL1IN_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_PLL1IN_BITS               RCC_PLL1CFGR_PLL1SRC_NOCLOCK
  #else
    #define STM32_PLL1IN_BITS               0U
  #endif
#elif (STM32_CFG_PLL1IN_SEL == RCC_PLL1CFGR_PLL1SRC_MSIS)
  #if (STM32_PLL1IN_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_PLL1IN_BITS               RCC_PLL1CFGR_PLL1SRC_MSIS
  #else
    #define STM32_PLL1IN_BITS               0U
  #endif
#elif (STM32_CFG_PLL1IN_SEL == RCC_PLL1CFGR_PLL1SRC_HSI16)
  #if (STM32_PLL1IN_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_PLL1IN_BITS               RCC_PLL1CFGR_PLL1SRC_HSI16
  #else
    #define STM32_PLL1IN_BITS               0U
  #endif
#elif (STM32_CFG_PLL1IN_SEL == RCC_PLL1CFGR_PLL1SRC_HSE)
  #if (STM32_PLL1IN_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_PLL1IN_BITS               RCC_PLL1CFGR_PLL1SRC_HSE
  #else
    #define STM32_PLL1IN_BITS               0U
  #endif
#else
  #error "invalid STM32_CFG_PLL1IN_SEL value specified"
#endif

/**
 * @brief   PLL1 input clock clock point.
 */
#if ((STM32_PLL1IN_ENABLED == TRUE) && \
     (STM32_CFG_PLL1IN_SEL == RCC_PLL1CFGR_PLL1SRC_NOCLOCK)) || \
    defined(__DOXYGEN__)
  #define STM32_PLL1IN_FREQ                 STM32_NONE_FREQ
#elif (STM32_PLL1IN_ENABLED == TRUE) && \
      (STM32_CFG_PLL1IN_SEL == RCC_PLL1CFGR_PLL1SRC_MSIS)
  #define STM32_PLL1IN_FREQ                 STM32_MSIS_FREQ
#elif (STM32_PLL1IN_ENABLED == TRUE) && \
      (STM32_CFG_PLL1IN_SEL == RCC_PLL1CFGR_PLL1SRC_HSI16)
  #define STM32_PLL1IN_FREQ                 STM32_HSI16_FREQ
#elif (STM32_PLL1IN_ENABLED == TRUE) && \
      (STM32_CFG_PLL1IN_SEL == RCC_PLL1CFGR_PLL1SRC_HSE)
  #define STM32_PLL1IN_FREQ                 STM32_HSE_FREQ
#else
  #define STM32_PLL1IN_FREQ                 0U
#endif

/*--- Macros and checks for the PLL1REF clock point. -----------------------*/

#if !((STM32_CFG_PLL1REF_VALUE >= 1) && (STM32_CFG_PLL1REF_VALUE <= 16)) && \
    !defined(__DOXYGEN__)
  #error "invalid STM32_CFG_PLL1REF_VALUE value specified"
#endif

/**
 * @brief   PLL1REF clock register bits.
 */
#if (STM32_PLL1REF_ENABLED == TRUE) || defined(__DOXYGEN__)
  #define STM32_PLL1REF_BITS                ((STM32_CFG_PLL1REF_VALUE - 1U) << RCC_PLL1CFGR_PLL1M_Pos) | (((STM32_PLL1REF_FREQ) > 8000000U) ? RCC_PLL1CFGR_PLL1RGE_8TO16 : \
                                             RCC_PLL1CFGR_PLL1RGE_4TO8)
#else
  #define STM32_PLL1REF_BITS                0U
#endif

/**
 * @brief   PLL1 reference clock clock point.
 */
#if (STM32_PLL1REF_ENABLED == TRUE) || defined(__DOXYGEN__)
  #define STM32_PLL1REF_FREQ                (STM32_PLL1IN_FREQ /            \
                                             STM32_CFG_PLL1REF_VALUE)
#else
  #define STM32_PLL1REF_FREQ                0U
#endif

#if !((STM32_PLL1REF_ENABLED != TRUE) ||                                    \
     (STM32_PLL1REF_FREQ >= STM32_PLLIN_MIN)) && !defined(__DOXYGEN__)
  #error "STM32_PLL1REF_FREQ below minimum frequency"
#endif

#if !((STM32_PLL1REF_ENABLED != TRUE) ||                                    \
     (STM32_PLL1REF_FREQ <= STM32_PLLIN_MAX)) && !defined(__DOXYGEN__)
  #error "STM32_PLL1REF_FREQ above maximum frequency"
#endif

/*--- Macros and checks for the PLL1VCO clock point. -----------------------*/

#if !((STM32_CFG_PLL1VCO_VALUE >= 4) && (STM32_CFG_PLL1VCO_VALUE <= 136)) && \
    !defined(__DOXYGEN__)
  #error "invalid STM32_CFG_PLL1VCO_VALUE value specified"
#endif

/**
 * @brief   PLL1VCO clock register bits.
 */
#if (STM32_PLL1VCO_ENABLED == TRUE) || defined(__DOXYGEN__)
  #define STM32_PLL1VCO_BITS                ((STM32_CFG_PLL1VCO_VALUE -     \
                                              1U) << RCC_PLL1DIVR_PLL1N_Pos)
#else
  #define STM32_PLL1VCO_BITS                0U
#endif

/**
 * @brief   PLL1 VCO clock clock point.
 */
#if (STM32_PLL1VCO_ENABLED == TRUE) || defined(__DOXYGEN__)
  #define STM32_PLL1VCO_FREQ                (STM32_PLL1REF_FREQ *           \
                                             STM32_CFG_PLL1VCO_VALUE)
#else
  #define STM32_PLL1VCO_FREQ                0U
#endif

#if !((STM32_PLL1VCO_ENABLED != TRUE) ||                                    \
     (STM32_PLL1VCO_FREQ >= STM32_PLLVCO_MIN)) && !defined(__DOXYGEN__)
  #error "STM32_PLL1VCO_FREQ below minimum frequency"
#endif

#if !((STM32_PLL1VCO_ENABLED != TRUE) ||                                    \
     (STM32_PLL1VCO_FREQ <= STM32_PLLVCO_MAX)) && !defined(__DOXYGEN__)
  #error "STM32_PLL1VCO_FREQ above maximum frequency"
#endif

/*--- Macros and checks for the PLL1P clock point. -------------------------*/

#if !((STM32_CFG_PLL1P_VALUE >= 2) && (STM32_CFG_PLL1P_VALUE <= 128)) &&    \
    !defined(__DOXYGEN__)
  #error "invalid STM32_CFG_PLL1P_VALUE value specified"
#endif

/**
 * @brief   PLL1P clock register bits.
 */
#if (STM32_PLL1P_ENABLED == TRUE) || defined(__DOXYGEN__)
  #define STM32_PLL1P_BITS                  ((STM32_CFG_PLL1P_VALUE -       \
                                              1U) << RCC_PLL1DIVR_PLL1P_Pos)
#else
  #define STM32_PLL1P_BITS                  0U
#endif

/**
 * @brief   PLL1 P output clock clock point.
 */
#if (STM32_PLL1P_ENABLED == TRUE) || defined(__DOXYGEN__)
  #define STM32_PLL1P_FREQ                  (STM32_PLL1VCO_FREQ /           \
                                             STM32_CFG_PLL1P_VALUE)
#else
  #define STM32_PLL1P_FREQ                  0U
#endif

#if !((STM32_PLL1P_ENABLED != TRUE) || (STM32_PLL1P_FREQ >= STM32_PLLP_MIN)) && \
    !defined(__DOXYGEN__)
  #error "STM32_PLL1P_FREQ below minimum frequency"
#endif

#if !((STM32_PLL1P_ENABLED != TRUE) || (STM32_PLL1P_FREQ <= STM32_PLLP_MAX)) && \
    !defined(__DOXYGEN__)
  #error "STM32_PLL1P_FREQ above maximum frequency"
#endif

/*--- Macros and checks for the PLL1Q clock point. -------------------------*/

#if !((STM32_CFG_PLL1Q_VALUE >= 1) && (STM32_CFG_PLL1Q_VALUE <= 128)) &&    \
    !defined(__DOXYGEN__)
  #error "invalid STM32_CFG_PLL1Q_VALUE value specified"
#endif

/**
 * @brief   PLL1Q clock register bits.
 */
#if (STM32_PLL1Q_ENABLED == TRUE) || defined(__DOXYGEN__)
  #define STM32_PLL1Q_BITS                  ((STM32_CFG_PLL1Q_VALUE -       \
                                              1U) << RCC_PLL1DIVR_PLL1Q_Pos)
#else
  #define STM32_PLL1Q_BITS                  0U
#endif

/**
 * @brief   PLL1 Q output clock clock point.
 */
#if (STM32_PLL1Q_ENABLED == TRUE) || defined(__DOXYGEN__)
  #define STM32_PLL1Q_FREQ                  (STM32_PLL1VCO_FREQ /           \
                                             STM32_CFG_PLL1Q_VALUE)
#else
  #define STM32_PLL1Q_FREQ                  0U
#endif

#if !((STM32_PLL1Q_ENABLED != TRUE) || (STM32_PLL1Q_FREQ >= STM32_PLLQ_MIN)) && \
    !defined(__DOXYGEN__)
  #error "STM32_PLL1Q_FREQ below minimum frequency"
#endif

#if !((STM32_PLL1Q_ENABLED != TRUE) || (STM32_PLL1Q_FREQ <= STM32_PLLQ_MAX)) && \
    !defined(__DOXYGEN__)
  #error "STM32_PLL1Q_FREQ above maximum frequency"
#endif

/*--- Macros and checks for the PLL1R clock point. -------------------------*/

#if !((STM32_CFG_PLL1R_VALUE == 1) || (STM32_CFG_PLL1R_VALUE == 2) ||       \
     (STM32_CFG_PLL1R_VALUE == 4) || (STM32_CFG_PLL1R_VALUE == 6) ||        \
     (STM32_CFG_PLL1R_VALUE == 8) || (STM32_CFG_PLL1R_VALUE == 10) ||       \
     (STM32_CFG_PLL1R_VALUE == 12) || (STM32_CFG_PLL1R_VALUE == 14) ||      \
     (STM32_CFG_PLL1R_VALUE == 16) || (STM32_CFG_PLL1R_VALUE == 18) ||      \
     (STM32_CFG_PLL1R_VALUE == 20) || (STM32_CFG_PLL1R_VALUE == 22) ||      \
     (STM32_CFG_PLL1R_VALUE == 24) || (STM32_CFG_PLL1R_VALUE == 26) ||      \
     (STM32_CFG_PLL1R_VALUE == 28) || (STM32_CFG_PLL1R_VALUE == 30) ||      \
     (STM32_CFG_PLL1R_VALUE == 32) || (STM32_CFG_PLL1R_VALUE == 34) ||      \
     (STM32_CFG_PLL1R_VALUE == 36) || (STM32_CFG_PLL1R_VALUE == 38) ||      \
     (STM32_CFG_PLL1R_VALUE == 40) || (STM32_CFG_PLL1R_VALUE == 42) ||      \
     (STM32_CFG_PLL1R_VALUE == 44) || (STM32_CFG_PLL1R_VALUE == 46) ||      \
     (STM32_CFG_PLL1R_VALUE == 48) || (STM32_CFG_PLL1R_VALUE == 50) ||      \
     (STM32_CFG_PLL1R_VALUE == 52) || (STM32_CFG_PLL1R_VALUE == 54) ||      \
     (STM32_CFG_PLL1R_VALUE == 56) || (STM32_CFG_PLL1R_VALUE == 58) ||      \
     (STM32_CFG_PLL1R_VALUE == 60) || (STM32_CFG_PLL1R_VALUE == 62) ||      \
     (STM32_CFG_PLL1R_VALUE == 64) || (STM32_CFG_PLL1R_VALUE == 66) ||      \
     (STM32_CFG_PLL1R_VALUE == 68) || (STM32_CFG_PLL1R_VALUE == 70) ||      \
     (STM32_CFG_PLL1R_VALUE == 72) || (STM32_CFG_PLL1R_VALUE == 74) ||      \
     (STM32_CFG_PLL1R_VALUE == 76) || (STM32_CFG_PLL1R_VALUE == 78) ||      \
     (STM32_CFG_PLL1R_VALUE == 80) || (STM32_CFG_PLL1R_VALUE == 82) ||      \
     (STM32_CFG_PLL1R_VALUE == 84) || (STM32_CFG_PLL1R_VALUE == 86) ||      \
     (STM32_CFG_PLL1R_VALUE == 88) || (STM32_CFG_PLL1R_VALUE == 90) ||      \
     (STM32_CFG_PLL1R_VALUE == 92) || (STM32_CFG_PLL1R_VALUE == 94) ||      \
     (STM32_CFG_PLL1R_VALUE == 96) || (STM32_CFG_PLL1R_VALUE == 98) ||      \
     (STM32_CFG_PLL1R_VALUE == 100) || (STM32_CFG_PLL1R_VALUE == 102) ||    \
     (STM32_CFG_PLL1R_VALUE == 104) || (STM32_CFG_PLL1R_VALUE == 106) ||    \
     (STM32_CFG_PLL1R_VALUE == 108) || (STM32_CFG_PLL1R_VALUE == 110) ||    \
     (STM32_CFG_PLL1R_VALUE == 112) || (STM32_CFG_PLL1R_VALUE == 114) ||    \
     (STM32_CFG_PLL1R_VALUE == 116) || (STM32_CFG_PLL1R_VALUE == 118) ||    \
     (STM32_CFG_PLL1R_VALUE == 120) || (STM32_CFG_PLL1R_VALUE == 122) ||    \
     (STM32_CFG_PLL1R_VALUE == 124) || (STM32_CFG_PLL1R_VALUE == 126) ||    \
     (STM32_CFG_PLL1R_VALUE == 128)) && !defined(__DOXYGEN__)
  #error "invalid STM32_CFG_PLL1R_VALUE value specified"
#endif

/**
 * @brief   PLL1R clock register bits.
 */
#if (STM32_PLL1R_ENABLED == TRUE) || defined(__DOXYGEN__)
  #define STM32_PLL1R_BITS                  ((STM32_CFG_PLL1R_VALUE -       \
                                              1U) << RCC_PLL1DIVR_PLL1R_Pos)
#else
  #define STM32_PLL1R_BITS                  0U
#endif

/**
 * @brief   PLL1 R output clock clock point.
 */
#if (STM32_PLL1R_ENABLED == TRUE) || defined(__DOXYGEN__)
  #define STM32_PLL1R_FREQ                  (STM32_PLL1VCO_FREQ /           \
                                             STM32_CFG_PLL1R_VALUE)
#else
  #define STM32_PLL1R_FREQ                  0U
#endif

#if !((STM32_PLL1R_ENABLED != TRUE) || (STM32_PLL1R_FREQ >= STM32_PLLR_MIN)) && \
    !defined(__DOXYGEN__)
  #error "STM32_PLL1R_FREQ below minimum frequency"
#endif

#if !((STM32_PLL1R_ENABLED != TRUE) || (STM32_PLL1R_FREQ <= STM32_PLLR_MAX)) && \
    !defined(__DOXYGEN__)
  #error "STM32_PLL1R_FREQ above maximum frequency"
#endif

/*--- Macros and checks for the PLL2IN clock point. ------------------------*/

/**
 * @brief   PLL2IN clock register bits.
 */
#if (STM32_PLL2IN_ENABLED == FALSE)
  #define STM32_PLL2IN_BITS                 RCC_PLL2CFGR_PLL2SRC_NOCLOCK
#elif (STM32_CFG_PLL2IN_SEL == RCC_PLL2CFGR_PLL2SRC_NOCLOCK) ||             \
      defined(__DOXYGEN__)
  #if (STM32_PLL2IN_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_PLL2IN_BITS               RCC_PLL2CFGR_PLL2SRC_NOCLOCK
  #else
    #define STM32_PLL2IN_BITS               0U
  #endif
#elif (STM32_CFG_PLL2IN_SEL == RCC_PLL2CFGR_PLL2SRC_MSIS)
  #if (STM32_PLL2IN_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_PLL2IN_BITS               RCC_PLL2CFGR_PLL2SRC_MSIS
  #else
    #define STM32_PLL2IN_BITS               0U
  #endif
#elif (STM32_CFG_PLL2IN_SEL == RCC_PLL2CFGR_PLL2SRC_HSI16)
  #if (STM32_PLL2IN_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_PLL2IN_BITS               RCC_PLL2CFGR_PLL2SRC_HSI16
  #else
    #define STM32_PLL2IN_BITS               0U
  #endif
#elif (STM32_CFG_PLL2IN_SEL == RCC_PLL2CFGR_PLL2SRC_HSE)
  #if (STM32_PLL2IN_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_PLL2IN_BITS               RCC_PLL2CFGR_PLL2SRC_HSE
  #else
    #define STM32_PLL2IN_BITS               0U
  #endif
#else
  #error "invalid STM32_CFG_PLL2IN_SEL value specified"
#endif

/**
 * @brief   PLL2 input clock clock point.
 */
#if ((STM32_PLL2IN_ENABLED == TRUE) && \
     (STM32_CFG_PLL2IN_SEL == RCC_PLL2CFGR_PLL2SRC_NOCLOCK)) || \
    defined(__DOXYGEN__)
  #define STM32_PLL2IN_FREQ                 STM32_NONE_FREQ
#elif (STM32_PLL2IN_ENABLED == TRUE) && \
      (STM32_CFG_PLL2IN_SEL == RCC_PLL2CFGR_PLL2SRC_MSIS)
  #define STM32_PLL2IN_FREQ                 STM32_MSIS_FREQ
#elif (STM32_PLL2IN_ENABLED == TRUE) && \
      (STM32_CFG_PLL2IN_SEL == RCC_PLL2CFGR_PLL2SRC_HSI16)
  #define STM32_PLL2IN_FREQ                 STM32_HSI16_FREQ
#elif (STM32_PLL2IN_ENABLED == TRUE) && \
      (STM32_CFG_PLL2IN_SEL == RCC_PLL2CFGR_PLL2SRC_HSE)
  #define STM32_PLL2IN_FREQ                 STM32_HSE_FREQ
#else
  #define STM32_PLL2IN_FREQ                 0U
#endif

/*--- Macros and checks for the PLL2REF clock point. -----------------------*/

#if !((STM32_CFG_PLL2REF_VALUE >= 1) && (STM32_CFG_PLL2REF_VALUE <= 16)) && \
    !defined(__DOXYGEN__)
  #error "invalid STM32_CFG_PLL2REF_VALUE value specified"
#endif

/**
 * @brief   PLL2REF clock register bits.
 */
#if (STM32_PLL2REF_ENABLED == TRUE) || defined(__DOXYGEN__)
  #define STM32_PLL2REF_BITS                ((STM32_CFG_PLL2REF_VALUE - 1U) << RCC_PLL2CFGR_PLL2M_Pos) | (((STM32_PLL2REF_FREQ) > 8000000U) ? RCC_PLL2CFGR_PLL2RGE_8TO16 : \
                                             RCC_PLL2CFGR_PLL2RGE_4TO8)
#else
  #define STM32_PLL2REF_BITS                0U
#endif

/**
 * @brief   PLL2 reference clock clock point.
 */
#if (STM32_PLL2REF_ENABLED == TRUE) || defined(__DOXYGEN__)
  #define STM32_PLL2REF_FREQ                (STM32_PLL2IN_FREQ /            \
                                             STM32_CFG_PLL2REF_VALUE)
#else
  #define STM32_PLL2REF_FREQ                0U
#endif

#if !((STM32_PLL2REF_ENABLED != TRUE) ||                                    \
     (STM32_PLL2REF_FREQ >= STM32_PLLIN_MIN)) && !defined(__DOXYGEN__)
  #error "STM32_PLL2REF_FREQ below minimum frequency"
#endif

#if !((STM32_PLL2REF_ENABLED != TRUE) ||                                    \
     (STM32_PLL2REF_FREQ <= STM32_PLLIN_MAX)) && !defined(__DOXYGEN__)
  #error "STM32_PLL2REF_FREQ above maximum frequency"
#endif

/*--- Macros and checks for the PLL2VCO clock point. -----------------------*/

#if !((STM32_CFG_PLL2VCO_VALUE >= 4) && (STM32_CFG_PLL2VCO_VALUE <= 136)) && \
    !defined(__DOXYGEN__)
  #error "invalid STM32_CFG_PLL2VCO_VALUE value specified"
#endif

/**
 * @brief   PLL2VCO clock register bits.
 */
#if (STM32_PLL2VCO_ENABLED == TRUE) || defined(__DOXYGEN__)
  #define STM32_PLL2VCO_BITS                ((STM32_CFG_PLL2VCO_VALUE -     \
                                              1U) << RCC_PLL2DIVR_PLL2N_Pos)
#else
  #define STM32_PLL2VCO_BITS                0U
#endif

/**
 * @brief   PLL2 VCO clock clock point.
 */
#if (STM32_PLL2VCO_ENABLED == TRUE) || defined(__DOXYGEN__)
  #define STM32_PLL2VCO_FREQ                (STM32_PLL2REF_FREQ *           \
                                             STM32_CFG_PLL2VCO_VALUE)
#else
  #define STM32_PLL2VCO_FREQ                0U
#endif

#if !((STM32_PLL2VCO_ENABLED != TRUE) ||                                    \
     (STM32_PLL2VCO_FREQ >= STM32_PLLVCO_MIN)) && !defined(__DOXYGEN__)
  #error "STM32_PLL2VCO_FREQ below minimum frequency"
#endif

#if !((STM32_PLL2VCO_ENABLED != TRUE) ||                                    \
     (STM32_PLL2VCO_FREQ <= STM32_PLLVCO_MAX)) && !defined(__DOXYGEN__)
  #error "STM32_PLL2VCO_FREQ above maximum frequency"
#endif

/*--- Macros and checks for the PLL2P clock point. -------------------------*/

#if !((STM32_CFG_PLL2P_VALUE >= 2) && (STM32_CFG_PLL2P_VALUE <= 128)) &&    \
    !defined(__DOXYGEN__)
  #error "invalid STM32_CFG_PLL2P_VALUE value specified"
#endif

/**
 * @brief   PLL2P clock register bits.
 */
#if (STM32_PLL2P_ENABLED == TRUE) || defined(__DOXYGEN__)
  #define STM32_PLL2P_BITS                  ((STM32_CFG_PLL2P_VALUE -       \
                                              1U) << RCC_PLL2DIVR_PLL2P_Pos)
#else
  #define STM32_PLL2P_BITS                  0U
#endif

/**
 * @brief   PLL2 P output clock clock point.
 */
#if (STM32_PLL2P_ENABLED == TRUE) || defined(__DOXYGEN__)
  #define STM32_PLL2P_FREQ                  (STM32_PLL2VCO_FREQ /           \
                                             STM32_CFG_PLL2P_VALUE)
#else
  #define STM32_PLL2P_FREQ                  0U
#endif

#if !((STM32_PLL2P_ENABLED != TRUE) || (STM32_PLL2P_FREQ >= STM32_PLLP_MIN)) && \
    !defined(__DOXYGEN__)
  #error "STM32_PLL2P_FREQ below minimum frequency"
#endif

#if !((STM32_PLL2P_ENABLED != TRUE) || (STM32_PLL2P_FREQ <= STM32_PLLP_MAX)) && \
    !defined(__DOXYGEN__)
  #error "STM32_PLL2P_FREQ above maximum frequency"
#endif

/*--- Macros and checks for the PLL2Q clock point. -------------------------*/

#if !((STM32_CFG_PLL2Q_VALUE >= 1) && (STM32_CFG_PLL2Q_VALUE <= 128)) &&    \
    !defined(__DOXYGEN__)
  #error "invalid STM32_CFG_PLL2Q_VALUE value specified"
#endif

/**
 * @brief   PLL2Q clock register bits.
 */
#if (STM32_PLL2Q_ENABLED == TRUE) || defined(__DOXYGEN__)
  #define STM32_PLL2Q_BITS                  ((STM32_CFG_PLL2Q_VALUE -       \
                                              1U) << RCC_PLL2DIVR_PLL2Q_Pos)
#else
  #define STM32_PLL2Q_BITS                  0U
#endif

/**
 * @brief   PLL2 Q output clock clock point.
 */
#if (STM32_PLL2Q_ENABLED == TRUE) || defined(__DOXYGEN__)
  #define STM32_PLL2Q_FREQ                  (STM32_PLL2VCO_FREQ /           \
                                             STM32_CFG_PLL2Q_VALUE)
#else
  #define STM32_PLL2Q_FREQ                  0U
#endif

#if !((STM32_PLL2Q_ENABLED != TRUE) || (STM32_PLL2Q_FREQ >= STM32_PLLQ_MIN)) && \
    !defined(__DOXYGEN__)
  #error "STM32_PLL2Q_FREQ below minimum frequency"
#endif

#if !((STM32_PLL2Q_ENABLED != TRUE) || (STM32_PLL2Q_FREQ <= STM32_PLLQ_MAX)) && \
    !defined(__DOXYGEN__)
  #error "STM32_PLL2Q_FREQ above maximum frequency"
#endif

/*--- Macros and checks for the PLL2R clock point. -------------------------*/

#if !((STM32_CFG_PLL2R_VALUE >= 1) && (STM32_CFG_PLL2R_VALUE <= 128)) &&    \
    !defined(__DOXYGEN__)
  #error "invalid STM32_CFG_PLL2R_VALUE value specified"
#endif

/**
 * @brief   PLL2R clock register bits.
 */
#if (STM32_PLL2R_ENABLED == TRUE) || defined(__DOXYGEN__)
  #define STM32_PLL2R_BITS                  ((STM32_CFG_PLL2R_VALUE -       \
                                              1U) << RCC_PLL2DIVR_PLL2R_Pos)
#else
  #define STM32_PLL2R_BITS                  0U
#endif

/**
 * @brief   PLL2 R output clock clock point.
 */
#if (STM32_PLL2R_ENABLED == TRUE) || defined(__DOXYGEN__)
  #define STM32_PLL2R_FREQ                  (STM32_PLL2VCO_FREQ /           \
                                             STM32_CFG_PLL2R_VALUE)
#else
  #define STM32_PLL2R_FREQ                  0U
#endif

#if !((STM32_PLL2R_ENABLED != TRUE) || (STM32_PLL2R_FREQ >= STM32_PLLR_MIN)) && \
    !defined(__DOXYGEN__)
  #error "STM32_PLL2R_FREQ below minimum frequency"
#endif

#if !((STM32_PLL2R_ENABLED != TRUE) || (STM32_PLL2R_FREQ <= STM32_PLLR_MAX)) && \
    !defined(__DOXYGEN__)
  #error "STM32_PLL2R_FREQ above maximum frequency"
#endif

/*--- Macros and checks for the PLL3IN clock point. ------------------------*/

/**
 * @brief   PLL3IN clock register bits.
 */
#if (STM32_PLL3IN_ENABLED == FALSE)
  #define STM32_PLL3IN_BITS                 RCC_PLL3CFGR_PLL3SRC_NOCLOCK
#elif (STM32_CFG_PLL3IN_SEL == RCC_PLL3CFGR_PLL3SRC_NOCLOCK) ||             \
      defined(__DOXYGEN__)
  #if (STM32_PLL3IN_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_PLL3IN_BITS               RCC_PLL3CFGR_PLL3SRC_NOCLOCK
  #else
    #define STM32_PLL3IN_BITS               0U
  #endif
#elif (STM32_CFG_PLL3IN_SEL == RCC_PLL3CFGR_PLL3SRC_MSIS)
  #if (STM32_PLL3IN_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_PLL3IN_BITS               RCC_PLL3CFGR_PLL3SRC_MSIS
  #else
    #define STM32_PLL3IN_BITS               0U
  #endif
#elif (STM32_CFG_PLL3IN_SEL == RCC_PLL3CFGR_PLL3SRC_HSI16)
  #if (STM32_PLL3IN_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_PLL3IN_BITS               RCC_PLL3CFGR_PLL3SRC_HSI16
  #else
    #define STM32_PLL3IN_BITS               0U
  #endif
#elif (STM32_CFG_PLL3IN_SEL == RCC_PLL3CFGR_PLL3SRC_HSE)
  #if (STM32_PLL3IN_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_PLL3IN_BITS               RCC_PLL3CFGR_PLL3SRC_HSE
  #else
    #define STM32_PLL3IN_BITS               0U
  #endif
#else
  #error "invalid STM32_CFG_PLL3IN_SEL value specified"
#endif

/**
 * @brief   PLL3 input clock clock point.
 */
#if ((STM32_PLL3IN_ENABLED == TRUE) && \
     (STM32_CFG_PLL3IN_SEL == RCC_PLL3CFGR_PLL3SRC_NOCLOCK)) || \
    defined(__DOXYGEN__)
  #define STM32_PLL3IN_FREQ                 STM32_NONE_FREQ
#elif (STM32_PLL3IN_ENABLED == TRUE) && \
      (STM32_CFG_PLL3IN_SEL == RCC_PLL3CFGR_PLL3SRC_MSIS)
  #define STM32_PLL3IN_FREQ                 STM32_MSIS_FREQ
#elif (STM32_PLL3IN_ENABLED == TRUE) && \
      (STM32_CFG_PLL3IN_SEL == RCC_PLL3CFGR_PLL3SRC_HSI16)
  #define STM32_PLL3IN_FREQ                 STM32_HSI16_FREQ
#elif (STM32_PLL3IN_ENABLED == TRUE) && \
      (STM32_CFG_PLL3IN_SEL == RCC_PLL3CFGR_PLL3SRC_HSE)
  #define STM32_PLL3IN_FREQ                 STM32_HSE_FREQ
#else
  #define STM32_PLL3IN_FREQ                 0U
#endif

/*--- Macros and checks for the PLL3REF clock point. -----------------------*/

#if !((STM32_CFG_PLL3REF_VALUE >= 1) && (STM32_CFG_PLL3REF_VALUE <= 16)) && \
    !defined(__DOXYGEN__)
  #error "invalid STM32_CFG_PLL3REF_VALUE value specified"
#endif

/**
 * @brief   PLL3REF clock register bits.
 */
#if (STM32_PLL3REF_ENABLED == TRUE) || defined(__DOXYGEN__)
  #define STM32_PLL3REF_BITS                ((STM32_CFG_PLL3REF_VALUE - 1U) << RCC_PLL3CFGR_PLL3M_Pos) | (((STM32_PLL3REF_FREQ) > 8000000U) ? RCC_PLL3CFGR_PLL3RGE_8TO16 : \
                                             RCC_PLL3CFGR_PLL3RGE_4TO8)
#else
  #define STM32_PLL3REF_BITS                0U
#endif

/**
 * @brief   PLL3 reference clock clock point.
 */
#if (STM32_PLL3REF_ENABLED == TRUE) || defined(__DOXYGEN__)
  #define STM32_PLL3REF_FREQ                (STM32_PLL3IN_FREQ /            \
                                             STM32_CFG_PLL3REF_VALUE)
#else
  #define STM32_PLL3REF_FREQ                0U
#endif

#if !((STM32_PLL3REF_ENABLED != TRUE) ||                                    \
     (STM32_PLL3REF_FREQ >= STM32_PLLIN_MIN)) && !defined(__DOXYGEN__)
  #error "STM32_PLL3REF_FREQ below minimum frequency"
#endif

#if !((STM32_PLL3REF_ENABLED != TRUE) ||                                    \
     (STM32_PLL3REF_FREQ <= STM32_PLLIN_MAX)) && !defined(__DOXYGEN__)
  #error "STM32_PLL3REF_FREQ above maximum frequency"
#endif

/*--- Macros and checks for the PLL3VCO clock point. -----------------------*/

#if !((STM32_CFG_PLL3VCO_VALUE >= 4) && (STM32_CFG_PLL3VCO_VALUE <= 136)) && \
    !defined(__DOXYGEN__)
  #error "invalid STM32_CFG_PLL3VCO_VALUE value specified"
#endif

/**
 * @brief   PLL3VCO clock register bits.
 */
#if (STM32_PLL3VCO_ENABLED == TRUE) || defined(__DOXYGEN__)
  #define STM32_PLL3VCO_BITS                ((STM32_CFG_PLL3VCO_VALUE -     \
                                              1U) << RCC_PLL3DIVR_PLL3N_Pos)
#else
  #define STM32_PLL3VCO_BITS                0U
#endif

/**
 * @brief   PLL3 VCO clock clock point.
 */
#if (STM32_PLL3VCO_ENABLED == TRUE) || defined(__DOXYGEN__)
  #define STM32_PLL3VCO_FREQ                (STM32_PLL3REF_FREQ *           \
                                             STM32_CFG_PLL3VCO_VALUE)
#else
  #define STM32_PLL3VCO_FREQ                0U
#endif

#if !((STM32_PLL3VCO_ENABLED != TRUE) ||                                    \
     (STM32_PLL3VCO_FREQ >= STM32_PLLVCO_MIN)) && !defined(__DOXYGEN__)
  #error "STM32_PLL3VCO_FREQ below minimum frequency"
#endif

#if !((STM32_PLL3VCO_ENABLED != TRUE) ||                                    \
     (STM32_PLL3VCO_FREQ <= STM32_PLLVCO_MAX)) && !defined(__DOXYGEN__)
  #error "STM32_PLL3VCO_FREQ above maximum frequency"
#endif

/*--- Macros and checks for the PLL3P clock point. -------------------------*/

#if !((STM32_CFG_PLL3P_VALUE >= 2) && (STM32_CFG_PLL3P_VALUE <= 128)) &&    \
    !defined(__DOXYGEN__)
  #error "invalid STM32_CFG_PLL3P_VALUE value specified"
#endif

/**
 * @brief   PLL3P clock register bits.
 */
#if (STM32_PLL3P_ENABLED == TRUE) || defined(__DOXYGEN__)
  #define STM32_PLL3P_BITS                  ((STM32_CFG_PLL3P_VALUE -       \
                                              1U) << RCC_PLL3DIVR_PLL3P_Pos)
#else
  #define STM32_PLL3P_BITS                  0U
#endif

/**
 * @brief   PLL3 P output clock clock point.
 */
#if (STM32_PLL3P_ENABLED == TRUE) || defined(__DOXYGEN__)
  #define STM32_PLL3P_FREQ                  (STM32_PLL3VCO_FREQ /           \
                                             STM32_CFG_PLL3P_VALUE)
#else
  #define STM32_PLL3P_FREQ                  0U
#endif

#if !((STM32_PLL3P_ENABLED != TRUE) || (STM32_PLL3P_FREQ >= STM32_PLLP_MIN)) && \
    !defined(__DOXYGEN__)
  #error "STM32_PLL3P_FREQ below minimum frequency"
#endif

#if !((STM32_PLL3P_ENABLED != TRUE) || (STM32_PLL3P_FREQ <= STM32_PLLP_MAX)) && \
    !defined(__DOXYGEN__)
  #error "STM32_PLL3P_FREQ above maximum frequency"
#endif

/*--- Macros and checks for the PLL3Q clock point. -------------------------*/

#if !((STM32_CFG_PLL3Q_VALUE >= 1) && (STM32_CFG_PLL3Q_VALUE <= 128)) &&    \
    !defined(__DOXYGEN__)
  #error "invalid STM32_CFG_PLL3Q_VALUE value specified"
#endif

/**
 * @brief   PLL3Q clock register bits.
 */
#if (STM32_PLL3Q_ENABLED == TRUE) || defined(__DOXYGEN__)
  #define STM32_PLL3Q_BITS                  ((STM32_CFG_PLL3Q_VALUE -       \
                                              1U) << RCC_PLL3DIVR_PLL3Q_Pos)
#else
  #define STM32_PLL3Q_BITS                  0U
#endif

/**
 * @brief   PLL3 Q output clock clock point.
 */
#if (STM32_PLL3Q_ENABLED == TRUE) || defined(__DOXYGEN__)
  #define STM32_PLL3Q_FREQ                  (STM32_PLL3VCO_FREQ /           \
                                             STM32_CFG_PLL3Q_VALUE)
#else
  #define STM32_PLL3Q_FREQ                  0U
#endif

#if !((STM32_PLL3Q_ENABLED != TRUE) || (STM32_PLL3Q_FREQ >= STM32_PLLQ_MIN)) && \
    !defined(__DOXYGEN__)
  #error "STM32_PLL3Q_FREQ below minimum frequency"
#endif

#if !((STM32_PLL3Q_ENABLED != TRUE) || (STM32_PLL3Q_FREQ <= STM32_PLLQ_MAX)) && \
    !defined(__DOXYGEN__)
  #error "STM32_PLL3Q_FREQ above maximum frequency"
#endif

/*--- Macros and checks for the PLL3R clock point. -------------------------*/

#if !((STM32_CFG_PLL3R_VALUE >= 1) && (STM32_CFG_PLL3R_VALUE <= 128)) &&    \
    !defined(__DOXYGEN__)
  #error "invalid STM32_CFG_PLL3R_VALUE value specified"
#endif

/**
 * @brief   PLL3R clock register bits.
 */
#if (STM32_PLL3R_ENABLED == TRUE) || defined(__DOXYGEN__)
  #define STM32_PLL3R_BITS                  ((STM32_CFG_PLL3R_VALUE -       \
                                              1U) << RCC_PLL3DIVR_PLL3R_Pos)
#else
  #define STM32_PLL3R_BITS                  0U
#endif

/**
 * @brief   PLL3 R output clock clock point.
 */
#if (STM32_PLL3R_ENABLED == TRUE) || defined(__DOXYGEN__)
  #define STM32_PLL3R_FREQ                  (STM32_PLL3VCO_FREQ /           \
                                             STM32_CFG_PLL3R_VALUE)
#else
  #define STM32_PLL3R_FREQ                  0U
#endif

#if !((STM32_PLL3R_ENABLED != TRUE) || (STM32_PLL3R_FREQ >= STM32_PLLR_MIN)) && \
    !defined(__DOXYGEN__)
  #error "STM32_PLL3R_FREQ below minimum frequency"
#endif

#if !((STM32_PLL3R_ENABLED != TRUE) || (STM32_PLL3R_FREQ <= STM32_PLLR_MAX)) && \
    !defined(__DOXYGEN__)
  #error "STM32_PLL3R_FREQ above maximum frequency"
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
#elif (STM32_CFG_SYSCLK_SEL == RCC_CFGR1_SW_PLL1P)
  #define STM32_SYSCLK_BITS                 RCC_CFGR1_SW_PLL1P
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
#elif (STM32_SYSCLK_ENABLED == TRUE) && \
      (STM32_CFG_SYSCLK_SEL == RCC_CFGR1_SW_PLL1P)
  #define STM32_SYSCLK_FREQ                 STM32_PLL1P_FREQ
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

#if !defined(RCC_CFGR1_SW_PLL1P) && !defined(__DOXYGEN__)
  #error "RCC_CFGR1_SW_PLL1P not defined"
#endif
#if !(!((STM32_SYSCLK_ENABLED == TRUE) &&                                   \
      (STM32_CFG_SYSCLK_SEL == RCC_CFGR1_SW_PLL1P)) ||                      \
     (STM32_PLL1P_FREQ <= STM32_SYSCLK_MAX)) && !defined(__DOXYGEN__)
  #error "STM32_SYSCLK_FREQ above maximum frequency"
#endif

/*--- Macros and checks for the HCLK clock point. --------------------------*/

/**
 * @brief   HCLK clock register bits.
 */
#if (STM32_CFG_HCLK_VALUE == 1) || defined(__DOXYGEN__)
  #define STM32_HCLK_BITS                   RCC_CFGR2_HPRE_DIV1
#elif (STM32_CFG_HCLK_VALUE == 2)
  #define STM32_HCLK_BITS                   RCC_CFGR2_HPRE_DIV2
#elif (STM32_CFG_HCLK_VALUE == 4)
  #define STM32_HCLK_BITS                   RCC_CFGR2_HPRE_DIV4
#elif (STM32_CFG_HCLK_VALUE == 8)
  #define STM32_HCLK_BITS                   RCC_CFGR2_HPRE_DIV8
#elif (STM32_CFG_HCLK_VALUE == 16)
  #define STM32_HCLK_BITS                   RCC_CFGR2_HPRE_DIV16
#elif (STM32_CFG_HCLK_VALUE == 64)
  #define STM32_HCLK_BITS                   RCC_CFGR2_HPRE_DIV64
#elif (STM32_CFG_HCLK_VALUE == 128)
  #define STM32_HCLK_BITS                   RCC_CFGR2_HPRE_DIV128
#elif (STM32_CFG_HCLK_VALUE == 256)
  #define STM32_HCLK_BITS                   RCC_CFGR2_HPRE_DIV256
#elif (STM32_CFG_HCLK_VALUE == 512)
  #define STM32_HCLK_BITS                   RCC_CFGR2_HPRE_DIV512
#else
  #error "invalid STM32_CFG_HCLK_VALUE value specified"
#endif

/**
 * @brief   AHB clock clock point.
 */
#define STM32_HCLK_FREQ                     (STM32_SYSCLK_FREQ /            \
                                             STM32_CFG_HCLK_VALUE)

#if !((STM32_HCLK_ENABLED != TRUE) || (STM32_HCLK_FREQ <= STM32_HCLK_MAX)) && \
    !defined(__DOXYGEN__)
  #error "STM32_HCLK_FREQ above maximum frequency"
#endif

/*--- Macros and checks for the PCLK1 clock point. -------------------------*/

/**
 * @brief   PCLK1 clock register bits.
 */
#if (STM32_CFG_PCLK1_VALUE == 1) || defined(__DOXYGEN__)
  #define STM32_PCLK1_BITS                  RCC_CFGR2_PPRE1_DIV1
#elif (STM32_CFG_PCLK1_VALUE == 2)
  #define STM32_PCLK1_BITS                  RCC_CFGR2_PPRE1_DIV2
#elif (STM32_CFG_PCLK1_VALUE == 4)
  #define STM32_PCLK1_BITS                  RCC_CFGR2_PPRE1_DIV4
#elif (STM32_CFG_PCLK1_VALUE == 8)
  #define STM32_PCLK1_BITS                  RCC_CFGR2_PPRE1_DIV8
#elif (STM32_CFG_PCLK1_VALUE == 16)
  #define STM32_PCLK1_BITS                  RCC_CFGR2_PPRE1_DIV16
#else
  #error "invalid STM32_CFG_PCLK1_VALUE value specified"
#endif

/**
 * @brief   APB1 clock clock point.
 */
#define STM32_PCLK1_FREQ                    (STM32_HCLK_FREQ /              \
                                             STM32_CFG_PCLK1_VALUE)

#if !((STM32_PCLK1_ENABLED != TRUE) || (STM32_PCLK1_FREQ <= STM32_PCLK1_MAX)) && \
    !defined(__DOXYGEN__)
  #error "STM32_PCLK1_FREQ above maximum frequency"
#endif

/*--- Macros and checks for the PCLK1TIM clock point. ----------------------*/

/**
 * @brief   PCLK1TIM clock register bits.
 */
#define STM32_PCLK1TIM_BITS                 0U

/**
 * @brief   APB1 timer clock clock point.
 */
#define STM32_PCLK1TIM_FREQ                 ((STM32_CFG_PCLK1_VALUE == 1) ? STM32_PCLK1_FREQ : \
                                             (STM32_PCLK1_FREQ * 2U))

/*--- Macros and checks for the PCLK2 clock point. -------------------------*/

/**
 * @brief   PCLK2 clock register bits.
 */
#if (STM32_CFG_PCLK2_VALUE == 1) || defined(__DOXYGEN__)
  #define STM32_PCLK2_BITS                  RCC_CFGR2_PPRE2_DIV1
#elif (STM32_CFG_PCLK2_VALUE == 2)
  #define STM32_PCLK2_BITS                  RCC_CFGR2_PPRE2_DIV2
#elif (STM32_CFG_PCLK2_VALUE == 4)
  #define STM32_PCLK2_BITS                  RCC_CFGR2_PPRE2_DIV4
#elif (STM32_CFG_PCLK2_VALUE == 8)
  #define STM32_PCLK2_BITS                  RCC_CFGR2_PPRE2_DIV8
#elif (STM32_CFG_PCLK2_VALUE == 16)
  #define STM32_PCLK2_BITS                  RCC_CFGR2_PPRE2_DIV16
#else
  #error "invalid STM32_CFG_PCLK2_VALUE value specified"
#endif

/**
 * @brief   APB2 clock clock point.
 */
#define STM32_PCLK2_FREQ                    (STM32_HCLK_FREQ /              \
                                             STM32_CFG_PCLK2_VALUE)

#if !((STM32_PCLK2_ENABLED != TRUE) || (STM32_PCLK2_FREQ <= STM32_PCLK2_MAX)) && \
    !defined(__DOXYGEN__)
  #error "STM32_PCLK2_FREQ above maximum frequency"
#endif

/*--- Macros and checks for the PCLK2TIM clock point. ----------------------*/

/**
 * @brief   PCLK2TIM clock register bits.
 */
#define STM32_PCLK2TIM_BITS                 0U

/**
 * @brief   APB2 timer clock clock point.
 */
#define STM32_PCLK2TIM_FREQ                 ((STM32_CFG_PCLK2_VALUE == 1) ? STM32_PCLK2_FREQ : \
                                             (STM32_PCLK2_FREQ * 2U))

/*--- Macros and checks for the PCLK3 clock point. -------------------------*/

/**
 * @brief   PCLK3 clock register bits.
 */
#if (STM32_CFG_PCLK3_VALUE == 1) || defined(__DOXYGEN__)
  #define STM32_PCLK3_BITS                  RCC_CFGR3_PPRE3_DIV1
#elif (STM32_CFG_PCLK3_VALUE == 2)
  #define STM32_PCLK3_BITS                  RCC_CFGR3_PPRE3_DIV2
#elif (STM32_CFG_PCLK3_VALUE == 4)
  #define STM32_PCLK3_BITS                  RCC_CFGR3_PPRE3_DIV4
#elif (STM32_CFG_PCLK3_VALUE == 8)
  #define STM32_PCLK3_BITS                  RCC_CFGR3_PPRE3_DIV8
#elif (STM32_CFG_PCLK3_VALUE == 16)
  #define STM32_PCLK3_BITS                  RCC_CFGR3_PPRE3_DIV16
#else
  #error "invalid STM32_CFG_PCLK3_VALUE value specified"
#endif

/**
 * @brief   APB3 clock clock point.
 */
#define STM32_PCLK3_FREQ                    (STM32_HCLK_FREQ /              \
                                             STM32_CFG_PCLK3_VALUE)

#if !((STM32_PCLK3_ENABLED != TRUE) || (STM32_PCLK3_FREQ <= STM32_PCLK3_MAX)) && \
    !defined(__DOXYGEN__)
  #error "STM32_PCLK3_FREQ above maximum frequency"
#endif

/*--- Macros and checks for the HSEDIV clock point. ------------------------*/

/**
 * @brief   HSEDIV clock register bits.
 */
#define STM32_HSEDIV_BITS                   0U

/**
 * @brief   HSE divided-by-32 RTC clock clock point.
 */
#if (STM32_HSEDIV_ENABLED == TRUE) || defined(__DOXYGEN__)
  #define STM32_HSEDIV_FREQ                 (STM32_HSE_FREQ / 32U)
#else
  #define STM32_HSEDIV_FREQ                 0U
#endif

/*--- Macros and checks for the LSESYS clock point. ------------------------*/

/**
 * @brief   LSESYS clock register bits.
 */
#if (STM32_LSESYS_ENABLED == TRUE) || defined(__DOXYGEN__)
  #define STM32_BDCR_LSESYS_BITS            RCC_BDCR_LSESYSEN
#else
  #define STM32_BDCR_LSESYS_BITS            0U
#endif

/**
 * @brief   LSE system clock clock point.
 */
#if (STM32_LSESYS_ENABLED == TRUE) || defined(__DOXYGEN__)
  #define STM32_LSESYS_FREQ                 STM32_LSE_FREQ
#else
  #define STM32_LSESYS_FREQ                 0U
#endif

/*--- Macros and checks for the RTC clock point. ---------------------------*/

/**
 * @brief   RTC clock register bits.
 */
#if (STM32_CFG_RTC_SEL == RCC_BDCR_RTCSEL_NOCLOCK) || defined(__DOXYGEN__)
  #define STM32_RTC_BITS                    RCC_BDCR_RTCSEL_NOCLOCK
#elif (STM32_CFG_RTC_SEL == RCC_BDCR_RTCSEL_LSE)
  #define STM32_RTC_BITS                    RCC_BDCR_RTCSEL_LSE
#elif (STM32_CFG_RTC_SEL == RCC_BDCR_RTCSEL_LSI)
  #define STM32_RTC_BITS                    RCC_BDCR_RTCSEL_LSI
#elif (STM32_CFG_RTC_SEL == RCC_BDCR_RTCSEL_HSEDIV)
  #define STM32_RTC_BITS                    RCC_BDCR_RTCSEL_HSEDIV
#else
  #error "invalid STM32_CFG_RTC_SEL value specified"
#endif

/**
 * @brief   RTC and TAMP clock clock point.
 */
#if ((STM32_RTC_ENABLED == TRUE) && \
     (STM32_CFG_RTC_SEL == RCC_BDCR_RTCSEL_NOCLOCK)) || \
    defined(__DOXYGEN__)
  #define STM32_RTC_FREQ                    STM32_NONE_FREQ
#elif (STM32_RTC_ENABLED == TRUE) && \
      (STM32_CFG_RTC_SEL == RCC_BDCR_RTCSEL_LSE)
  #define STM32_RTC_FREQ                    STM32_LSE_FREQ
#elif (STM32_RTC_ENABLED == TRUE) && \
      (STM32_CFG_RTC_SEL == RCC_BDCR_RTCSEL_LSI)
  #define STM32_RTC_FREQ                    STM32_LSI_FREQ
#elif (STM32_RTC_ENABLED == TRUE) && \
      (STM32_CFG_RTC_SEL == RCC_BDCR_RTCSEL_HSEDIV)
  #define STM32_RTC_FREQ                    STM32_HSEDIV_FREQ
#else
  #define STM32_RTC_FREQ                    0U
#endif

/*--- Macros and checks for the LSCO clock point. --------------------------*/

/**
 * @brief   LSCO clock register bits.
 */
#if (STM32_CFG_LSCO_SEL == RCC_BDCR_LSCOSEL_NOCLOCK) || defined(__DOXYGEN__)
  #define STM32_LSCO_BITS                   RCC_BDCR_LSCOSEL_NOCLOCK
#elif (STM32_CFG_LSCO_SEL == RCC_BDCR_LSCOSEL_LSI)
  #define STM32_LSCO_BITS                   RCC_BDCR_LSCOSEL_LSI
#elif (STM32_CFG_LSCO_SEL == RCC_BDCR_LSCOSEL_LSE)
  #define STM32_LSCO_BITS                   RCC_BDCR_LSCOSEL_LSE
#else
  #error "invalid STM32_CFG_LSCO_SEL value specified"
#endif

/**
 * @brief   LSCO output pin clock point.
 */
#if ((STM32_LSCO_ENABLED == TRUE) && \
     (STM32_CFG_LSCO_SEL == RCC_BDCR_LSCOSEL_NOCLOCK)) || \
    defined(__DOXYGEN__)
  #define STM32_LSCO_FREQ                   STM32_NONE_FREQ
#elif (STM32_LSCO_ENABLED == TRUE) && \
      (STM32_CFG_LSCO_SEL == RCC_BDCR_LSCOSEL_LSI)
  #define STM32_LSCO_FREQ                   STM32_LSI_FREQ
#elif (STM32_LSCO_ENABLED == TRUE) && \
      (STM32_CFG_LSCO_SEL == RCC_BDCR_LSCOSEL_LSE)
  #define STM32_LSCO_FREQ                   STM32_LSESYS_FREQ
#else
  #define STM32_LSCO_FREQ                   0U
#endif

/*--- Macros and checks for the LPTIM1 clock point. ------------------------*/

/**
 * @brief   LPTIM1 clock register bits.
 */
#if (STM32_CFG_LPTIM1_SEL == RCC_CCIPR3_LPTIM1SEL_MSIK) || defined(__DOXYGEN__)
  #if (STM32_LPTIM1_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_LPTIM1_BITS               RCC_CCIPR3_LPTIM1SEL_MSIK
  #else
    #define STM32_LPTIM1_BITS               0U
  #endif
#elif (STM32_CFG_LPTIM1_SEL == RCC_CCIPR3_LPTIM1SEL_LSI)
  #if (STM32_LPTIM1_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_LPTIM1_BITS               RCC_CCIPR3_LPTIM1SEL_LSI
  #else
    #define STM32_LPTIM1_BITS               0U
  #endif
#elif (STM32_CFG_LPTIM1_SEL == RCC_CCIPR3_LPTIM1SEL_HSI16)
  #if (STM32_LPTIM1_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_LPTIM1_BITS               RCC_CCIPR3_LPTIM1SEL_HSI16
  #else
    #define STM32_LPTIM1_BITS               0U
  #endif
#elif (STM32_CFG_LPTIM1_SEL == RCC_CCIPR3_LPTIM1SEL_LSE)
  #if (STM32_LPTIM1_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_LPTIM1_BITS               RCC_CCIPR3_LPTIM1SEL_LSE
  #else
    #define STM32_LPTIM1_BITS               0U
  #endif
#else
  #error "invalid STM32_CFG_LPTIM1_SEL value specified"
#endif

/**
 * @brief   LPTIM1 clock clock point.
 */
#if ((STM32_LPTIM1_ENABLED == TRUE) && \
     (STM32_CFG_LPTIM1_SEL == RCC_CCIPR3_LPTIM1SEL_MSIK)) || \
    defined(__DOXYGEN__)
  #define STM32_LPTIM1_FREQ                 STM32_MSIK_FREQ
#elif (STM32_LPTIM1_ENABLED == TRUE) && \
      (STM32_CFG_LPTIM1_SEL == RCC_CCIPR3_LPTIM1SEL_LSI)
  #define STM32_LPTIM1_FREQ                 STM32_LSI_FREQ
#elif (STM32_LPTIM1_ENABLED == TRUE) && \
      (STM32_CFG_LPTIM1_SEL == RCC_CCIPR3_LPTIM1SEL_HSI16)
  #define STM32_LPTIM1_FREQ                 STM32_HSI16_FREQ
#elif (STM32_LPTIM1_ENABLED == TRUE) && \
      (STM32_CFG_LPTIM1_SEL == RCC_CCIPR3_LPTIM1SEL_LSE)
  #define STM32_LPTIM1_FREQ                 STM32_LSESYS_FREQ
#else
  #define STM32_LPTIM1_FREQ                 0U
#endif

/*--- Macros and checks for the LPTIM2 clock point. ------------------------*/

/**
 * @brief   LPTIM2 clock register bits.
 */
#if (STM32_CFG_LPTIM2_SEL == RCC_CCIPR1_LPTIM2SEL_PCLK1) || defined(__DOXYGEN__)
  #if (STM32_LPTIM2_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_LPTIM2_BITS               RCC_CCIPR1_LPTIM2SEL_PCLK1
  #else
    #define STM32_LPTIM2_BITS               0U
  #endif
#elif (STM32_CFG_LPTIM2_SEL == RCC_CCIPR1_LPTIM2SEL_LSI)
  #if (STM32_LPTIM2_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_LPTIM2_BITS               RCC_CCIPR1_LPTIM2SEL_LSI
  #else
    #define STM32_LPTIM2_BITS               0U
  #endif
#elif (STM32_CFG_LPTIM2_SEL == RCC_CCIPR1_LPTIM2SEL_HSI16)
  #if (STM32_LPTIM2_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_LPTIM2_BITS               RCC_CCIPR1_LPTIM2SEL_HSI16
  #else
    #define STM32_LPTIM2_BITS               0U
  #endif
#elif (STM32_CFG_LPTIM2_SEL == RCC_CCIPR1_LPTIM2SEL_LSE)
  #if (STM32_LPTIM2_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_LPTIM2_BITS               RCC_CCIPR1_LPTIM2SEL_LSE
  #else
    #define STM32_LPTIM2_BITS               0U
  #endif
#else
  #error "invalid STM32_CFG_LPTIM2_SEL value specified"
#endif

/**
 * @brief   LPTIM2 clock clock point.
 */
#if ((STM32_LPTIM2_ENABLED == TRUE) && \
     (STM32_CFG_LPTIM2_SEL == RCC_CCIPR1_LPTIM2SEL_PCLK1)) || \
    defined(__DOXYGEN__)
  #define STM32_LPTIM2_FREQ                 STM32_PCLK1_FREQ
#elif (STM32_LPTIM2_ENABLED == TRUE) && \
      (STM32_CFG_LPTIM2_SEL == RCC_CCIPR1_LPTIM2SEL_LSI)
  #define STM32_LPTIM2_FREQ                 STM32_LSI_FREQ
#elif (STM32_LPTIM2_ENABLED == TRUE) && \
      (STM32_CFG_LPTIM2_SEL == RCC_CCIPR1_LPTIM2SEL_HSI16)
  #define STM32_LPTIM2_FREQ                 STM32_HSI16_FREQ
#elif (STM32_LPTIM2_ENABLED == TRUE) && \
      (STM32_CFG_LPTIM2_SEL == RCC_CCIPR1_LPTIM2SEL_LSE)
  #define STM32_LPTIM2_FREQ                 STM32_LSESYS_FREQ
#else
  #define STM32_LPTIM2_FREQ                 0U
#endif

/*--- Macros and checks for the LPTIM34 clock point. -----------------------*/

/**
 * @brief   LPTIM34 clock register bits.
 */
#if (STM32_CFG_LPTIM34_SEL == RCC_CCIPR3_LPTIM34SEL_MSIK) ||                \
    defined(__DOXYGEN__)
  #if (STM32_LPTIM34_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_LPTIM34_BITS              RCC_CCIPR3_LPTIM34SEL_MSIK
  #else
    #define STM32_LPTIM34_BITS              0U
  #endif
#elif (STM32_CFG_LPTIM34_SEL == RCC_CCIPR3_LPTIM34SEL_LSI)
  #if (STM32_LPTIM34_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_LPTIM34_BITS              RCC_CCIPR3_LPTIM34SEL_LSI
  #else
    #define STM32_LPTIM34_BITS              0U
  #endif
#elif (STM32_CFG_LPTIM34_SEL == RCC_CCIPR3_LPTIM34SEL_HSI16)
  #if (STM32_LPTIM34_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_LPTIM34_BITS              RCC_CCIPR3_LPTIM34SEL_HSI16
  #else
    #define STM32_LPTIM34_BITS              0U
  #endif
#elif (STM32_CFG_LPTIM34_SEL == RCC_CCIPR3_LPTIM34SEL_LSE)
  #if (STM32_LPTIM34_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_LPTIM34_BITS              RCC_CCIPR3_LPTIM34SEL_LSE
  #else
    #define STM32_LPTIM34_BITS              0U
  #endif
#else
  #error "invalid STM32_CFG_LPTIM34_SEL value specified"
#endif

/**
 * @brief   LPTIM3 and LPTIM4 clock clock point.
 */
#if ((STM32_LPTIM34_ENABLED == TRUE) && \
     (STM32_CFG_LPTIM34_SEL == RCC_CCIPR3_LPTIM34SEL_MSIK)) || \
    defined(__DOXYGEN__)
  #define STM32_LPTIM34_FREQ                STM32_MSIK_FREQ
#elif (STM32_LPTIM34_ENABLED == TRUE) && \
      (STM32_CFG_LPTIM34_SEL == RCC_CCIPR3_LPTIM34SEL_LSI)
  #define STM32_LPTIM34_FREQ                STM32_LSI_FREQ
#elif (STM32_LPTIM34_ENABLED == TRUE) && \
      (STM32_CFG_LPTIM34_SEL == RCC_CCIPR3_LPTIM34SEL_HSI16)
  #define STM32_LPTIM34_FREQ                STM32_HSI16_FREQ
#elif (STM32_LPTIM34_ENABLED == TRUE) && \
      (STM32_CFG_LPTIM34_SEL == RCC_CCIPR3_LPTIM34SEL_LSE)
  #define STM32_LPTIM34_FREQ                STM32_LSESYS_FREQ
#else
  #define STM32_LPTIM34_FREQ                0U
#endif

/*--- Macros and checks for the IWDG clock point. --------------------------*/

/**
 * @brief   IWDG clock register bits.
 */
#define STM32_IWDG_BITS                     0U

/**
 * @brief   IWDG clock clock point.
 */
#if (STM32_IWDG_ENABLED == TRUE) || defined(__DOXYGEN__)
  #define STM32_IWDG_FREQ                   STM32_LSI_FREQ
#else
  #define STM32_IWDG_FREQ                   0U
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
#define STM32_PLL1IN_CLOCK                  hal_lld_get_clock_point(CLK_PLL1IN)
#define STM32_PLL1REF_CLOCK                 hal_lld_get_clock_point(CLK_PLL1REF)
#define STM32_PLL1VCO_CLOCK                 hal_lld_get_clock_point(CLK_PLL1VCO)
#define STM32_PLL1P_CLOCK                   hal_lld_get_clock_point(CLK_PLL1P)
#define STM32_PLL1Q_CLOCK                   hal_lld_get_clock_point(CLK_PLL1Q)
#define STM32_PLL1R_CLOCK                   hal_lld_get_clock_point(CLK_PLL1R)
#define STM32_PLL2IN_CLOCK                  hal_lld_get_clock_point(CLK_PLL2IN)
#define STM32_PLL2REF_CLOCK                 hal_lld_get_clock_point(CLK_PLL2REF)
#define STM32_PLL2VCO_CLOCK                 hal_lld_get_clock_point(CLK_PLL2VCO)
#define STM32_PLL2P_CLOCK                   hal_lld_get_clock_point(CLK_PLL2P)
#define STM32_PLL2Q_CLOCK                   hal_lld_get_clock_point(CLK_PLL2Q)
#define STM32_PLL2R_CLOCK                   hal_lld_get_clock_point(CLK_PLL2R)
#define STM32_PLL3IN_CLOCK                  hal_lld_get_clock_point(CLK_PLL3IN)
#define STM32_PLL3REF_CLOCK                 hal_lld_get_clock_point(CLK_PLL3REF)
#define STM32_PLL3VCO_CLOCK                 hal_lld_get_clock_point(CLK_PLL3VCO)
#define STM32_PLL3P_CLOCK                   hal_lld_get_clock_point(CLK_PLL3P)
#define STM32_PLL3Q_CLOCK                   hal_lld_get_clock_point(CLK_PLL3Q)
#define STM32_PLL3R_CLOCK                   hal_lld_get_clock_point(CLK_PLL3R)
#define STM32_SYSCLK_CLOCK                  hal_lld_get_clock_point(CLK_SYSCLK)
#define STM32_HCLK_CLOCK                    hal_lld_get_clock_point(CLK_HCLK)
#define STM32_PCLK1_CLOCK                   hal_lld_get_clock_point(CLK_PCLK1)
#define STM32_PCLK1TIM_CLOCK                hal_lld_get_clock_point(CLK_PCLK1TIM)
#define STM32_PCLK2_CLOCK                   hal_lld_get_clock_point(CLK_PCLK2)
#define STM32_PCLK2TIM_CLOCK                hal_lld_get_clock_point(CLK_PCLK2TIM)
#define STM32_PCLK3_CLOCK                   hal_lld_get_clock_point(CLK_PCLK3)
#define STM32_HSEDIV_CLOCK                  STM32_HSEDIV_FREQ
#define STM32_LSESYS_CLOCK                  STM32_LSESYS_FREQ
#define STM32_RTC_CLOCK                     STM32_RTC_FREQ
#define STM32_LSCO_CLOCK                    STM32_LSCO_FREQ
#define STM32_LPTIM1_CLOCK                  STM32_LPTIM1_FREQ
#define STM32_LPTIM2_CLOCK                  STM32_LPTIM2_FREQ
#define STM32_LPTIM34_CLOCK                 STM32_LPTIM34_FREQ
#define STM32_IWDG_CLOCK                    STM32_IWDG_FREQ
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
   (clkpt) == CLK_PLL1IN       ? STM32_PLL1IN_FREQ        :                 \
   (clkpt) == CLK_PLL1REF      ? STM32_PLL1REF_FREQ       :                 \
   (clkpt) == CLK_PLL1VCO      ? STM32_PLL1VCO_FREQ       :                 \
   (clkpt) == CLK_PLL1P        ? STM32_PLL1P_FREQ         :                 \
   (clkpt) == CLK_PLL1Q        ? STM32_PLL1Q_FREQ         :                 \
   (clkpt) == CLK_PLL1R        ? STM32_PLL1R_FREQ         :                 \
   (clkpt) == CLK_PLL2IN       ? STM32_PLL2IN_FREQ        :                 \
   (clkpt) == CLK_PLL2REF      ? STM32_PLL2REF_FREQ       :                 \
   (clkpt) == CLK_PLL2VCO      ? STM32_PLL2VCO_FREQ       :                 \
   (clkpt) == CLK_PLL2P        ? STM32_PLL2P_FREQ         :                 \
   (clkpt) == CLK_PLL2Q        ? STM32_PLL2Q_FREQ         :                 \
   (clkpt) == CLK_PLL2R        ? STM32_PLL2R_FREQ         :                 \
   (clkpt) == CLK_PLL3IN       ? STM32_PLL3IN_FREQ        :                 \
   (clkpt) == CLK_PLL3REF      ? STM32_PLL3REF_FREQ       :                 \
   (clkpt) == CLK_PLL3VCO      ? STM32_PLL3VCO_FREQ       :                 \
   (clkpt) == CLK_PLL3P        ? STM32_PLL3P_FREQ         :                 \
   (clkpt) == CLK_PLL3Q        ? STM32_PLL3Q_FREQ         :                 \
   (clkpt) == CLK_PLL3R        ? STM32_PLL3R_FREQ         :                 \
   (clkpt) == CLK_SYSCLK       ? STM32_SYSCLK_FREQ        :                 \
   (clkpt) == CLK_HCLK         ? STM32_HCLK_FREQ          :                 \
   (clkpt) == CLK_PCLK1        ? STM32_PCLK1_FREQ         :                 \
   (clkpt) == CLK_PCLK1TIM     ? STM32_PCLK1TIM_FREQ      :                 \
   (clkpt) == CLK_PCLK2        ? STM32_PCLK2_FREQ         :                 \
   (clkpt) == CLK_PCLK2TIM     ? STM32_PCLK2TIM_FREQ      :                 \
   (clkpt) == CLK_PCLK3        ? STM32_PCLK3_FREQ         :                 \
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
