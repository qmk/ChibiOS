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
#define CLK_HSE                 2U
#define CLK_MSIS                3U
#define CLK_MSIK                4U
#define CLK_SYSCLK              5U
#define CLK_HCLK                6U
#define CLK_PCLK1               7U
#define CLK_PCLK1TIM            8U
#define CLK_PCLK2               9U
#define CLK_PCLK2TIM            10U
#define CLK_PCLK3               11U
#define CLK_MCO1                12U
#define CLK_MCO2                13U
#define CLK_ARRAY_SIZE          14U

#define CLK_POINT_NAMES                                                     \
  {                                                                         \
    "HSI16",                                                                \
    "HSI48",                                                                \
    "HSE",                                                                  \
    "MSIS",                                                                 \
    "MSIK",                                                                 \
    "SYSCLK",                                                               \
    "HCLK",                                                                 \
    "PCLK1",                                                                \
    "PCLK1TIM",                                                             \
    "PCLK2",                                                                \
    "PCLK2TIM",                                                             \
    "PCLK3",                                                                \
    "MCO1",                                                                 \
    "MCO2"                                                                  \
  }
/** @} */

/**
 * @name    Generated support definitions
 * @{
 */
#define RCC_MSIRC0_FREE                     0
#define RCC_MSIRC0_PLL_LSE                  1
#define RCC_MSIRC0_PLL_HSE                  2
#define RCC_MSIRC0_PLL_LSE_FAST             3
#define RCC_MSIRC0_PLL_HSE_FAST             4
#define RCC_MSIRC1_FREE                     0
#define RCC_MSIRC1_PLL_LSE                  1
#define RCC_MSIRC1_PLL_HSE                  2
#define RCC_MSIRC1_PLL_LSE_FAST             3
#define RCC_MSIRC1_PLL_HSE_FAST             4
#define RCC_ICSCR1_MSIS_IRC0_DIV1           0
#define RCC_ICSCR1_MSIS_IRC0_DIV2           1
#define RCC_ICSCR1_MSIS_IRC0_DIV4           2
#define RCC_ICSCR1_MSIS_IRC0_DIV8           3
#define RCC_ICSCR1_MSIS_IRC1_DIV1           4
#define RCC_ICSCR1_MSIS_IRC1_DIV2           5
#define RCC_ICSCR1_MSIS_IRC1_DIV4           6
#define RCC_ICSCR1_MSIS_IRC1_DIV8           7
#define RCC_ICSCR1_MSIK_IRC0_DIV1           0
#define RCC_ICSCR1_MSIK_IRC0_DIV2           1
#define RCC_ICSCR1_MSIK_IRC0_DIV4           2
#define RCC_ICSCR1_MSIK_IRC0_DIV8           3
#define RCC_ICSCR1_MSIK_IRC1_DIV1           4
#define RCC_ICSCR1_MSIK_IRC1_DIV2           5
#define RCC_ICSCR1_MSIK_IRC1_DIV4           6
#define RCC_ICSCR1_MSIK_IRC1_DIV8           7
#define RCC_ICSCR1_MSIHSINDIV_HSE16         ((0U) << RCC_ICSCR1_MSIHSINDIV_Pos)
#define RCC_ICSCR1_MSIHSINDIV_HSE32         ((1U) << RCC_ICSCR1_MSIHSINDIV_Pos)
#define RCC_ICSCR1_MSIPLL1SEL_LSE           ((0U) << RCC_ICSCR1_MSIPLL1SEL_Pos)
#define RCC_ICSCR1_MSIPLL1SEL_HSE           ((1U) << RCC_ICSCR1_MSIPLL1SEL_Pos)
#define RCC_ICSCR1_MSIPLL0SEL_LSE           ((0U) << RCC_ICSCR1_MSIPLL0SEL_Pos)
#define RCC_ICSCR1_MSIPLL0SEL_HSE           ((1U) << RCC_ICSCR1_MSIPLL0SEL_Pos)
#define RCC_ICSCR1_MSIBIAS_CONTINUOUS       ((0U) << RCC_ICSCR1_MSIBIAS_Pos)
#define RCC_ICSCR1_MSIBIAS_SAMPLING         ((1U) << RCC_ICSCR1_MSIBIAS_Pos)
#define RCC_ICSCR1_MSIRGSEL_CSR             ((0U) << RCC_ICSCR1_MSIRGSEL_Pos)
#define RCC_ICSCR1_MSIRGSEL_ICSCR1          ((1U) << RCC_ICSCR1_MSIRGSEL_Pos)
#define RCC_ICSCR1_MSIKSEL_MSIRC0           ((0U) << RCC_ICSCR1_MSIKSEL_Pos)
#define RCC_ICSCR1_MSIKSEL_MSIRC1           ((1U) << RCC_ICSCR1_MSIKSEL_Pos)
#define RCC_ICSCR1_MSISSEL_MSIRC0           ((0U) << RCC_ICSCR1_MSISSEL_Pos)
#define RCC_ICSCR1_MSISSEL_MSIRC1           ((1U) << RCC_ICSCR1_MSISSEL_Pos)
#define RCC_CFGR1_STOPWUCK_MSIS             ((0U) << RCC_CFGR1_STOPWUCK_Pos)
#define RCC_CFGR1_STOPWUCK_HSI16            ((1U) << RCC_CFGR1_STOPWUCK_Pos)
#define RCC_CFGR1_STOPKERWUCK_MSIK          ((0U) << RCC_CFGR1_STOPKERWUCK_Pos)
#define RCC_CFGR1_STOPKERWUCK_HSI16         ((1U) << RCC_CFGR1_STOPKERWUCK_Pos)
#define RCC_CCIPR1_TIMICSEL_NOCLOCK         ((0U) << RCC_CCIPR1_TIMICSEL_Pos)
#define RCC_CCIPR1_TIMICSEL_HSI256_MSIS1024_MSIS4 ((4U) << RCC_CCIPR1_TIMICSEL_Pos)
#define RCC_CCIPR1_TIMICSEL_HSI256_MSIS1024_MSIK4 ((5U) << RCC_CCIPR1_TIMICSEL_Pos)
#define RCC_CCIPR1_TIMICSEL_HSI256_MSIK1024_MSIS4 ((6U) << RCC_CCIPR1_TIMICSEL_Pos)
#define RCC_CCIPR1_TIMICSEL_HSI256_MSIK1024_MSIK4 ((7U) << RCC_CCIPR1_TIMICSEL_Pos)
#define RCC_ICSCR1_MSIPLL1N_FIELD(n)        ((n) << RCC_ICSCR1_MSIPLL1N_Pos)
#define RCC_ICSCR1_MSIKDIV_FIELD(n)         ((n) << RCC_ICSCR1_MSIKDIV_Pos)
#define RCC_ICSCR1_MSISDIV_FIELD(n)         ((n) << RCC_ICSCR1_MSISDIV_Pos)
/** @} */

/**
 * @name    Generated mux selector constants
 * @{
 */
#define RCC_CFGR1_SW_MSIS                   ((0U) << 0U)
#define RCC_CFGR1_SW_HSI16                  ((1U) << 0U)
#define RCC_CFGR1_SW_HSE                    ((2U) << 0U)

#define RCC_CFGR1_MCO1SEL_OFF               ((0U) << 24U)
#define RCC_CFGR1_MCO1SEL_SYSCLK            ((1U) << 24U)
#define RCC_CFGR1_MCO1SEL_MSIS              ((2U) << 24U)
#define RCC_CFGR1_MCO1SEL_HSI16             ((3U) << 24U)
#define RCC_CFGR1_MCO1SEL_HSE               ((4U) << 24U)
#define RCC_CFGR1_MCO1SEL_LSI               ((5U) << 24U)
#define RCC_CFGR1_MCO1SEL_LSE               ((6U) << 24U)
#define RCC_CFGR1_MCO1SEL_HSI48             ((7U) << 24U)
#define RCC_CFGR1_MCO1SEL_MSIK              ((8U) << 24U)

#define RCC_CFGR1_MCO2SEL_OFF               ((0U) << 16U)
#define RCC_CFGR1_MCO2SEL_SYSCLK            ((1U) << 16U)
#define RCC_CFGR1_MCO2SEL_MSIS              ((2U) << 16U)
#define RCC_CFGR1_MCO2SEL_HSI16             ((3U) << 16U)
#define RCC_CFGR1_MCO2SEL_HSE               ((4U) << 16U)
#define RCC_CFGR1_MCO2SEL_LSI               ((5U) << 16U)
#define RCC_CFGR1_MCO2SEL_LSE               ((6U) << 16U)
#define RCC_CFGR1_MCO2SEL_HSI48             ((7U) << 16U)
#define RCC_CFGR1_MCO2SEL_MSIK              ((8U) << 16U)

#define RCC_BDCR_RTCSEL_NOCLOCK             ((0U) << 8U)
#define RCC_BDCR_RTCSEL_LSE                 ((1U) << 8U)
#define RCC_BDCR_RTCSEL_LSI                 ((2U) << 8U)
#define RCC_BDCR_RTCSEL_HSEDIV              ((3U) << 8U)

#define RCC_BDCR_LSCOSEL_NOCLOCK            ((0U) << 24U)
#define RCC_BDCR_LSCOSEL_LSI                ((1U) << 24U)
#define RCC_BDCR_LSCOSEL_LSE                ((3U) << 24U)

#define RCC_CCIPR1_USART1SEL_PCLK2          ((0U) << 0U)
#define RCC_CCIPR1_USART1SEL_HSI16          ((1U) << 0U)

#define RCC_CCIPR1_USART3SEL_PCLK1          ((0U) << 2U)
#define RCC_CCIPR1_USART3SEL_HSI16          ((1U) << 2U)

#define RCC_CCIPR1_UART4SEL_PCLK1           ((0U) << 4U)
#define RCC_CCIPR1_UART4SEL_HSI16           ((1U) << 4U)

#define RCC_CCIPR1_UART5SEL_PCLK1           ((0U) << 6U)
#define RCC_CCIPR1_UART5SEL_HSI16           ((1U) << 6U)

#define RCC_CCIPR3_LPUART1SEL_PCLK3         ((0U) << 0U)
#define RCC_CCIPR3_LPUART1SEL_HSI16         ((1U) << 0U)
#define RCC_CCIPR3_LPUART1SEL_LSE           ((2U) << 0U)
#define RCC_CCIPR3_LPUART1SEL_MSIK          ((3U) << 0U)

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

#define RCC_CCIPR1_SPI1SEL_PCLK2            ((0U) << 20U)
#define RCC_CCIPR1_SPI1SEL_MSIK             ((1U) << 20U)

#define RCC_CCIPR1_SPI2SEL_PCLK1            ((0U) << 16U)
#define RCC_CCIPR1_SPI2SEL_MSIK             ((1U) << 16U)

#define RCC_CCIPR2_SPI3SEL_PCLK1            ((0U) << 3U)
#define RCC_CCIPR2_SPI3SEL_MSIK             ((1U) << 3U)

#define RCC_CCIPR2_OCTOSPISEL_SYSCLK        ((0U) << 20U)
#define RCC_CCIPR2_OCTOSPISEL_MSIK          ((1U) << 20U)

#define RCC_CCIPR1_SYSTICKSEL_HCLKDIV8      ((0U) << 22U)
#define RCC_CCIPR1_SYSTICKSEL_LSI           ((1U) << 22U)
#define RCC_CCIPR1_SYSTICKSEL_LSE           ((2U) << 22U)

#define RCC_CCIPR1_ICLKSEL_HSI48            ((0U) << 26U)
#define RCC_CCIPR1_ICLKSEL_MSIK             ((1U) << 26U)
#define RCC_CCIPR1_ICLKSEL_HSE              ((2U) << 26U)
#define RCC_CCIPR1_ICLKSEL_SYSCLK           ((3U) << 26U)

#define RCC_CCIPR1_USB1SEL_ICLK             ((0U) << 28U)
#define RCC_CCIPR1_USB1SEL_ICLKDIV2         ((1U) << 28U)

#define RCC_CCIPR1_I2C1SEL_PCLK1            ((0U) << 10U)
#define RCC_CCIPR1_I2C1SEL_MSIK             ((1U) << 10U)

#define RCC_CCIPR1_I2C2SEL_PCLK1            ((0U) << 12U)
#define RCC_CCIPR1_I2C2SEL_MSIK             ((1U) << 12U)

#define RCC_CCIPR3_I2C3SEL_PCLK3            ((0U) << 6U)
#define RCC_CCIPR3_I2C3SEL_MSIK             ((1U) << 6U)

#define RCC_CCIPR1_I3C1SEL_PCLK1            ((0U) << 8U)
#define RCC_CCIPR1_I3C1SEL_MSIK             ((1U) << 8U)

#define RCC_CCIPR1_I3C2SEL_PCLK2            ((0U) << 14U)
#define RCC_CCIPR1_I3C2SEL_MSIK             ((1U) << 14U)

#define RCC_CCIPR2_ADCDACSEL_HCLK           ((0U) << 16U)
#define RCC_CCIPR2_ADCDACSEL_HSE            ((1U) << 16U)
#define RCC_CCIPR2_ADCDACSEL_MSIK           ((2U) << 16U)

#define RCC_CCIPR2_DAC1SHSEL_LSE            ((0U) << 19U)
#define RCC_CCIPR2_DAC1SHSEL_LSI            ((1U) << 19U)
#define RCC_CCIPR2_DAC1SHSEL_IGNORE         0xFFFFFFFFU

#define RCC_CCIPR2_RNGSEL_HSI48             ((0U) << 11U)
#define RCC_CCIPR2_RNGSEL_MSIK              ((1U) << 11U)
#define RCC_CCIPR2_RNGSEL_IGNORE            0xFFFFFFFFU

#define RCC_CCIPR1_FDCAN1SEL_SYSCLK         ((0U) << 24U)
#define RCC_CCIPR1_FDCAN1SEL_MSIK           ((1U) << 24U)
#define RCC_CCIPR1_FDCAN1SEL_IGNORE         0xFFFFFFFFU

#define RCC_CCIPR2_SAI1SEL_MSIK             ((0U) << 5U)
#define RCC_CCIPR2_SAI1SEL_AUDIOCLK         ((1U) << 5U)
#define RCC_CCIPR2_SAI1SEL_HSE              ((2U) << 5U)

#define RCC_CCIPR2_ADF1SEL_HCLK             ((0U) << 0U)
#define RCC_CCIPR2_ADF1SEL_AUDIOCLK         ((1U) << 0U)
#define RCC_CCIPR2_ADF1SEL_HSE              ((2U) << 0U)
#define RCC_CCIPR2_ADF1SEL_SAI1             ((3U) << 0U)
/** @} */

/**
 * @name    Generated scaler selector constants
 * @{
 */
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

#define RCC_CFGR1_MCO1PRE_DIV1              ((0U) << 28U)
#define RCC_CFGR1_MCO1PRE_DIV2              ((1U) << 28U)
#define RCC_CFGR1_MCO1PRE_DIV4              ((2U) << 28U)
#define RCC_CFGR1_MCO1PRE_DIV8              ((3U) << 28U)
#define RCC_CFGR1_MCO1PRE_DIV16             ((4U) << 28U)
#define RCC_CFGR1_MCO1PRE_DIV32             ((5U) << 28U)
#define RCC_CFGR1_MCO1PRE_DIV64             ((6U) << 28U)
#define RCC_CFGR1_MCO1PRE_DIV128            ((7U) << 28U)

#define RCC_CFGR1_MCO2PRE_DIV1              ((0U) << 20U)
#define RCC_CFGR1_MCO2PRE_DIV2              ((1U) << 20U)
#define RCC_CFGR1_MCO2PRE_DIV4              ((2U) << 20U)
#define RCC_CFGR1_MCO2PRE_DIV8              ((3U) << 20U)
#define RCC_CFGR1_MCO2PRE_DIV16             ((4U) << 20U)
#define RCC_CFGR1_MCO2PRE_DIV32             ((5U) << 20U)
#define RCC_CFGR1_MCO2PRE_DIV64             ((6U) << 20U)
#define RCC_CFGR1_MCO2PRE_DIV128            ((7U) << 20U)

#define RCC_CCIPR2_ADCDACPRE_ICLK           ((0U) << 12U)
#define RCC_CCIPR2_ADCDACPRE_ICLKDIV2       ((1U) << 12U)
#define RCC_CCIPR2_ADCDACPRE_ICLKDIV4       ((8U) << 12U)
#define RCC_CCIPR2_ADCDACPRE_ICLKDIV8       ((9U) << 12U)
#define RCC_CCIPR2_ADCDACPRE_ICLKDIV16      ((10U) << 12U)
#define RCC_CCIPR2_ADCDACPRE_ICLKDIV32      ((11U) << 12U)
#define RCC_CCIPR2_ADCDACPRE_ICLKDIV64      ((12U) << 12U)
#define RCC_CCIPR2_ADCDACPRE_ICLKDIV128     ((13U) << 12U)
#define RCC_CCIPR2_ADCDACPRE_ICLKDIV256     ((14U) << 12U)
#define RCC_CCIPR2_ADCDACPRE_ICLKDIV512     ((15U) << 12U)
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
  #define STM32_CFG_PWR_VOSR                PWR_VOSR_RANGE1
#endif

/**
 * @brief   Selects the MSIRC0 operating mode.
 */
#if !defined(STM32_CFG_MSIRC0_MODE) || defined(__DOXYGEN__)
  #define STM32_CFG_MSIRC0_MODE             RCC_MSIRC0_PLL_LSE
#endif

/**
 * @brief   Selects the MSIRC1 operating mode.
 */
#if !defined(STM32_CFG_MSIRC1_MODE) || defined(__DOXYGEN__)
  #define STM32_CFG_MSIRC1_MODE             RCC_MSIRC1_FREE
#endif

/**
 * @brief   Selects the MSIRC1 PLL correction factor.
 */
#if !defined(STM32_CFG_MSIPLL1N_VALUE) || defined(__DOXYGEN__)
  #define STM32_CFG_MSIPLL1N_VALUE          0
#endif

/**
 * @brief   Sets the external audio clock input frequency.
 */
#if !defined(STM32_CFG_AUDIOCLK) || defined(__DOXYGEN__)
  #define STM32_CFG_AUDIOCLK                0U
#endif

/**
 * @brief   Selects the source and divide factor for MSIS.
 */
#if !defined(STM32_CFG_MSIS_SRCDIV) || defined(__DOXYGEN__)
  #define STM32_CFG_MSIS_SRCDIV             RCC_ICSCR1_MSIS_IRC0_DIV1
#endif

/**
 * @brief   Selects the source and divide factor for MSIK.
 */
#if !defined(STM32_CFG_MSIK_SRCDIV) || defined(__DOXYGEN__)
  #define STM32_CFG_MSIK_SRCDIV             RCC_ICSCR1_MSIK_IRC0_DIV1
#endif

/**
 * @brief   Selects the system clock source after STOP mode.
 */
#if !defined(STM32_CFG_STOPWUCK) || defined(__DOXYGEN__)
  #define STM32_CFG_STOPWUCK                RCC_CFGR1_STOPWUCK_MSIS
#endif

/**
 * @brief   Selects the kernel clock source after STOP mode.
 */
#if !defined(STM32_CFG_STOPKERWUCK) || defined(__DOXYGEN__)
  #define STM32_CFG_STOPKERWUCK             RCC_CFGR1_STOPKERWUCK_MSIK
#endif

/**
 * @brief   Selects the MSI bias mode.
 */
#if !defined(STM32_CFG_MSIBIAS) || defined(__DOXYGEN__)
  #define STM32_CFG_MSIBIAS                 RCC_ICSCR1_MSIBIAS_CONTINUOUS
#endif

/**
 * @brief   Selects the timer internal capture clock sources.
 */
#if !defined(STM32_CFG_TIMICSEL) || defined(__DOXYGEN__)
  #define STM32_CFG_TIMICSEL                RCC_CCIPR1_TIMICSEL_NOCLOCK
#endif

/**
 * @brief   Enables demand for the DAC1 sample-and-hold clock.
 */
#if !defined(STM32_CFG_DAC1SH_REQUIRED) || defined(__DOXYGEN__)
  #define STM32_CFG_DAC1SH_REQUIRED         FALSE
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
 * @brief   Enables demand for the OCTOSPI clock.
 */
#if !defined(STM32_CFG_OCTOSPI_REQUIRED) || defined(__DOXYGEN__)
  #define STM32_CFG_OCTOSPI_REQUIRED        FALSE
#endif

/**
 * @brief   Enables demand for the I3C1 clock.
 */
#if !defined(STM32_CFG_I3C1_REQUIRED) || defined(__DOXYGEN__)
  #define STM32_CFG_I3C1_REQUIRED           FALSE
#endif

/**
 * @brief   Enables demand for the I3C2 clock.
 */
#if !defined(STM32_CFG_I3C2_REQUIRED) || defined(__DOXYGEN__)
  #define STM32_CFG_I3C2_REQUIRED           FALSE
#endif

/**
 * @brief   Enables demand for the SAI1 clock.
 */
#if !defined(STM32_CFG_SAI1_REQUIRED) || defined(__DOXYGEN__)
  #define STM32_CFG_SAI1_REQUIRED           FALSE
#endif

/**
 * @brief   Enables demand for the ADF1 clock.
 */
#if !defined(STM32_CFG_ADF1_REQUIRED) || defined(__DOXYGEN__)
  #define STM32_CFG_ADF1_REQUIRED           FALSE
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
 * @brief   Enables the HSE clock source.
 */
#if !defined(STM32_CFG_HSE_ENABLE) || defined(__DOXYGEN__)
  #define STM32_CFG_HSE_ENABLE              FALSE
#endif

/**
 * @brief   Enables the LSE clock source.
 */
#if !defined(STM32_CFG_LSE_ENABLE) || defined(__DOXYGEN__)
  #define STM32_CFG_LSE_ENABLE              TRUE
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
 * @brief   Selects the MCO1DIV clock source.
 * @note    Allowed sources:
 *          - NONE.
 *          - SYSCLK.
 *          - MSIS.
 *          - HSI16.
 *          - HSE.
 *          - LSI.
 *          - LSE.
 *          - HSI48.
 *          - MSIK.
 */
#if !defined(STM32_CFG_MCO1DIV_SEL) || defined(__DOXYGEN__)
  #define STM32_CFG_MCO1DIV_SEL             RCC_CFGR1_MCO1SEL_OFF
#endif

/**
 * @brief   Configures the MCO1 clock divider value.
 */
#if !defined(STM32_CFG_MCO1_VALUE) || defined(__DOXYGEN__)
  #define STM32_CFG_MCO1_VALUE              1
#endif

/**
 * @brief   Selects the MCO2DIV clock source.
 * @note    Allowed sources:
 *          - NONE.
 *          - SYSCLK.
 *          - MSIS.
 *          - HSI16.
 *          - HSE.
 *          - LSI.
 *          - LSE.
 *          - HSI48.
 *          - MSIK.
 */
#if !defined(STM32_CFG_MCO2DIV_SEL) || defined(__DOXYGEN__)
  #define STM32_CFG_MCO2DIV_SEL             RCC_CFGR1_MCO2SEL_OFF
#endif

/**
 * @brief   Configures the MCO2 clock divider value.
 */
#if !defined(STM32_CFG_MCO2_VALUE) || defined(__DOXYGEN__)
  #define STM32_CFG_MCO2_VALUE              1
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
 *          - LSE.
 */
#if !defined(STM32_CFG_LSCO_SEL) || defined(__DOXYGEN__)
  #define STM32_CFG_LSCO_SEL                RCC_BDCR_LSCOSEL_NOCLOCK
#endif

/**
 * @brief   Selects the USART1 clock source.
 * @note    Allowed sources:
 *          - PCLK2.
 *          - HSI16.
 */
#if !defined(STM32_CFG_USART1_SEL) || defined(__DOXYGEN__)
  #define STM32_CFG_USART1_SEL              RCC_CCIPR1_USART1SEL_PCLK2
#endif

/**
 * @brief   Selects the USART3 clock source.
 * @note    Allowed sources:
 *          - PCLK1.
 *          - HSI16.
 */
#if !defined(STM32_CFG_USART3_SEL) || defined(__DOXYGEN__)
  #define STM32_CFG_USART3_SEL              RCC_CCIPR1_USART3SEL_PCLK1
#endif

/**
 * @brief   Selects the UART4 clock source.
 * @note    Allowed sources:
 *          - PCLK1.
 *          - HSI16.
 */
#if !defined(STM32_CFG_UART4_SEL) || defined(__DOXYGEN__)
  #define STM32_CFG_UART4_SEL               RCC_CCIPR1_UART4SEL_PCLK1
#endif

/**
 * @brief   Selects the UART5 clock source.
 * @note    Allowed sources:
 *          - PCLK1.
 *          - HSI16.
 */
#if !defined(STM32_CFG_UART5_SEL) || defined(__DOXYGEN__)
  #define STM32_CFG_UART5_SEL               RCC_CCIPR1_UART5SEL_PCLK1
#endif

/**
 * @brief   Selects the LPUART1 clock source.
 * @note    Allowed sources:
 *          - PCLK3.
 *          - HSI16.
 *          - LSE.
 *          - MSIK.
 */
#if !defined(STM32_CFG_LPUART1_SEL) || defined(__DOXYGEN__)
  #define STM32_CFG_LPUART1_SEL             RCC_CCIPR3_LPUART1SEL_PCLK3
#endif

/**
 * @brief   Selects the LPTIM1 clock source.
 * @note    Allowed sources:
 *          - MSIK.
 *          - LSI.
 *          - HSI16.
 *          - LSE.
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
 *          - LSE.
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
 *          - LSE.
 */
#if !defined(STM32_CFG_LPTIM34_SEL) || defined(__DOXYGEN__)
  #define STM32_CFG_LPTIM34_SEL             RCC_CCIPR3_LPTIM34SEL_MSIK
#endif

/**
 * @brief   Selects the SPI1 clock source.
 * @note    Allowed sources:
 *          - PCLK2.
 *          - MSIK.
 */
#if !defined(STM32_CFG_SPI1_SEL) || defined(__DOXYGEN__)
  #define STM32_CFG_SPI1_SEL                RCC_CCIPR1_SPI1SEL_PCLK2
#endif

/**
 * @brief   Selects the SPI2 clock source.
 * @note    Allowed sources:
 *          - PCLK1.
 *          - MSIK.
 */
#if !defined(STM32_CFG_SPI2_SEL) || defined(__DOXYGEN__)
  #define STM32_CFG_SPI2_SEL                RCC_CCIPR1_SPI2SEL_PCLK1
#endif

/**
 * @brief   Selects the SPI3 clock source.
 * @note    Allowed sources:
 *          - PCLK1.
 *          - MSIK.
 */
#if !defined(STM32_CFG_SPI3_SEL) || defined(__DOXYGEN__)
  #define STM32_CFG_SPI3_SEL                RCC_CCIPR2_SPI3SEL_PCLK1
#endif

/**
 * @brief   Selects the OCTOSPI clock source.
 * @note    Allowed sources:
 *          - SYSCLK.
 *          - MSIK.
 */
#if !defined(STM32_CFG_OCTOSPI_SEL) || defined(__DOXYGEN__)
  #define STM32_CFG_OCTOSPI_SEL             RCC_CCIPR2_OCTOSPISEL_SYSCLK
#endif

/**
 * @brief   Selects the SYSTICK clock source.
 * @note    Allowed sources:
 *          - HCLKDIV8.
 *          - LSI.
 *          - LSE.
 */
#if !defined(STM32_CFG_SYSTICK_SEL) || defined(__DOXYGEN__)
  #define STM32_CFG_SYSTICK_SEL             RCC_CCIPR1_SYSTICKSEL_HCLKDIV8
#endif

/**
 * @brief   Selects the ICLK clock source.
 * @note    Allowed sources:
 *          - HSI48.
 *          - MSIK.
 *          - HSE.
 *          - SYSCLK.
 */
#if !defined(STM32_CFG_ICLK_SEL) || defined(__DOXYGEN__)
  #define STM32_CFG_ICLK_SEL                RCC_CCIPR1_ICLKSEL_SYSCLK
#endif

/**
 * @brief   Selects the USB clock source.
 * @note    Allowed sources:
 *          - ICLK.
 *          - ICLKDIV2.
 */
#if !defined(STM32_CFG_USB_SEL) || defined(__DOXYGEN__)
  #define STM32_CFG_USB_SEL                 RCC_CCIPR1_USB1SEL_ICLKDIV2
#endif

/**
 * @brief   Selects the I2C1 clock source.
 * @note    Allowed sources:
 *          - PCLK1.
 *          - MSIK.
 */
#if !defined(STM32_CFG_I2C1_SEL) || defined(__DOXYGEN__)
  #define STM32_CFG_I2C1_SEL                RCC_CCIPR1_I2C1SEL_PCLK1
#endif

/**
 * @brief   Selects the I2C2 clock source.
 * @note    Allowed sources:
 *          - PCLK1.
 *          - MSIK.
 */
#if !defined(STM32_CFG_I2C2_SEL) || defined(__DOXYGEN__)
  #define STM32_CFG_I2C2_SEL                RCC_CCIPR1_I2C2SEL_PCLK1
#endif

/**
 * @brief   Selects the I2C3 clock source.
 * @note    Allowed sources:
 *          - PCLK3.
 *          - MSIK.
 */
#if !defined(STM32_CFG_I2C3_SEL) || defined(__DOXYGEN__)
  #define STM32_CFG_I2C3_SEL                RCC_CCIPR3_I2C3SEL_PCLK3
#endif

/**
 * @brief   Selects the I3C1 clock source.
 * @note    Allowed sources:
 *          - PCLK1.
 *          - MSIK.
 */
#if !defined(STM32_CFG_I3C1_SEL) || defined(__DOXYGEN__)
  #define STM32_CFG_I3C1_SEL                RCC_CCIPR1_I3C1SEL_PCLK1
#endif

/**
 * @brief   Selects the I3C2 clock source.
 * @note    Allowed sources:
 *          - PCLK2.
 *          - MSIK.
 */
#if !defined(STM32_CFG_I3C2_SEL) || defined(__DOXYGEN__)
  #define STM32_CFG_I3C2_SEL                RCC_CCIPR1_I3C2SEL_PCLK2
#endif

/**
 * @brief   Selects the ADCDACICLK clock source.
 * @note    Allowed sources:
 *          - HCLK.
 *          - HSE.
 *          - MSIK.
 */
#if !defined(STM32_CFG_ADCDACICLK_SEL) || defined(__DOXYGEN__)
  #define STM32_CFG_ADCDACICLK_SEL          RCC_CCIPR2_ADCDACSEL_HCLK
#endif

/**
 * @brief   Configures the ADCDACPRE clock divider value.
 */
#if !defined(STM32_CFG_ADCDACPRE_VALUE) || defined(__DOXYGEN__)
  #define STM32_CFG_ADCDACPRE_VALUE         1
#endif

/**
 * @brief   Selects the DAC1SH clock source.
 * @note    Allowed sources:
 *          - LSE.
 *          - LSI.
 *          - inactive selection RCC_CCIPR2_DAC1SHSEL_IGNORE.
 */
#if !defined(STM32_CFG_DAC1SH_SEL) || defined(__DOXYGEN__)
  #define STM32_CFG_DAC1SH_SEL              RCC_CCIPR2_DAC1SHSEL_LSE
#endif

/**
 * @brief   Selects the RNG clock source.
 * @note    Allowed sources:
 *          - HSI48.
 *          - MSIK.
 *          - inactive selection RCC_CCIPR2_RNGSEL_IGNORE.
 */
#if !defined(STM32_CFG_RNG_SEL) || defined(__DOXYGEN__)
  #define STM32_CFG_RNG_SEL                 RCC_CCIPR2_RNGSEL_MSIK
#endif

/**
 * @brief   Selects the FDCAN1 clock source.
 * @note    Allowed sources:
 *          - SYSCLK.
 *          - MSIK.
 *          - inactive selection RCC_CCIPR1_FDCAN1SEL_IGNORE.
 */
#if !defined(STM32_CFG_FDCAN1_SEL) || defined(__DOXYGEN__)
  #define STM32_CFG_FDCAN1_SEL              RCC_CCIPR1_FDCAN1SEL_SYSCLK
#endif

/**
 * @brief   Selects the SAI1 clock source.
 * @note    Allowed sources:
 *          - MSIK.
 *          - AUDIOCLK.
 *          - HSE.
 */
#if !defined(STM32_CFG_SAI1_SEL) || defined(__DOXYGEN__)
  #define STM32_CFG_SAI1_SEL                RCC_CCIPR2_SAI1SEL_MSIK
#endif

/**
 * @brief   Selects the ADF1 clock source.
 * @note    Allowed sources:
 *          - HCLK.
 *          - AUDIOCLK.
 *          - HSE.
 *          - SAI1.
 */
#if !defined(STM32_CFG_ADF1_SEL) || defined(__DOXYGEN__)
  #define STM32_CFG_ADF1_SEL                RCC_CCIPR2_ADF1SEL_HCLK
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

#if !defined(PWR_VOSR_RANGE1) && !defined(__DOXYGEN__)
  #error "PWR_VOSR_RANGE1 not defined"
#endif
#if !defined(PWR_VOSR_RANGE2) && !defined(__DOXYGEN__)
  #error "PWR_VOSR_RANGE2 not defined"
#endif
#if !((STM32_CFG_PWR_VOSR == PWR_VOSR_RANGE1) ||                            \
     (STM32_CFG_PWR_VOSR == PWR_VOSR_RANGE2)) && !defined(__DOXYGEN__)
  #error "invalid STM32_CFG_PWR_VOSR value specified"
#endif

#if !((STM32_CFG_MSIRC0_MODE == RCC_MSIRC0_FREE) ||                         \
     (STM32_CFG_MSIRC0_MODE == RCC_MSIRC0_PLL_LSE) ||                       \
     (STM32_CFG_MSIRC0_MODE == RCC_MSIRC0_PLL_HSE) ||                       \
     (STM32_CFG_MSIRC0_MODE == RCC_MSIRC0_PLL_LSE_FAST) ||                  \
     (STM32_CFG_MSIRC0_MODE == RCC_MSIRC0_PLL_HSE_FAST)) && !defined(__DOXYGEN__)
  #error "invalid STM32_CFG_MSIRC0_MODE value specified"
#endif

#if !((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_FREE) ||                         \
     (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE) ||                       \
     (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE) ||                       \
     (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE_FAST) ||                  \
     (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE_FAST)) && !defined(__DOXYGEN__)
  #error "invalid STM32_CFG_MSIRC1_MODE value specified"
#endif

#if !((STM32_CFG_MSIPLL1N_VALUE == 0) || (STM32_CFG_MSIPLL1N_VALUE == 1) || \
     (STM32_CFG_MSIPLL1N_VALUE == 2) || (STM32_CFG_MSIPLL1N_VALUE == 3)) && \
    !defined(__DOXYGEN__)
  #error "invalid STM32_CFG_MSIPLL1N_VALUE value specified"
#endif

#if !((STM32_CFG_MSIS_SRCDIV == RCC_ICSCR1_MSIS_IRC0_DIV1) ||               \
     (STM32_CFG_MSIS_SRCDIV == RCC_ICSCR1_MSIS_IRC0_DIV2) ||                \
     (STM32_CFG_MSIS_SRCDIV == RCC_ICSCR1_MSIS_IRC0_DIV4) ||                \
     (STM32_CFG_MSIS_SRCDIV == RCC_ICSCR1_MSIS_IRC0_DIV8) ||                \
     (STM32_CFG_MSIS_SRCDIV == RCC_ICSCR1_MSIS_IRC1_DIV1) ||                \
     (STM32_CFG_MSIS_SRCDIV == RCC_ICSCR1_MSIS_IRC1_DIV2) ||                \
     (STM32_CFG_MSIS_SRCDIV == RCC_ICSCR1_MSIS_IRC1_DIV4) ||                \
     (STM32_CFG_MSIS_SRCDIV == RCC_ICSCR1_MSIS_IRC1_DIV8)) &&               \
    !defined(__DOXYGEN__)
  #error "invalid STM32_CFG_MSIS_SRCDIV value specified"
#endif

#if !((STM32_CFG_MSIK_SRCDIV == RCC_ICSCR1_MSIK_IRC0_DIV1) ||               \
     (STM32_CFG_MSIK_SRCDIV == RCC_ICSCR1_MSIK_IRC0_DIV2) ||                \
     (STM32_CFG_MSIK_SRCDIV == RCC_ICSCR1_MSIK_IRC0_DIV4) ||                \
     (STM32_CFG_MSIK_SRCDIV == RCC_ICSCR1_MSIK_IRC0_DIV8) ||                \
     (STM32_CFG_MSIK_SRCDIV == RCC_ICSCR1_MSIK_IRC1_DIV1) ||                \
     (STM32_CFG_MSIK_SRCDIV == RCC_ICSCR1_MSIK_IRC1_DIV2) ||                \
     (STM32_CFG_MSIK_SRCDIV == RCC_ICSCR1_MSIK_IRC1_DIV4) ||                \
     (STM32_CFG_MSIK_SRCDIV == RCC_ICSCR1_MSIK_IRC1_DIV8)) &&               \
    !defined(__DOXYGEN__)
  #error "invalid STM32_CFG_MSIK_SRCDIV value specified"
#endif

#if !((STM32_CFG_STOPWUCK == RCC_CFGR1_STOPWUCK_MSIS) ||                    \
     (STM32_CFG_STOPWUCK == RCC_CFGR1_STOPWUCK_HSI16)) && !defined(__DOXYGEN__)
  #error "invalid STM32_CFG_STOPWUCK value specified"
#endif

#if !((STM32_CFG_STOPKERWUCK == RCC_CFGR1_STOPKERWUCK_MSIK) ||              \
     (STM32_CFG_STOPKERWUCK == RCC_CFGR1_STOPKERWUCK_HSI16)) &&             \
    !defined(__DOXYGEN__)
  #error "invalid STM32_CFG_STOPKERWUCK value specified"
#endif

#if !((STM32_CFG_MSIBIAS == RCC_ICSCR1_MSIBIAS_CONTINUOUS) ||               \
     (STM32_CFG_MSIBIAS == RCC_ICSCR1_MSIBIAS_SAMPLING)) && !defined(__DOXYGEN__)
  #error "invalid STM32_CFG_MSIBIAS value specified"
#endif

#if !((STM32_CFG_TIMICSEL == RCC_CCIPR1_TIMICSEL_NOCLOCK) ||                \
     (STM32_CFG_TIMICSEL == RCC_CCIPR1_TIMICSEL_HSI256_MSIS1024_MSIS4) ||   \
     (STM32_CFG_TIMICSEL == RCC_CCIPR1_TIMICSEL_HSI256_MSIS1024_MSIK4) ||   \
     (STM32_CFG_TIMICSEL == RCC_CCIPR1_TIMICSEL_HSI256_MSIK1024_MSIS4) ||   \
     (STM32_CFG_TIMICSEL == RCC_CCIPR1_TIMICSEL_HSI256_MSIK1024_MSIK4)) &&  \
    !defined(__DOXYGEN__)
  #error "invalid STM32_CFG_TIMICSEL value specified"
#endif

#if !((STM32_CFG_DAC1SH_REQUIRED == TRUE) ||                                \
     (STM32_CFG_DAC1SH_REQUIRED == FALSE)) && !defined(__DOXYGEN__)
  #error "invalid STM32_CFG_DAC1SH_REQUIRED value specified"
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

#if !((STM32_CFG_OCTOSPI_REQUIRED == TRUE) ||                               \
     (STM32_CFG_OCTOSPI_REQUIRED == FALSE)) && !defined(__DOXYGEN__)
  #error "invalid STM32_CFG_OCTOSPI_REQUIRED value specified"
#endif

#if !((STM32_CFG_I3C1_REQUIRED == TRUE) || (STM32_CFG_I3C1_REQUIRED == FALSE)) && \
    !defined(__DOXYGEN__)
  #error "invalid STM32_CFG_I3C1_REQUIRED value specified"
#endif

#if !((STM32_CFG_I3C2_REQUIRED == TRUE) || (STM32_CFG_I3C2_REQUIRED == FALSE)) && \
    !defined(__DOXYGEN__)
  #error "invalid STM32_CFG_I3C2_REQUIRED value specified"
#endif

#if !((STM32_CFG_SAI1_REQUIRED == TRUE) || (STM32_CFG_SAI1_REQUIRED == FALSE)) && \
    !defined(__DOXYGEN__)
  #error "invalid STM32_CFG_SAI1_REQUIRED value specified"
#endif

#if !((STM32_CFG_ADF1_REQUIRED == TRUE) || (STM32_CFG_ADF1_REQUIRED == FALSE)) && \
    !defined(__DOXYGEN__)
  #error "invalid STM32_CFG_ADF1_REQUIRED value specified"
#endif

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
#define STM32_VOS1_SYSCLK_MAX               96010000
#define STM32_VOS1_HCLK_MAX                 96010000
#define STM32_VOS1_PCLK1_MAX                96010000
#define STM32_VOS1_PCLK2_MAX                96010000
#define STM32_VOS1_PCLK3_MAX                96010000
#define STM32_VOS1_ADCCLK_MAX               55000000
#define STM32_VOS1_USBCLK_MIN               47880000
#define STM32_VOS1_USBCLK_MAX               48120000
#if ((STM32_FLASH_ACR & FLASH_ACR_LPM) == 0) || \
    defined(__DOXYGEN__)
#define STM32_VOS1_FLASH_0WS_MAX            32005000
#else
#define STM32_VOS1_FLASH_0WS_MAX            20000000
#endif
#if ((STM32_FLASH_ACR & FLASH_ACR_LPM) == 0) || \
    defined(__DOXYGEN__)
#define STM32_VOS1_FLASH_1WS_MAX            64007500
#else
#define STM32_VOS1_FLASH_1WS_MAX            40000000
#endif
#if ((STM32_FLASH_ACR & FLASH_ACR_LPM) == 0) || \
    defined(__DOXYGEN__)
#define STM32_VOS1_FLASH_2WS_MAX            96010000
#else
#define STM32_VOS1_FLASH_2WS_MAX            60000000
#endif
#if ((STM32_FLASH_ACR & FLASH_ACR_LPM) == 0) || \
    defined(__DOXYGEN__)
#define STM32_VOS1_FLASH_3WS_MAX            0
#else
#define STM32_VOS1_FLASH_3WS_MAX            80000000
#endif
#if ((STM32_FLASH_ACR & FLASH_ACR_LPM) == 0) || \
    defined(__DOXYGEN__)
#define STM32_VOS1_FLASH_4WS_MAX            0
#else
#define STM32_VOS1_FLASH_4WS_MAX            96010000
#endif
/** @} */

/**
 * @name    Frequency limits for vos2 state
 * @{
 */
#if defined(STM32_HSE_BYPASS) || \
    defined(__DOXYGEN__)
#define STM32_VOS2_HSECLK_MIN               4000000
#define STM32_VOS2_HSECLK_MAX               48000000
#else
#define STM32_VOS2_HSECLK_MIN               4000000
#define STM32_VOS2_HSECLK_MAX               48000000
#endif
#if defined(STM32_LSE_BYPASS) || \
    defined(__DOXYGEN__)
#define STM32_VOS2_LSECLK_MIN               5000
#define STM32_VOS2_LSECLK_MAX               40000
#else
#define STM32_VOS2_LSECLK_MIN               32768
#define STM32_VOS2_LSECLK_MAX               32768
#endif
#define STM32_VOS2_SYSCLK_MAX               48005000
#define STM32_VOS2_HCLK_MAX                 48005000
#define STM32_VOS2_PCLK1_MAX                48005000
#define STM32_VOS2_PCLK2_MAX                48005000
#define STM32_VOS2_PCLK3_MAX                48005000
#define STM32_VOS2_ADCCLK_MAX               48005000
#define STM32_VOS2_USBCLK_MIN               47880000
#define STM32_VOS2_USBCLK_MAX               48120000
#define STM32_VOS2_FLASH_0WS_MAX            16001250
#define STM32_VOS2_FLASH_1WS_MAX            32002500
#define STM32_VOS2_FLASH_2WS_MAX            48005000
#define STM32_VOS2_FLASH_3WS_MAX            0
#define STM32_VOS2_FLASH_4WS_MAX            0
/** @} */

/*
 * Selected frequency limits.
 */
#if (STM32_CFG_PWR_VOSR == PWR_VOSR_RANGE1) || \
    defined(__DOXYGEN__)
#define STM32_HSECLK_MIN                    STM32_VOS1_HSECLK_MIN
#define STM32_HSECLK_MAX                    STM32_VOS1_HSECLK_MAX
#define STM32_LSECLK_MIN                    STM32_VOS1_LSECLK_MIN
#define STM32_LSECLK_MAX                    STM32_VOS1_LSECLK_MAX
#define STM32_SYSCLK_MAX                    STM32_VOS1_SYSCLK_MAX
#define STM32_HCLK_MAX                      STM32_VOS1_HCLK_MAX
#define STM32_PCLK1_MAX                     STM32_VOS1_PCLK1_MAX
#define STM32_PCLK2_MAX                     STM32_VOS1_PCLK2_MAX
#define STM32_PCLK3_MAX                     STM32_VOS1_PCLK3_MAX
#define STM32_ADCCLK_MAX                    STM32_VOS1_ADCCLK_MAX
#define STM32_USBCLK_MIN                    STM32_VOS1_USBCLK_MIN
#define STM32_USBCLK_MAX                    STM32_VOS1_USBCLK_MAX
#define STM32_FLASH_0WS_MAX                 STM32_VOS1_FLASH_0WS_MAX
#define STM32_FLASH_1WS_MAX                 STM32_VOS1_FLASH_1WS_MAX
#define STM32_FLASH_2WS_MAX                 STM32_VOS1_FLASH_2WS_MAX
#define STM32_FLASH_3WS_MAX                 STM32_VOS1_FLASH_3WS_MAX
#define STM32_FLASH_4WS_MAX                 STM32_VOS1_FLASH_4WS_MAX
#elif (STM32_CFG_PWR_VOSR == PWR_VOSR_RANGE2)
#define STM32_HSECLK_MIN                    STM32_VOS2_HSECLK_MIN
#define STM32_HSECLK_MAX                    STM32_VOS2_HSECLK_MAX
#define STM32_LSECLK_MIN                    STM32_VOS2_LSECLK_MIN
#define STM32_LSECLK_MAX                    STM32_VOS2_LSECLK_MAX
#define STM32_SYSCLK_MAX                    STM32_VOS2_SYSCLK_MAX
#define STM32_HCLK_MAX                      STM32_VOS2_HCLK_MAX
#define STM32_PCLK1_MAX                     STM32_VOS2_PCLK1_MAX
#define STM32_PCLK2_MAX                     STM32_VOS2_PCLK2_MAX
#define STM32_PCLK3_MAX                     STM32_VOS2_PCLK3_MAX
#define STM32_ADCCLK_MAX                    STM32_VOS2_ADCCLK_MAX
#define STM32_USBCLK_MIN                    STM32_VOS2_USBCLK_MIN
#define STM32_USBCLK_MAX                    STM32_VOS2_USBCLK_MAX
#define STM32_FLASH_0WS_MAX                 STM32_VOS2_FLASH_0WS_MAX
#define STM32_FLASH_1WS_MAX                 STM32_VOS2_FLASH_1WS_MAX
#define STM32_FLASH_2WS_MAX                 STM32_VOS2_FLASH_2WS_MAX
#define STM32_FLASH_3WS_MAX                 STM32_VOS2_FLASH_3WS_MAX
#define STM32_FLASH_4WS_MAX                 STM32_VOS2_FLASH_4WS_MAX
#else
  #error "unable to select clock frequency limits"
#endif

/**
 * @name    Sink demand states
 * @{
 */
/**
 * @brief   USART1_SERIAL_DRIVER sink demand state.
 */
#if ((HAL_USE_SERIAL == TRUE) && (STM32_SERIAL_USE_USART1 == TRUE)) ||      \
    defined(__DOXYGEN__)
  #define STM32_USART1_SERIAL_DRIVER_DEMANDED TRUE
#else
  #define STM32_USART1_SERIAL_DRIVER_DEMANDED FALSE
#endif

/**
 * @brief   USART1_SIO_DRIVER sink demand state.
 */
#if ((HAL_USE_SIO == TRUE) && (STM32_SIO_USE_USART1 == TRUE)) ||            \
    defined(__DOXYGEN__)
  #define STM32_USART1_SIO_DRIVER_DEMANDED  TRUE
#else
  #define STM32_USART1_SIO_DRIVER_DEMANDED  FALSE
#endif

/**
 * @brief   USART3_SERIAL_DRIVER sink demand state.
 */
#if ((HAL_USE_SERIAL == TRUE) && (STM32_SERIAL_USE_USART3 == TRUE)) ||      \
    defined(__DOXYGEN__)
  #define STM32_USART3_SERIAL_DRIVER_DEMANDED TRUE
#else
  #define STM32_USART3_SERIAL_DRIVER_DEMANDED FALSE
#endif

/**
 * @brief   USART3_SIO_DRIVER sink demand state.
 */
#if ((HAL_USE_SIO == TRUE) && (STM32_SIO_USE_USART3 == TRUE)) ||            \
    defined(__DOXYGEN__)
  #define STM32_USART3_SIO_DRIVER_DEMANDED  TRUE
#else
  #define STM32_USART3_SIO_DRIVER_DEMANDED  FALSE
#endif

/**
 * @brief   UART4_SERIAL_DRIVER sink demand state.
 */
#if ((HAL_USE_SERIAL == TRUE) && (STM32_SERIAL_USE_UART4 == TRUE)) ||       \
    defined(__DOXYGEN__)
  #define STM32_UART4_SERIAL_DRIVER_DEMANDED TRUE
#else
  #define STM32_UART4_SERIAL_DRIVER_DEMANDED FALSE
#endif

/**
 * @brief   UART4_SIO_DRIVER sink demand state.
 */
#if ((HAL_USE_SIO == TRUE) && (STM32_SIO_USE_UART4 == TRUE)) ||             \
    defined(__DOXYGEN__)
  #define STM32_UART4_SIO_DRIVER_DEMANDED   TRUE
#else
  #define STM32_UART4_SIO_DRIVER_DEMANDED   FALSE
#endif

/**
 * @brief   UART5_SERIAL_DRIVER sink demand state.
 */
#if ((HAL_USE_SERIAL == TRUE) && (STM32_SERIAL_USE_UART5 == TRUE)) ||       \
    defined(__DOXYGEN__)
  #define STM32_UART5_SERIAL_DRIVER_DEMANDED TRUE
#else
  #define STM32_UART5_SERIAL_DRIVER_DEMANDED FALSE
#endif

/**
 * @brief   UART5_SIO_DRIVER sink demand state.
 */
#if ((HAL_USE_SIO == TRUE) && (STM32_SIO_USE_UART5 == TRUE)) ||             \
    defined(__DOXYGEN__)
  #define STM32_UART5_SIO_DRIVER_DEMANDED   TRUE
#else
  #define STM32_UART5_SIO_DRIVER_DEMANDED   FALSE
#endif

/**
 * @brief   LPUART1_SERIAL_DRIVER sink demand state.
 */
#if ((HAL_USE_SERIAL == TRUE) && (STM32_SERIAL_USE_LPUART1 == TRUE)) ||     \
    defined(__DOXYGEN__)
  #define STM32_LPUART1_SERIAL_DRIVER_DEMANDED TRUE
#else
  #define STM32_LPUART1_SERIAL_DRIVER_DEMANDED FALSE
#endif

/**
 * @brief   LPUART1_SIO_DRIVER sink demand state.
 */
#if ((HAL_USE_SIO == TRUE) && (STM32_SIO_USE_LPUART1 == TRUE)) ||           \
    defined(__DOXYGEN__)
  #define STM32_LPUART1_SIO_DRIVER_DEMANDED TRUE
#else
  #define STM32_LPUART1_SIO_DRIVER_DEMANDED FALSE
#endif

/**
 * @brief   LPTIM1_REQUIRED sink demand state.
 */
#if (STM32_CFG_LPTIM1_REQUIRED == TRUE) || defined(__DOXYGEN__)
  #define STM32_LPTIM1_REQUIRED_DEMANDED    TRUE
#else
  #define STM32_LPTIM1_REQUIRED_DEMANDED    FALSE
#endif

/**
 * @brief   LPTIM2_REQUIRED sink demand state.
 */
#if (STM32_CFG_LPTIM2_REQUIRED == TRUE) || defined(__DOXYGEN__)
  #define STM32_LPTIM2_REQUIRED_DEMANDED    TRUE
#else
  #define STM32_LPTIM2_REQUIRED_DEMANDED    FALSE
#endif

/**
 * @brief   LPTIM34_REQUIRED sink demand state.
 */
#if (STM32_CFG_LPTIM34_REQUIRED == TRUE) || defined(__DOXYGEN__)
  #define STM32_LPTIM34_REQUIRED_DEMANDED   TRUE
#else
  #define STM32_LPTIM34_REQUIRED_DEMANDED   FALSE
#endif

/**
 * @brief   SPI1_DRIVER sink demand state.
 */
#if ((HAL_USE_SPI == TRUE) && (STM32_SPI_USE_SPI1 == TRUE)) ||              \
    defined(__DOXYGEN__)
  #define STM32_SPI1_DRIVER_DEMANDED        TRUE
#else
  #define STM32_SPI1_DRIVER_DEMANDED        FALSE
#endif

/**
 * @brief   SPI2_DRIVER sink demand state.
 */
#if ((HAL_USE_SPI == TRUE) && (STM32_SPI_USE_SPI2 == TRUE)) ||              \
    defined(__DOXYGEN__)
  #define STM32_SPI2_DRIVER_DEMANDED        TRUE
#else
  #define STM32_SPI2_DRIVER_DEMANDED        FALSE
#endif

/**
 * @brief   SPI3_DRIVER sink demand state.
 */
#if ((HAL_USE_SPI == TRUE) && (STM32_SPI_USE_SPI3 == TRUE)) ||              \
    defined(__DOXYGEN__)
  #define STM32_SPI3_DRIVER_DEMANDED        TRUE
#else
  #define STM32_SPI3_DRIVER_DEMANDED        FALSE
#endif

/**
 * @brief   OCTOSPI_REQUIRED sink demand state.
 */
#if (STM32_CFG_OCTOSPI_REQUIRED == TRUE) || defined(__DOXYGEN__)
  #define STM32_OCTOSPI_REQUIRED_DEMANDED   TRUE
#else
  #define STM32_OCTOSPI_REQUIRED_DEMANDED   FALSE
#endif

/**
 * @brief   TIMICSEL_HSI16_SOURCE sink demand state.
 */
#if (STM32_CFG_TIMICSEL != RCC_CCIPR1_TIMICSEL_NOCLOCK) || defined(__DOXYGEN__)
  #define STM32_TIMICSEL_HSI16_SOURCE_DEMANDED TRUE
#else
  #define STM32_TIMICSEL_HSI16_SOURCE_DEMANDED FALSE
#endif

/**
 * @brief   TIMICSEL_MSIS_SOURCE sink demand state.
 */
#if (STM32_CFG_TIMICSEL != RCC_CCIPR1_TIMICSEL_NOCLOCK) || defined(__DOXYGEN__)
  #define STM32_TIMICSEL_MSIS_SOURCE_DEMANDED TRUE
#else
  #define STM32_TIMICSEL_MSIS_SOURCE_DEMANDED FALSE
#endif

/**
 * @brief   TIMICSEL_MSIK_SOURCE sink demand state.
 */
#if (STM32_CFG_TIMICSEL != RCC_CCIPR1_TIMICSEL_NOCLOCK) || defined(__DOXYGEN__)
  #define STM32_TIMICSEL_MSIK_SOURCE_DEMANDED TRUE
#else
  #define STM32_TIMICSEL_MSIK_SOURCE_DEMANDED FALSE
#endif

/**
 * @brief   USB1_DRIVER sink demand state.
 */
#if ((HAL_USE_USB == TRUE) && (STM32_USB_USE_USB1 == TRUE)) ||              \
    defined(__DOXYGEN__)
  #define STM32_USB1_DRIVER_DEMANDED        TRUE
#else
  #define STM32_USB1_DRIVER_DEMANDED        FALSE
#endif

/**
 * @brief   SDMMC1_DRIVER sink demand state.
 */
#if ((HAL_USE_SDC == TRUE) && (STM32_SDC_USE_SDMMC1 == TRUE)) ||            \
    defined(__DOXYGEN__)
  #define STM32_SDMMC1_DRIVER_DEMANDED      TRUE
#else
  #define STM32_SDMMC1_DRIVER_DEMANDED      FALSE
#endif

/**
 * @brief   I2C1_DRIVER sink demand state.
 */
#if ((HAL_USE_I2C == TRUE) && (STM32_I2C_USE_I2C1 == TRUE)) ||              \
    defined(__DOXYGEN__)
  #define STM32_I2C1_DRIVER_DEMANDED        TRUE
#else
  #define STM32_I2C1_DRIVER_DEMANDED        FALSE
#endif

/**
 * @brief   I2C2_DRIVER sink demand state.
 */
#if ((HAL_USE_I2C == TRUE) && (STM32_I2C_USE_I2C2 == TRUE)) ||              \
    defined(__DOXYGEN__)
  #define STM32_I2C2_DRIVER_DEMANDED        TRUE
#else
  #define STM32_I2C2_DRIVER_DEMANDED        FALSE
#endif

/**
 * @brief   I2C3_DRIVER sink demand state.
 */
#if ((HAL_USE_I2C == TRUE) && (STM32_I2C_USE_I2C3 == TRUE)) ||              \
    defined(__DOXYGEN__)
  #define STM32_I2C3_DRIVER_DEMANDED        TRUE
#else
  #define STM32_I2C3_DRIVER_DEMANDED        FALSE
#endif

/**
 * @brief   I3C1_REQUIRED sink demand state.
 */
#if (STM32_CFG_I3C1_REQUIRED == TRUE) || defined(__DOXYGEN__)
  #define STM32_I3C1_REQUIRED_DEMANDED      TRUE
#else
  #define STM32_I3C1_REQUIRED_DEMANDED      FALSE
#endif

/**
 * @brief   I3C2_REQUIRED sink demand state.
 */
#if (STM32_CFG_I3C2_REQUIRED == TRUE) || defined(__DOXYGEN__)
  #define STM32_I3C2_REQUIRED_DEMANDED      TRUE
#else
  #define STM32_I3C2_REQUIRED_DEMANDED      FALSE
#endif

/**
 * @brief   ADCDAC_ADC_DRIVER sink demand state.
 */
#if ((HAL_USE_ADC == TRUE) && ((STM32_ADC_USE_ADC1 == TRUE) ||              \
      (STM32_ADC_USE_ADC2 == TRUE))) || defined(__DOXYGEN__)
  #define STM32_ADCDAC_ADC_DRIVER_DEMANDED  TRUE
#else
  #define STM32_ADCDAC_ADC_DRIVER_DEMANDED  FALSE
#endif

/**
 * @brief   ADCDAC_DAC_DRIVER sink demand state.
 */
#if ((HAL_USE_DAC == TRUE) && ((STM32_DAC_USE_DAC1_CH1 == TRUE) ||          \
      (STM32_DAC_USE_DAC1_CH2 == TRUE))) || defined(__DOXYGEN__)
  #define STM32_ADCDAC_DAC_DRIVER_DEMANDED  TRUE
#else
  #define STM32_ADCDAC_DAC_DRIVER_DEMANDED  FALSE
#endif

/**
 * @brief   DAC1SH_REQUIRED sink demand state.
 */
#if (STM32_CFG_DAC1SH_REQUIRED == TRUE) || defined(__DOXYGEN__)
  #define STM32_DAC1SH_REQUIRED_DEMANDED    TRUE
#else
  #define STM32_DAC1SH_REQUIRED_DEMANDED    FALSE
#endif

/**
 * @brief   RNG_DRIVER sink demand state.
 */
#if ((HAL_USE_TRNG == TRUE) && (STM32_TRNG_USE_RNG1 == TRUE)) ||            \
    defined(__DOXYGEN__)
  #define STM32_RNG_DRIVER_DEMANDED         TRUE
#else
  #define STM32_RNG_DRIVER_DEMANDED         FALSE
#endif

/**
 * @brief   FDCAN1_DRIVER sink demand state.
 */
#if ((HAL_USE_CAN == TRUE) && (STM32_CAN_USE_FDCAN1 == TRUE)) ||            \
    defined(__DOXYGEN__)
  #define STM32_FDCAN1_DRIVER_DEMANDED      TRUE
#else
  #define STM32_FDCAN1_DRIVER_DEMANDED      FALSE
#endif

/**
 * @brief   SAI1_REQUIRED sink demand state.
 */
#if (STM32_CFG_SAI1_REQUIRED == TRUE) || defined(__DOXYGEN__)
  #define STM32_SAI1_REQUIRED_DEMANDED      TRUE
#else
  #define STM32_SAI1_REQUIRED_DEMANDED      FALSE
#endif

/**
 * @brief   ADF1_REQUIRED sink demand state.
 */
#if (STM32_CFG_ADF1_REQUIRED == TRUE) || defined(__DOXYGEN__)
  #define STM32_ADF1_REQUIRED_DEMANDED      TRUE
#else
  #define STM32_ADF1_REQUIRED_DEMANDED      FALSE
#endif

/**
 * @brief   MSIRC0_PLL_LSE_SOURCE sink demand state.
 */
#if ((STM32_MSIRC0_ENABLED == TRUE) &&                                      \
     ((STM32_CFG_MSIRC0_MODE == RCC_MSIRC0_PLL_LSE) ||                      \
      (STM32_CFG_MSIRC0_MODE == RCC_MSIRC0_PLL_LSE_FAST))) || defined(__DOXYGEN__)
  #define STM32_MSIRC0_PLL_LSE_SOURCE_DEMANDED TRUE
#else
  #define STM32_MSIRC0_PLL_LSE_SOURCE_DEMANDED FALSE
#endif

/**
 * @brief   MSIRC0_PLL_HSE_SOURCE sink demand state.
 */
#if ((STM32_MSIRC0_ENABLED == TRUE) &&                                      \
     ((STM32_CFG_MSIRC0_MODE == RCC_MSIRC0_PLL_HSE) ||                      \
      (STM32_CFG_MSIRC0_MODE == RCC_MSIRC0_PLL_HSE_FAST))) || defined(__DOXYGEN__)
  #define STM32_MSIRC0_PLL_HSE_SOURCE_DEMANDED TRUE
#else
  #define STM32_MSIRC0_PLL_HSE_SOURCE_DEMANDED FALSE
#endif

/**
 * @brief   MSIRC1_PLL_LSE_SOURCE sink demand state.
 */
#if ((STM32_MSIRC1_ENABLED == TRUE) &&                                      \
     ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE) ||                      \
      (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE_FAST))) || defined(__DOXYGEN__)
  #define STM32_MSIRC1_PLL_LSE_SOURCE_DEMANDED TRUE
#else
  #define STM32_MSIRC1_PLL_LSE_SOURCE_DEMANDED FALSE
#endif

/**
 * @brief   MSIRC1_PLL_HSE_SOURCE sink demand state.
 */
#if ((STM32_MSIRC1_ENABLED == TRUE) &&                                      \
     ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE) ||                      \
      (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE_FAST))) || defined(__DOXYGEN__)
  #define STM32_MSIRC1_PLL_HSE_SOURCE_DEMANDED TRUE
#else
  #define STM32_MSIRC1_PLL_HSE_SOURCE_DEMANDED FALSE
#endif

/**
 * @brief   MSIS_IRC0_SOURCE sink demand state.
 */
#if ((STM32_MSIS_ENABLED == TRUE) &&                                        \
     ((STM32_CFG_MSIS_SRCDIV == RCC_ICSCR1_MSIS_IRC0_DIV1) ||               \
      (STM32_CFG_MSIS_SRCDIV == RCC_ICSCR1_MSIS_IRC0_DIV2) ||               \
      (STM32_CFG_MSIS_SRCDIV == RCC_ICSCR1_MSIS_IRC0_DIV4) ||               \
      (STM32_CFG_MSIS_SRCDIV == RCC_ICSCR1_MSIS_IRC0_DIV8))) ||             \
    defined(__DOXYGEN__)
  #define STM32_MSIS_IRC0_SOURCE_DEMANDED   TRUE
#else
  #define STM32_MSIS_IRC0_SOURCE_DEMANDED   FALSE
#endif

/**
 * @brief   MSIS_IRC1_SOURCE sink demand state.
 */
#if ((STM32_MSIS_ENABLED == TRUE) &&                                        \
     ((STM32_CFG_MSIS_SRCDIV == RCC_ICSCR1_MSIS_IRC1_DIV1) ||               \
      (STM32_CFG_MSIS_SRCDIV == RCC_ICSCR1_MSIS_IRC1_DIV2) ||               \
      (STM32_CFG_MSIS_SRCDIV == RCC_ICSCR1_MSIS_IRC1_DIV4) ||               \
      (STM32_CFG_MSIS_SRCDIV == RCC_ICSCR1_MSIS_IRC1_DIV8))) ||             \
    defined(__DOXYGEN__)
  #define STM32_MSIS_IRC1_SOURCE_DEMANDED   TRUE
#else
  #define STM32_MSIS_IRC1_SOURCE_DEMANDED   FALSE
#endif

/**
 * @brief   MSIK_IRC0_SOURCE sink demand state.
 */
#if ((STM32_MSIK_ENABLED == TRUE) &&                                        \
     ((STM32_CFG_MSIK_SRCDIV == RCC_ICSCR1_MSIK_IRC0_DIV1) ||               \
      (STM32_CFG_MSIK_SRCDIV == RCC_ICSCR1_MSIK_IRC0_DIV2) ||               \
      (STM32_CFG_MSIK_SRCDIV == RCC_ICSCR1_MSIK_IRC0_DIV4) ||               \
      (STM32_CFG_MSIK_SRCDIV == RCC_ICSCR1_MSIK_IRC0_DIV8))) ||             \
    defined(__DOXYGEN__)
  #define STM32_MSIK_IRC0_SOURCE_DEMANDED   TRUE
#else
  #define STM32_MSIK_IRC0_SOURCE_DEMANDED   FALSE
#endif

/**
 * @brief   MSIK_IRC1_SOURCE sink demand state.
 */
#if ((STM32_MSIK_ENABLED == TRUE) &&                                        \
     ((STM32_CFG_MSIK_SRCDIV == RCC_ICSCR1_MSIK_IRC1_DIV1) ||               \
      (STM32_CFG_MSIK_SRCDIV == RCC_ICSCR1_MSIK_IRC1_DIV2) ||               \
      (STM32_CFG_MSIK_SRCDIV == RCC_ICSCR1_MSIK_IRC1_DIV4) ||               \
      (STM32_CFG_MSIK_SRCDIV == RCC_ICSCR1_MSIK_IRC1_DIV8))) ||             \
    defined(__DOXYGEN__)
  #define STM32_MSIK_IRC1_SOURCE_DEMANDED   TRUE
#else
  #define STM32_MSIK_IRC1_SOURCE_DEMANDED   FALSE
#endif
/** @} */

/**
 * @brief   NONE clock derived enable state.
 */
#define STM32_NONE_ENABLED                  FALSE

/**
 * @brief   AUDIOCLK clock derived enable state.
 */
#define STM32_AUDIOCLK_ENABLED              TRUE

/**
 * @brief   HSI16 clock derived enable state.
 */
#define STM32_HSI16_ENABLED                 STM32_CFG_HSI16_ENABLE

/**
 * @brief   HSI48 clock derived enable state.
 */
#define STM32_HSI48_ENABLED                 STM32_CFG_HSI48_ENABLE

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
#define STM32_MSIRC0_ENABLED                ((STM32_MSIS_IRC0_SOURCE_DEMANDED == TRUE) || \
                                             (STM32_MSIK_IRC0_SOURCE_DEMANDED == TRUE))

/**
 * @brief   MSIRC1 clock derived enable state.
 */
#define STM32_MSIRC1_ENABLED                ((STM32_MSIS_IRC1_SOURCE_DEMANDED == TRUE) || \
                                             (STM32_MSIK_IRC1_SOURCE_DEMANDED == TRUE))

/**
 * @brief   MSIS clock derived enable state.
 */
#define STM32_MSIS_ENABLED                  ((STM32_TIMICSEL_MSIS_SOURCE_DEMANDED == TRUE) || \
                                             ((STM32_SYSCLK_ENABLED == TRUE) && \
                                              (STM32_CFG_SYSCLK_SEL == RCC_CFGR1_SW_MSIS)) || \
                                             ((STM32_MCO1DIV_ENABLED == TRUE) && \
                                              (STM32_CFG_MCO1DIV_SEL == RCC_CFGR1_MCO1SEL_MSIS)) || \
                                             ((STM32_MCO2DIV_ENABLED == TRUE) && \
                                              (STM32_CFG_MCO2DIV_SEL == RCC_CFGR1_MCO2SEL_MSIS)))

/**
 * @brief   MSIK clock derived enable state.
 */
#define STM32_MSIK_ENABLED                  ((STM32_TIMICSEL_MSIK_SOURCE_DEMANDED == TRUE) || \
                                             ((STM32_MCO1DIV_ENABLED == TRUE) && \
                                              (STM32_CFG_MCO1DIV_SEL == RCC_CFGR1_MCO1SEL_MSIK)) || \
                                             ((STM32_MCO2DIV_ENABLED == TRUE) && \
                                              (STM32_CFG_MCO2DIV_SEL == RCC_CFGR1_MCO2SEL_MSIK)) || \
                                             ((STM32_LPUART1_ENABLED == TRUE) && \
                                              (STM32_CFG_LPUART1_SEL == RCC_CCIPR3_LPUART1SEL_MSIK)) || \
                                             ((STM32_LPTIM1_ENABLED == TRUE) && \
                                              (STM32_CFG_LPTIM1_SEL == RCC_CCIPR3_LPTIM1SEL_MSIK)) || \
                                             ((STM32_LPTIM34_ENABLED == TRUE) && \
                                              (STM32_CFG_LPTIM34_SEL == RCC_CCIPR3_LPTIM34SEL_MSIK)) || \
                                             ((STM32_SPI1_ENABLED == TRUE) && \
                                              (STM32_CFG_SPI1_SEL == RCC_CCIPR1_SPI1SEL_MSIK)) || \
                                             ((STM32_SPI2_ENABLED == TRUE) && \
                                              (STM32_CFG_SPI2_SEL == RCC_CCIPR1_SPI2SEL_MSIK)) || \
                                             ((STM32_SPI3_ENABLED == TRUE) && \
                                              (STM32_CFG_SPI3_SEL == RCC_CCIPR2_SPI3SEL_MSIK)) || \
                                             ((STM32_OCTOSPI_ENABLED == TRUE) && \
                                              (STM32_CFG_OCTOSPI_SEL == RCC_CCIPR2_OCTOSPISEL_MSIK)) || \
                                             ((STM32_ICLK_ENABLED == TRUE) && \
                                              (STM32_CFG_ICLK_SEL == RCC_CCIPR1_ICLKSEL_MSIK)) || \
                                             ((STM32_I2C1_ENABLED == TRUE) && \
                                              (STM32_CFG_I2C1_SEL == RCC_CCIPR1_I2C1SEL_MSIK)) || \
                                             ((STM32_I2C2_ENABLED == TRUE) && \
                                              (STM32_CFG_I2C2_SEL == RCC_CCIPR1_I2C2SEL_MSIK)) || \
                                             ((STM32_I2C3_ENABLED == TRUE) && \
                                              (STM32_CFG_I2C3_SEL == RCC_CCIPR3_I2C3SEL_MSIK)) || \
                                             ((STM32_I3C1_ENABLED == TRUE) && \
                                              (STM32_CFG_I3C1_SEL == RCC_CCIPR1_I3C1SEL_MSIK)) || \
                                             ((STM32_I3C2_ENABLED == TRUE) && \
                                              (STM32_CFG_I3C2_SEL == RCC_CCIPR1_I3C2SEL_MSIK)) || \
                                             ((STM32_ADCDACICLK_ENABLED == TRUE) && \
                                              (STM32_CFG_ADCDACICLK_SEL == RCC_CCIPR2_ADCDACSEL_MSIK)) || \
                                             ((STM32_RNG_ENABLED == TRUE) && \
                                              (STM32_CFG_RNG_SEL == RCC_CCIPR2_RNGSEL_MSIK)) || \
                                             ((STM32_FDCAN1_ENABLED == TRUE) && \
                                              (STM32_CFG_FDCAN1_SEL == RCC_CCIPR1_FDCAN1SEL_MSIK)) || \
                                             ((STM32_SAI1_ENABLED == TRUE) && \
                                              (STM32_CFG_SAI1_SEL == RCC_CCIPR2_SAI1SEL_MSIK)))

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
 * @brief   HCLKDIV8 clock derived enable state.
 */
#define STM32_HCLKDIV8_ENABLED              TRUE

/**
 * @brief   MCO1DIV clock derived enable state.
 */
#define STM32_MCO1DIV_ENABLED               TRUE

/**
 * @brief   MCO1 clock derived enable state.
 */
#define STM32_MCO1_ENABLED                  TRUE

/**
 * @brief   MCO2DIV clock derived enable state.
 */
#define STM32_MCO2DIV_ENABLED               TRUE

/**
 * @brief   MCO2 clock derived enable state.
 */
#define STM32_MCO2_ENABLED                  TRUE

/**
 * @brief   RTC clock derived enable state.
 */
#define STM32_RTC_ENABLED                   TRUE

/**
 * @brief   LSCO clock derived enable state.
 */
#define STM32_LSCO_ENABLED                  TRUE

/**
 * @brief   USART1 clock derived enable state.
 */
#define STM32_USART1_ENABLED                ((STM32_USART1_SERIAL_DRIVER_DEMANDED == TRUE) || \
                                             (STM32_USART1_SIO_DRIVER_DEMANDED == TRUE))

/**
 * @brief   USART3 clock derived enable state.
 */
#define STM32_USART3_ENABLED                ((STM32_USART3_SERIAL_DRIVER_DEMANDED == TRUE) || \
                                             (STM32_USART3_SIO_DRIVER_DEMANDED == TRUE))

/**
 * @brief   UART4 clock derived enable state.
 */
#define STM32_UART4_ENABLED                 ((STM32_UART4_SERIAL_DRIVER_DEMANDED == TRUE) || \
                                             (STM32_UART4_SIO_DRIVER_DEMANDED == TRUE))

/**
 * @brief   UART5 clock derived enable state.
 */
#define STM32_UART5_ENABLED                 ((STM32_UART5_SERIAL_DRIVER_DEMANDED == TRUE) || \
                                             (STM32_UART5_SIO_DRIVER_DEMANDED == TRUE))

/**
 * @brief   LPUART1 clock derived enable state.
 */
#define STM32_LPUART1_ENABLED               ((STM32_LPUART1_SERIAL_DRIVER_DEMANDED == TRUE) || \
                                             (STM32_LPUART1_SIO_DRIVER_DEMANDED == TRUE))

/**
 * @brief   LPTIM1 clock derived enable state.
 */
#define STM32_LPTIM1_ENABLED                ((STM32_LPTIM1_REQUIRED_DEMANDED == TRUE))

/**
 * @brief   LPTIM2 clock derived enable state.
 */
#define STM32_LPTIM2_ENABLED                ((STM32_LPTIM2_REQUIRED_DEMANDED == TRUE))

/**
 * @brief   LPTIM34 clock derived enable state.
 */
#define STM32_LPTIM34_ENABLED               ((STM32_LPTIM34_REQUIRED_DEMANDED == TRUE))

/**
 * @brief   SPI1 clock derived enable state.
 */
#define STM32_SPI1_ENABLED                  ((STM32_SPI1_DRIVER_DEMANDED == TRUE))

/**
 * @brief   SPI2 clock derived enable state.
 */
#define STM32_SPI2_ENABLED                  ((STM32_SPI2_DRIVER_DEMANDED == TRUE))

/**
 * @brief   SPI3 clock derived enable state.
 */
#define STM32_SPI3_ENABLED                  ((STM32_SPI3_DRIVER_DEMANDED == TRUE))

/**
 * @brief   OCTOSPI clock derived enable state.
 */
#define STM32_OCTOSPI_ENABLED               ((STM32_OCTOSPI_REQUIRED_DEMANDED == TRUE))

/**
 * @brief   SYSTICK clock derived enable state.
 */
#define STM32_SYSTICK_ENABLED               TRUE

/**
 * @brief   TIM16IC clock derived enable state.
 */
#define STM32_TIM16IC_ENABLED               TRUE

/**
 * @brief   TIM17IC clock derived enable state.
 */
#define STM32_TIM17IC_ENABLED               TRUE

/**
 * @brief   LPTIM2IC clock derived enable state.
 */
#define STM32_LPTIM2IC_ENABLED              TRUE

/**
 * @brief   ICLK clock derived enable state.
 */
#define STM32_ICLK_ENABLED                  ((STM32_ICLKDIV2_ENABLED == TRUE) || \
                                             ((STM32_USB_ENABLED == TRUE) && \
                                              (STM32_CFG_USB_SEL == RCC_CCIPR1_USB1SEL_ICLK)) || \
                                             (STM32_SDMMC1_ENABLED == TRUE))

/**
 * @brief   ICLKDIV2 clock derived enable state.
 */
#define STM32_ICLKDIV2_ENABLED              (((STM32_USB_ENABLED == TRUE) && \
                                              (STM32_CFG_USB_SEL == RCC_CCIPR1_USB1SEL_ICLKDIV2)))

/**
 * @brief   USB clock derived enable state.
 */
#define STM32_USB_ENABLED                   ((STM32_USB1_DRIVER_DEMANDED == TRUE))

/**
 * @brief   SDMMC1 clock derived enable state.
 */
#define STM32_SDMMC1_ENABLED                ((STM32_SDMMC1_DRIVER_DEMANDED == TRUE))

/**
 * @brief   I2C1 clock derived enable state.
 */
#define STM32_I2C1_ENABLED                  ((STM32_I2C1_DRIVER_DEMANDED == TRUE))

/**
 * @brief   I2C2 clock derived enable state.
 */
#define STM32_I2C2_ENABLED                  ((STM32_I2C2_DRIVER_DEMANDED == TRUE))

/**
 * @brief   I2C3 clock derived enable state.
 */
#define STM32_I2C3_ENABLED                  ((STM32_I2C3_DRIVER_DEMANDED == TRUE))

/**
 * @brief   I3C1 clock derived enable state.
 */
#define STM32_I3C1_ENABLED                  ((STM32_I3C1_REQUIRED_DEMANDED == TRUE))

/**
 * @brief   I3C2 clock derived enable state.
 */
#define STM32_I3C2_ENABLED                  ((STM32_I3C2_REQUIRED_DEMANDED == TRUE))

/**
 * @brief   ADCDACICLK clock derived enable state.
 */
#define STM32_ADCDACICLK_ENABLED            ((STM32_ADCDACPRE_ENABLED == TRUE))

/**
 * @brief   ADCDACPRE clock derived enable state.
 */
#define STM32_ADCDACPRE_ENABLED             ((STM32_ADCDAC_ENABLED == TRUE))

/**
 * @brief   ADCDAC clock derived enable state.
 */
#define STM32_ADCDAC_ENABLED                ((STM32_ADCDAC_ADC_DRIVER_DEMANDED == TRUE) || \
                                             (STM32_ADCDAC_DAC_DRIVER_DEMANDED == TRUE))

/**
 * @brief   DAC1SH clock derived enable state.
 */
#define STM32_DAC1SH_ENABLED                ((STM32_DAC1SH_REQUIRED_DEMANDED == TRUE))

/**
 * @brief   RNG clock derived enable state.
 */
#define STM32_RNG_ENABLED                   ((STM32_RNG_DRIVER_DEMANDED == TRUE))

/**
 * @brief   FDCAN1 clock derived enable state.
 */
#define STM32_FDCAN1_ENABLED                ((STM32_FDCAN1_DRIVER_DEMANDED == TRUE))

/**
 * @brief   SAI1 clock derived enable state.
 */
#define STM32_SAI1_ENABLED                  ((STM32_SAI1_REQUIRED_DEMANDED == TRUE) || \
                                             ((STM32_ADF1_ENABLED == TRUE) && \
                                              (STM32_CFG_ADF1_SEL == RCC_CCIPR2_ADF1SEL_SAI1)))

/**
 * @brief   ADF1 clock derived enable state.
 */
#define STM32_ADF1_ENABLED                  ((STM32_ADF1_REQUIRED_DEMANDED == TRUE))

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

/*--- Macros and checks for the AUDIOCLK clock point. ----------------------*/

/**
 * @brief   AUDIOCLK nominal source frequency.
 */
#define STM32_AUDIOCLK_SOURCE_FREQ          STM32_CFG_AUDIOCLK

/**
 * @brief   AUDIOCLK clock register bits.
 */
#define STM32_AUDIOCLK_BITS                 0U

/**
 * @brief   External audio clock input clock point.
 */
#define STM32_AUDIOCLK_FREQ                 STM32_AUDIOCLK_SOURCE_FREQ

/*--- Macros and checks for the HSI16 clock point. -------------------------*/

#if !((STM32_CFG_HSI16_ENABLE == TRUE) || (STM32_CFG_HSI16_ENABLE == FALSE)) && \
    !defined(__DOXYGEN__)
  #error "invalid STM32_CFG_HSI16_ENABLE value specified"
#endif

#if !((STM32_HSI16_ENABLED == TRUE) ||                                      \
     !((STM32_TIMICSEL_HSI16_SOURCE_DEMANDED == TRUE))) && !defined(__DOXYGEN__)
  #error "HSI16 not enabled, required by TIMICSEL_HSI16_SOURCE"
#endif

#if !((STM32_HSI16_ENABLED == TRUE) || !((STM32_SYSCLK_ENABLED == TRUE) &&  \
      (STM32_CFG_SYSCLK_SEL == RCC_CFGR1_SW_HSI16))) && !defined(__DOXYGEN__)
  #error "HSI16 not enabled, required by SYSCLK"
#endif

#if !((STM32_HSI16_ENABLED == TRUE) || !((STM32_MCO1DIV_ENABLED == TRUE) && \
      (STM32_CFG_MCO1DIV_SEL == RCC_CFGR1_MCO1SEL_HSI16))) &&               \
    !defined(__DOXYGEN__)
  #error "HSI16 not enabled, required by MCO1DIV"
#endif

#if !((STM32_HSI16_ENABLED == TRUE) || !((STM32_MCO2DIV_ENABLED == TRUE) && \
      (STM32_CFG_MCO2DIV_SEL == RCC_CFGR1_MCO2SEL_HSI16))) &&               \
    !defined(__DOXYGEN__)
  #error "HSI16 not enabled, required by MCO2DIV"
#endif

#if !((STM32_HSI16_ENABLED == TRUE) || !((STM32_USART1_ENABLED == TRUE) &&  \
      (STM32_CFG_USART1_SEL == RCC_CCIPR1_USART1SEL_HSI16))) &&             \
    !defined(__DOXYGEN__)
  #error "HSI16 not enabled, required by USART1"
#endif

#if !((STM32_HSI16_ENABLED == TRUE) || !((STM32_USART3_ENABLED == TRUE) &&  \
      (STM32_CFG_USART3_SEL == RCC_CCIPR1_USART3SEL_HSI16))) &&             \
    !defined(__DOXYGEN__)
  #error "HSI16 not enabled, required by USART3"
#endif

#if !((STM32_HSI16_ENABLED == TRUE) || !((STM32_UART4_ENABLED == TRUE) &&   \
      (STM32_CFG_UART4_SEL == RCC_CCIPR1_UART4SEL_HSI16))) &&               \
    !defined(__DOXYGEN__)
  #error "HSI16 not enabled, required by UART4"
#endif

#if !((STM32_HSI16_ENABLED == TRUE) || !((STM32_UART5_ENABLED == TRUE) &&   \
      (STM32_CFG_UART5_SEL == RCC_CCIPR1_UART5SEL_HSI16))) &&               \
    !defined(__DOXYGEN__)
  #error "HSI16 not enabled, required by UART5"
#endif

#if !((STM32_HSI16_ENABLED == TRUE) || !((STM32_LPUART1_ENABLED == TRUE) && \
      (STM32_CFG_LPUART1_SEL == RCC_CCIPR3_LPUART1SEL_HSI16))) &&           \
    !defined(__DOXYGEN__)
  #error "HSI16 not enabled, required by LPUART1"
#endif

#if !((STM32_HSI16_ENABLED == TRUE) || !((STM32_LPTIM1_ENABLED == TRUE) &&  \
      (STM32_CFG_LPTIM1_SEL == RCC_CCIPR3_LPTIM1SEL_HSI16))) &&             \
    !defined(__DOXYGEN__)
  #error "HSI16 not enabled, required by LPTIM1"
#endif

#if !((STM32_HSI16_ENABLED == TRUE) || !((STM32_LPTIM2_ENABLED == TRUE) &&  \
      (STM32_CFG_LPTIM2_SEL == RCC_CCIPR1_LPTIM2SEL_HSI16))) &&             \
    !defined(__DOXYGEN__)
  #error "HSI16 not enabled, required by LPTIM2"
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
  #define STM32_HSI16_BITS                  (RCC_CR_HSION | RCC_CR_HSIKERON)
#else
  #define STM32_HSI16_BITS                  0U
#endif

/**
 * @brief   16MHz high speed internal oscillator clock point.
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

#if !((STM32_HSI48_ENABLED == TRUE) || !((STM32_MCO1DIV_ENABLED == TRUE) && \
      (STM32_CFG_MCO1DIV_SEL == RCC_CFGR1_MCO1SEL_HSI48))) &&               \
    !defined(__DOXYGEN__)
  #error "HSI48 not enabled, required by MCO1DIV"
#endif

#if !((STM32_HSI48_ENABLED == TRUE) || !((STM32_MCO2DIV_ENABLED == TRUE) && \
      (STM32_CFG_MCO2DIV_SEL == RCC_CFGR1_MCO2SEL_HSI48))) &&               \
    !defined(__DOXYGEN__)
  #error "HSI48 not enabled, required by MCO2DIV"
#endif

#if !((STM32_HSI48_ENABLED == TRUE) || !((STM32_ICLK_ENABLED == TRUE) &&    \
      (STM32_CFG_ICLK_SEL == RCC_CCIPR1_ICLKSEL_HSI48))) && !defined(__DOXYGEN__)
  #error "HSI48 not enabled, required by ICLK"
#endif

#if !((STM32_HSI48_ENABLED == TRUE) || !((STM32_RNG_ENABLED == TRUE) &&     \
      (STM32_CFG_RNG_SEL == RCC_CCIPR2_RNGSEL_HSI48))) && !defined(__DOXYGEN__)
  #error "HSI48 not enabled, required by RNG"
#endif

/**
 * @brief   HSI48 nominal source frequency.
 */
#define STM32_HSI48_SOURCE_FREQ             48000000U

/**
 * @brief   HSI48 clock register bits.
 */
#if (STM32_HSI48_ENABLED == TRUE) || defined(__DOXYGEN__)
  #define STM32_HSI48_BITS                  RCC_CR_HSI48ON
#else
  #define STM32_HSI48_BITS                  0U
#endif

/**
 * @brief   48MHz high speed internal oscillator clock point.
 */
#if (STM32_HSI48_ENABLED == TRUE) || defined(__DOXYGEN__)
  #define STM32_HSI48_FREQ                  STM32_HSI48_SOURCE_FREQ
#else
  #define STM32_HSI48_FREQ                  0U
#endif

/*--- Macros and checks for the HSE clock point. ---------------------------*/

#if !((STM32_CFG_HSE_ENABLE == TRUE) || (STM32_CFG_HSE_ENABLE == FALSE)) && \
    !defined(__DOXYGEN__)
  #error "invalid STM32_CFG_HSE_ENABLE value specified"
#endif

#if !((STM32_HSE_ENABLED == TRUE) ||                                        \
     !((STM32_MSIRC0_PLL_HSE_SOURCE_DEMANDED == TRUE))) && !defined(__DOXYGEN__)
  #error "HSE not enabled, required by MSIRC0_PLL_HSE_SOURCE"
#endif

#if !((STM32_HSE_ENABLED == TRUE) ||                                        \
     !((STM32_MSIRC1_PLL_HSE_SOURCE_DEMANDED == TRUE))) && !defined(__DOXYGEN__)
  #error "HSE not enabled, required by MSIRC1_PLL_HSE_SOURCE"
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

#if !((STM32_HSE_ENABLED == TRUE) || !((STM32_MCO1DIV_ENABLED == TRUE) &&   \
      (STM32_CFG_MCO1DIV_SEL == RCC_CFGR1_MCO1SEL_HSE))) && !defined(__DOXYGEN__)
  #error "HSE not enabled, required by MCO1DIV"
#endif

#if !((STM32_HSE_ENABLED == TRUE) || !((STM32_MCO2DIV_ENABLED == TRUE) &&   \
      (STM32_CFG_MCO2DIV_SEL == RCC_CFGR1_MCO2SEL_HSE))) && !defined(__DOXYGEN__)
  #error "HSE not enabled, required by MCO2DIV"
#endif

#if !((STM32_HSE_ENABLED == TRUE) || !((STM32_ICLK_ENABLED == TRUE) &&      \
      (STM32_CFG_ICLK_SEL == RCC_CCIPR1_ICLKSEL_HSE))) && !defined(__DOXYGEN__)
  #error "HSE not enabled, required by ICLK"
#endif

#if !((STM32_HSE_ENABLED == TRUE) || !((STM32_ADCDACICLK_ENABLED == TRUE) && \
      (STM32_CFG_ADCDACICLK_SEL == RCC_CCIPR2_ADCDACSEL_HSE))) &&           \
    !defined(__DOXYGEN__)
  #error "HSE not enabled, required by ADCDACICLK"
#endif

#if !((STM32_HSE_ENABLED == TRUE) || !((STM32_SAI1_ENABLED == TRUE) &&      \
      (STM32_CFG_SAI1_SEL == RCC_CCIPR2_SAI1SEL_HSE))) && !defined(__DOXYGEN__)
  #error "HSE not enabled, required by SAI1"
#endif

#if !((STM32_HSE_ENABLED == TRUE) || !((STM32_ADF1_ENABLED == TRUE) &&      \
      (STM32_CFG_ADF1_SEL == RCC_CCIPR2_ADF1SEL_HSE))) && !defined(__DOXYGEN__)
  #error "HSE not enabled, required by ADF1"
#endif

/**
 * @brief   HSE nominal source frequency.
 */
#define STM32_HSE_SOURCE_FREQ               STM32_HSECLK

/**
 * @brief   HSE clock register bits.
 */
#if (STM32_HSE_ENABLED == TRUE) || defined(__DOXYGEN__)
  #define STM32_HSE_BITS                    RCC_CR_HSEON
#else
  #define STM32_HSE_BITS                    0U
#endif

/**
 * @brief   High frequency external oscillator clock point.
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

#if !((STM32_LSE_ENABLED == TRUE) ||                                        \
     !((STM32_MSIRC0_PLL_LSE_SOURCE_DEMANDED == TRUE))) && !defined(__DOXYGEN__)
  #error "LSE not enabled, required by MSIRC0_PLL_LSE_SOURCE"
#endif

#if !((STM32_LSE_ENABLED == TRUE) ||                                        \
     !((STM32_MSIRC1_PLL_LSE_SOURCE_DEMANDED == TRUE))) && !defined(__DOXYGEN__)
  #error "LSE not enabled, required by MSIRC1_PLL_LSE_SOURCE"
#endif

#if !((STM32_LSE_ENABLED == TRUE) || !((STM32_MCO1DIV_ENABLED == TRUE) &&   \
      (STM32_CFG_MCO1DIV_SEL == RCC_CFGR1_MCO1SEL_LSE))) && !defined(__DOXYGEN__)
  #error "LSE not enabled, required by MCO1DIV"
#endif

#if !((STM32_LSE_ENABLED == TRUE) || !((STM32_MCO2DIV_ENABLED == TRUE) &&   \
      (STM32_CFG_MCO2DIV_SEL == RCC_CFGR1_MCO2SEL_LSE))) && !defined(__DOXYGEN__)
  #error "LSE not enabled, required by MCO2DIV"
#endif

#if !((STM32_LSE_ENABLED == TRUE) || !((STM32_RTC_ENABLED == TRUE) &&       \
      (STM32_CFG_RTC_SEL == RCC_BDCR_RTCSEL_LSE))) && !defined(__DOXYGEN__)
  #error "LSE not enabled, required by RTC"
#endif

#if !((STM32_LSE_ENABLED == TRUE) || !((STM32_LSCO_ENABLED == TRUE) &&      \
      (STM32_CFG_LSCO_SEL == RCC_BDCR_LSCOSEL_LSE))) && !defined(__DOXYGEN__)
  #error "LSE not enabled, required by LSCO"
#endif

#if !((STM32_LSE_ENABLED == TRUE) || !((STM32_LPUART1_ENABLED == TRUE) &&   \
      (STM32_CFG_LPUART1_SEL == RCC_CCIPR3_LPUART1SEL_LSE))) &&             \
    !defined(__DOXYGEN__)
  #error "LSE not enabled, required by LPUART1"
#endif

#if !((STM32_LSE_ENABLED == TRUE) || !((STM32_LPTIM1_ENABLED == TRUE) &&    \
      (STM32_CFG_LPTIM1_SEL == RCC_CCIPR3_LPTIM1SEL_LSE))) &&               \
    !defined(__DOXYGEN__)
  #error "LSE not enabled, required by LPTIM1"
#endif

#if !((STM32_LSE_ENABLED == TRUE) || !((STM32_LPTIM2_ENABLED == TRUE) &&    \
      (STM32_CFG_LPTIM2_SEL == RCC_CCIPR1_LPTIM2SEL_LSE))) &&               \
    !defined(__DOXYGEN__)
  #error "LSE not enabled, required by LPTIM2"
#endif

#if !((STM32_LSE_ENABLED == TRUE) || !((STM32_LPTIM34_ENABLED == TRUE) &&   \
      (STM32_CFG_LPTIM34_SEL == RCC_CCIPR3_LPTIM34SEL_LSE))) &&             \
    !defined(__DOXYGEN__)
  #error "LSE not enabled, required by LPTIM34"
#endif

#if !((STM32_LSE_ENABLED == TRUE) || !((STM32_SYSTICK_ENABLED == TRUE) &&   \
      (STM32_CFG_SYSTICK_SEL == RCC_CCIPR1_SYSTICKSEL_LSE))) &&             \
    !defined(__DOXYGEN__)
  #error "LSE not enabled, required by SYSTICK"
#endif

#if !((STM32_LSE_ENABLED == TRUE) || !((STM32_DAC1SH_ENABLED == TRUE) &&    \
      (STM32_CFG_DAC1SH_SEL == RCC_CCIPR2_DAC1SHSEL_LSE))) &&               \
    !defined(__DOXYGEN__)
  #error "LSE not enabled, required by DAC1SH"
#endif

/**
 * @brief   LSE nominal source frequency.
 */
#define STM32_LSE_SOURCE_FREQ               STM32_LSECLK

/**
 * @brief   LSE clock register bits.
 */
#if (STM32_LSE_ENABLED == TRUE) || defined(__DOXYGEN__)
  #define STM32_LSE_BITS                    RCC_BDCR_LSEON
#else
  #define STM32_LSE_BITS                    0U
#endif

/**
 * @brief   Low frequency external oscillator clock point.
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

#if !((STM32_LSI_ENABLED == TRUE) || !((STM32_MCO1DIV_ENABLED == TRUE) &&   \
      (STM32_CFG_MCO1DIV_SEL == RCC_CFGR1_MCO1SEL_LSI))) && !defined(__DOXYGEN__)
  #error "LSI not enabled, required by MCO1DIV"
#endif

#if !((STM32_LSI_ENABLED == TRUE) || !((STM32_MCO2DIV_ENABLED == TRUE) &&   \
      (STM32_CFG_MCO2DIV_SEL == RCC_CFGR1_MCO2SEL_LSI))) && !defined(__DOXYGEN__)
  #error "LSI not enabled, required by MCO2DIV"
#endif

#if !((STM32_LSI_ENABLED == TRUE) || !((STM32_RTC_ENABLED == TRUE) &&       \
      (STM32_CFG_RTC_SEL == RCC_BDCR_RTCSEL_LSI))) && !defined(__DOXYGEN__)
  #error "LSI not enabled, required by RTC"
#endif

#if !((STM32_LSI_ENABLED == TRUE) || !((STM32_LSCO_ENABLED == TRUE) &&      \
      (STM32_CFG_LSCO_SEL == RCC_BDCR_LSCOSEL_LSI))) && !defined(__DOXYGEN__)
  #error "LSI not enabled, required by LSCO"
#endif

#if !((STM32_LSI_ENABLED == TRUE) || !((STM32_LPTIM1_ENABLED == TRUE) &&    \
      (STM32_CFG_LPTIM1_SEL == RCC_CCIPR3_LPTIM1SEL_LSI))) &&               \
    !defined(__DOXYGEN__)
  #error "LSI not enabled, required by LPTIM1"
#endif

#if !((STM32_LSI_ENABLED == TRUE) || !((STM32_LPTIM2_ENABLED == TRUE) &&    \
      (STM32_CFG_LPTIM2_SEL == RCC_CCIPR1_LPTIM2SEL_LSI))) &&               \
    !defined(__DOXYGEN__)
  #error "LSI not enabled, required by LPTIM2"
#endif

#if !((STM32_LSI_ENABLED == TRUE) || !((STM32_LPTIM34_ENABLED == TRUE) &&   \
      (STM32_CFG_LPTIM34_SEL == RCC_CCIPR3_LPTIM34SEL_LSI))) &&             \
    !defined(__DOXYGEN__)
  #error "LSI not enabled, required by LPTIM34"
#endif

#if !((STM32_LSI_ENABLED == TRUE) || !((STM32_SYSTICK_ENABLED == TRUE) &&   \
      (STM32_CFG_SYSTICK_SEL == RCC_CCIPR1_SYSTICKSEL_LSI))) &&             \
    !defined(__DOXYGEN__)
  #error "LSI not enabled, required by SYSTICK"
#endif

#if !((STM32_LSI_ENABLED == TRUE) || !((STM32_DAC1SH_ENABLED == TRUE) &&    \
      (STM32_CFG_DAC1SH_SEL == RCC_CCIPR2_DAC1SHSEL_LSI))) &&               \
    !defined(__DOXYGEN__)
  #error "LSI not enabled, required by DAC1SH"
#endif

/**
 * @brief   LSI nominal source frequency.
 */
#define STM32_LSI_SOURCE_FREQ               STM32_LSICLK

/**
 * @brief   LSI clock register bits.
 */
#if (STM32_LSI_ENABLED == TRUE) || defined(__DOXYGEN__)
  #define STM32_LSI_BITS                    RCC_CSR_LSION
#else
  #define STM32_LSI_BITS                    0U
#endif

/**
 * @brief   Low frequency internal oscillator clock point.
 */
#if (STM32_LSI_ENABLED == TRUE) || defined(__DOXYGEN__)
  #define STM32_LSI_FREQ                    STM32_LSI_SOURCE_FREQ
#else
  #define STM32_LSI_FREQ                    0U
#endif

/*--- Macros and checks for the MSIRC0 clock point. ------------------------*/

/**
 * @brief   MSIRC0 nominal source frequency.
 */
#define STM32_MSIRC0_SOURCE_FREQ            96000000U

/**
 * @brief   MSIRC0 clock register bits.
 */
#if (STM32_CFG_MSIRC0_MODE == RCC_MSIRC0_PLL_LSE) || \
    defined(__DOXYGEN__)
  #if (STM32_MSIRC0_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_CR_MSIRC0_BITS            RCC_CR_MSIPLL0EN
  #else
    #define STM32_CR_MSIRC0_BITS            0U
  #endif
#elif (STM32_CFG_MSIRC0_MODE == RCC_MSIRC0_PLL_HSE)
  #if (STM32_MSIRC0_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_CR_MSIRC0_BITS            RCC_CR_MSIPLL0EN
  #else
    #define STM32_CR_MSIRC0_BITS            0U
  #endif
#elif (STM32_CFG_MSIRC0_MODE == RCC_MSIRC0_PLL_LSE_FAST)
  #if (STM32_MSIRC0_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_CR_MSIRC0_BITS            (RCC_CR_MSIPLL0EN |             \
                                             RCC_CR_MSIPLL0FAST)
  #else
    #define STM32_CR_MSIRC0_BITS            0U
  #endif
#elif (STM32_CFG_MSIRC0_MODE == RCC_MSIRC0_PLL_HSE_FAST)
  #if (STM32_MSIRC0_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_CR_MSIRC0_BITS            (RCC_CR_MSIPLL0EN |             \
                                             RCC_CR_MSIPLL0FAST)
  #else
    #define STM32_CR_MSIRC0_BITS            0U
  #endif
#else
  #define STM32_CR_MSIRC0_BITS              0U
#endif

#if (STM32_CFG_MSIRC0_MODE == RCC_MSIRC0_PLL_LSE) || \
    defined(__DOXYGEN__)
  #if (STM32_MSIRC0_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIRC0_BITS        RCC_ICSCR1_MSIPLL0SEL_LSE
  #else
    #define STM32_ICSCR1_MSIRC0_BITS        0U
  #endif
#elif (STM32_CFG_MSIRC0_MODE == RCC_MSIRC0_PLL_HSE)
  #if (STM32_MSIRC0_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIRC0_BITS        (RCC_ICSCR1_MSIPLL0SEL_HSE |    \
                                             STM32_MSIHSINDIV)
  #else
    #define STM32_ICSCR1_MSIRC0_BITS        0U
  #endif
#elif (STM32_CFG_MSIRC0_MODE == RCC_MSIRC0_PLL_LSE_FAST)
  #if (STM32_MSIRC0_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIRC0_BITS        RCC_ICSCR1_MSIPLL0SEL_LSE
  #else
    #define STM32_ICSCR1_MSIRC0_BITS        0U
  #endif
#elif (STM32_CFG_MSIRC0_MODE == RCC_MSIRC0_PLL_HSE_FAST)
  #if (STM32_MSIRC0_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIRC0_BITS        (RCC_ICSCR1_MSIPLL0SEL_HSE |    \
                                             STM32_MSIHSINDIV)
  #else
    #define STM32_ICSCR1_MSIRC0_BITS        0U
  #endif
#else
  #define STM32_ICSCR1_MSIRC0_BITS          0U
#endif

/**
 * @brief   MSI 96MHz internal oscillator clock point.
 */
#if (STM32_MSIRC0_ENABLED == FALSE) && !defined(__DOXYGEN__)
  #define STM32_MSIRC0_FREQ                 0U
#elif (STM32_CFG_MSIRC0_MODE == RCC_MSIRC0_PLL_LSE) || \
    defined(__DOXYGEN__)
  #define STM32_MSIRC0_FREQ                 96010000U
#elif (STM32_CFG_MSIRC0_MODE == RCC_MSIRC0_PLL_HSE)
  #define STM32_MSIRC0_FREQ                 96000000U
#elif (STM32_CFG_MSIRC0_MODE == RCC_MSIRC0_PLL_LSE_FAST)
  #define STM32_MSIRC0_FREQ                 96010000U
#elif (STM32_CFG_MSIRC0_MODE == RCC_MSIRC0_PLL_HSE_FAST)
  #define STM32_MSIRC0_FREQ                 96000000U
#else
  #define STM32_MSIRC0_FREQ                 96000000U
#endif

/*--- Macros and checks for the MSIRC1 clock point. ------------------------*/

/**
 * @brief   MSIRC1 nominal source frequency.
 */
#define STM32_MSIRC1_SOURCE_FREQ            24000000U

/**
 * @brief   MSIRC1 clock register bits.
 */
#if ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE) && \
     ((STM32_CFG_MSIPLL1N_VALUE == 0) || (STM32_CFG_MSIPLL1N_VALUE == 1))) || \
    defined(__DOXYGEN__)
  #if (STM32_MSIRC1_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_CR_MSIRC1_BITS            RCC_CR_MSIPLL1EN
  #else
    #define STM32_CR_MSIRC1_BITS            0U
  #endif
#elif (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE) && \
      (STM32_CFG_MSIPLL1N_VALUE == 2)
  #if (STM32_MSIRC1_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_CR_MSIRC1_BITS            RCC_CR_MSIPLL1EN
  #else
    #define STM32_CR_MSIRC1_BITS            0U
  #endif
#elif (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE) && \
      (STM32_CFG_MSIPLL1N_VALUE == 3)
  #if (STM32_MSIRC1_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_CR_MSIRC1_BITS            RCC_CR_MSIPLL1EN
  #else
    #define STM32_CR_MSIRC1_BITS            0U
  #endif
#elif (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE)
  #if (STM32_MSIRC1_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_CR_MSIRC1_BITS            RCC_CR_MSIPLL1EN
  #else
    #define STM32_CR_MSIRC1_BITS            0U
  #endif
#elif (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE) && \
      ((STM32_CFG_MSIPLL1N_VALUE == 0) || (STM32_CFG_MSIPLL1N_VALUE == 1))
  #if (STM32_MSIRC1_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_CR_MSIRC1_BITS            RCC_CR_MSIPLL1EN
  #else
    #define STM32_CR_MSIRC1_BITS            0U
  #endif
#elif (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE) && \
      (STM32_CFG_MSIPLL1N_VALUE == 2)
  #if (STM32_MSIRC1_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_CR_MSIRC1_BITS            RCC_CR_MSIPLL1EN
  #else
    #define STM32_CR_MSIRC1_BITS            0U
  #endif
#elif (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE) && \
      (STM32_CFG_MSIPLL1N_VALUE == 3)
  #if (STM32_MSIRC1_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_CR_MSIRC1_BITS            RCC_CR_MSIPLL1EN
  #else
    #define STM32_CR_MSIRC1_BITS            0U
  #endif
#elif (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE)
  #if (STM32_MSIRC1_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_CR_MSIRC1_BITS            RCC_CR_MSIPLL1EN
  #else
    #define STM32_CR_MSIRC1_BITS            0U
  #endif
#elif (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE_FAST) && \
      ((STM32_CFG_MSIPLL1N_VALUE == 0) || (STM32_CFG_MSIPLL1N_VALUE == 1))
  #if (STM32_MSIRC1_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_CR_MSIRC1_BITS            (RCC_CR_MSIPLL1EN |             \
                                             RCC_CR_MSIPLL1FAST)
  #else
    #define STM32_CR_MSIRC1_BITS            0U
  #endif
#elif (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE_FAST) && \
      (STM32_CFG_MSIPLL1N_VALUE == 2)
  #if (STM32_MSIRC1_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_CR_MSIRC1_BITS            (RCC_CR_MSIPLL1EN |             \
                                             RCC_CR_MSIPLL1FAST)
  #else
    #define STM32_CR_MSIRC1_BITS            0U
  #endif
#elif (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE_FAST) && \
      (STM32_CFG_MSIPLL1N_VALUE == 3)
  #if (STM32_MSIRC1_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_CR_MSIRC1_BITS            (RCC_CR_MSIPLL1EN |             \
                                             RCC_CR_MSIPLL1FAST)
  #else
    #define STM32_CR_MSIRC1_BITS            0U
  #endif
#elif (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE_FAST)
  #if (STM32_MSIRC1_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_CR_MSIRC1_BITS            (RCC_CR_MSIPLL1EN |             \
                                             RCC_CR_MSIPLL1FAST)
  #else
    #define STM32_CR_MSIRC1_BITS            0U
  #endif
#elif (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE_FAST) && \
      ((STM32_CFG_MSIPLL1N_VALUE == 0) || (STM32_CFG_MSIPLL1N_VALUE == 1))
  #if (STM32_MSIRC1_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_CR_MSIRC1_BITS            (RCC_CR_MSIPLL1EN |             \
                                             RCC_CR_MSIPLL1FAST)
  #else
    #define STM32_CR_MSIRC1_BITS            0U
  #endif
#elif (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE_FAST) && \
      (STM32_CFG_MSIPLL1N_VALUE == 2)
  #if (STM32_MSIRC1_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_CR_MSIRC1_BITS            (RCC_CR_MSIPLL1EN |             \
                                             RCC_CR_MSIPLL1FAST)
  #else
    #define STM32_CR_MSIRC1_BITS            0U
  #endif
#elif (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE_FAST) && \
      (STM32_CFG_MSIPLL1N_VALUE == 3)
  #if (STM32_MSIRC1_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_CR_MSIRC1_BITS            (RCC_CR_MSIPLL1EN |             \
                                             RCC_CR_MSIPLL1FAST)
  #else
    #define STM32_CR_MSIRC1_BITS            0U
  #endif
#elif (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE_FAST)
  #if (STM32_MSIRC1_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_CR_MSIRC1_BITS            (RCC_CR_MSIPLL1EN |             \
                                             RCC_CR_MSIPLL1FAST)
  #else
    #define STM32_CR_MSIRC1_BITS            0U
  #endif
#else
  #define STM32_CR_MSIRC1_BITS              0U
#endif

#if ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE) && \
     ((STM32_CFG_MSIPLL1N_VALUE == 0) || (STM32_CFG_MSIPLL1N_VALUE == 1))) || \
    defined(__DOXYGEN__)
  #if (STM32_MSIRC1_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIRC1_BITS        (RCC_ICSCR1_MSIPLL1SEL_LSE |    \
                                             RCC_ICSCR1_MSIPLL1N_FIELD(STM32_CFG_MSIPLL1N_VALUE))
  #else
    #define STM32_ICSCR1_MSIRC1_BITS        0U
  #endif
#elif (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE) && \
      (STM32_CFG_MSIPLL1N_VALUE == 2)
  #if (STM32_MSIRC1_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIRC1_BITS        (RCC_ICSCR1_MSIPLL1SEL_LSE |    \
                                             RCC_ICSCR1_MSIPLL1N_FIELD(STM32_CFG_MSIPLL1N_VALUE))
  #else
    #define STM32_ICSCR1_MSIRC1_BITS        0U
  #endif
#elif (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE) && \
      (STM32_CFG_MSIPLL1N_VALUE == 3)
  #if (STM32_MSIRC1_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIRC1_BITS        (RCC_ICSCR1_MSIPLL1SEL_LSE |    \
                                             RCC_ICSCR1_MSIPLL1N_FIELD(STM32_CFG_MSIPLL1N_VALUE))
  #else
    #define STM32_ICSCR1_MSIRC1_BITS        0U
  #endif
#elif (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE)
  #if (STM32_MSIRC1_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIRC1_BITS        (RCC_ICSCR1_MSIPLL1SEL_LSE |    \
                                             RCC_ICSCR1_MSIPLL1N_FIELD(STM32_CFG_MSIPLL1N_VALUE))
  #else
    #define STM32_ICSCR1_MSIRC1_BITS        0U
  #endif
#elif (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE) && \
      ((STM32_CFG_MSIPLL1N_VALUE == 0) || (STM32_CFG_MSIPLL1N_VALUE == 1))
  #if (STM32_MSIRC1_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIRC1_BITS        (RCC_ICSCR1_MSIPLL1SEL_HSE |    \
                                             RCC_ICSCR1_MSIPLL1N_FIELD(STM32_CFG_MSIPLL1N_VALUE) | \
                                             STM32_MSIHSINDIV)
  #else
    #define STM32_ICSCR1_MSIRC1_BITS        0U
  #endif
#elif (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE) && \
      (STM32_CFG_MSIPLL1N_VALUE == 2)
  #if (STM32_MSIRC1_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIRC1_BITS        (RCC_ICSCR1_MSIPLL1SEL_HSE |    \
                                             RCC_ICSCR1_MSIPLL1N_FIELD(STM32_CFG_MSIPLL1N_VALUE) | \
                                             STM32_MSIHSINDIV)
  #else
    #define STM32_ICSCR1_MSIRC1_BITS        0U
  #endif
#elif (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE) && \
      (STM32_CFG_MSIPLL1N_VALUE == 3)
  #if (STM32_MSIRC1_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIRC1_BITS        (RCC_ICSCR1_MSIPLL1SEL_HSE |    \
                                             RCC_ICSCR1_MSIPLL1N_FIELD(STM32_CFG_MSIPLL1N_VALUE) | \
                                             STM32_MSIHSINDIV)
  #else
    #define STM32_ICSCR1_MSIRC1_BITS        0U
  #endif
#elif (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE)
  #if (STM32_MSIRC1_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIRC1_BITS        (RCC_ICSCR1_MSIPLL1SEL_HSE |    \
                                             RCC_ICSCR1_MSIPLL1N_FIELD(STM32_CFG_MSIPLL1N_VALUE) | \
                                             STM32_MSIHSINDIV)
  #else
    #define STM32_ICSCR1_MSIRC1_BITS        0U
  #endif
#elif (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE_FAST) && \
      ((STM32_CFG_MSIPLL1N_VALUE == 0) || (STM32_CFG_MSIPLL1N_VALUE == 1))
  #if (STM32_MSIRC1_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIRC1_BITS        (RCC_ICSCR1_MSIPLL1SEL_LSE |    \
                                             RCC_ICSCR1_MSIPLL1N_FIELD(STM32_CFG_MSIPLL1N_VALUE))
  #else
    #define STM32_ICSCR1_MSIRC1_BITS        0U
  #endif
#elif (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE_FAST) && \
      (STM32_CFG_MSIPLL1N_VALUE == 2)
  #if (STM32_MSIRC1_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIRC1_BITS        (RCC_ICSCR1_MSIPLL1SEL_LSE |    \
                                             RCC_ICSCR1_MSIPLL1N_FIELD(STM32_CFG_MSIPLL1N_VALUE))
  #else
    #define STM32_ICSCR1_MSIRC1_BITS        0U
  #endif
#elif (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE_FAST) && \
      (STM32_CFG_MSIPLL1N_VALUE == 3)
  #if (STM32_MSIRC1_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIRC1_BITS        (RCC_ICSCR1_MSIPLL1SEL_LSE |    \
                                             RCC_ICSCR1_MSIPLL1N_FIELD(STM32_CFG_MSIPLL1N_VALUE))
  #else
    #define STM32_ICSCR1_MSIRC1_BITS        0U
  #endif
#elif (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE_FAST)
  #if (STM32_MSIRC1_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIRC1_BITS        (RCC_ICSCR1_MSIPLL1SEL_LSE |    \
                                             RCC_ICSCR1_MSIPLL1N_FIELD(STM32_CFG_MSIPLL1N_VALUE))
  #else
    #define STM32_ICSCR1_MSIRC1_BITS        0U
  #endif
#elif (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE_FAST) && \
      ((STM32_CFG_MSIPLL1N_VALUE == 0) || (STM32_CFG_MSIPLL1N_VALUE == 1))
  #if (STM32_MSIRC1_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIRC1_BITS        (RCC_ICSCR1_MSIPLL1SEL_HSE |    \
                                             RCC_ICSCR1_MSIPLL1N_FIELD(STM32_CFG_MSIPLL1N_VALUE) | \
                                             STM32_MSIHSINDIV)
  #else
    #define STM32_ICSCR1_MSIRC1_BITS        0U
  #endif
#elif (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE_FAST) && \
      (STM32_CFG_MSIPLL1N_VALUE == 2)
  #if (STM32_MSIRC1_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIRC1_BITS        (RCC_ICSCR1_MSIPLL1SEL_HSE |    \
                                             RCC_ICSCR1_MSIPLL1N_FIELD(STM32_CFG_MSIPLL1N_VALUE) | \
                                             STM32_MSIHSINDIV)
  #else
    #define STM32_ICSCR1_MSIRC1_BITS        0U
  #endif
#elif (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE_FAST) && \
      (STM32_CFG_MSIPLL1N_VALUE == 3)
  #if (STM32_MSIRC1_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIRC1_BITS        (RCC_ICSCR1_MSIPLL1SEL_HSE |    \
                                             RCC_ICSCR1_MSIPLL1N_FIELD(STM32_CFG_MSIPLL1N_VALUE) | \
                                             STM32_MSIHSINDIV)
  #else
    #define STM32_ICSCR1_MSIRC1_BITS        0U
  #endif
#elif (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE_FAST)
  #if (STM32_MSIRC1_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIRC1_BITS        (RCC_ICSCR1_MSIPLL1SEL_HSE |    \
                                             RCC_ICSCR1_MSIPLL1N_FIELD(STM32_CFG_MSIPLL1N_VALUE) | \
                                             STM32_MSIHSINDIV)
  #else
    #define STM32_ICSCR1_MSIRC1_BITS        0U
  #endif
#else
  #define STM32_ICSCR1_MSIRC1_BITS          0U
#endif

/**
 * @brief   MSI 24MHz internal oscillator clock point.
 */
#if (STM32_MSIRC1_ENABLED == FALSE) && !defined(__DOXYGEN__)
  #define STM32_MSIRC1_FREQ                 0U
#elif ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE) && \
      ((STM32_CFG_MSIPLL1N_VALUE == 0) || (STM32_CFG_MSIPLL1N_VALUE == 1))) || \
    defined(__DOXYGEN__)
  #define STM32_MSIRC1_FREQ                 23986000U
#elif (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE) && \
      (STM32_CFG_MSIPLL1N_VALUE == 2)
  #define STM32_MSIRC1_FREQ                 22577000U
#elif (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE) && \
      (STM32_CFG_MSIPLL1N_VALUE == 3)
  #define STM32_MSIRC1_FREQ                 24576000U
#elif (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE)
  #define STM32_MSIRC1_FREQ                 24000000U
#elif (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE) && \
      ((STM32_CFG_MSIPLL1N_VALUE == 0) || (STM32_CFG_MSIPLL1N_VALUE == 1))
  #define STM32_MSIRC1_FREQ                 24016000U
#elif (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE) && \
      (STM32_CFG_MSIPLL1N_VALUE == 2)
  #define STM32_MSIRC1_FREQ                 22581000U
#elif (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE) && \
      (STM32_CFG_MSIPLL1N_VALUE == 3)
  #define STM32_MSIRC1_FREQ                 24577000U
#elif (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE)
  #define STM32_MSIRC1_FREQ                 24000000U
#elif (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE_FAST) && \
      ((STM32_CFG_MSIPLL1N_VALUE == 0) || (STM32_CFG_MSIPLL1N_VALUE == 1))
  #define STM32_MSIRC1_FREQ                 23986000U
#elif (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE_FAST) && \
      (STM32_CFG_MSIPLL1N_VALUE == 2)
  #define STM32_MSIRC1_FREQ                 22577000U
#elif (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE_FAST) && \
      (STM32_CFG_MSIPLL1N_VALUE == 3)
  #define STM32_MSIRC1_FREQ                 24576000U
#elif (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE_FAST)
  #define STM32_MSIRC1_FREQ                 24000000U
#elif (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE_FAST) && \
      ((STM32_CFG_MSIPLL1N_VALUE == 0) || (STM32_CFG_MSIPLL1N_VALUE == 1))
  #define STM32_MSIRC1_FREQ                 24016000U
#elif (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE_FAST) && \
      (STM32_CFG_MSIPLL1N_VALUE == 2)
  #define STM32_MSIRC1_FREQ                 22581000U
#elif (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE_FAST) && \
      (STM32_CFG_MSIPLL1N_VALUE == 3)
  #define STM32_MSIRC1_FREQ                 24577000U
#elif (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE_FAST)
  #define STM32_MSIRC1_FREQ                 24000000U
#else
  #define STM32_MSIRC1_FREQ                 24000000U
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

#if ((STM32_CFG_MSIS_SRCDIV == RCC_ICSCR1_MSIS_IRC0_DIV1) && \
     ((STM32_CFG_MSIRC0_MODE == RCC_MSIRC0_PLL_LSE) || (STM32_CFG_MSIRC0_MODE == RCC_MSIRC0_PLL_LSE_FAST))) || \
    defined(__DOXYGEN__)
  #if (STM32_MSIS_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIS_BITS          (RCC_ICSCR1_MSISSEL_MSIRC0 |    \
                                             RCC_ICSCR1_MSISDIV_FIELD(0U))
  #else
    #define STM32_ICSCR1_MSIS_BITS          0U
  #endif
#elif (STM32_CFG_MSIS_SRCDIV == RCC_ICSCR1_MSIS_IRC0_DIV1)
  #if (STM32_MSIS_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIS_BITS          (RCC_ICSCR1_MSISSEL_MSIRC0 |    \
                                             RCC_ICSCR1_MSISDIV_FIELD(0U))
  #else
    #define STM32_ICSCR1_MSIS_BITS          0U
  #endif
#elif (STM32_CFG_MSIS_SRCDIV == RCC_ICSCR1_MSIS_IRC0_DIV2) && \
      ((STM32_CFG_MSIRC0_MODE == RCC_MSIRC0_PLL_LSE) || (STM32_CFG_MSIRC0_MODE == RCC_MSIRC0_PLL_LSE_FAST))
  #if (STM32_MSIS_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIS_BITS          (RCC_ICSCR1_MSISSEL_MSIRC0 |    \
                                             RCC_ICSCR1_MSISDIV_FIELD(1U))
  #else
    #define STM32_ICSCR1_MSIS_BITS          0U
  #endif
#elif (STM32_CFG_MSIS_SRCDIV == RCC_ICSCR1_MSIS_IRC0_DIV2)
  #if (STM32_MSIS_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIS_BITS          (RCC_ICSCR1_MSISSEL_MSIRC0 |    \
                                             RCC_ICSCR1_MSISDIV_FIELD(1U))
  #else
    #define STM32_ICSCR1_MSIS_BITS          0U
  #endif
#elif (STM32_CFG_MSIS_SRCDIV == RCC_ICSCR1_MSIS_IRC0_DIV4) && \
      ((STM32_CFG_MSIRC0_MODE == RCC_MSIRC0_PLL_LSE) || (STM32_CFG_MSIRC0_MODE == RCC_MSIRC0_PLL_LSE_FAST))
  #if (STM32_MSIS_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIS_BITS          (RCC_ICSCR1_MSISSEL_MSIRC0 |    \
                                             RCC_ICSCR1_MSISDIV_FIELD(2U))
  #else
    #define STM32_ICSCR1_MSIS_BITS          0U
  #endif
#elif (STM32_CFG_MSIS_SRCDIV == RCC_ICSCR1_MSIS_IRC0_DIV4)
  #if (STM32_MSIS_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIS_BITS          (RCC_ICSCR1_MSISSEL_MSIRC0 |    \
                                             RCC_ICSCR1_MSISDIV_FIELD(2U))
  #else
    #define STM32_ICSCR1_MSIS_BITS          0U
  #endif
#elif (STM32_CFG_MSIS_SRCDIV == RCC_ICSCR1_MSIS_IRC0_DIV8) && \
      ((STM32_CFG_MSIRC0_MODE == RCC_MSIRC0_PLL_LSE) || (STM32_CFG_MSIRC0_MODE == RCC_MSIRC0_PLL_LSE_FAST))
  #if (STM32_MSIS_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIS_BITS          (RCC_ICSCR1_MSISSEL_MSIRC0 |    \
                                             RCC_ICSCR1_MSISDIV_FIELD(3U))
  #else
    #define STM32_ICSCR1_MSIS_BITS          0U
  #endif
#elif (STM32_CFG_MSIS_SRCDIV == RCC_ICSCR1_MSIS_IRC0_DIV8)
  #if (STM32_MSIS_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIS_BITS          (RCC_ICSCR1_MSISSEL_MSIRC0 |    \
                                             RCC_ICSCR1_MSISDIV_FIELD(3U))
  #else
    #define STM32_ICSCR1_MSIS_BITS          0U
  #endif
#elif (STM32_CFG_MSIS_SRCDIV == RCC_ICSCR1_MSIS_IRC1_DIV1) && \
      ((STM32_CFG_MSIPLL1N_VALUE == 0) || (STM32_CFG_MSIPLL1N_VALUE == 1)) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE_FAST))
  #if (STM32_MSIS_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIS_BITS          (RCC_ICSCR1_MSISSEL_MSIRC1 |    \
                                             RCC_ICSCR1_MSISDIV_FIELD(0U))
  #else
    #define STM32_ICSCR1_MSIS_BITS          0U
  #endif
#elif (STM32_CFG_MSIS_SRCDIV == RCC_ICSCR1_MSIS_IRC1_DIV1) && \
      ((STM32_CFG_MSIPLL1N_VALUE == 0) || (STM32_CFG_MSIPLL1N_VALUE == 1)) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE_FAST))
  #if (STM32_MSIS_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIS_BITS          (RCC_ICSCR1_MSISSEL_MSIRC1 |    \
                                             RCC_ICSCR1_MSISDIV_FIELD(0U))
  #else
    #define STM32_ICSCR1_MSIS_BITS          0U
  #endif
#elif (STM32_CFG_MSIS_SRCDIV == RCC_ICSCR1_MSIS_IRC1_DIV1) && \
      (STM32_CFG_MSIPLL1N_VALUE == 2) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE_FAST))
  #if (STM32_MSIS_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIS_BITS          (RCC_ICSCR1_MSISSEL_MSIRC1 |    \
                                             RCC_ICSCR1_MSISDIV_FIELD(0U))
  #else
    #define STM32_ICSCR1_MSIS_BITS          0U
  #endif
#elif (STM32_CFG_MSIS_SRCDIV == RCC_ICSCR1_MSIS_IRC1_DIV1) && \
      (STM32_CFG_MSIPLL1N_VALUE == 2) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE_FAST))
  #if (STM32_MSIS_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIS_BITS          (RCC_ICSCR1_MSISSEL_MSIRC1 |    \
                                             RCC_ICSCR1_MSISDIV_FIELD(0U))
  #else
    #define STM32_ICSCR1_MSIS_BITS          0U
  #endif
#elif (STM32_CFG_MSIS_SRCDIV == RCC_ICSCR1_MSIS_IRC1_DIV1) && \
      (STM32_CFG_MSIPLL1N_VALUE == 3) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE_FAST))
  #if (STM32_MSIS_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIS_BITS          (RCC_ICSCR1_MSISSEL_MSIRC1 |    \
                                             RCC_ICSCR1_MSISDIV_FIELD(0U))
  #else
    #define STM32_ICSCR1_MSIS_BITS          0U
  #endif
#elif (STM32_CFG_MSIS_SRCDIV == RCC_ICSCR1_MSIS_IRC1_DIV1) && \
      (STM32_CFG_MSIPLL1N_VALUE == 3) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE_FAST))
  #if (STM32_MSIS_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIS_BITS          (RCC_ICSCR1_MSISSEL_MSIRC1 |    \
                                             RCC_ICSCR1_MSISDIV_FIELD(0U))
  #else
    #define STM32_ICSCR1_MSIS_BITS          0U
  #endif
#elif (STM32_CFG_MSIS_SRCDIV == RCC_ICSCR1_MSIS_IRC1_DIV1)
  #if (STM32_MSIS_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIS_BITS          (RCC_ICSCR1_MSISSEL_MSIRC1 |    \
                                             RCC_ICSCR1_MSISDIV_FIELD(0U))
  #else
    #define STM32_ICSCR1_MSIS_BITS          0U
  #endif
#elif (STM32_CFG_MSIS_SRCDIV == RCC_ICSCR1_MSIS_IRC1_DIV2) && \
      ((STM32_CFG_MSIPLL1N_VALUE == 0) || (STM32_CFG_MSIPLL1N_VALUE == 1)) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE_FAST))
  #if (STM32_MSIS_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIS_BITS          (RCC_ICSCR1_MSISSEL_MSIRC1 |    \
                                             RCC_ICSCR1_MSISDIV_FIELD(1U))
  #else
    #define STM32_ICSCR1_MSIS_BITS          0U
  #endif
#elif (STM32_CFG_MSIS_SRCDIV == RCC_ICSCR1_MSIS_IRC1_DIV2) && \
      ((STM32_CFG_MSIPLL1N_VALUE == 0) || (STM32_CFG_MSIPLL1N_VALUE == 1)) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE_FAST))
  #if (STM32_MSIS_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIS_BITS          (RCC_ICSCR1_MSISSEL_MSIRC1 |    \
                                             RCC_ICSCR1_MSISDIV_FIELD(1U))
  #else
    #define STM32_ICSCR1_MSIS_BITS          0U
  #endif
#elif (STM32_CFG_MSIS_SRCDIV == RCC_ICSCR1_MSIS_IRC1_DIV2) && \
      (STM32_CFG_MSIPLL1N_VALUE == 2) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE_FAST))
  #if (STM32_MSIS_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIS_BITS          (RCC_ICSCR1_MSISSEL_MSIRC1 |    \
                                             RCC_ICSCR1_MSISDIV_FIELD(1U))
  #else
    #define STM32_ICSCR1_MSIS_BITS          0U
  #endif
#elif (STM32_CFG_MSIS_SRCDIV == RCC_ICSCR1_MSIS_IRC1_DIV2) && \
      (STM32_CFG_MSIPLL1N_VALUE == 2) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE_FAST))
  #if (STM32_MSIS_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIS_BITS          (RCC_ICSCR1_MSISSEL_MSIRC1 |    \
                                             RCC_ICSCR1_MSISDIV_FIELD(1U))
  #else
    #define STM32_ICSCR1_MSIS_BITS          0U
  #endif
#elif (STM32_CFG_MSIS_SRCDIV == RCC_ICSCR1_MSIS_IRC1_DIV2) && \
      (STM32_CFG_MSIPLL1N_VALUE == 3) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE_FAST))
  #if (STM32_MSIS_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIS_BITS          (RCC_ICSCR1_MSISSEL_MSIRC1 |    \
                                             RCC_ICSCR1_MSISDIV_FIELD(1U))
  #else
    #define STM32_ICSCR1_MSIS_BITS          0U
  #endif
#elif (STM32_CFG_MSIS_SRCDIV == RCC_ICSCR1_MSIS_IRC1_DIV2) && \
      (STM32_CFG_MSIPLL1N_VALUE == 3) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE_FAST))
  #if (STM32_MSIS_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIS_BITS          (RCC_ICSCR1_MSISSEL_MSIRC1 |    \
                                             RCC_ICSCR1_MSISDIV_FIELD(1U))
  #else
    #define STM32_ICSCR1_MSIS_BITS          0U
  #endif
#elif (STM32_CFG_MSIS_SRCDIV == RCC_ICSCR1_MSIS_IRC1_DIV2)
  #if (STM32_MSIS_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIS_BITS          (RCC_ICSCR1_MSISSEL_MSIRC1 |    \
                                             RCC_ICSCR1_MSISDIV_FIELD(1U))
  #else
    #define STM32_ICSCR1_MSIS_BITS          0U
  #endif
#elif (STM32_CFG_MSIS_SRCDIV == RCC_ICSCR1_MSIS_IRC1_DIV4) && \
      ((STM32_CFG_MSIPLL1N_VALUE == 0) || (STM32_CFG_MSIPLL1N_VALUE == 1)) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE_FAST))
  #if (STM32_MSIS_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIS_BITS          (RCC_ICSCR1_MSISSEL_MSIRC1 |    \
                                             RCC_ICSCR1_MSISDIV_FIELD(2U))
  #else
    #define STM32_ICSCR1_MSIS_BITS          0U
  #endif
#elif (STM32_CFG_MSIS_SRCDIV == RCC_ICSCR1_MSIS_IRC1_DIV4) && \
      ((STM32_CFG_MSIPLL1N_VALUE == 0) || (STM32_CFG_MSIPLL1N_VALUE == 1)) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE_FAST))
  #if (STM32_MSIS_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIS_BITS          (RCC_ICSCR1_MSISSEL_MSIRC1 |    \
                                             RCC_ICSCR1_MSISDIV_FIELD(2U))
  #else
    #define STM32_ICSCR1_MSIS_BITS          0U
  #endif
#elif (STM32_CFG_MSIS_SRCDIV == RCC_ICSCR1_MSIS_IRC1_DIV4) && \
      (STM32_CFG_MSIPLL1N_VALUE == 2) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE_FAST))
  #if (STM32_MSIS_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIS_BITS          (RCC_ICSCR1_MSISSEL_MSIRC1 |    \
                                             RCC_ICSCR1_MSISDIV_FIELD(2U))
  #else
    #define STM32_ICSCR1_MSIS_BITS          0U
  #endif
#elif (STM32_CFG_MSIS_SRCDIV == RCC_ICSCR1_MSIS_IRC1_DIV4) && \
      (STM32_CFG_MSIPLL1N_VALUE == 2) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE_FAST))
  #if (STM32_MSIS_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIS_BITS          (RCC_ICSCR1_MSISSEL_MSIRC1 |    \
                                             RCC_ICSCR1_MSISDIV_FIELD(2U))
  #else
    #define STM32_ICSCR1_MSIS_BITS          0U
  #endif
#elif (STM32_CFG_MSIS_SRCDIV == RCC_ICSCR1_MSIS_IRC1_DIV4) && \
      (STM32_CFG_MSIPLL1N_VALUE == 3) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE_FAST))
  #if (STM32_MSIS_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIS_BITS          (RCC_ICSCR1_MSISSEL_MSIRC1 |    \
                                             RCC_ICSCR1_MSISDIV_FIELD(2U))
  #else
    #define STM32_ICSCR1_MSIS_BITS          0U
  #endif
#elif (STM32_CFG_MSIS_SRCDIV == RCC_ICSCR1_MSIS_IRC1_DIV4) && \
      (STM32_CFG_MSIPLL1N_VALUE == 3) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE_FAST))
  #if (STM32_MSIS_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIS_BITS          (RCC_ICSCR1_MSISSEL_MSIRC1 |    \
                                             RCC_ICSCR1_MSISDIV_FIELD(2U))
  #else
    #define STM32_ICSCR1_MSIS_BITS          0U
  #endif
#elif (STM32_CFG_MSIS_SRCDIV == RCC_ICSCR1_MSIS_IRC1_DIV4)
  #if (STM32_MSIS_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIS_BITS          (RCC_ICSCR1_MSISSEL_MSIRC1 |    \
                                             RCC_ICSCR1_MSISDIV_FIELD(2U))
  #else
    #define STM32_ICSCR1_MSIS_BITS          0U
  #endif
#elif (STM32_CFG_MSIS_SRCDIV == RCC_ICSCR1_MSIS_IRC1_DIV8) && \
      ((STM32_CFG_MSIPLL1N_VALUE == 0) || (STM32_CFG_MSIPLL1N_VALUE == 1)) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE_FAST))
  #if (STM32_MSIS_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIS_BITS          (RCC_ICSCR1_MSISSEL_MSIRC1 |    \
                                             RCC_ICSCR1_MSISDIV_FIELD(3U))
  #else
    #define STM32_ICSCR1_MSIS_BITS          0U
  #endif
#elif (STM32_CFG_MSIS_SRCDIV == RCC_ICSCR1_MSIS_IRC1_DIV8) && \
      ((STM32_CFG_MSIPLL1N_VALUE == 0) || (STM32_CFG_MSIPLL1N_VALUE == 1)) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE_FAST))
  #if (STM32_MSIS_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIS_BITS          (RCC_ICSCR1_MSISSEL_MSIRC1 |    \
                                             RCC_ICSCR1_MSISDIV_FIELD(3U))
  #else
    #define STM32_ICSCR1_MSIS_BITS          0U
  #endif
#elif (STM32_CFG_MSIS_SRCDIV == RCC_ICSCR1_MSIS_IRC1_DIV8) && \
      (STM32_CFG_MSIPLL1N_VALUE == 2) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE_FAST))
  #if (STM32_MSIS_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIS_BITS          (RCC_ICSCR1_MSISSEL_MSIRC1 |    \
                                             RCC_ICSCR1_MSISDIV_FIELD(3U))
  #else
    #define STM32_ICSCR1_MSIS_BITS          0U
  #endif
#elif (STM32_CFG_MSIS_SRCDIV == RCC_ICSCR1_MSIS_IRC1_DIV8) && \
      (STM32_CFG_MSIPLL1N_VALUE == 2) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE_FAST))
  #if (STM32_MSIS_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIS_BITS          (RCC_ICSCR1_MSISSEL_MSIRC1 |    \
                                             RCC_ICSCR1_MSISDIV_FIELD(3U))
  #else
    #define STM32_ICSCR1_MSIS_BITS          0U
  #endif
#elif (STM32_CFG_MSIS_SRCDIV == RCC_ICSCR1_MSIS_IRC1_DIV8) && \
      (STM32_CFG_MSIPLL1N_VALUE == 3) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE_FAST))
  #if (STM32_MSIS_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIS_BITS          (RCC_ICSCR1_MSISSEL_MSIRC1 |    \
                                             RCC_ICSCR1_MSISDIV_FIELD(3U))
  #else
    #define STM32_ICSCR1_MSIS_BITS          0U
  #endif
#elif (STM32_CFG_MSIS_SRCDIV == RCC_ICSCR1_MSIS_IRC1_DIV8) && \
      (STM32_CFG_MSIPLL1N_VALUE == 3) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE_FAST))
  #if (STM32_MSIS_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIS_BITS          (RCC_ICSCR1_MSISSEL_MSIRC1 |    \
                                             RCC_ICSCR1_MSISDIV_FIELD(3U))
  #else
    #define STM32_ICSCR1_MSIS_BITS          0U
  #endif
#else
  #if (STM32_MSIS_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIS_BITS          (RCC_ICSCR1_MSISSEL_MSIRC1 |    \
                                             RCC_ICSCR1_MSISDIV_FIELD(3U))
  #else
    #define STM32_ICSCR1_MSIS_BITS          0U
  #endif
#endif

/**
 * @brief   MSI system oscillator clock point.
 */
#if (STM32_MSIS_ENABLED == FALSE) && !defined(__DOXYGEN__)
  #define STM32_MSIS_FREQ                   0U
#elif ((STM32_CFG_MSIS_SRCDIV == RCC_ICSCR1_MSIS_IRC0_DIV1) && \
      ((STM32_CFG_MSIRC0_MODE == RCC_MSIRC0_PLL_LSE) || (STM32_CFG_MSIRC0_MODE == RCC_MSIRC0_PLL_LSE_FAST))) || \
    defined(__DOXYGEN__)
  #define STM32_MSIS_FREQ                   96010000U
#elif (STM32_CFG_MSIS_SRCDIV == RCC_ICSCR1_MSIS_IRC0_DIV1)
  #define STM32_MSIS_FREQ                   96000000U
#elif (STM32_CFG_MSIS_SRCDIV == RCC_ICSCR1_MSIS_IRC0_DIV2) && \
      ((STM32_CFG_MSIRC0_MODE == RCC_MSIRC0_PLL_LSE) || (STM32_CFG_MSIRC0_MODE == RCC_MSIRC0_PLL_LSE_FAST))
  #define STM32_MSIS_FREQ                   48005000U
#elif (STM32_CFG_MSIS_SRCDIV == RCC_ICSCR1_MSIS_IRC0_DIV2)
  #define STM32_MSIS_FREQ                   48000000U
#elif (STM32_CFG_MSIS_SRCDIV == RCC_ICSCR1_MSIS_IRC0_DIV4) && \
      ((STM32_CFG_MSIRC0_MODE == RCC_MSIRC0_PLL_LSE) || (STM32_CFG_MSIRC0_MODE == RCC_MSIRC0_PLL_LSE_FAST))
  #define STM32_MSIS_FREQ                   24002500U
#elif (STM32_CFG_MSIS_SRCDIV == RCC_ICSCR1_MSIS_IRC0_DIV4)
  #define STM32_MSIS_FREQ                   24000000U
#elif (STM32_CFG_MSIS_SRCDIV == RCC_ICSCR1_MSIS_IRC0_DIV8) && \
      ((STM32_CFG_MSIRC0_MODE == RCC_MSIRC0_PLL_LSE) || (STM32_CFG_MSIRC0_MODE == RCC_MSIRC0_PLL_LSE_FAST))
  #define STM32_MSIS_FREQ                   12001250U
#elif (STM32_CFG_MSIS_SRCDIV == RCC_ICSCR1_MSIS_IRC0_DIV8)
  #define STM32_MSIS_FREQ                   12000000U
#elif (STM32_CFG_MSIS_SRCDIV == RCC_ICSCR1_MSIS_IRC1_DIV1) && \
      ((STM32_CFG_MSIPLL1N_VALUE == 0) || (STM32_CFG_MSIPLL1N_VALUE == 1)) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE_FAST))
  #define STM32_MSIS_FREQ                   23986000U
#elif (STM32_CFG_MSIS_SRCDIV == RCC_ICSCR1_MSIS_IRC1_DIV1) && \
      ((STM32_CFG_MSIPLL1N_VALUE == 0) || (STM32_CFG_MSIPLL1N_VALUE == 1)) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE_FAST))
  #define STM32_MSIS_FREQ                   24016000U
#elif (STM32_CFG_MSIS_SRCDIV == RCC_ICSCR1_MSIS_IRC1_DIV1) && \
      (STM32_CFG_MSIPLL1N_VALUE == 2) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE_FAST))
  #define STM32_MSIS_FREQ                   22577000U
#elif (STM32_CFG_MSIS_SRCDIV == RCC_ICSCR1_MSIS_IRC1_DIV1) && \
      (STM32_CFG_MSIPLL1N_VALUE == 2) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE_FAST))
  #define STM32_MSIS_FREQ                   22581000U
#elif (STM32_CFG_MSIS_SRCDIV == RCC_ICSCR1_MSIS_IRC1_DIV1) && \
      (STM32_CFG_MSIPLL1N_VALUE == 3) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE_FAST))
  #define STM32_MSIS_FREQ                   24576000U
#elif (STM32_CFG_MSIS_SRCDIV == RCC_ICSCR1_MSIS_IRC1_DIV1) && \
      (STM32_CFG_MSIPLL1N_VALUE == 3) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE_FAST))
  #define STM32_MSIS_FREQ                   24577000U
#elif (STM32_CFG_MSIS_SRCDIV == RCC_ICSCR1_MSIS_IRC1_DIV1)
  #define STM32_MSIS_FREQ                   24000000U
#elif (STM32_CFG_MSIS_SRCDIV == RCC_ICSCR1_MSIS_IRC1_DIV2) && \
      ((STM32_CFG_MSIPLL1N_VALUE == 0) || (STM32_CFG_MSIPLL1N_VALUE == 1)) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE_FAST))
  #define STM32_MSIS_FREQ                   11993000U
#elif (STM32_CFG_MSIS_SRCDIV == RCC_ICSCR1_MSIS_IRC1_DIV2) && \
      ((STM32_CFG_MSIPLL1N_VALUE == 0) || (STM32_CFG_MSIPLL1N_VALUE == 1)) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE_FAST))
  #define STM32_MSIS_FREQ                   12008000U
#elif (STM32_CFG_MSIS_SRCDIV == RCC_ICSCR1_MSIS_IRC1_DIV2) && \
      (STM32_CFG_MSIPLL1N_VALUE == 2) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE_FAST))
  #define STM32_MSIS_FREQ                   11288500U
#elif (STM32_CFG_MSIS_SRCDIV == RCC_ICSCR1_MSIS_IRC1_DIV2) && \
      (STM32_CFG_MSIPLL1N_VALUE == 2) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE_FAST))
  #define STM32_MSIS_FREQ                   11290500U
#elif (STM32_CFG_MSIS_SRCDIV == RCC_ICSCR1_MSIS_IRC1_DIV2) && \
      (STM32_CFG_MSIPLL1N_VALUE == 3) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE_FAST))
  #define STM32_MSIS_FREQ                   12288000U
#elif (STM32_CFG_MSIS_SRCDIV == RCC_ICSCR1_MSIS_IRC1_DIV2) && \
      (STM32_CFG_MSIPLL1N_VALUE == 3) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE_FAST))
  #define STM32_MSIS_FREQ                   12288500U
#elif (STM32_CFG_MSIS_SRCDIV == RCC_ICSCR1_MSIS_IRC1_DIV2)
  #define STM32_MSIS_FREQ                   12000000U
#elif (STM32_CFG_MSIS_SRCDIV == RCC_ICSCR1_MSIS_IRC1_DIV4) && \
      ((STM32_CFG_MSIPLL1N_VALUE == 0) || (STM32_CFG_MSIPLL1N_VALUE == 1)) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE_FAST))
  #define STM32_MSIS_FREQ                   5996500U
#elif (STM32_CFG_MSIS_SRCDIV == RCC_ICSCR1_MSIS_IRC1_DIV4) && \
      ((STM32_CFG_MSIPLL1N_VALUE == 0) || (STM32_CFG_MSIPLL1N_VALUE == 1)) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE_FAST))
  #define STM32_MSIS_FREQ                   6004000U
#elif (STM32_CFG_MSIS_SRCDIV == RCC_ICSCR1_MSIS_IRC1_DIV4) && \
      (STM32_CFG_MSIPLL1N_VALUE == 2) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE_FAST))
  #define STM32_MSIS_FREQ                   5644250U
#elif (STM32_CFG_MSIS_SRCDIV == RCC_ICSCR1_MSIS_IRC1_DIV4) && \
      (STM32_CFG_MSIPLL1N_VALUE == 2) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE_FAST))
  #define STM32_MSIS_FREQ                   5645250U
#elif (STM32_CFG_MSIS_SRCDIV == RCC_ICSCR1_MSIS_IRC1_DIV4) && \
      (STM32_CFG_MSIPLL1N_VALUE == 3) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE_FAST))
  #define STM32_MSIS_FREQ                   6144000U
#elif (STM32_CFG_MSIS_SRCDIV == RCC_ICSCR1_MSIS_IRC1_DIV4) && \
      (STM32_CFG_MSIPLL1N_VALUE == 3) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE_FAST))
  #define STM32_MSIS_FREQ                   6144250U
#elif (STM32_CFG_MSIS_SRCDIV == RCC_ICSCR1_MSIS_IRC1_DIV4)
  #define STM32_MSIS_FREQ                   6000000U
#elif (STM32_CFG_MSIS_SRCDIV == RCC_ICSCR1_MSIS_IRC1_DIV8) && \
      ((STM32_CFG_MSIPLL1N_VALUE == 0) || (STM32_CFG_MSIPLL1N_VALUE == 1)) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE_FAST))
  #define STM32_MSIS_FREQ                   2998250U
#elif (STM32_CFG_MSIS_SRCDIV == RCC_ICSCR1_MSIS_IRC1_DIV8) && \
      ((STM32_CFG_MSIPLL1N_VALUE == 0) || (STM32_CFG_MSIPLL1N_VALUE == 1)) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE_FAST))
  #define STM32_MSIS_FREQ                   3002000U
#elif (STM32_CFG_MSIS_SRCDIV == RCC_ICSCR1_MSIS_IRC1_DIV8) && \
      (STM32_CFG_MSIPLL1N_VALUE == 2) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE_FAST))
  #define STM32_MSIS_FREQ                   2822125U
#elif (STM32_CFG_MSIS_SRCDIV == RCC_ICSCR1_MSIS_IRC1_DIV8) && \
      (STM32_CFG_MSIPLL1N_VALUE == 2) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE_FAST))
  #define STM32_MSIS_FREQ                   2822625U
#elif (STM32_CFG_MSIS_SRCDIV == RCC_ICSCR1_MSIS_IRC1_DIV8) && \
      (STM32_CFG_MSIPLL1N_VALUE == 3) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE_FAST))
  #define STM32_MSIS_FREQ                   3072000U
#elif (STM32_CFG_MSIS_SRCDIV == RCC_ICSCR1_MSIS_IRC1_DIV8) && \
      (STM32_CFG_MSIPLL1N_VALUE == 3) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE_FAST))
  #define STM32_MSIS_FREQ                   3072125U
#else
  #define STM32_MSIS_FREQ                   3000000U
#endif

/*--- Macros and checks for the MSIK clock point. --------------------------*/

/**
 * @brief   MSIK clock register bits.
 */
#if (STM32_MSIK_ENABLED == TRUE) || defined(__DOXYGEN__)
  #define STM32_CR_MSIK_BITS                (RCC_CR_MSIKON | RCC_CR_MSIKERON)
#else
  #define STM32_CR_MSIK_BITS                0U
#endif

#if ((STM32_CFG_MSIK_SRCDIV == RCC_ICSCR1_MSIK_IRC0_DIV1) && \
     ((STM32_CFG_MSIRC0_MODE == RCC_MSIRC0_PLL_LSE) || (STM32_CFG_MSIRC0_MODE == RCC_MSIRC0_PLL_LSE_FAST))) || \
    defined(__DOXYGEN__)
  #if (STM32_MSIK_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIK_BITS          (RCC_ICSCR1_MSIKSEL_MSIRC0 |    \
                                             RCC_ICSCR1_MSIKDIV_FIELD(0U))
  #else
    #define STM32_ICSCR1_MSIK_BITS          0U
  #endif
#elif (STM32_CFG_MSIK_SRCDIV == RCC_ICSCR1_MSIK_IRC0_DIV1)
  #if (STM32_MSIK_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIK_BITS          (RCC_ICSCR1_MSIKSEL_MSIRC0 |    \
                                             RCC_ICSCR1_MSIKDIV_FIELD(0U))
  #else
    #define STM32_ICSCR1_MSIK_BITS          0U
  #endif
#elif (STM32_CFG_MSIK_SRCDIV == RCC_ICSCR1_MSIK_IRC0_DIV2) && \
      ((STM32_CFG_MSIRC0_MODE == RCC_MSIRC0_PLL_LSE) || (STM32_CFG_MSIRC0_MODE == RCC_MSIRC0_PLL_LSE_FAST))
  #if (STM32_MSIK_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIK_BITS          (RCC_ICSCR1_MSIKSEL_MSIRC0 |    \
                                             RCC_ICSCR1_MSIKDIV_FIELD(1U))
  #else
    #define STM32_ICSCR1_MSIK_BITS          0U
  #endif
#elif (STM32_CFG_MSIK_SRCDIV == RCC_ICSCR1_MSIK_IRC0_DIV2)
  #if (STM32_MSIK_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIK_BITS          (RCC_ICSCR1_MSIKSEL_MSIRC0 |    \
                                             RCC_ICSCR1_MSIKDIV_FIELD(1U))
  #else
    #define STM32_ICSCR1_MSIK_BITS          0U
  #endif
#elif (STM32_CFG_MSIK_SRCDIV == RCC_ICSCR1_MSIK_IRC0_DIV4) && \
      ((STM32_CFG_MSIRC0_MODE == RCC_MSIRC0_PLL_LSE) || (STM32_CFG_MSIRC0_MODE == RCC_MSIRC0_PLL_LSE_FAST))
  #if (STM32_MSIK_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIK_BITS          (RCC_ICSCR1_MSIKSEL_MSIRC0 |    \
                                             RCC_ICSCR1_MSIKDIV_FIELD(2U))
  #else
    #define STM32_ICSCR1_MSIK_BITS          0U
  #endif
#elif (STM32_CFG_MSIK_SRCDIV == RCC_ICSCR1_MSIK_IRC0_DIV4)
  #if (STM32_MSIK_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIK_BITS          (RCC_ICSCR1_MSIKSEL_MSIRC0 |    \
                                             RCC_ICSCR1_MSIKDIV_FIELD(2U))
  #else
    #define STM32_ICSCR1_MSIK_BITS          0U
  #endif
#elif (STM32_CFG_MSIK_SRCDIV == RCC_ICSCR1_MSIK_IRC0_DIV8) && \
      ((STM32_CFG_MSIRC0_MODE == RCC_MSIRC0_PLL_LSE) || (STM32_CFG_MSIRC0_MODE == RCC_MSIRC0_PLL_LSE_FAST))
  #if (STM32_MSIK_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIK_BITS          (RCC_ICSCR1_MSIKSEL_MSIRC0 |    \
                                             RCC_ICSCR1_MSIKDIV_FIELD(3U))
  #else
    #define STM32_ICSCR1_MSIK_BITS          0U
  #endif
#elif (STM32_CFG_MSIK_SRCDIV == RCC_ICSCR1_MSIK_IRC0_DIV8)
  #if (STM32_MSIK_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIK_BITS          (RCC_ICSCR1_MSIKSEL_MSIRC0 |    \
                                             RCC_ICSCR1_MSIKDIV_FIELD(3U))
  #else
    #define STM32_ICSCR1_MSIK_BITS          0U
  #endif
#elif (STM32_CFG_MSIK_SRCDIV == RCC_ICSCR1_MSIK_IRC1_DIV1) && \
      ((STM32_CFG_MSIPLL1N_VALUE == 0) || (STM32_CFG_MSIPLL1N_VALUE == 1)) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE_FAST))
  #if (STM32_MSIK_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIK_BITS          (RCC_ICSCR1_MSIKSEL_MSIRC1 |    \
                                             RCC_ICSCR1_MSIKDIV_FIELD(0U))
  #else
    #define STM32_ICSCR1_MSIK_BITS          0U
  #endif
#elif (STM32_CFG_MSIK_SRCDIV == RCC_ICSCR1_MSIK_IRC1_DIV1) && \
      ((STM32_CFG_MSIPLL1N_VALUE == 0) || (STM32_CFG_MSIPLL1N_VALUE == 1)) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE_FAST))
  #if (STM32_MSIK_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIK_BITS          (RCC_ICSCR1_MSIKSEL_MSIRC1 |    \
                                             RCC_ICSCR1_MSIKDIV_FIELD(0U))
  #else
    #define STM32_ICSCR1_MSIK_BITS          0U
  #endif
#elif (STM32_CFG_MSIK_SRCDIV == RCC_ICSCR1_MSIK_IRC1_DIV1) && \
      (STM32_CFG_MSIPLL1N_VALUE == 2) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE_FAST))
  #if (STM32_MSIK_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIK_BITS          (RCC_ICSCR1_MSIKSEL_MSIRC1 |    \
                                             RCC_ICSCR1_MSIKDIV_FIELD(0U))
  #else
    #define STM32_ICSCR1_MSIK_BITS          0U
  #endif
#elif (STM32_CFG_MSIK_SRCDIV == RCC_ICSCR1_MSIK_IRC1_DIV1) && \
      (STM32_CFG_MSIPLL1N_VALUE == 2) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE_FAST))
  #if (STM32_MSIK_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIK_BITS          (RCC_ICSCR1_MSIKSEL_MSIRC1 |    \
                                             RCC_ICSCR1_MSIKDIV_FIELD(0U))
  #else
    #define STM32_ICSCR1_MSIK_BITS          0U
  #endif
#elif (STM32_CFG_MSIK_SRCDIV == RCC_ICSCR1_MSIK_IRC1_DIV1) && \
      (STM32_CFG_MSIPLL1N_VALUE == 3) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE_FAST))
  #if (STM32_MSIK_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIK_BITS          (RCC_ICSCR1_MSIKSEL_MSIRC1 |    \
                                             RCC_ICSCR1_MSIKDIV_FIELD(0U))
  #else
    #define STM32_ICSCR1_MSIK_BITS          0U
  #endif
#elif (STM32_CFG_MSIK_SRCDIV == RCC_ICSCR1_MSIK_IRC1_DIV1) && \
      (STM32_CFG_MSIPLL1N_VALUE == 3) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE_FAST))
  #if (STM32_MSIK_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIK_BITS          (RCC_ICSCR1_MSIKSEL_MSIRC1 |    \
                                             RCC_ICSCR1_MSIKDIV_FIELD(0U))
  #else
    #define STM32_ICSCR1_MSIK_BITS          0U
  #endif
#elif (STM32_CFG_MSIK_SRCDIV == RCC_ICSCR1_MSIK_IRC1_DIV1)
  #if (STM32_MSIK_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIK_BITS          (RCC_ICSCR1_MSIKSEL_MSIRC1 |    \
                                             RCC_ICSCR1_MSIKDIV_FIELD(0U))
  #else
    #define STM32_ICSCR1_MSIK_BITS          0U
  #endif
#elif (STM32_CFG_MSIK_SRCDIV == RCC_ICSCR1_MSIK_IRC1_DIV2) && \
      ((STM32_CFG_MSIPLL1N_VALUE == 0) || (STM32_CFG_MSIPLL1N_VALUE == 1)) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE_FAST))
  #if (STM32_MSIK_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIK_BITS          (RCC_ICSCR1_MSIKSEL_MSIRC1 |    \
                                             RCC_ICSCR1_MSIKDIV_FIELD(1U))
  #else
    #define STM32_ICSCR1_MSIK_BITS          0U
  #endif
#elif (STM32_CFG_MSIK_SRCDIV == RCC_ICSCR1_MSIK_IRC1_DIV2) && \
      ((STM32_CFG_MSIPLL1N_VALUE == 0) || (STM32_CFG_MSIPLL1N_VALUE == 1)) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE_FAST))
  #if (STM32_MSIK_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIK_BITS          (RCC_ICSCR1_MSIKSEL_MSIRC1 |    \
                                             RCC_ICSCR1_MSIKDIV_FIELD(1U))
  #else
    #define STM32_ICSCR1_MSIK_BITS          0U
  #endif
#elif (STM32_CFG_MSIK_SRCDIV == RCC_ICSCR1_MSIK_IRC1_DIV2) && \
      (STM32_CFG_MSIPLL1N_VALUE == 2) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE_FAST))
  #if (STM32_MSIK_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIK_BITS          (RCC_ICSCR1_MSIKSEL_MSIRC1 |    \
                                             RCC_ICSCR1_MSIKDIV_FIELD(1U))
  #else
    #define STM32_ICSCR1_MSIK_BITS          0U
  #endif
#elif (STM32_CFG_MSIK_SRCDIV == RCC_ICSCR1_MSIK_IRC1_DIV2) && \
      (STM32_CFG_MSIPLL1N_VALUE == 2) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE_FAST))
  #if (STM32_MSIK_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIK_BITS          (RCC_ICSCR1_MSIKSEL_MSIRC1 |    \
                                             RCC_ICSCR1_MSIKDIV_FIELD(1U))
  #else
    #define STM32_ICSCR1_MSIK_BITS          0U
  #endif
#elif (STM32_CFG_MSIK_SRCDIV == RCC_ICSCR1_MSIK_IRC1_DIV2) && \
      (STM32_CFG_MSIPLL1N_VALUE == 3) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE_FAST))
  #if (STM32_MSIK_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIK_BITS          (RCC_ICSCR1_MSIKSEL_MSIRC1 |    \
                                             RCC_ICSCR1_MSIKDIV_FIELD(1U))
  #else
    #define STM32_ICSCR1_MSIK_BITS          0U
  #endif
#elif (STM32_CFG_MSIK_SRCDIV == RCC_ICSCR1_MSIK_IRC1_DIV2) && \
      (STM32_CFG_MSIPLL1N_VALUE == 3) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE_FAST))
  #if (STM32_MSIK_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIK_BITS          (RCC_ICSCR1_MSIKSEL_MSIRC1 |    \
                                             RCC_ICSCR1_MSIKDIV_FIELD(1U))
  #else
    #define STM32_ICSCR1_MSIK_BITS          0U
  #endif
#elif (STM32_CFG_MSIK_SRCDIV == RCC_ICSCR1_MSIK_IRC1_DIV2)
  #if (STM32_MSIK_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIK_BITS          (RCC_ICSCR1_MSIKSEL_MSIRC1 |    \
                                             RCC_ICSCR1_MSIKDIV_FIELD(1U))
  #else
    #define STM32_ICSCR1_MSIK_BITS          0U
  #endif
#elif (STM32_CFG_MSIK_SRCDIV == RCC_ICSCR1_MSIK_IRC1_DIV4) && \
      ((STM32_CFG_MSIPLL1N_VALUE == 0) || (STM32_CFG_MSIPLL1N_VALUE == 1)) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE_FAST))
  #if (STM32_MSIK_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIK_BITS          (RCC_ICSCR1_MSIKSEL_MSIRC1 |    \
                                             RCC_ICSCR1_MSIKDIV_FIELD(2U))
  #else
    #define STM32_ICSCR1_MSIK_BITS          0U
  #endif
#elif (STM32_CFG_MSIK_SRCDIV == RCC_ICSCR1_MSIK_IRC1_DIV4) && \
      ((STM32_CFG_MSIPLL1N_VALUE == 0) || (STM32_CFG_MSIPLL1N_VALUE == 1)) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE_FAST))
  #if (STM32_MSIK_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIK_BITS          (RCC_ICSCR1_MSIKSEL_MSIRC1 |    \
                                             RCC_ICSCR1_MSIKDIV_FIELD(2U))
  #else
    #define STM32_ICSCR1_MSIK_BITS          0U
  #endif
#elif (STM32_CFG_MSIK_SRCDIV == RCC_ICSCR1_MSIK_IRC1_DIV4) && \
      (STM32_CFG_MSIPLL1N_VALUE == 2) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE_FAST))
  #if (STM32_MSIK_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIK_BITS          (RCC_ICSCR1_MSIKSEL_MSIRC1 |    \
                                             RCC_ICSCR1_MSIKDIV_FIELD(2U))
  #else
    #define STM32_ICSCR1_MSIK_BITS          0U
  #endif
#elif (STM32_CFG_MSIK_SRCDIV == RCC_ICSCR1_MSIK_IRC1_DIV4) && \
      (STM32_CFG_MSIPLL1N_VALUE == 2) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE_FAST))
  #if (STM32_MSIK_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIK_BITS          (RCC_ICSCR1_MSIKSEL_MSIRC1 |    \
                                             RCC_ICSCR1_MSIKDIV_FIELD(2U))
  #else
    #define STM32_ICSCR1_MSIK_BITS          0U
  #endif
#elif (STM32_CFG_MSIK_SRCDIV == RCC_ICSCR1_MSIK_IRC1_DIV4) && \
      (STM32_CFG_MSIPLL1N_VALUE == 3) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE_FAST))
  #if (STM32_MSIK_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIK_BITS          (RCC_ICSCR1_MSIKSEL_MSIRC1 |    \
                                             RCC_ICSCR1_MSIKDIV_FIELD(2U))
  #else
    #define STM32_ICSCR1_MSIK_BITS          0U
  #endif
#elif (STM32_CFG_MSIK_SRCDIV == RCC_ICSCR1_MSIK_IRC1_DIV4) && \
      (STM32_CFG_MSIPLL1N_VALUE == 3) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE_FAST))
  #if (STM32_MSIK_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIK_BITS          (RCC_ICSCR1_MSIKSEL_MSIRC1 |    \
                                             RCC_ICSCR1_MSIKDIV_FIELD(2U))
  #else
    #define STM32_ICSCR1_MSIK_BITS          0U
  #endif
#elif (STM32_CFG_MSIK_SRCDIV == RCC_ICSCR1_MSIK_IRC1_DIV4)
  #if (STM32_MSIK_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIK_BITS          (RCC_ICSCR1_MSIKSEL_MSIRC1 |    \
                                             RCC_ICSCR1_MSIKDIV_FIELD(2U))
  #else
    #define STM32_ICSCR1_MSIK_BITS          0U
  #endif
#elif (STM32_CFG_MSIK_SRCDIV == RCC_ICSCR1_MSIK_IRC1_DIV8) && \
      ((STM32_CFG_MSIPLL1N_VALUE == 0) || (STM32_CFG_MSIPLL1N_VALUE == 1)) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE_FAST))
  #if (STM32_MSIK_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIK_BITS          (RCC_ICSCR1_MSIKSEL_MSIRC1 |    \
                                             RCC_ICSCR1_MSIKDIV_FIELD(3U))
  #else
    #define STM32_ICSCR1_MSIK_BITS          0U
  #endif
#elif (STM32_CFG_MSIK_SRCDIV == RCC_ICSCR1_MSIK_IRC1_DIV8) && \
      ((STM32_CFG_MSIPLL1N_VALUE == 0) || (STM32_CFG_MSIPLL1N_VALUE == 1)) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE_FAST))
  #if (STM32_MSIK_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIK_BITS          (RCC_ICSCR1_MSIKSEL_MSIRC1 |    \
                                             RCC_ICSCR1_MSIKDIV_FIELD(3U))
  #else
    #define STM32_ICSCR1_MSIK_BITS          0U
  #endif
#elif (STM32_CFG_MSIK_SRCDIV == RCC_ICSCR1_MSIK_IRC1_DIV8) && \
      (STM32_CFG_MSIPLL1N_VALUE == 2) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE_FAST))
  #if (STM32_MSIK_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIK_BITS          (RCC_ICSCR1_MSIKSEL_MSIRC1 |    \
                                             RCC_ICSCR1_MSIKDIV_FIELD(3U))
  #else
    #define STM32_ICSCR1_MSIK_BITS          0U
  #endif
#elif (STM32_CFG_MSIK_SRCDIV == RCC_ICSCR1_MSIK_IRC1_DIV8) && \
      (STM32_CFG_MSIPLL1N_VALUE == 2) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE_FAST))
  #if (STM32_MSIK_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIK_BITS          (RCC_ICSCR1_MSIKSEL_MSIRC1 |    \
                                             RCC_ICSCR1_MSIKDIV_FIELD(3U))
  #else
    #define STM32_ICSCR1_MSIK_BITS          0U
  #endif
#elif (STM32_CFG_MSIK_SRCDIV == RCC_ICSCR1_MSIK_IRC1_DIV8) && \
      (STM32_CFG_MSIPLL1N_VALUE == 3) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE_FAST))
  #if (STM32_MSIK_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIK_BITS          (RCC_ICSCR1_MSIKSEL_MSIRC1 |    \
                                             RCC_ICSCR1_MSIKDIV_FIELD(3U))
  #else
    #define STM32_ICSCR1_MSIK_BITS          0U
  #endif
#elif (STM32_CFG_MSIK_SRCDIV == RCC_ICSCR1_MSIK_IRC1_DIV8) && \
      (STM32_CFG_MSIPLL1N_VALUE == 3) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE_FAST))
  #if (STM32_MSIK_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIK_BITS          (RCC_ICSCR1_MSIKSEL_MSIRC1 |    \
                                             RCC_ICSCR1_MSIKDIV_FIELD(3U))
  #else
    #define STM32_ICSCR1_MSIK_BITS          0U
  #endif
#else
  #if (STM32_MSIK_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIK_BITS          (RCC_ICSCR1_MSIKSEL_MSIRC1 |    \
                                             RCC_ICSCR1_MSIKDIV_FIELD(3U))
  #else
    #define STM32_ICSCR1_MSIK_BITS          0U
  #endif
#endif

/**
 * @brief   MSI kernel oscillator clock point.
 */
#if (STM32_MSIK_ENABLED == FALSE) && !defined(__DOXYGEN__)
  #define STM32_MSIK_FREQ                   0U
#elif ((STM32_CFG_MSIK_SRCDIV == RCC_ICSCR1_MSIK_IRC0_DIV1) && \
      ((STM32_CFG_MSIRC0_MODE == RCC_MSIRC0_PLL_LSE) || (STM32_CFG_MSIRC0_MODE == RCC_MSIRC0_PLL_LSE_FAST))) || \
    defined(__DOXYGEN__)
  #define STM32_MSIK_FREQ                   96010000U
#elif (STM32_CFG_MSIK_SRCDIV == RCC_ICSCR1_MSIK_IRC0_DIV1)
  #define STM32_MSIK_FREQ                   96000000U
#elif (STM32_CFG_MSIK_SRCDIV == RCC_ICSCR1_MSIK_IRC0_DIV2) && \
      ((STM32_CFG_MSIRC0_MODE == RCC_MSIRC0_PLL_LSE) || (STM32_CFG_MSIRC0_MODE == RCC_MSIRC0_PLL_LSE_FAST))
  #define STM32_MSIK_FREQ                   48005000U
#elif (STM32_CFG_MSIK_SRCDIV == RCC_ICSCR1_MSIK_IRC0_DIV2)
  #define STM32_MSIK_FREQ                   48000000U
#elif (STM32_CFG_MSIK_SRCDIV == RCC_ICSCR1_MSIK_IRC0_DIV4) && \
      ((STM32_CFG_MSIRC0_MODE == RCC_MSIRC0_PLL_LSE) || (STM32_CFG_MSIRC0_MODE == RCC_MSIRC0_PLL_LSE_FAST))
  #define STM32_MSIK_FREQ                   24002500U
#elif (STM32_CFG_MSIK_SRCDIV == RCC_ICSCR1_MSIK_IRC0_DIV4)
  #define STM32_MSIK_FREQ                   24000000U
#elif (STM32_CFG_MSIK_SRCDIV == RCC_ICSCR1_MSIK_IRC0_DIV8) && \
      ((STM32_CFG_MSIRC0_MODE == RCC_MSIRC0_PLL_LSE) || (STM32_CFG_MSIRC0_MODE == RCC_MSIRC0_PLL_LSE_FAST))
  #define STM32_MSIK_FREQ                   12001250U
#elif (STM32_CFG_MSIK_SRCDIV == RCC_ICSCR1_MSIK_IRC0_DIV8)
  #define STM32_MSIK_FREQ                   12000000U
#elif (STM32_CFG_MSIK_SRCDIV == RCC_ICSCR1_MSIK_IRC1_DIV1) && \
      ((STM32_CFG_MSIPLL1N_VALUE == 0) || (STM32_CFG_MSIPLL1N_VALUE == 1)) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE_FAST))
  #define STM32_MSIK_FREQ                   23986000U
#elif (STM32_CFG_MSIK_SRCDIV == RCC_ICSCR1_MSIK_IRC1_DIV1) && \
      ((STM32_CFG_MSIPLL1N_VALUE == 0) || (STM32_CFG_MSIPLL1N_VALUE == 1)) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE_FAST))
  #define STM32_MSIK_FREQ                   24016000U
#elif (STM32_CFG_MSIK_SRCDIV == RCC_ICSCR1_MSIK_IRC1_DIV1) && \
      (STM32_CFG_MSIPLL1N_VALUE == 2) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE_FAST))
  #define STM32_MSIK_FREQ                   22577000U
#elif (STM32_CFG_MSIK_SRCDIV == RCC_ICSCR1_MSIK_IRC1_DIV1) && \
      (STM32_CFG_MSIPLL1N_VALUE == 2) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE_FAST))
  #define STM32_MSIK_FREQ                   22581000U
#elif (STM32_CFG_MSIK_SRCDIV == RCC_ICSCR1_MSIK_IRC1_DIV1) && \
      (STM32_CFG_MSIPLL1N_VALUE == 3) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE_FAST))
  #define STM32_MSIK_FREQ                   24576000U
#elif (STM32_CFG_MSIK_SRCDIV == RCC_ICSCR1_MSIK_IRC1_DIV1) && \
      (STM32_CFG_MSIPLL1N_VALUE == 3) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE_FAST))
  #define STM32_MSIK_FREQ                   24577000U
#elif (STM32_CFG_MSIK_SRCDIV == RCC_ICSCR1_MSIK_IRC1_DIV1)
  #define STM32_MSIK_FREQ                   24000000U
#elif (STM32_CFG_MSIK_SRCDIV == RCC_ICSCR1_MSIK_IRC1_DIV2) && \
      ((STM32_CFG_MSIPLL1N_VALUE == 0) || (STM32_CFG_MSIPLL1N_VALUE == 1)) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE_FAST))
  #define STM32_MSIK_FREQ                   11993000U
#elif (STM32_CFG_MSIK_SRCDIV == RCC_ICSCR1_MSIK_IRC1_DIV2) && \
      ((STM32_CFG_MSIPLL1N_VALUE == 0) || (STM32_CFG_MSIPLL1N_VALUE == 1)) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE_FAST))
  #define STM32_MSIK_FREQ                   12008000U
#elif (STM32_CFG_MSIK_SRCDIV == RCC_ICSCR1_MSIK_IRC1_DIV2) && \
      (STM32_CFG_MSIPLL1N_VALUE == 2) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE_FAST))
  #define STM32_MSIK_FREQ                   11288500U
#elif (STM32_CFG_MSIK_SRCDIV == RCC_ICSCR1_MSIK_IRC1_DIV2) && \
      (STM32_CFG_MSIPLL1N_VALUE == 2) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE_FAST))
  #define STM32_MSIK_FREQ                   11290500U
#elif (STM32_CFG_MSIK_SRCDIV == RCC_ICSCR1_MSIK_IRC1_DIV2) && \
      (STM32_CFG_MSIPLL1N_VALUE == 3) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE_FAST))
  #define STM32_MSIK_FREQ                   12288000U
#elif (STM32_CFG_MSIK_SRCDIV == RCC_ICSCR1_MSIK_IRC1_DIV2) && \
      (STM32_CFG_MSIPLL1N_VALUE == 3) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE_FAST))
  #define STM32_MSIK_FREQ                   12288500U
#elif (STM32_CFG_MSIK_SRCDIV == RCC_ICSCR1_MSIK_IRC1_DIV2)
  #define STM32_MSIK_FREQ                   12000000U
#elif (STM32_CFG_MSIK_SRCDIV == RCC_ICSCR1_MSIK_IRC1_DIV4) && \
      ((STM32_CFG_MSIPLL1N_VALUE == 0) || (STM32_CFG_MSIPLL1N_VALUE == 1)) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE_FAST))
  #define STM32_MSIK_FREQ                   5996500U
#elif (STM32_CFG_MSIK_SRCDIV == RCC_ICSCR1_MSIK_IRC1_DIV4) && \
      ((STM32_CFG_MSIPLL1N_VALUE == 0) || (STM32_CFG_MSIPLL1N_VALUE == 1)) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE_FAST))
  #define STM32_MSIK_FREQ                   6004000U
#elif (STM32_CFG_MSIK_SRCDIV == RCC_ICSCR1_MSIK_IRC1_DIV4) && \
      (STM32_CFG_MSIPLL1N_VALUE == 2) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE_FAST))
  #define STM32_MSIK_FREQ                   5644250U
#elif (STM32_CFG_MSIK_SRCDIV == RCC_ICSCR1_MSIK_IRC1_DIV4) && \
      (STM32_CFG_MSIPLL1N_VALUE == 2) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE_FAST))
  #define STM32_MSIK_FREQ                   5645250U
#elif (STM32_CFG_MSIK_SRCDIV == RCC_ICSCR1_MSIK_IRC1_DIV4) && \
      (STM32_CFG_MSIPLL1N_VALUE == 3) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE_FAST))
  #define STM32_MSIK_FREQ                   6144000U
#elif (STM32_CFG_MSIK_SRCDIV == RCC_ICSCR1_MSIK_IRC1_DIV4) && \
      (STM32_CFG_MSIPLL1N_VALUE == 3) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE_FAST))
  #define STM32_MSIK_FREQ                   6144250U
#elif (STM32_CFG_MSIK_SRCDIV == RCC_ICSCR1_MSIK_IRC1_DIV4)
  #define STM32_MSIK_FREQ                   6000000U
#elif (STM32_CFG_MSIK_SRCDIV == RCC_ICSCR1_MSIK_IRC1_DIV8) && \
      ((STM32_CFG_MSIPLL1N_VALUE == 0) || (STM32_CFG_MSIPLL1N_VALUE == 1)) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE_FAST))
  #define STM32_MSIK_FREQ                   2998250U
#elif (STM32_CFG_MSIK_SRCDIV == RCC_ICSCR1_MSIK_IRC1_DIV8) && \
      ((STM32_CFG_MSIPLL1N_VALUE == 0) || (STM32_CFG_MSIPLL1N_VALUE == 1)) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE_FAST))
  #define STM32_MSIK_FREQ                   3002000U
#elif (STM32_CFG_MSIK_SRCDIV == RCC_ICSCR1_MSIK_IRC1_DIV8) && \
      (STM32_CFG_MSIPLL1N_VALUE == 2) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE_FAST))
  #define STM32_MSIK_FREQ                   2822125U
#elif (STM32_CFG_MSIK_SRCDIV == RCC_ICSCR1_MSIK_IRC1_DIV8) && \
      (STM32_CFG_MSIPLL1N_VALUE == 2) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE_FAST))
  #define STM32_MSIK_FREQ                   2822625U
#elif (STM32_CFG_MSIK_SRCDIV == RCC_ICSCR1_MSIK_IRC1_DIV8) && \
      (STM32_CFG_MSIPLL1N_VALUE == 3) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_LSE_FAST))
  #define STM32_MSIK_FREQ                   3072000U
#elif (STM32_CFG_MSIK_SRCDIV == RCC_ICSCR1_MSIK_IRC1_DIV8) && \
      (STM32_CFG_MSIPLL1N_VALUE == 3) && \
      ((STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE) || (STM32_CFG_MSIRC1_MODE == RCC_MSIRC1_PLL_HSE_FAST))
  #define STM32_MSIK_FREQ                   3072125U
#else
  #define STM32_MSIK_FREQ                   3000000U
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
 * @brief   System clock point.
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
 * @brief   AHB clock point.
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
 * @brief   APB1 clock point.
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
 * @brief   APB1 timer clock point.
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
 * @brief   APB2 clock point.
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
 * @brief   APB2 timer clock point.
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
 * @brief   APB3 clock point.
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
 * @brief   HSE divided clock point.
 */
#if (STM32_HSEDIV_ENABLED == TRUE) || defined(__DOXYGEN__)
  #define STM32_HSEDIV_FREQ                 (STM32_HSE_FREQ / 32U)
#else
  #define STM32_HSEDIV_FREQ                 0U
#endif

/*--- Macros and checks for the HCLKDIV8 clock point. ----------------------*/

/**
 * @brief   HCLKDIV8 clock register bits.
 */
#define STM32_HCLKDIV8_BITS                 0U

/**
 * @brief   HCLK divided by 8 clock point.
 */
#define STM32_HCLKDIV8_FREQ                 (STM32_HCLK_FREQ / 8U)

/*--- Macros and checks for the MCO1DIV clock point. -----------------------*/

/**
 * @brief   MCO1DIV clock register bits.
 */
#if (STM32_CFG_MCO1DIV_SEL == RCC_CFGR1_MCO1SEL_OFF) || defined(__DOXYGEN__)
  #define STM32_MCO1DIV_BITS                RCC_CFGR1_MCO1SEL_OFF
#elif (STM32_CFG_MCO1DIV_SEL == RCC_CFGR1_MCO1SEL_SYSCLK)
  #define STM32_MCO1DIV_BITS                RCC_CFGR1_MCO1SEL_SYSCLK
#elif (STM32_CFG_MCO1DIV_SEL == RCC_CFGR1_MCO1SEL_MSIS)
  #define STM32_MCO1DIV_BITS                RCC_CFGR1_MCO1SEL_MSIS
#elif (STM32_CFG_MCO1DIV_SEL == RCC_CFGR1_MCO1SEL_HSI16)
  #define STM32_MCO1DIV_BITS                RCC_CFGR1_MCO1SEL_HSI16
#elif (STM32_CFG_MCO1DIV_SEL == RCC_CFGR1_MCO1SEL_HSE)
  #define STM32_MCO1DIV_BITS                RCC_CFGR1_MCO1SEL_HSE
#elif (STM32_CFG_MCO1DIV_SEL == RCC_CFGR1_MCO1SEL_LSI)
  #define STM32_MCO1DIV_BITS                RCC_CFGR1_MCO1SEL_LSI
#elif (STM32_CFG_MCO1DIV_SEL == RCC_CFGR1_MCO1SEL_LSE)
  #define STM32_MCO1DIV_BITS                RCC_CFGR1_MCO1SEL_LSE
#elif (STM32_CFG_MCO1DIV_SEL == RCC_CFGR1_MCO1SEL_HSI48)
  #define STM32_MCO1DIV_BITS                RCC_CFGR1_MCO1SEL_HSI48
#elif (STM32_CFG_MCO1DIV_SEL == RCC_CFGR1_MCO1SEL_MSIK)
  #define STM32_MCO1DIV_BITS                RCC_CFGR1_MCO1SEL_MSIK
#else
  #error "invalid STM32_CFG_MCO1DIV_SEL value specified"
#endif

/**
 * @brief   MCO1 selected source before prescaler clock point.
 */
#if ((STM32_MCO1DIV_ENABLED == TRUE) && \
     (STM32_CFG_MCO1DIV_SEL == RCC_CFGR1_MCO1SEL_OFF)) || \
    defined(__DOXYGEN__)
  #define STM32_MCO1DIV_FREQ                STM32_NONE_FREQ
#elif (STM32_MCO1DIV_ENABLED == TRUE) && \
      (STM32_CFG_MCO1DIV_SEL == RCC_CFGR1_MCO1SEL_SYSCLK)
  #define STM32_MCO1DIV_FREQ                STM32_SYSCLK_FREQ
#elif (STM32_MCO1DIV_ENABLED == TRUE) && \
      (STM32_CFG_MCO1DIV_SEL == RCC_CFGR1_MCO1SEL_MSIS)
  #define STM32_MCO1DIV_FREQ                STM32_MSIS_FREQ
#elif (STM32_MCO1DIV_ENABLED == TRUE) && \
      (STM32_CFG_MCO1DIV_SEL == RCC_CFGR1_MCO1SEL_HSI16)
  #define STM32_MCO1DIV_FREQ                STM32_HSI16_FREQ
#elif (STM32_MCO1DIV_ENABLED == TRUE) && \
      (STM32_CFG_MCO1DIV_SEL == RCC_CFGR1_MCO1SEL_HSE)
  #define STM32_MCO1DIV_FREQ                STM32_HSE_FREQ
#elif (STM32_MCO1DIV_ENABLED == TRUE) && \
      (STM32_CFG_MCO1DIV_SEL == RCC_CFGR1_MCO1SEL_LSI)
  #define STM32_MCO1DIV_FREQ                STM32_LSI_FREQ
#elif (STM32_MCO1DIV_ENABLED == TRUE) && \
      (STM32_CFG_MCO1DIV_SEL == RCC_CFGR1_MCO1SEL_LSE)
  #define STM32_MCO1DIV_FREQ                STM32_LSE_FREQ
#elif (STM32_MCO1DIV_ENABLED == TRUE) && \
      (STM32_CFG_MCO1DIV_SEL == RCC_CFGR1_MCO1SEL_HSI48)
  #define STM32_MCO1DIV_FREQ                STM32_HSI48_FREQ
#elif (STM32_MCO1DIV_ENABLED == TRUE) && \
      (STM32_CFG_MCO1DIV_SEL == RCC_CFGR1_MCO1SEL_MSIK)
  #define STM32_MCO1DIV_FREQ                STM32_MSIK_FREQ
#else
  #define STM32_MCO1DIV_FREQ                0U
#endif

/*--- Macros and checks for the MCO1 clock point. --------------------------*/

/**
 * @brief   MCO1 clock register bits.
 */
#if (STM32_CFG_MCO1_VALUE == 1) || defined(__DOXYGEN__)
  #define STM32_MCO1_BITS                   RCC_CFGR1_MCO1PRE_DIV1
#elif (STM32_CFG_MCO1_VALUE == 2)
  #define STM32_MCO1_BITS                   RCC_CFGR1_MCO1PRE_DIV2
#elif (STM32_CFG_MCO1_VALUE == 4)
  #define STM32_MCO1_BITS                   RCC_CFGR1_MCO1PRE_DIV4
#elif (STM32_CFG_MCO1_VALUE == 8)
  #define STM32_MCO1_BITS                   RCC_CFGR1_MCO1PRE_DIV8
#elif (STM32_CFG_MCO1_VALUE == 16)
  #define STM32_MCO1_BITS                   RCC_CFGR1_MCO1PRE_DIV16
#elif (STM32_CFG_MCO1_VALUE == 32)
  #define STM32_MCO1_BITS                   RCC_CFGR1_MCO1PRE_DIV32
#elif (STM32_CFG_MCO1_VALUE == 64)
  #define STM32_MCO1_BITS                   RCC_CFGR1_MCO1PRE_DIV64
#elif (STM32_CFG_MCO1_VALUE == 128)
  #define STM32_MCO1_BITS                   RCC_CFGR1_MCO1PRE_DIV128
#else
  #error "invalid STM32_CFG_MCO1_VALUE value specified"
#endif

/**
 * @brief   MCO1 output pin clock point.
 */
#define STM32_MCO1_FREQ                     (STM32_MCO1DIV_FREQ /           \
                                             STM32_CFG_MCO1_VALUE)

/*--- Macros and checks for the MCO2DIV clock point. -----------------------*/

/**
 * @brief   MCO2DIV clock register bits.
 */
#if (STM32_CFG_MCO2DIV_SEL == RCC_CFGR1_MCO2SEL_OFF) || defined(__DOXYGEN__)
  #define STM32_MCO2DIV_BITS                RCC_CFGR1_MCO2SEL_OFF
#elif (STM32_CFG_MCO2DIV_SEL == RCC_CFGR1_MCO2SEL_SYSCLK)
  #define STM32_MCO2DIV_BITS                RCC_CFGR1_MCO2SEL_SYSCLK
#elif (STM32_CFG_MCO2DIV_SEL == RCC_CFGR1_MCO2SEL_MSIS)
  #define STM32_MCO2DIV_BITS                RCC_CFGR1_MCO2SEL_MSIS
#elif (STM32_CFG_MCO2DIV_SEL == RCC_CFGR1_MCO2SEL_HSI16)
  #define STM32_MCO2DIV_BITS                RCC_CFGR1_MCO2SEL_HSI16
#elif (STM32_CFG_MCO2DIV_SEL == RCC_CFGR1_MCO2SEL_HSE)
  #define STM32_MCO2DIV_BITS                RCC_CFGR1_MCO2SEL_HSE
#elif (STM32_CFG_MCO2DIV_SEL == RCC_CFGR1_MCO2SEL_LSI)
  #define STM32_MCO2DIV_BITS                RCC_CFGR1_MCO2SEL_LSI
#elif (STM32_CFG_MCO2DIV_SEL == RCC_CFGR1_MCO2SEL_LSE)
  #define STM32_MCO2DIV_BITS                RCC_CFGR1_MCO2SEL_LSE
#elif (STM32_CFG_MCO2DIV_SEL == RCC_CFGR1_MCO2SEL_HSI48)
  #define STM32_MCO2DIV_BITS                RCC_CFGR1_MCO2SEL_HSI48
#elif (STM32_CFG_MCO2DIV_SEL == RCC_CFGR1_MCO2SEL_MSIK)
  #define STM32_MCO2DIV_BITS                RCC_CFGR1_MCO2SEL_MSIK
#else
  #error "invalid STM32_CFG_MCO2DIV_SEL value specified"
#endif

/**
 * @brief   MCO2 selected source before prescaler clock point.
 */
#if ((STM32_MCO2DIV_ENABLED == TRUE) && \
     (STM32_CFG_MCO2DIV_SEL == RCC_CFGR1_MCO2SEL_OFF)) || \
    defined(__DOXYGEN__)
  #define STM32_MCO2DIV_FREQ                STM32_NONE_FREQ
#elif (STM32_MCO2DIV_ENABLED == TRUE) && \
      (STM32_CFG_MCO2DIV_SEL == RCC_CFGR1_MCO2SEL_SYSCLK)
  #define STM32_MCO2DIV_FREQ                STM32_SYSCLK_FREQ
#elif (STM32_MCO2DIV_ENABLED == TRUE) && \
      (STM32_CFG_MCO2DIV_SEL == RCC_CFGR1_MCO2SEL_MSIS)
  #define STM32_MCO2DIV_FREQ                STM32_MSIS_FREQ
#elif (STM32_MCO2DIV_ENABLED == TRUE) && \
      (STM32_CFG_MCO2DIV_SEL == RCC_CFGR1_MCO2SEL_HSI16)
  #define STM32_MCO2DIV_FREQ                STM32_HSI16_FREQ
#elif (STM32_MCO2DIV_ENABLED == TRUE) && \
      (STM32_CFG_MCO2DIV_SEL == RCC_CFGR1_MCO2SEL_HSE)
  #define STM32_MCO2DIV_FREQ                STM32_HSE_FREQ
#elif (STM32_MCO2DIV_ENABLED == TRUE) && \
      (STM32_CFG_MCO2DIV_SEL == RCC_CFGR1_MCO2SEL_LSI)
  #define STM32_MCO2DIV_FREQ                STM32_LSI_FREQ
#elif (STM32_MCO2DIV_ENABLED == TRUE) && \
      (STM32_CFG_MCO2DIV_SEL == RCC_CFGR1_MCO2SEL_LSE)
  #define STM32_MCO2DIV_FREQ                STM32_LSE_FREQ
#elif (STM32_MCO2DIV_ENABLED == TRUE) && \
      (STM32_CFG_MCO2DIV_SEL == RCC_CFGR1_MCO2SEL_HSI48)
  #define STM32_MCO2DIV_FREQ                STM32_HSI48_FREQ
#elif (STM32_MCO2DIV_ENABLED == TRUE) && \
      (STM32_CFG_MCO2DIV_SEL == RCC_CFGR1_MCO2SEL_MSIK)
  #define STM32_MCO2DIV_FREQ                STM32_MSIK_FREQ
#else
  #define STM32_MCO2DIV_FREQ                0U
#endif

/*--- Macros and checks for the MCO2 clock point. --------------------------*/

/**
 * @brief   MCO2 clock register bits.
 */
#if (STM32_CFG_MCO2_VALUE == 1) || defined(__DOXYGEN__)
  #define STM32_MCO2_BITS                   RCC_CFGR1_MCO2PRE_DIV1
#elif (STM32_CFG_MCO2_VALUE == 2)
  #define STM32_MCO2_BITS                   RCC_CFGR1_MCO2PRE_DIV2
#elif (STM32_CFG_MCO2_VALUE == 4)
  #define STM32_MCO2_BITS                   RCC_CFGR1_MCO2PRE_DIV4
#elif (STM32_CFG_MCO2_VALUE == 8)
  #define STM32_MCO2_BITS                   RCC_CFGR1_MCO2PRE_DIV8
#elif (STM32_CFG_MCO2_VALUE == 16)
  #define STM32_MCO2_BITS                   RCC_CFGR1_MCO2PRE_DIV16
#elif (STM32_CFG_MCO2_VALUE == 32)
  #define STM32_MCO2_BITS                   RCC_CFGR1_MCO2PRE_DIV32
#elif (STM32_CFG_MCO2_VALUE == 64)
  #define STM32_MCO2_BITS                   RCC_CFGR1_MCO2PRE_DIV64
#elif (STM32_CFG_MCO2_VALUE == 128)
  #define STM32_MCO2_BITS                   RCC_CFGR1_MCO2PRE_DIV128
#else
  #error "invalid STM32_CFG_MCO2_VALUE value specified"
#endif

/**
 * @brief   MCO2 output pin clock point.
 */
#define STM32_MCO2_FREQ                     (STM32_MCO2DIV_FREQ /           \
                                             STM32_CFG_MCO2_VALUE)

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
 * @brief   RTC clock point.
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
  #define STM32_LSCO_FREQ                   STM32_LSE_FREQ
#else
  #define STM32_LSCO_FREQ                   0U
#endif

/*--- Macros and checks for the USART1 clock point. ------------------------*/

/**
 * @brief   USART1 clock register bits.
 */
#if (STM32_CFG_USART1_SEL == RCC_CCIPR1_USART1SEL_PCLK2) || defined(__DOXYGEN__)
  #if (STM32_USART1_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_USART1_BITS               RCC_CCIPR1_USART1SEL_PCLK2
  #else
    #define STM32_USART1_BITS               0U
  #endif
#elif (STM32_CFG_USART1_SEL == RCC_CCIPR1_USART1SEL_HSI16)
  #if (STM32_USART1_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_USART1_BITS               RCC_CCIPR1_USART1SEL_HSI16
  #else
    #define STM32_USART1_BITS               0U
  #endif
#else
  #error "invalid STM32_CFG_USART1_SEL value specified"
#endif

/**
 * @brief   USART1 clock point.
 */
#if ((STM32_USART1_ENABLED == TRUE) && \
     (STM32_CFG_USART1_SEL == RCC_CCIPR1_USART1SEL_PCLK2)) || \
    defined(__DOXYGEN__)
  #define STM32_USART1_FREQ                 STM32_PCLK2_FREQ
#elif (STM32_USART1_ENABLED == TRUE) && \
      (STM32_CFG_USART1_SEL == RCC_CCIPR1_USART1SEL_HSI16)
  #define STM32_USART1_FREQ                 STM32_HSI16_FREQ
#else
  #define STM32_USART1_FREQ                 0U
#endif

/*--- Macros and checks for the USART3 clock point. ------------------------*/

/**
 * @brief   USART3 clock register bits.
 */
#if (STM32_CFG_USART3_SEL == RCC_CCIPR1_USART3SEL_PCLK1) || defined(__DOXYGEN__)
  #if (STM32_USART3_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_USART3_BITS               RCC_CCIPR1_USART3SEL_PCLK1
  #else
    #define STM32_USART3_BITS               0U
  #endif
#elif (STM32_CFG_USART3_SEL == RCC_CCIPR1_USART3SEL_HSI16)
  #if (STM32_USART3_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_USART3_BITS               RCC_CCIPR1_USART3SEL_HSI16
  #else
    #define STM32_USART3_BITS               0U
  #endif
#else
  #error "invalid STM32_CFG_USART3_SEL value specified"
#endif

/**
 * @brief   USART3 clock point.
 */
#if ((STM32_USART3_ENABLED == TRUE) && \
     (STM32_CFG_USART3_SEL == RCC_CCIPR1_USART3SEL_PCLK1)) || \
    defined(__DOXYGEN__)
  #define STM32_USART3_FREQ                 STM32_PCLK1_FREQ
#elif (STM32_USART3_ENABLED == TRUE) && \
      (STM32_CFG_USART3_SEL == RCC_CCIPR1_USART3SEL_HSI16)
  #define STM32_USART3_FREQ                 STM32_HSI16_FREQ
#else
  #define STM32_USART3_FREQ                 0U
#endif

/*--- Macros and checks for the UART4 clock point. -------------------------*/

/**
 * @brief   UART4 clock register bits.
 */
#if (STM32_CFG_UART4_SEL == RCC_CCIPR1_UART4SEL_PCLK1) || defined(__DOXYGEN__)
  #if (STM32_UART4_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_UART4_BITS                RCC_CCIPR1_UART4SEL_PCLK1
  #else
    #define STM32_UART4_BITS                0U
  #endif
#elif (STM32_CFG_UART4_SEL == RCC_CCIPR1_UART4SEL_HSI16)
  #if (STM32_UART4_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_UART4_BITS                RCC_CCIPR1_UART4SEL_HSI16
  #else
    #define STM32_UART4_BITS                0U
  #endif
#else
  #error "invalid STM32_CFG_UART4_SEL value specified"
#endif

/**
 * @brief   UART4 clock point.
 */
#if ((STM32_UART4_ENABLED == TRUE) && \
     (STM32_CFG_UART4_SEL == RCC_CCIPR1_UART4SEL_PCLK1)) || \
    defined(__DOXYGEN__)
  #define STM32_UART4_FREQ                  STM32_PCLK1_FREQ
#elif (STM32_UART4_ENABLED == TRUE) && \
      (STM32_CFG_UART4_SEL == RCC_CCIPR1_UART4SEL_HSI16)
  #define STM32_UART4_FREQ                  STM32_HSI16_FREQ
#else
  #define STM32_UART4_FREQ                  0U
#endif

/*--- Macros and checks for the UART5 clock point. -------------------------*/

/**
 * @brief   UART5 clock register bits.
 */
#if (STM32_CFG_UART5_SEL == RCC_CCIPR1_UART5SEL_PCLK1) || defined(__DOXYGEN__)
  #if (STM32_UART5_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_UART5_BITS                RCC_CCIPR1_UART5SEL_PCLK1
  #else
    #define STM32_UART5_BITS                0U
  #endif
#elif (STM32_CFG_UART5_SEL == RCC_CCIPR1_UART5SEL_HSI16)
  #if (STM32_UART5_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_UART5_BITS                RCC_CCIPR1_UART5SEL_HSI16
  #else
    #define STM32_UART5_BITS                0U
  #endif
#else
  #error "invalid STM32_CFG_UART5_SEL value specified"
#endif

/**
 * @brief   UART5 clock point.
 */
#if ((STM32_UART5_ENABLED == TRUE) && \
     (STM32_CFG_UART5_SEL == RCC_CCIPR1_UART5SEL_PCLK1)) || \
    defined(__DOXYGEN__)
  #define STM32_UART5_FREQ                  STM32_PCLK1_FREQ
#elif (STM32_UART5_ENABLED == TRUE) && \
      (STM32_CFG_UART5_SEL == RCC_CCIPR1_UART5SEL_HSI16)
  #define STM32_UART5_FREQ                  STM32_HSI16_FREQ
#else
  #define STM32_UART5_FREQ                  0U
#endif

/*--- Macros and checks for the LPUART1 clock point. -----------------------*/

/**
 * @brief   LPUART1 clock register bits.
 */
#if (STM32_CFG_LPUART1_SEL == RCC_CCIPR3_LPUART1SEL_PCLK3) ||               \
    defined(__DOXYGEN__)
  #if (STM32_LPUART1_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_LPUART1_BITS              RCC_CCIPR3_LPUART1SEL_PCLK3
  #else
    #define STM32_LPUART1_BITS              0U
  #endif
#elif (STM32_CFG_LPUART1_SEL == RCC_CCIPR3_LPUART1SEL_HSI16)
  #if (STM32_LPUART1_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_LPUART1_BITS              RCC_CCIPR3_LPUART1SEL_HSI16
  #else
    #define STM32_LPUART1_BITS              0U
  #endif
#elif (STM32_CFG_LPUART1_SEL == RCC_CCIPR3_LPUART1SEL_LSE)
  #if (STM32_LPUART1_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_LPUART1_BITS              RCC_CCIPR3_LPUART1SEL_LSE
  #else
    #define STM32_LPUART1_BITS              0U
  #endif
#elif (STM32_CFG_LPUART1_SEL == RCC_CCIPR3_LPUART1SEL_MSIK)
  #if (STM32_LPUART1_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_LPUART1_BITS              RCC_CCIPR3_LPUART1SEL_MSIK
  #else
    #define STM32_LPUART1_BITS              0U
  #endif
#else
  #error "invalid STM32_CFG_LPUART1_SEL value specified"
#endif

/**
 * @brief   LPUART1 clock point.
 */
#if ((STM32_LPUART1_ENABLED == TRUE) && \
     (STM32_CFG_LPUART1_SEL == RCC_CCIPR3_LPUART1SEL_PCLK3)) || \
    defined(__DOXYGEN__)
  #define STM32_LPUART1_FREQ                STM32_PCLK3_FREQ
#elif (STM32_LPUART1_ENABLED == TRUE) && \
      (STM32_CFG_LPUART1_SEL == RCC_CCIPR3_LPUART1SEL_HSI16)
  #define STM32_LPUART1_FREQ                STM32_HSI16_FREQ
#elif (STM32_LPUART1_ENABLED == TRUE) && \
      (STM32_CFG_LPUART1_SEL == RCC_CCIPR3_LPUART1SEL_LSE)
  #define STM32_LPUART1_FREQ                STM32_LSE_FREQ
#elif (STM32_LPUART1_ENABLED == TRUE) && \
      (STM32_CFG_LPUART1_SEL == RCC_CCIPR3_LPUART1SEL_MSIK)
  #define STM32_LPUART1_FREQ                STM32_MSIK_FREQ
#else
  #define STM32_LPUART1_FREQ                0U
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
 * @brief   LPTIM1 clock point.
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
  #define STM32_LPTIM1_FREQ                 STM32_LSE_FREQ
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
 * @brief   LPTIM2 clock point.
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
  #define STM32_LPTIM2_FREQ                 STM32_LSE_FREQ
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
 * @brief   LPTIM3 and LPTIM4 clock point.
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
  #define STM32_LPTIM34_FREQ                STM32_LSE_FREQ
#else
  #define STM32_LPTIM34_FREQ                0U
#endif

/*--- Macros and checks for the SPI1 clock point. --------------------------*/

/**
 * @brief   SPI1 clock register bits.
 */
#if (STM32_CFG_SPI1_SEL == RCC_CCIPR1_SPI1SEL_PCLK2) || defined(__DOXYGEN__)
  #if (STM32_SPI1_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_SPI1_BITS                 RCC_CCIPR1_SPI1SEL_PCLK2
  #else
    #define STM32_SPI1_BITS                 0U
  #endif
#elif (STM32_CFG_SPI1_SEL == RCC_CCIPR1_SPI1SEL_MSIK)
  #if (STM32_SPI1_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_SPI1_BITS                 RCC_CCIPR1_SPI1SEL_MSIK
  #else
    #define STM32_SPI1_BITS                 0U
  #endif
#else
  #error "invalid STM32_CFG_SPI1_SEL value specified"
#endif

/**
 * @brief   SPI1 clock point.
 */
#if ((STM32_SPI1_ENABLED == TRUE) && \
     (STM32_CFG_SPI1_SEL == RCC_CCIPR1_SPI1SEL_PCLK2)) || \
    defined(__DOXYGEN__)
  #define STM32_SPI1_FREQ                   STM32_PCLK2_FREQ
#elif (STM32_SPI1_ENABLED == TRUE) && \
      (STM32_CFG_SPI1_SEL == RCC_CCIPR1_SPI1SEL_MSIK)
  #define STM32_SPI1_FREQ                   STM32_MSIK_FREQ
#else
  #define STM32_SPI1_FREQ                   0U
#endif

/*--- Macros and checks for the SPI2 clock point. --------------------------*/

/**
 * @brief   SPI2 clock register bits.
 */
#if (STM32_CFG_SPI2_SEL == RCC_CCIPR1_SPI2SEL_PCLK1) || defined(__DOXYGEN__)
  #if (STM32_SPI2_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_SPI2_BITS                 RCC_CCIPR1_SPI2SEL_PCLK1
  #else
    #define STM32_SPI2_BITS                 0U
  #endif
#elif (STM32_CFG_SPI2_SEL == RCC_CCIPR1_SPI2SEL_MSIK)
  #if (STM32_SPI2_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_SPI2_BITS                 RCC_CCIPR1_SPI2SEL_MSIK
  #else
    #define STM32_SPI2_BITS                 0U
  #endif
#else
  #error "invalid STM32_CFG_SPI2_SEL value specified"
#endif

/**
 * @brief   SPI2 clock point.
 */
#if ((STM32_SPI2_ENABLED == TRUE) && \
     (STM32_CFG_SPI2_SEL == RCC_CCIPR1_SPI2SEL_PCLK1)) || \
    defined(__DOXYGEN__)
  #define STM32_SPI2_FREQ                   STM32_PCLK1_FREQ
#elif (STM32_SPI2_ENABLED == TRUE) && \
      (STM32_CFG_SPI2_SEL == RCC_CCIPR1_SPI2SEL_MSIK)
  #define STM32_SPI2_FREQ                   STM32_MSIK_FREQ
#else
  #define STM32_SPI2_FREQ                   0U
#endif

/*--- Macros and checks for the SPI3 clock point. --------------------------*/

/**
 * @brief   SPI3 clock register bits.
 */
#if (STM32_CFG_SPI3_SEL == RCC_CCIPR2_SPI3SEL_PCLK1) || defined(__DOXYGEN__)
  #if (STM32_SPI3_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_SPI3_BITS                 RCC_CCIPR2_SPI3SEL_PCLK1
  #else
    #define STM32_SPI3_BITS                 0U
  #endif
#elif (STM32_CFG_SPI3_SEL == RCC_CCIPR2_SPI3SEL_MSIK)
  #if (STM32_SPI3_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_SPI3_BITS                 RCC_CCIPR2_SPI3SEL_MSIK
  #else
    #define STM32_SPI3_BITS                 0U
  #endif
#else
  #error "invalid STM32_CFG_SPI3_SEL value specified"
#endif

/**
 * @brief   SPI3 clock point.
 */
#if ((STM32_SPI3_ENABLED == TRUE) && \
     (STM32_CFG_SPI3_SEL == RCC_CCIPR2_SPI3SEL_PCLK1)) || \
    defined(__DOXYGEN__)
  #define STM32_SPI3_FREQ                   STM32_PCLK1_FREQ
#elif (STM32_SPI3_ENABLED == TRUE) && \
      (STM32_CFG_SPI3_SEL == RCC_CCIPR2_SPI3SEL_MSIK)
  #define STM32_SPI3_FREQ                   STM32_MSIK_FREQ
#else
  #define STM32_SPI3_FREQ                   0U
#endif

/*--- Macros and checks for the OCTOSPI clock point. -----------------------*/

/**
 * @brief   OCTOSPI clock register bits.
 */
#if (STM32_CFG_OCTOSPI_SEL == RCC_CCIPR2_OCTOSPISEL_SYSCLK) ||              \
    defined(__DOXYGEN__)
  #if (STM32_OCTOSPI_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_OCTOSPI_BITS              RCC_CCIPR2_OCTOSPISEL_SYSCLK
  #else
    #define STM32_OCTOSPI_BITS              0U
  #endif
#elif (STM32_CFG_OCTOSPI_SEL == RCC_CCIPR2_OCTOSPISEL_MSIK)
  #if (STM32_OCTOSPI_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_OCTOSPI_BITS              RCC_CCIPR2_OCTOSPISEL_MSIK
  #else
    #define STM32_OCTOSPI_BITS              0U
  #endif
#else
  #error "invalid STM32_CFG_OCTOSPI_SEL value specified"
#endif

/**
 * @brief   OCTOSPI clock point.
 */
#if ((STM32_OCTOSPI_ENABLED == TRUE) && \
     (STM32_CFG_OCTOSPI_SEL == RCC_CCIPR2_OCTOSPISEL_SYSCLK)) || \
    defined(__DOXYGEN__)
  #define STM32_OCTOSPI_FREQ                STM32_SYSCLK_FREQ
#elif (STM32_OCTOSPI_ENABLED == TRUE) && \
      (STM32_CFG_OCTOSPI_SEL == RCC_CCIPR2_OCTOSPISEL_MSIK)
  #define STM32_OCTOSPI_FREQ                STM32_MSIK_FREQ
#else
  #define STM32_OCTOSPI_FREQ                0U
#endif

/*--- Macros and checks for the SYSTICK clock point. -----------------------*/

/**
 * @brief   SYSTICK clock register bits.
 */
#if (STM32_CFG_SYSTICK_SEL == RCC_CCIPR1_SYSTICKSEL_HCLKDIV8) ||            \
    defined(__DOXYGEN__)
  #define STM32_SYSTICK_BITS                RCC_CCIPR1_SYSTICKSEL_HCLKDIV8
#elif (STM32_CFG_SYSTICK_SEL == RCC_CCIPR1_SYSTICKSEL_LSI)
  #define STM32_SYSTICK_BITS                RCC_CCIPR1_SYSTICKSEL_LSI
#elif (STM32_CFG_SYSTICK_SEL == RCC_CCIPR1_SYSTICKSEL_LSE)
  #define STM32_SYSTICK_BITS                RCC_CCIPR1_SYSTICKSEL_LSE
#else
  #error "invalid STM32_CFG_SYSTICK_SEL value specified"
#endif

/**
 * @brief   SYSTICK clock point.
 */
#if ((STM32_SYSTICK_ENABLED == TRUE) && \
     (STM32_CFG_SYSTICK_SEL == RCC_CCIPR1_SYSTICKSEL_HCLKDIV8)) || \
    defined(__DOXYGEN__)
  #define STM32_SYSTICK_FREQ                STM32_HCLKDIV8_FREQ
#elif (STM32_SYSTICK_ENABLED == TRUE) && \
      (STM32_CFG_SYSTICK_SEL == RCC_CCIPR1_SYSTICKSEL_LSI)
  #define STM32_SYSTICK_FREQ                STM32_LSI_FREQ
#elif (STM32_SYSTICK_ENABLED == TRUE) && \
      (STM32_CFG_SYSTICK_SEL == RCC_CCIPR1_SYSTICKSEL_LSE)
  #define STM32_SYSTICK_FREQ                STM32_LSE_FREQ
#else
  #define STM32_SYSTICK_FREQ                0U
#endif

/*--- Macros and checks for the TIM16IC clock point. -----------------------*/

/**
 * @brief   TIM16IC clock register bits.
 */
#define STM32_TIM16IC_BITS                  0U

/**
 * @brief   TIM16 internal capture clock point.
 */
#if (STM32_TIM16IC_ENABLED == FALSE) && !defined(__DOXYGEN__)
  #define STM32_TIM16IC_FREQ                0U
#elif (STM32_CFG_TIMICSEL == RCC_CCIPR1_TIMICSEL_NOCLOCK) || \
    defined(__DOXYGEN__)
  #define STM32_TIM16IC_FREQ                0U
#else
  #define STM32_TIM16IC_FREQ                (hal_lld_get_clock_point(CLK_HSI16) / \
                                             256U)
#endif

/*--- Macros and checks for the TIM17IC clock point. -----------------------*/

/**
 * @brief   TIM17IC clock register bits.
 */
#define STM32_TIM17IC_BITS                  0U

/**
 * @brief   TIM17 internal capture clock point.
 */
#if (STM32_TIM17IC_ENABLED == FALSE) && !defined(__DOXYGEN__)
  #define STM32_TIM17IC_FREQ                0U
#elif (STM32_CFG_TIMICSEL == RCC_CCIPR1_TIMICSEL_NOCLOCK) || \
    defined(__DOXYGEN__)
  #define STM32_TIM17IC_FREQ                0U
#elif ((STM32_CFG_TIMICSEL == RCC_CCIPR1_TIMICSEL_HSI256_MSIS1024_MSIS4) || (STM32_CFG_TIMICSEL == RCC_CCIPR1_TIMICSEL_HSI256_MSIS1024_MSIK4))
  #define STM32_TIM17IC_FREQ                (hal_lld_get_clock_point(CLK_MSIS) / \
                                             1024U)
#else
  #define STM32_TIM17IC_FREQ                (hal_lld_get_clock_point(CLK_MSIK) / \
                                             1024U)
#endif

/*--- Macros and checks for the LPTIM2IC clock point. ----------------------*/

/**
 * @brief   LPTIM2IC clock register bits.
 */
#define STM32_LPTIM2IC_BITS                 0U

/**
 * @brief   LPTIM2 internal capture clock point.
 */
#if (STM32_LPTIM2IC_ENABLED == FALSE) && !defined(__DOXYGEN__)
  #define STM32_LPTIM2IC_FREQ               0U
#elif (STM32_CFG_TIMICSEL == RCC_CCIPR1_TIMICSEL_NOCLOCK) || \
    defined(__DOXYGEN__)
  #define STM32_LPTIM2IC_FREQ               0U
#elif ((STM32_CFG_TIMICSEL == RCC_CCIPR1_TIMICSEL_HSI256_MSIS1024_MSIS4) || (STM32_CFG_TIMICSEL == RCC_CCIPR1_TIMICSEL_HSI256_MSIK1024_MSIS4))
  #define STM32_LPTIM2IC_FREQ               (hal_lld_get_clock_point(CLK_MSIS) / \
                                             4U)
#else
  #define STM32_LPTIM2IC_FREQ               (hal_lld_get_clock_point(CLK_MSIK) / \
                                             4U)
#endif

/*--- Macros and checks for the ICLK clock point. --------------------------*/

/**
 * @brief   ICLK clock register bits.
 */
#if (STM32_CFG_ICLK_SEL == RCC_CCIPR1_ICLKSEL_HSI48) || defined(__DOXYGEN__)
  #if (STM32_ICLK_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICLK_BITS                 RCC_CCIPR1_ICLKSEL_HSI48
  #else
    #define STM32_ICLK_BITS                 0U
  #endif
#elif (STM32_CFG_ICLK_SEL == RCC_CCIPR1_ICLKSEL_MSIK)
  #if (STM32_ICLK_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICLK_BITS                 RCC_CCIPR1_ICLKSEL_MSIK
  #else
    #define STM32_ICLK_BITS                 0U
  #endif
#elif (STM32_CFG_ICLK_SEL == RCC_CCIPR1_ICLKSEL_HSE)
  #if (STM32_ICLK_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICLK_BITS                 RCC_CCIPR1_ICLKSEL_HSE
  #else
    #define STM32_ICLK_BITS                 0U
  #endif
#elif (STM32_CFG_ICLK_SEL == RCC_CCIPR1_ICLKSEL_SYSCLK)
  #if (STM32_ICLK_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICLK_BITS                 RCC_CCIPR1_ICLKSEL_SYSCLK
  #else
    #define STM32_ICLK_BITS                 0U
  #endif
#else
  #error "invalid STM32_CFG_ICLK_SEL value specified"
#endif

/**
 * @brief   ICLK clock point.
 */
#if ((STM32_ICLK_ENABLED == TRUE) && \
     (STM32_CFG_ICLK_SEL == RCC_CCIPR1_ICLKSEL_HSI48)) || \
    defined(__DOXYGEN__)
  #define STM32_ICLK_FREQ                   STM32_HSI48_FREQ
#elif (STM32_ICLK_ENABLED == TRUE) && \
      (STM32_CFG_ICLK_SEL == RCC_CCIPR1_ICLKSEL_MSIK)
  #define STM32_ICLK_FREQ                   STM32_MSIK_FREQ
#elif (STM32_ICLK_ENABLED == TRUE) && \
      (STM32_CFG_ICLK_SEL == RCC_CCIPR1_ICLKSEL_HSE)
  #define STM32_ICLK_FREQ                   STM32_HSE_FREQ
#elif (STM32_ICLK_ENABLED == TRUE) && \
      (STM32_CFG_ICLK_SEL == RCC_CCIPR1_ICLKSEL_SYSCLK)
  #define STM32_ICLK_FREQ                   STM32_SYSCLK_FREQ
#else
  #define STM32_ICLK_FREQ                   0U
#endif

/*--- Macros and checks for the ICLKDIV2 clock point. ----------------------*/

/**
 * @brief   ICLKDIV2 clock register bits.
 */
#define STM32_ICLKDIV2_BITS                 0U

/**
 * @brief   ICLK divided by 2 clock point.
 */
#if (STM32_ICLKDIV2_ENABLED == TRUE) || defined(__DOXYGEN__)
  #define STM32_ICLKDIV2_FREQ               (STM32_ICLK_FREQ / 2U)
#else
  #define STM32_ICLKDIV2_FREQ               0U
#endif

/*--- Macros and checks for the USB clock point. ---------------------------*/

/**
 * @brief   USB clock register bits.
 */
#if (STM32_CFG_USB_SEL == RCC_CCIPR1_USB1SEL_ICLK) || defined(__DOXYGEN__)
  #if (STM32_USB_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_USB_BITS                  RCC_CCIPR1_USB1SEL_ICLK
  #else
    #define STM32_USB_BITS                  0U
  #endif
#elif (STM32_CFG_USB_SEL == RCC_CCIPR1_USB1SEL_ICLKDIV2)
  #if (STM32_USB_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_USB_BITS                  RCC_CCIPR1_USB1SEL_ICLKDIV2
  #else
    #define STM32_USB_BITS                  0U
  #endif
#else
  #error "invalid STM32_CFG_USB_SEL value specified"
#endif

/**
 * @brief   USB clock point.
 */
#if ((STM32_USB_ENABLED == TRUE) && \
     (STM32_CFG_USB_SEL == RCC_CCIPR1_USB1SEL_ICLK)) || \
    defined(__DOXYGEN__)
  #define STM32_USB_FREQ                    STM32_ICLK_FREQ
#elif (STM32_USB_ENABLED == TRUE) && \
      (STM32_CFG_USB_SEL == RCC_CCIPR1_USB1SEL_ICLKDIV2)
  #define STM32_USB_FREQ                    STM32_ICLKDIV2_FREQ
#else
  #define STM32_USB_FREQ                    0U
#endif

/*--- Macros and checks for the SDMMC1 clock point. ------------------------*/

/**
 * @brief   SDMMC1 clock register bits.
 */
#define STM32_SDMMC1_BITS                   0U

/**
 * @brief   SDMMC1 clock point.
 */
#if (STM32_SDMMC1_ENABLED == TRUE) || defined(__DOXYGEN__)
  #define STM32_SDMMC1_FREQ                 STM32_ICLK_FREQ
#else
  #define STM32_SDMMC1_FREQ                 0U
#endif

/*--- Macros and checks for the I2C1 clock point. --------------------------*/

/**
 * @brief   I2C1 clock register bits.
 */
#if (STM32_CFG_I2C1_SEL == RCC_CCIPR1_I2C1SEL_PCLK1) || defined(__DOXYGEN__)
  #if (STM32_I2C1_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_I2C1_BITS                 RCC_CCIPR1_I2C1SEL_PCLK1
  #else
    #define STM32_I2C1_BITS                 0U
  #endif
#elif (STM32_CFG_I2C1_SEL == RCC_CCIPR1_I2C1SEL_MSIK)
  #if (STM32_I2C1_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_I2C1_BITS                 RCC_CCIPR1_I2C1SEL_MSIK
  #else
    #define STM32_I2C1_BITS                 0U
  #endif
#else
  #error "invalid STM32_CFG_I2C1_SEL value specified"
#endif

/**
 * @brief   I2C1 clock point.
 */
#if ((STM32_I2C1_ENABLED == TRUE) && \
     (STM32_CFG_I2C1_SEL == RCC_CCIPR1_I2C1SEL_PCLK1)) || \
    defined(__DOXYGEN__)
  #define STM32_I2C1_FREQ                   STM32_PCLK1_FREQ
#elif (STM32_I2C1_ENABLED == TRUE) && \
      (STM32_CFG_I2C1_SEL == RCC_CCIPR1_I2C1SEL_MSIK)
  #define STM32_I2C1_FREQ                   STM32_MSIK_FREQ
#else
  #define STM32_I2C1_FREQ                   0U
#endif

/*--- Macros and checks for the I2C2 clock point. --------------------------*/

/**
 * @brief   I2C2 clock register bits.
 */
#if (STM32_CFG_I2C2_SEL == RCC_CCIPR1_I2C2SEL_PCLK1) || defined(__DOXYGEN__)
  #if (STM32_I2C2_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_I2C2_BITS                 RCC_CCIPR1_I2C2SEL_PCLK1
  #else
    #define STM32_I2C2_BITS                 0U
  #endif
#elif (STM32_CFG_I2C2_SEL == RCC_CCIPR1_I2C2SEL_MSIK)
  #if (STM32_I2C2_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_I2C2_BITS                 RCC_CCIPR1_I2C2SEL_MSIK
  #else
    #define STM32_I2C2_BITS                 0U
  #endif
#else
  #error "invalid STM32_CFG_I2C2_SEL value specified"
#endif

/**
 * @brief   I2C2 clock point.
 */
#if ((STM32_I2C2_ENABLED == TRUE) && \
     (STM32_CFG_I2C2_SEL == RCC_CCIPR1_I2C2SEL_PCLK1)) || \
    defined(__DOXYGEN__)
  #define STM32_I2C2_FREQ                   STM32_PCLK1_FREQ
#elif (STM32_I2C2_ENABLED == TRUE) && \
      (STM32_CFG_I2C2_SEL == RCC_CCIPR1_I2C2SEL_MSIK)
  #define STM32_I2C2_FREQ                   STM32_MSIK_FREQ
#else
  #define STM32_I2C2_FREQ                   0U
#endif

/*--- Macros and checks for the I2C3 clock point. --------------------------*/

/**
 * @brief   I2C3 clock register bits.
 */
#if (STM32_CFG_I2C3_SEL == RCC_CCIPR3_I2C3SEL_PCLK3) || defined(__DOXYGEN__)
  #if (STM32_I2C3_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_I2C3_BITS                 RCC_CCIPR3_I2C3SEL_PCLK3
  #else
    #define STM32_I2C3_BITS                 0U
  #endif
#elif (STM32_CFG_I2C3_SEL == RCC_CCIPR3_I2C3SEL_MSIK)
  #if (STM32_I2C3_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_I2C3_BITS                 RCC_CCIPR3_I2C3SEL_MSIK
  #else
    #define STM32_I2C3_BITS                 0U
  #endif
#else
  #error "invalid STM32_CFG_I2C3_SEL value specified"
#endif

/**
 * @brief   I2C3 clock point.
 */
#if ((STM32_I2C3_ENABLED == TRUE) && \
     (STM32_CFG_I2C3_SEL == RCC_CCIPR3_I2C3SEL_PCLK3)) || \
    defined(__DOXYGEN__)
  #define STM32_I2C3_FREQ                   STM32_PCLK3_FREQ
#elif (STM32_I2C3_ENABLED == TRUE) && \
      (STM32_CFG_I2C3_SEL == RCC_CCIPR3_I2C3SEL_MSIK)
  #define STM32_I2C3_FREQ                   STM32_MSIK_FREQ
#else
  #define STM32_I2C3_FREQ                   0U
#endif

/*--- Macros and checks for the I3C1 clock point. --------------------------*/

/**
 * @brief   I3C1 clock register bits.
 */
#if (STM32_CFG_I3C1_SEL == RCC_CCIPR1_I3C1SEL_PCLK1) || defined(__DOXYGEN__)
  #if (STM32_I3C1_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_I3C1_BITS                 RCC_CCIPR1_I3C1SEL_PCLK1
  #else
    #define STM32_I3C1_BITS                 0U
  #endif
#elif (STM32_CFG_I3C1_SEL == RCC_CCIPR1_I3C1SEL_MSIK)
  #if (STM32_I3C1_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_I3C1_BITS                 RCC_CCIPR1_I3C1SEL_MSIK
  #else
    #define STM32_I3C1_BITS                 0U
  #endif
#else
  #error "invalid STM32_CFG_I3C1_SEL value specified"
#endif

/**
 * @brief   I3C1 clock point.
 */
#if ((STM32_I3C1_ENABLED == TRUE) && \
     (STM32_CFG_I3C1_SEL == RCC_CCIPR1_I3C1SEL_PCLK1)) || \
    defined(__DOXYGEN__)
  #define STM32_I3C1_FREQ                   STM32_PCLK1_FREQ
#elif (STM32_I3C1_ENABLED == TRUE) && \
      (STM32_CFG_I3C1_SEL == RCC_CCIPR1_I3C1SEL_MSIK)
  #define STM32_I3C1_FREQ                   STM32_MSIK_FREQ
#else
  #define STM32_I3C1_FREQ                   0U
#endif

/*--- Macros and checks for the I3C2 clock point. --------------------------*/

/**
 * @brief   I3C2 clock register bits.
 */
#if (STM32_CFG_I3C2_SEL == RCC_CCIPR1_I3C2SEL_PCLK2) || defined(__DOXYGEN__)
  #if (STM32_I3C2_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_I3C2_BITS                 RCC_CCIPR1_I3C2SEL_PCLK2
  #else
    #define STM32_I3C2_BITS                 0U
  #endif
#elif (STM32_CFG_I3C2_SEL == RCC_CCIPR1_I3C2SEL_MSIK)
  #if (STM32_I3C2_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_I3C2_BITS                 RCC_CCIPR1_I3C2SEL_MSIK
  #else
    #define STM32_I3C2_BITS                 0U
  #endif
#else
  #error "invalid STM32_CFG_I3C2_SEL value specified"
#endif

/**
 * @brief   I3C2 clock point.
 */
#if ((STM32_I3C2_ENABLED == TRUE) && \
     (STM32_CFG_I3C2_SEL == RCC_CCIPR1_I3C2SEL_PCLK2)) || \
    defined(__DOXYGEN__)
  #define STM32_I3C2_FREQ                   STM32_PCLK2_FREQ
#elif (STM32_I3C2_ENABLED == TRUE) && \
      (STM32_CFG_I3C2_SEL == RCC_CCIPR1_I3C2SEL_MSIK)
  #define STM32_I3C2_FREQ                   STM32_MSIK_FREQ
#else
  #define STM32_I3C2_FREQ                   0U
#endif

/*--- Macros and checks for the ADCDACICLK clock point. --------------------*/

/**
 * @brief   ADCDACICLK clock register bits.
 */
#if (STM32_CFG_ADCDACICLK_SEL == RCC_CCIPR2_ADCDACSEL_HCLK) ||              \
    defined(__DOXYGEN__)
  #if (STM32_ADCDACICLK_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ADCDACICLK_BITS           RCC_CCIPR2_ADCDACSEL_HCLK
  #else
    #define STM32_ADCDACICLK_BITS           0U
  #endif
#elif (STM32_CFG_ADCDACICLK_SEL == RCC_CCIPR2_ADCDACSEL_HSE)
  #if (STM32_ADCDACICLK_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ADCDACICLK_BITS           RCC_CCIPR2_ADCDACSEL_HSE
  #else
    #define STM32_ADCDACICLK_BITS           0U
  #endif
#elif (STM32_CFG_ADCDACICLK_SEL == RCC_CCIPR2_ADCDACSEL_MSIK)
  #if (STM32_ADCDACICLK_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ADCDACICLK_BITS           RCC_CCIPR2_ADCDACSEL_MSIK
  #else
    #define STM32_ADCDACICLK_BITS           0U
  #endif
#else
  #error "invalid STM32_CFG_ADCDACICLK_SEL value specified"
#endif

/**
 * @brief   ADC and DAC intermediate clock point.
 */
#if ((STM32_ADCDACICLK_ENABLED == TRUE) && \
     (STM32_CFG_ADCDACICLK_SEL == RCC_CCIPR2_ADCDACSEL_HCLK)) || \
    defined(__DOXYGEN__)
  #define STM32_ADCDACICLK_FREQ             STM32_HCLK_FREQ
#elif (STM32_ADCDACICLK_ENABLED == TRUE) && \
      (STM32_CFG_ADCDACICLK_SEL == RCC_CCIPR2_ADCDACSEL_HSE)
  #define STM32_ADCDACICLK_FREQ             STM32_HSE_FREQ
#elif (STM32_ADCDACICLK_ENABLED == TRUE) && \
      (STM32_CFG_ADCDACICLK_SEL == RCC_CCIPR2_ADCDACSEL_MSIK)
  #define STM32_ADCDACICLK_FREQ             STM32_MSIK_FREQ
#else
  #define STM32_ADCDACICLK_FREQ             0U
#endif

/*--- Macros and checks for the ADCDACPRE clock point. ---------------------*/

/**
 * @brief   ADCDACPRE clock register bits.
 */
#if (STM32_CFG_ADCDACPRE_VALUE == 1) || defined(__DOXYGEN__)
  #if (STM32_ADCDACPRE_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ADCDACPRE_BITS            RCC_CCIPR2_ADCDACPRE_ICLK
  #else
    #define STM32_ADCDACPRE_BITS            0U
  #endif
#elif (STM32_CFG_ADCDACPRE_VALUE == 2)
  #if (STM32_ADCDACPRE_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ADCDACPRE_BITS            RCC_CCIPR2_ADCDACPRE_ICLKDIV2
  #else
    #define STM32_ADCDACPRE_BITS            0U
  #endif
#elif (STM32_CFG_ADCDACPRE_VALUE == 4)
  #if (STM32_ADCDACPRE_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ADCDACPRE_BITS            RCC_CCIPR2_ADCDACPRE_ICLKDIV4
  #else
    #define STM32_ADCDACPRE_BITS            0U
  #endif
#elif (STM32_CFG_ADCDACPRE_VALUE == 8)
  #if (STM32_ADCDACPRE_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ADCDACPRE_BITS            RCC_CCIPR2_ADCDACPRE_ICLKDIV8
  #else
    #define STM32_ADCDACPRE_BITS            0U
  #endif
#elif (STM32_CFG_ADCDACPRE_VALUE == 16)
  #if (STM32_ADCDACPRE_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ADCDACPRE_BITS            RCC_CCIPR2_ADCDACPRE_ICLKDIV16
  #else
    #define STM32_ADCDACPRE_BITS            0U
  #endif
#elif (STM32_CFG_ADCDACPRE_VALUE == 32)
  #if (STM32_ADCDACPRE_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ADCDACPRE_BITS            RCC_CCIPR2_ADCDACPRE_ICLKDIV32
  #else
    #define STM32_ADCDACPRE_BITS            0U
  #endif
#elif (STM32_CFG_ADCDACPRE_VALUE == 64)
  #if (STM32_ADCDACPRE_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ADCDACPRE_BITS            RCC_CCIPR2_ADCDACPRE_ICLKDIV64
  #else
    #define STM32_ADCDACPRE_BITS            0U
  #endif
#elif (STM32_CFG_ADCDACPRE_VALUE == 128)
  #if (STM32_ADCDACPRE_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ADCDACPRE_BITS            RCC_CCIPR2_ADCDACPRE_ICLKDIV128
  #else
    #define STM32_ADCDACPRE_BITS            0U
  #endif
#elif (STM32_CFG_ADCDACPRE_VALUE == 256)
  #if (STM32_ADCDACPRE_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ADCDACPRE_BITS            RCC_CCIPR2_ADCDACPRE_ICLKDIV256
  #else
    #define STM32_ADCDACPRE_BITS            0U
  #endif
#elif (STM32_CFG_ADCDACPRE_VALUE == 512)
  #if (STM32_ADCDACPRE_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ADCDACPRE_BITS            RCC_CCIPR2_ADCDACPRE_ICLKDIV512
  #else
    #define STM32_ADCDACPRE_BITS            0U
  #endif
#else
  #error "invalid STM32_CFG_ADCDACPRE_VALUE value specified"
#endif

/**
 * @brief   ADC and DAC prescaled clock point.
 */
#if (STM32_ADCDACPRE_ENABLED == TRUE) || defined(__DOXYGEN__)
  #define STM32_ADCDACPRE_FREQ              (STM32_ADCDACICLK_FREQ /        \
                                             STM32_CFG_ADCDACPRE_VALUE)
#else
  #define STM32_ADCDACPRE_FREQ              0U
#endif

/*--- Macros and checks for the ADCDAC clock point. ------------------------*/

/**
 * @brief   ADCDAC clock register bits.
 */
#define STM32_ADCDAC_BITS                   0U

/**
 * @brief   ADC and DAC clock point.
 */
#if (STM32_ADCDAC_ENABLED == TRUE) || defined(__DOXYGEN__)
  #define STM32_ADCDAC_FREQ                 STM32_ADCDACPRE_FREQ
#else
  #define STM32_ADCDAC_FREQ                 0U
#endif

#if !((STM32_ADCDAC_ENABLED != TRUE) ||                                     \
     (STM32_ADCDAC_FREQ <= STM32_ADCCLK_MAX)) && !defined(__DOXYGEN__)
  #error "STM32_ADCDAC_FREQ above maximum frequency"
#endif

/*--- Macros and checks for the DAC1SH clock point. ------------------------*/

/**
 * @brief   DAC1SH clock register bits.
 */
#if (STM32_CFG_DAC1SH_SEL == RCC_CCIPR2_DAC1SHSEL_LSE) || defined(__DOXYGEN__)
  #if (STM32_DAC1SH_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_DAC1SH_BITS               RCC_CCIPR2_DAC1SHSEL_LSE
  #else
    #define STM32_DAC1SH_BITS               0U
  #endif
#elif (STM32_CFG_DAC1SH_SEL == RCC_CCIPR2_DAC1SHSEL_LSI)
  #if (STM32_DAC1SH_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_DAC1SH_BITS               RCC_CCIPR2_DAC1SHSEL_LSI
  #else
    #define STM32_DAC1SH_BITS               0U
  #endif
#elif (STM32_DAC1SH_ENABLED == FALSE) &&                                    \
      (STM32_CFG_DAC1SH_SEL == RCC_CCIPR2_DAC1SHSEL_IGNORE)
  #define STM32_DAC1SH_BITS                 0U
#else
  #error "invalid STM32_CFG_DAC1SH_SEL value specified"
#endif

/**
 * @brief   DAC1 sample and hold clock point.
 */
#if ((STM32_DAC1SH_ENABLED == TRUE) && \
     (STM32_CFG_DAC1SH_SEL == RCC_CCIPR2_DAC1SHSEL_LSE)) || \
    defined(__DOXYGEN__)
  #define STM32_DAC1SH_FREQ                 STM32_LSE_FREQ
#elif (STM32_DAC1SH_ENABLED == TRUE) && \
      (STM32_CFG_DAC1SH_SEL == RCC_CCIPR2_DAC1SHSEL_LSI)
  #define STM32_DAC1SH_FREQ                 STM32_LSI_FREQ
#else
  #define STM32_DAC1SH_FREQ                 0U
#endif

/*--- Macros and checks for the RNG clock point. ---------------------------*/

/**
 * @brief   RNG clock register bits.
 */
#if (STM32_CFG_RNG_SEL == RCC_CCIPR2_RNGSEL_HSI48) || defined(__DOXYGEN__)
  #if (STM32_RNG_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_RNG_BITS                  RCC_CCIPR2_RNGSEL_HSI48
  #else
    #define STM32_RNG_BITS                  0U
  #endif
#elif (STM32_CFG_RNG_SEL == RCC_CCIPR2_RNGSEL_MSIK)
  #if (STM32_RNG_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_RNG_BITS                  RCC_CCIPR2_RNGSEL_MSIK
  #else
    #define STM32_RNG_BITS                  0U
  #endif
#elif (STM32_RNG_ENABLED == FALSE) &&                                       \
      (STM32_CFG_RNG_SEL == RCC_CCIPR2_RNGSEL_IGNORE)
  #define STM32_RNG_BITS                    0U
#else
  #error "invalid STM32_CFG_RNG_SEL value specified"
#endif

/**
 * @brief   RNG clock point.
 */
#if ((STM32_RNG_ENABLED == TRUE) && \
     (STM32_CFG_RNG_SEL == RCC_CCIPR2_RNGSEL_HSI48)) || \
    defined(__DOXYGEN__)
  #define STM32_RNG_FREQ                    STM32_HSI48_FREQ
#elif (STM32_RNG_ENABLED == TRUE) && \
      (STM32_CFG_RNG_SEL == RCC_CCIPR2_RNGSEL_MSIK)
  #define STM32_RNG_FREQ                    STM32_MSIK_FREQ
#else
  #define STM32_RNG_FREQ                    0U
#endif

/*--- Macros and checks for the FDCAN1 clock point. ------------------------*/

/**
 * @brief   FDCAN1 clock register bits.
 */
#if (STM32_CFG_FDCAN1_SEL == RCC_CCIPR1_FDCAN1SEL_SYSCLK) ||                \
    defined(__DOXYGEN__)
  #if (STM32_FDCAN1_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_FDCAN1_BITS               RCC_CCIPR1_FDCAN1SEL_SYSCLK
  #else
    #define STM32_FDCAN1_BITS               0U
  #endif
#elif (STM32_CFG_FDCAN1_SEL == RCC_CCIPR1_FDCAN1SEL_MSIK)
  #if (STM32_FDCAN1_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_FDCAN1_BITS               RCC_CCIPR1_FDCAN1SEL_MSIK
  #else
    #define STM32_FDCAN1_BITS               0U
  #endif
#elif (STM32_FDCAN1_ENABLED == FALSE) &&                                    \
      (STM32_CFG_FDCAN1_SEL == RCC_CCIPR1_FDCAN1SEL_IGNORE)
  #define STM32_FDCAN1_BITS                 0U
#else
  #error "invalid STM32_CFG_FDCAN1_SEL value specified"
#endif

/**
 * @brief   FDCAN1 clock point.
 */
#if ((STM32_FDCAN1_ENABLED == TRUE) && \
     (STM32_CFG_FDCAN1_SEL == RCC_CCIPR1_FDCAN1SEL_SYSCLK)) || \
    defined(__DOXYGEN__)
  #define STM32_FDCAN1_FREQ                 STM32_SYSCLK_FREQ
#elif (STM32_FDCAN1_ENABLED == TRUE) && \
      (STM32_CFG_FDCAN1_SEL == RCC_CCIPR1_FDCAN1SEL_MSIK)
  #define STM32_FDCAN1_FREQ                 STM32_MSIK_FREQ
#else
  #define STM32_FDCAN1_FREQ                 0U
#endif

/*--- Macros and checks for the SAI1 clock point. --------------------------*/

/**
 * @brief   SAI1 clock register bits.
 */
#if (STM32_CFG_SAI1_SEL == RCC_CCIPR2_SAI1SEL_MSIK) || defined(__DOXYGEN__)
  #if (STM32_SAI1_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_SAI1_BITS                 RCC_CCIPR2_SAI1SEL_MSIK
  #else
    #define STM32_SAI1_BITS                 0U
  #endif
#elif (STM32_CFG_SAI1_SEL == RCC_CCIPR2_SAI1SEL_AUDIOCLK)
  #if (STM32_SAI1_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_SAI1_BITS                 RCC_CCIPR2_SAI1SEL_AUDIOCLK
  #else
    #define STM32_SAI1_BITS                 0U
  #endif
#elif (STM32_CFG_SAI1_SEL == RCC_CCIPR2_SAI1SEL_HSE)
  #if (STM32_SAI1_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_SAI1_BITS                 RCC_CCIPR2_SAI1SEL_HSE
  #else
    #define STM32_SAI1_BITS                 0U
  #endif
#else
  #error "invalid STM32_CFG_SAI1_SEL value specified"
#endif

/**
 * @brief   SAI1 clock point.
 */
#if ((STM32_SAI1_ENABLED == TRUE) && \
     (STM32_CFG_SAI1_SEL == RCC_CCIPR2_SAI1SEL_MSIK)) || \
    defined(__DOXYGEN__)
  #define STM32_SAI1_FREQ                   STM32_MSIK_FREQ
#elif (STM32_SAI1_ENABLED == TRUE) && \
      (STM32_CFG_SAI1_SEL == RCC_CCIPR2_SAI1SEL_AUDIOCLK)
  #define STM32_SAI1_FREQ                   STM32_AUDIOCLK_FREQ
#elif (STM32_SAI1_ENABLED == TRUE) && \
      (STM32_CFG_SAI1_SEL == RCC_CCIPR2_SAI1SEL_HSE)
  #define STM32_SAI1_FREQ                   STM32_HSE_FREQ
#else
  #define STM32_SAI1_FREQ                   0U
#endif

/*--- Macros and checks for the ADF1 clock point. --------------------------*/

/**
 * @brief   ADF1 clock register bits.
 */
#if (STM32_CFG_ADF1_SEL == RCC_CCIPR2_ADF1SEL_HCLK) || defined(__DOXYGEN__)
  #if (STM32_ADF1_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ADF1_BITS                 RCC_CCIPR2_ADF1SEL_HCLK
  #else
    #define STM32_ADF1_BITS                 0U
  #endif
#elif (STM32_CFG_ADF1_SEL == RCC_CCIPR2_ADF1SEL_AUDIOCLK)
  #if (STM32_ADF1_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ADF1_BITS                 RCC_CCIPR2_ADF1SEL_AUDIOCLK
  #else
    #define STM32_ADF1_BITS                 0U
  #endif
#elif (STM32_CFG_ADF1_SEL == RCC_CCIPR2_ADF1SEL_HSE)
  #if (STM32_ADF1_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ADF1_BITS                 RCC_CCIPR2_ADF1SEL_HSE
  #else
    #define STM32_ADF1_BITS                 0U
  #endif
#elif (STM32_CFG_ADF1_SEL == RCC_CCIPR2_ADF1SEL_SAI1)
  #if (STM32_ADF1_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ADF1_BITS                 RCC_CCIPR2_ADF1SEL_SAI1
  #else
    #define STM32_ADF1_BITS                 0U
  #endif
#else
  #error "invalid STM32_CFG_ADF1_SEL value specified"
#endif

/**
 * @brief   ADF1 clock point.
 */
#if ((STM32_ADF1_ENABLED == TRUE) && \
     (STM32_CFG_ADF1_SEL == RCC_CCIPR2_ADF1SEL_HCLK)) || \
    defined(__DOXYGEN__)
  #define STM32_ADF1_FREQ                   STM32_HCLK_FREQ
#elif (STM32_ADF1_ENABLED == TRUE) && \
      (STM32_CFG_ADF1_SEL == RCC_CCIPR2_ADF1SEL_AUDIOCLK)
  #define STM32_ADF1_FREQ                   STM32_AUDIOCLK_FREQ
#elif (STM32_ADF1_ENABLED == TRUE) && \
      (STM32_CFG_ADF1_SEL == RCC_CCIPR2_ADF1SEL_HSE)
  #define STM32_ADF1_FREQ                   STM32_HSE_FREQ
#elif (STM32_ADF1_ENABLED == TRUE) && \
      (STM32_CFG_ADF1_SEL == RCC_CCIPR2_ADF1SEL_SAI1)
  #define STM32_ADF1_FREQ                   STM32_SAI1_FREQ
#else
  #define STM32_ADF1_FREQ                   0U
#endif

/*
 * Sink-specific frequency checks.
 */
#if !(!((HAL_USE_USB == TRUE) && (STM32_USB_USE_USB1 == TRUE)) ||           \
     (STM32_USB_FREQ >= STM32_USBCLK_MIN)) && !defined(__DOXYGEN__)
  #error "STM32_USB_FREQ below minimum frequency for USB1_DRIVER"
#endif

#if !(!((HAL_USE_USB == TRUE) && (STM32_USB_USE_USB1 == TRUE)) ||           \
     (STM32_USB_FREQ <= STM32_USBCLK_MAX)) && !defined(__DOXYGEN__)
  #error "STM32_USB_FREQ above maximum frequency for USB1_DRIVER"
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
#define STM32_AUDIOCLK_CLOCK                STM32_AUDIOCLK_FREQ
#define STM32_HSI16_CLOCK                   hal_lld_get_clock_point(CLK_HSI16)
#define STM32_HSI48_CLOCK                   hal_lld_get_clock_point(CLK_HSI48)
#define STM32_HSE_CLOCK                     hal_lld_get_clock_point(CLK_HSE)
#define STM32_LSE_CLOCK                     STM32_LSE_FREQ
#define STM32_LSI_CLOCK                     STM32_LSI_FREQ
#define STM32_MSIRC0_CLOCK                  STM32_MSIRC0_FREQ
#define STM32_MSIRC1_CLOCK                  STM32_MSIRC1_FREQ
#define STM32_MSIS_CLOCK                    hal_lld_get_clock_point(CLK_MSIS)
#define STM32_MSIK_CLOCK                    hal_lld_get_clock_point(CLK_MSIK)
#define STM32_SYSCLK_CLOCK                  hal_lld_get_clock_point(CLK_SYSCLK)
#define STM32_HCLK_CLOCK                    hal_lld_get_clock_point(CLK_HCLK)
#define STM32_PCLK1_CLOCK                   hal_lld_get_clock_point(CLK_PCLK1)
#define STM32_PCLK1TIM_CLOCK                hal_lld_get_clock_point(CLK_PCLK1TIM)
#define STM32_PCLK2_CLOCK                   hal_lld_get_clock_point(CLK_PCLK2)
#define STM32_PCLK2TIM_CLOCK                hal_lld_get_clock_point(CLK_PCLK2TIM)
#define STM32_PCLK3_CLOCK                   hal_lld_get_clock_point(CLK_PCLK3)
#define STM32_HSEDIV_CLOCK                  STM32_HSEDIV_FREQ
#define STM32_HCLKDIV8_CLOCK                STM32_HCLKDIV8_FREQ
#define STM32_MCO1DIV_CLOCK                 STM32_MCO1DIV_FREQ
#define STM32_MCO1_CLOCK                    hal_lld_get_clock_point(CLK_MCO1)
#define STM32_MCO2DIV_CLOCK                 STM32_MCO2DIV_FREQ
#define STM32_MCO2_CLOCK                    hal_lld_get_clock_point(CLK_MCO2)
#define STM32_RTC_CLOCK                     STM32_RTC_FREQ
#define STM32_LSCO_CLOCK                    STM32_LSCO_FREQ
#define STM32_USART1_CLOCK                  STM32_USART1_FREQ
#define STM32_USART3_CLOCK                  STM32_USART3_FREQ
#define STM32_UART4_CLOCK                   STM32_UART4_FREQ
#define STM32_UART5_CLOCK                   STM32_UART5_FREQ
#define STM32_LPUART1_CLOCK                 STM32_LPUART1_FREQ
#define STM32_LPTIM1_CLOCK                  STM32_LPTIM1_FREQ
#define STM32_LPTIM2_CLOCK                  STM32_LPTIM2_FREQ
#define STM32_LPTIM34_CLOCK                 STM32_LPTIM34_FREQ
#define STM32_SPI1_CLOCK                    STM32_SPI1_FREQ
#define STM32_SPI2_CLOCK                    STM32_SPI2_FREQ
#define STM32_SPI3_CLOCK                    STM32_SPI3_FREQ
#define STM32_OCTOSPI_CLOCK                 STM32_OCTOSPI_FREQ
#define STM32_SYSTICK_CLOCK                 STM32_SYSTICK_FREQ
#define STM32_TIM16IC_CLOCK                 STM32_TIM16IC_FREQ
#define STM32_TIM17IC_CLOCK                 STM32_TIM17IC_FREQ
#define STM32_LPTIM2IC_CLOCK                STM32_LPTIM2IC_FREQ
#define STM32_ICLK_CLOCK                    STM32_ICLK_FREQ
#define STM32_ICLKDIV2_CLOCK                STM32_ICLKDIV2_FREQ
#define STM32_USB_CLOCK                     STM32_USB_FREQ
#define STM32_SDMMC1_CLOCK                  STM32_SDMMC1_FREQ
#define STM32_I2C1_CLOCK                    STM32_I2C1_FREQ
#define STM32_I2C2_CLOCK                    STM32_I2C2_FREQ
#define STM32_I2C3_CLOCK                    STM32_I2C3_FREQ
#define STM32_I3C1_CLOCK                    STM32_I3C1_FREQ
#define STM32_I3C2_CLOCK                    STM32_I3C2_FREQ
#define STM32_ADCDACICLK_CLOCK              STM32_ADCDACICLK_FREQ
#define STM32_ADCDACPRE_CLOCK               STM32_ADCDACPRE_FREQ
#define STM32_ADCDAC_CLOCK                  STM32_ADCDAC_FREQ
#define STM32_DAC1SH_CLOCK                  STM32_DAC1SH_FREQ
#define STM32_RNG_CLOCK                     STM32_RNG_FREQ
#define STM32_FDCAN1_CLOCK                  STM32_FDCAN1_FREQ
#define STM32_SAI1_CLOCK                    STM32_SAI1_FREQ
#define STM32_ADF1_CLOCK                    STM32_ADF1_FREQ
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
   (clkpt) == CLK_HSE          ? STM32_HSE_FREQ           :                 \
   (clkpt) == CLK_MSIS         ? STM32_MSIS_FREQ          :                 \
   (clkpt) == CLK_MSIK         ? STM32_MSIK_FREQ          :                 \
   (clkpt) == CLK_SYSCLK       ? STM32_SYSCLK_FREQ        :                 \
   (clkpt) == CLK_HCLK         ? STM32_HCLK_FREQ          :                 \
   (clkpt) == CLK_PCLK1        ? STM32_PCLK1_FREQ         :                 \
   (clkpt) == CLK_PCLK1TIM     ? STM32_PCLK1TIM_FREQ      :                 \
   (clkpt) == CLK_PCLK2        ? STM32_PCLK2_FREQ         :                 \
   (clkpt) == CLK_PCLK2TIM     ? STM32_PCLK2TIM_FREQ      :                 \
   (clkpt) == CLK_PCLK3        ? STM32_PCLK3_FREQ         :                 \
   (clkpt) == CLK_MCO1         ? STM32_MCO1_FREQ          :                 \
   (clkpt) == CLK_MCO2         ? STM32_MCO2_FREQ          :                 \
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
