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
#define CLK_MCO                 31U
#define CLK_ARRAY_SIZE          32U

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
    "PCLK3",                                                                \
    "MCO"                                                                   \
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
#define RCC_CFGR1_STOPWUCK_MSIS             ((0U) << RCC_CFGR1_STOPWUCK_Pos)
#define RCC_CFGR1_STOPWUCK_HSI16            ((1U) << RCC_CFGR1_STOPWUCK_Pos)
#define RCC_CFGR1_STOPKERWUCK_MSIK          ((0U) << RCC_CFGR1_STOPKERWUCK_Pos)
#define RCC_CFGR1_STOPKERWUCK_HSI16         ((1U) << RCC_CFGR1_STOPKERWUCK_Pos)
#define RCC_CCIPR1_TIMICSEL_NOCLOCK         ((0U) << RCC_CCIPR1_TIMICSEL_Pos)
#define RCC_CCIPR1_TIMICSEL_HSI256_MSIS1024_MSIS4 ((4U) << RCC_CCIPR1_TIMICSEL_Pos)
#define RCC_CCIPR1_TIMICSEL_HSI256_MSIS1024_MSIK4 ((5U) << RCC_CCIPR1_TIMICSEL_Pos)
#define RCC_CCIPR1_TIMICSEL_HSI256_MSIK1024_MSIS4 ((6U) << RCC_CCIPR1_TIMICSEL_Pos)
#define RCC_CCIPR1_TIMICSEL_HSI256_MSIK1024_MSIK4 ((7U) << RCC_CCIPR1_TIMICSEL_Pos)
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

#define RCC_CFGR1_MCOSEL_NOCLOCK            ((0U) << 24U)
#define RCC_CFGR1_MCOSEL_SYSCLK             ((1U) << 24U)
#define RCC_CFGR1_MCOSEL_MSIS               ((2U) << 24U)
#define RCC_CFGR1_MCOSEL_HSI16              ((3U) << 24U)
#define RCC_CFGR1_MCOSEL_HSE                ((4U) << 24U)
#define RCC_CFGR1_MCOSEL_PLL1R              ((5U) << 24U)
#define RCC_CFGR1_MCOSEL_LSI                ((6U) << 24U)
#define RCC_CFGR1_MCOSEL_LSE                ((7U) << 24U)
#define RCC_CFGR1_MCOSEL_HSI48              ((8U) << 24U)
#define RCC_CFGR1_MCOSEL_MSIK               ((9U) << 24U)

#define RCC_BDCR_RTCSEL_NOCLOCK             ((0U) << 8U)
#define RCC_BDCR_RTCSEL_LSE                 ((1U) << 8U)
#define RCC_BDCR_RTCSEL_LSI                 ((2U) << 8U)
#define RCC_BDCR_RTCSEL_HSEDIV              ((3U) << 8U)

#define RCC_CCIPR1_USART1SEL_PCLK2          ((0U) << 0U)
#define RCC_CCIPR1_USART1SEL_SYSCLK         ((1U) << 0U)
#define RCC_CCIPR1_USART1SEL_HSI16          ((2U) << 0U)
#define RCC_CCIPR1_USART1SEL_LSE            ((3U) << 0U)

#define RCC_CCIPR1_USART2SEL_PCLK1          ((0U) << 2U)
#define RCC_CCIPR1_USART2SEL_SYSCLK         ((1U) << 2U)
#define RCC_CCIPR1_USART2SEL_HSI16          ((2U) << 2U)
#define RCC_CCIPR1_USART2SEL_LSE            ((3U) << 2U)

#define RCC_CCIPR1_USART3SEL_PCLK1          ((0U) << 4U)
#define RCC_CCIPR1_USART3SEL_SYSCLK         ((1U) << 4U)
#define RCC_CCIPR1_USART3SEL_HSI16          ((2U) << 4U)
#define RCC_CCIPR1_USART3SEL_LSE            ((3U) << 4U)

#define RCC_CCIPR1_UART4SEL_PCLK1           ((0U) << 6U)
#define RCC_CCIPR1_UART4SEL_SYSCLK          ((1U) << 6U)
#define RCC_CCIPR1_UART4SEL_HSI16           ((2U) << 6U)
#define RCC_CCIPR1_UART4SEL_LSE             ((3U) << 6U)

#define RCC_CCIPR1_UART5SEL_PCLK1           ((0U) << 8U)
#define RCC_CCIPR1_UART5SEL_SYSCLK          ((1U) << 8U)
#define RCC_CCIPR1_UART5SEL_HSI16           ((2U) << 8U)
#define RCC_CCIPR1_UART5SEL_LSE             ((3U) << 8U)

#define RCC_CCIPR3_LPUART1SEL_PCLK3         ((0U) << 0U)
#define RCC_CCIPR3_LPUART1SEL_SYSCLK        ((1U) << 0U)
#define RCC_CCIPR3_LPUART1SEL_HSI16         ((2U) << 0U)
#define RCC_CCIPR3_LPUART1SEL_LSE           ((3U) << 0U)
#define RCC_CCIPR3_LPUART1SEL_MSIK          ((4U) << 0U)

#define RCC_CCIPR1_I2C1SEL_PCLK1            ((0U) << 10U)
#define RCC_CCIPR1_I2C1SEL_SYSCLK           ((1U) << 10U)
#define RCC_CCIPR1_I2C1SEL_HSI16            ((2U) << 10U)
#define RCC_CCIPR1_I2C1SEL_MSIK             ((3U) << 10U)

#define RCC_CCIPR1_I2C2SEL_PCLK1            ((0U) << 12U)
#define RCC_CCIPR1_I2C2SEL_SYSCLK           ((1U) << 12U)
#define RCC_CCIPR1_I2C2SEL_HSI16            ((2U) << 12U)
#define RCC_CCIPR1_I2C2SEL_MSIK             ((3U) << 12U)

#define RCC_CCIPR1_I2C4SEL_PCLK1            ((0U) << 14U)
#define RCC_CCIPR1_I2C4SEL_SYSCLK           ((1U) << 14U)
#define RCC_CCIPR1_I2C4SEL_HSI16            ((2U) << 14U)
#define RCC_CCIPR1_I2C4SEL_MSIK             ((3U) << 14U)

#define RCC_CCIPR3_I2C3SEL_PCLK3            ((0U) << 6U)
#define RCC_CCIPR3_I2C3SEL_SYSCLK           ((1U) << 6U)
#define RCC_CCIPR3_I2C3SEL_HSI16            ((2U) << 6U)
#define RCC_CCIPR3_I2C3SEL_MSIK             ((3U) << 6U)

#define RCC_CCIPR1_SPI1SEL_PCLK2            ((0U) << 20U)
#define RCC_CCIPR1_SPI1SEL_SYSCLK           ((1U) << 20U)
#define RCC_CCIPR1_SPI1SEL_HSI16            ((2U) << 20U)
#define RCC_CCIPR1_SPI1SEL_MSIK             ((3U) << 20U)

#define RCC_CCIPR1_SPI2SEL_PCLK1            ((0U) << 16U)
#define RCC_CCIPR1_SPI2SEL_SYSCLK           ((1U) << 16U)
#define RCC_CCIPR1_SPI2SEL_HSI16            ((2U) << 16U)
#define RCC_CCIPR1_SPI2SEL_MSIK             ((3U) << 16U)

#define RCC_CCIPR3_SPI3SEL_PCLK3            ((0U) << 3U)
#define RCC_CCIPR3_SPI3SEL_SYSCLK           ((1U) << 3U)
#define RCC_CCIPR3_SPI3SEL_HSI16            ((2U) << 3U)
#define RCC_CCIPR3_SPI3SEL_MSIK             ((3U) << 3U)

#define RCC_CCIPR1_FDCANSEL_HSE             ((0U) << 24U)
#define RCC_CCIPR1_FDCANSEL_PLL1Q           ((1U) << 24U)
#define RCC_CCIPR1_FDCANSEL_PLL2P           ((2U) << 24U)
#define RCC_CCIPR1_FDCANSEL_IGNORE          0xFFFFFFFFU

#define RCC_CCIPR1_SYSTICKSEL_HCLKDIV8      ((0U) << 22U)
#define RCC_CCIPR1_SYSTICKSEL_LSI           ((1U) << 22U)
#define RCC_CCIPR1_SYSTICKSEL_LSE           ((2U) << 22U)
#define RCC_CCIPR1_SYSTICKSEL_IGNORE        0xFFFFFFFFU

#define RCC_CCIPR1_ICLKSEL_HSI48            ((0U) << 26U)
#define RCC_CCIPR1_ICLKSEL_PLL2Q            ((1U) << 26U)
#define RCC_CCIPR1_ICLKSEL_PLL1Q            ((2U) << 26U)
#define RCC_CCIPR1_ICLKSEL_MSIK             ((3U) << 26U)

#define RCC_CCIPR2_SDMMCSEL_ICLK            ((0U) << 14U)
#define RCC_CCIPR2_SDMMCSEL_PLL1P           ((1U) << 14U)

#define RCC_CCIPR2_OCTOSPISEL_SYSCLK        ((0U) << 20U)
#define RCC_CCIPR2_OCTOSPISEL_MSIK          ((1U) << 20U)
#define RCC_CCIPR2_OCTOSPISEL_PLL1Q         ((2U) << 20U)
#define RCC_CCIPR2_OCTOSPISEL_PLL2Q         ((3U) << 20U)
#define RCC_CCIPR2_OCTOSPISEL_IGNORE        0xFFFFFFFFU

#define RCC_CCIPR2_RNGSEL_HSI48             ((0U) << 12U)
#define RCC_CCIPR2_RNGSEL_HSI48DIV2         ((1U) << 12U)
#define RCC_CCIPR2_RNGSEL_HSI16             ((2U) << 12U)
#define RCC_CCIPR2_RNGSEL_IGNORE            0xFFFFFFFFU

#define RCC_CCIPR2_SAI1SEL_PLL2P            ((0U) << 5U)
#define RCC_CCIPR2_SAI1SEL_PLL3P            ((1U) << 5U)
#define RCC_CCIPR2_SAI1SEL_PLL1P            ((2U) << 5U)
#define RCC_CCIPR2_SAI1SEL_AUDIOCLK         ((3U) << 5U)
#define RCC_CCIPR2_SAI1SEL_HSI16            ((4U) << 5U)
#define RCC_CCIPR2_SAI1SEL_IGNORE           0xFFFFFFFFU

#define RCC_CCIPR2_SAI2SEL_PLL2P            ((0U) << 8U)
#define RCC_CCIPR2_SAI2SEL_PLL3P            ((1U) << 8U)
#define RCC_CCIPR2_SAI2SEL_PLL1P            ((2U) << 8U)
#define RCC_CCIPR2_SAI2SEL_AUDIOCLK         ((3U) << 8U)
#define RCC_CCIPR2_SAI2SEL_HSI16            ((4U) << 8U)
#define RCC_CCIPR2_SAI2SEL_IGNORE           0xFFFFFFFFU

#define RCC_CCIPR2_MDF1SEL_HCLK             ((0U) << 0U)
#define RCC_CCIPR2_MDF1SEL_PLL1P            ((1U) << 0U)
#define RCC_CCIPR2_MDF1SEL_PLL3Q            ((2U) << 0U)
#define RCC_CCIPR2_MDF1SEL_AUDIOCLK         ((3U) << 0U)
#define RCC_CCIPR2_MDF1SEL_MSIK             ((4U) << 0U)
#define RCC_CCIPR2_MDF1SEL_IGNORE           0xFFFFFFFFU

#define RCC_CCIPR3_ADF1SEL_HCLK             ((0U) << 16U)
#define RCC_CCIPR3_ADF1SEL_PLL1P            ((1U) << 16U)
#define RCC_CCIPR3_ADF1SEL_PLL3Q            ((2U) << 16U)
#define RCC_CCIPR3_ADF1SEL_AUDIOCLK         ((3U) << 16U)
#define RCC_CCIPR3_ADF1SEL_MSIK             ((4U) << 16U)
#define RCC_CCIPR3_ADF1SEL_IGNORE           0xFFFFFFFFU

#define RCC_CCIPR3_ADCDACSEL_HCLK           ((0U) << 12U)
#define RCC_CCIPR3_ADCDACSEL_SYSCLK         ((1U) << 12U)
#define RCC_CCIPR3_ADCDACSEL_PLL2R          ((2U) << 12U)
#define RCC_CCIPR3_ADCDACSEL_HSE            ((3U) << 12U)
#define RCC_CCIPR3_ADCDACSEL_HSI16          ((4U) << 12U)
#define RCC_CCIPR3_ADCDACSEL_MSIK           ((5U) << 12U)
#define RCC_CCIPR3_ADCDACSEL_IGNORE         0xFFFFFFFFU

#define RCC_CCIPR3_DAC1SEL_LSE              ((0U) << 15U)
#define RCC_CCIPR3_DAC1SEL_LSI              ((1U) << 15U)
#define RCC_CCIPR3_DAC1SEL_IGNORE           0xFFFFFFFFU

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

#define RCC_CFGR1_MCOPRE_DIV1               ((0U) << 28U)
#define RCC_CFGR1_MCOPRE_DIV2               ((1U) << 28U)
#define RCC_CFGR1_MCOPRE_DIV4               ((2U) << 28U)
#define RCC_CFGR1_MCOPRE_DIV8               ((3U) << 28U)
#define RCC_CFGR1_MCOPRE_DIV16              ((4U) << 28U)
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
 * @brief   Selects the external audio clock frequency.
 */
#if !defined(STM32_CFG_AUDIOCLK) || defined(__DOXYGEN__)
  #define STM32_CFG_AUDIOCLK                0U
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
 * @brief   Selects the timer internal capture clock sources.
 */
#if !defined(STM32_CFG_TIMICSEL) || defined(__DOXYGEN__)
  #define STM32_CFG_TIMICSEL                RCC_CCIPR1_TIMICSEL_NOCLOCK
#endif

/**
 * @brief   Selects the system clock source after Stop mode.
 */
#if !defined(STM32_CFG_STOPWUCK) || defined(__DOXYGEN__)
  #define STM32_CFG_STOPWUCK                RCC_CFGR1_STOPWUCK_MSIS
#endif

/**
 * @brief   Selects the kernel clock source after Stop mode.
 */
#if !defined(STM32_CFG_STOPKERWUCK) || defined(__DOXYGEN__)
  #define STM32_CFG_STOPKERWUCK             RCC_CFGR1_STOPKERWUCK_MSIK
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
 * @brief   Enables demand for the MDF1 clock.
 */
#if !defined(STM32_CFG_MDF1_REQUIRED) || defined(__DOXYGEN__)
  #define STM32_CFG_MDF1_REQUIRED           FALSE
#endif

/**
 * @brief   Enables demand for the ADF1 clock.
 */
#if !defined(STM32_CFG_ADF1_REQUIRED) || defined(__DOXYGEN__)
  #define STM32_CFG_ADF1_REQUIRED           FALSE
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
 * @brief   Selects the MCODIV clock source.
 * @note    Allowed sources:
 *          - NONE.
 *          - SYSCLK.
 *          - MSIS.
 *          - HSI16.
 *          - HSE.
 *          - PLL1R.
 *          - LSI.
 *          - LSE.
 *          - HSI48.
 *          - MSIK.
 */
#if !defined(STM32_CFG_MCODIV_SEL) || defined(__DOXYGEN__)
  #define STM32_CFG_MCODIV_SEL              RCC_CFGR1_MCOSEL_NOCLOCK
#endif

/**
 * @brief   Configures the MCO clock divider value.
 */
#if !defined(STM32_CFG_MCO_VALUE) || defined(__DOXYGEN__)
  #define STM32_CFG_MCO_VALUE               1
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
 * @brief   Selects the USART1 clock source.
 * @note    Allowed sources:
 *          - PCLK2.
 *          - SYSCLK.
 *          - HSI16.
 *          - LSESYS.
 */
#if !defined(STM32_CFG_USART1_SEL) || defined(__DOXYGEN__)
  #define STM32_CFG_USART1_SEL              RCC_CCIPR1_USART1SEL_PCLK2
#endif

/**
 * @brief   Selects the USART2 clock source.
 * @note    Allowed sources:
 *          - PCLK1.
 *          - SYSCLK.
 *          - HSI16.
 *          - LSESYS.
 */
#if !defined(STM32_CFG_USART2_SEL) || defined(__DOXYGEN__)
  #define STM32_CFG_USART2_SEL              RCC_CCIPR1_USART2SEL_PCLK1
#endif

/**
 * @brief   Selects the USART3 clock source.
 * @note    Allowed sources:
 *          - PCLK1.
 *          - SYSCLK.
 *          - HSI16.
 *          - LSESYS.
 */
#if !defined(STM32_CFG_USART3_SEL) || defined(__DOXYGEN__)
  #define STM32_CFG_USART3_SEL              RCC_CCIPR1_USART3SEL_PCLK1
#endif

/**
 * @brief   Selects the UART4 clock source.
 * @note    Allowed sources:
 *          - PCLK1.
 *          - SYSCLK.
 *          - HSI16.
 *          - LSESYS.
 */
#if !defined(STM32_CFG_UART4_SEL) || defined(__DOXYGEN__)
  #define STM32_CFG_UART4_SEL               RCC_CCIPR1_UART4SEL_PCLK1
#endif

/**
 * @brief   Selects the UART5 clock source.
 * @note    Allowed sources:
 *          - PCLK1.
 *          - SYSCLK.
 *          - HSI16.
 *          - LSESYS.
 */
#if !defined(STM32_CFG_UART5_SEL) || defined(__DOXYGEN__)
  #define STM32_CFG_UART5_SEL               RCC_CCIPR1_UART5SEL_PCLK1
#endif

/**
 * @brief   Selects the LPUART1 clock source.
 * @note    Allowed sources:
 *          - PCLK3.
 *          - SYSCLK.
 *          - HSI16.
 *          - LSESYS.
 *          - MSIK.
 */
#if !defined(STM32_CFG_LPUART1_SEL) || defined(__DOXYGEN__)
  #define STM32_CFG_LPUART1_SEL             RCC_CCIPR3_LPUART1SEL_PCLK3
#endif

/**
 * @brief   Selects the I2C1 clock source.
 * @note    Allowed sources:
 *          - PCLK1.
 *          - SYSCLK.
 *          - HSI16.
 *          - MSIK.
 */
#if !defined(STM32_CFG_I2C1_SEL) || defined(__DOXYGEN__)
  #define STM32_CFG_I2C1_SEL                RCC_CCIPR1_I2C1SEL_PCLK1
#endif

/**
 * @brief   Selects the I2C2 clock source.
 * @note    Allowed sources:
 *          - PCLK1.
 *          - SYSCLK.
 *          - HSI16.
 *          - MSIK.
 */
#if !defined(STM32_CFG_I2C2_SEL) || defined(__DOXYGEN__)
  #define STM32_CFG_I2C2_SEL                RCC_CCIPR1_I2C2SEL_PCLK1
#endif

/**
 * @brief   Selects the I2C4 clock source.
 * @note    Allowed sources:
 *          - PCLK1.
 *          - SYSCLK.
 *          - HSI16.
 *          - MSIK.
 */
#if !defined(STM32_CFG_I2C4_SEL) || defined(__DOXYGEN__)
  #define STM32_CFG_I2C4_SEL                RCC_CCIPR1_I2C4SEL_PCLK1
#endif

/**
 * @brief   Selects the I2C3 clock source.
 * @note    Allowed sources:
 *          - PCLK3.
 *          - SYSCLK.
 *          - HSI16.
 *          - MSIK.
 */
#if !defined(STM32_CFG_I2C3_SEL) || defined(__DOXYGEN__)
  #define STM32_CFG_I2C3_SEL                RCC_CCIPR3_I2C3SEL_PCLK3
#endif

/**
 * @brief   Selects the SPI1 clock source.
 * @note    Allowed sources:
 *          - PCLK2.
 *          - SYSCLK.
 *          - HSI16.
 *          - MSIK.
 */
#if !defined(STM32_CFG_SPI1_SEL) || defined(__DOXYGEN__)
  #define STM32_CFG_SPI1_SEL                RCC_CCIPR1_SPI1SEL_PCLK2
#endif

/**
 * @brief   Selects the SPI2 clock source.
 * @note    Allowed sources:
 *          - PCLK1.
 *          - SYSCLK.
 *          - HSI16.
 *          - MSIK.
 */
#if !defined(STM32_CFG_SPI2_SEL) || defined(__DOXYGEN__)
  #define STM32_CFG_SPI2_SEL                RCC_CCIPR1_SPI2SEL_PCLK1
#endif

/**
 * @brief   Selects the SPI3 clock source.
 * @note    Allowed sources:
 *          - PCLK3.
 *          - SYSCLK.
 *          - HSI16.
 *          - MSIK.
 */
#if !defined(STM32_CFG_SPI3_SEL) || defined(__DOXYGEN__)
  #define STM32_CFG_SPI3_SEL                RCC_CCIPR3_SPI3SEL_PCLK3
#endif

/**
 * @brief   Selects the FDCAN1 clock source.
 * @note    Allowed sources:
 *          - HSE.
 *          - PLL1Q.
 *          - PLL2P.
 *          - inactive selection RCC_CCIPR1_FDCANSEL_IGNORE.
 */
#if !defined(STM32_CFG_FDCAN1_SEL) || defined(__DOXYGEN__)
  #define STM32_CFG_FDCAN1_SEL              RCC_CCIPR1_FDCANSEL_HSE
#endif

/**
 * @brief   Selects the SYSTICK clock source.
 * @note    Allowed sources:
 *          - HCLKDIV8.
 *          - LSI.
 *          - LSESYS.
 *          - inactive selection RCC_CCIPR1_SYSTICKSEL_IGNORE.
 */
#if !defined(STM32_CFG_SYSTICK_SEL) || defined(__DOXYGEN__)
  #define STM32_CFG_SYSTICK_SEL             RCC_CCIPR1_SYSTICKSEL_HCLKDIV8
#endif

/**
 * @brief   Selects the ICLK clock source.
 * @note    Allowed sources:
 *          - HSI48.
 *          - PLL2Q.
 *          - PLL1Q.
 *          - MSIK.
 */
#if !defined(STM32_CFG_ICLK_SEL) || defined(__DOXYGEN__)
  #define STM32_CFG_ICLK_SEL                RCC_CCIPR1_ICLKSEL_HSI48
#endif

/**
 * @brief   Selects the SDMMC clock source.
 * @note    Allowed sources:
 *          - ICLK.
 *          - PLL1P.
 */
#if !defined(STM32_CFG_SDMMC_SEL) || defined(__DOXYGEN__)
  #define STM32_CFG_SDMMC_SEL               RCC_CCIPR2_SDMMCSEL_ICLK
#endif

/**
 * @brief   Selects the OCTOSPI clock source.
 * @note    Allowed sources:
 *          - SYSCLK.
 *          - MSIK.
 *          - PLL1Q.
 *          - PLL2Q.
 *          - inactive selection RCC_CCIPR2_OCTOSPISEL_IGNORE.
 */
#if !defined(STM32_CFG_OCTOSPI_SEL) || defined(__DOXYGEN__)
  #define STM32_CFG_OCTOSPI_SEL             RCC_CCIPR2_OCTOSPISEL_SYSCLK
#endif

/**
 * @brief   Selects the RNG clock source.
 * @note    Allowed sources:
 *          - HSI48.
 *          - HSI48DIV2.
 *          - HSI16.
 *          - inactive selection RCC_CCIPR2_RNGSEL_IGNORE.
 */
#if !defined(STM32_CFG_RNG_SEL) || defined(__DOXYGEN__)
  #define STM32_CFG_RNG_SEL                 RCC_CCIPR2_RNGSEL_HSI48
#endif

/**
 * @brief   Selects the SAI1 clock source.
 * @note    Allowed sources:
 *          - PLL2P.
 *          - PLL3P.
 *          - PLL1P.
 *          - AUDIOCLK.
 *          - HSI16.
 *          - inactive selection RCC_CCIPR2_SAI1SEL_IGNORE.
 */
#if !defined(STM32_CFG_SAI1_SEL) || defined(__DOXYGEN__)
  #define STM32_CFG_SAI1_SEL                RCC_CCIPR2_SAI1SEL_PLL2P
#endif

/**
 * @brief   Selects the SAI2 clock source.
 * @note    Allowed sources:
 *          - PLL2P.
 *          - PLL3P.
 *          - PLL1P.
 *          - AUDIOCLK.
 *          - HSI16.
 *          - inactive selection RCC_CCIPR2_SAI2SEL_IGNORE.
 */
#if !defined(STM32_CFG_SAI2_SEL) || defined(__DOXYGEN__)
  #define STM32_CFG_SAI2_SEL                RCC_CCIPR2_SAI2SEL_PLL2P
#endif

/**
 * @brief   Selects the MDF1 clock source.
 * @note    Allowed sources:
 *          - HCLK.
 *          - PLL1P.
 *          - PLL3Q.
 *          - AUDIOCLK.
 *          - MSIK.
 *          - inactive selection RCC_CCIPR2_MDF1SEL_IGNORE.
 */
#if !defined(STM32_CFG_MDF1_SEL) || defined(__DOXYGEN__)
  #define STM32_CFG_MDF1_SEL                RCC_CCIPR2_MDF1SEL_HCLK
#endif

/**
 * @brief   Selects the ADF1 clock source.
 * @note    Allowed sources:
 *          - HCLK.
 *          - PLL1P.
 *          - PLL3Q.
 *          - AUDIOCLK.
 *          - MSIK.
 *          - inactive selection RCC_CCIPR3_ADF1SEL_IGNORE.
 */
#if !defined(STM32_CFG_ADF1_SEL) || defined(__DOXYGEN__)
  #define STM32_CFG_ADF1_SEL                RCC_CCIPR3_ADF1SEL_HCLK
#endif

/**
 * @brief   Selects the ADCDAC clock source.
 * @note    Allowed sources:
 *          - HCLK.
 *          - SYSCLK.
 *          - PLL2R.
 *          - HSE.
 *          - HSI16.
 *          - MSIK.
 *          - inactive selection RCC_CCIPR3_ADCDACSEL_IGNORE.
 */
#if !defined(STM32_CFG_ADCDAC_SEL) || defined(__DOXYGEN__)
  #define STM32_CFG_ADCDAC_SEL              RCC_CCIPR3_ADCDACSEL_HCLK
#endif

/**
 * @brief   Selects the DAC1SH clock source.
 * @note    Allowed sources:
 *          - LSESYS.
 *          - LSI.
 *          - inactive selection RCC_CCIPR3_DAC1SEL_IGNORE.
 */
#if !defined(STM32_CFG_DAC1SH_SEL) || defined(__DOXYGEN__)
  #define STM32_CFG_DAC1SH_SEL              RCC_CCIPR3_DAC1SEL_LSE
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

#if !((STM32_CFG_TIMICSEL == RCC_CCIPR1_TIMICSEL_NOCLOCK) ||                \
     (STM32_CFG_TIMICSEL == RCC_CCIPR1_TIMICSEL_HSI256_MSIS1024_MSIS4) ||   \
     (STM32_CFG_TIMICSEL == RCC_CCIPR1_TIMICSEL_HSI256_MSIS1024_MSIK4) ||   \
     (STM32_CFG_TIMICSEL == RCC_CCIPR1_TIMICSEL_HSI256_MSIK1024_MSIS4) ||   \
     (STM32_CFG_TIMICSEL == RCC_CCIPR1_TIMICSEL_HSI256_MSIK1024_MSIK4)) &&  \
    !defined(__DOXYGEN__)
  #error "invalid STM32_CFG_TIMICSEL value specified"
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

#if !((STM32_CFG_MDF1_REQUIRED == TRUE) || (STM32_CFG_MDF1_REQUIRED == FALSE)) && \
    !defined(__DOXYGEN__)
  #error "invalid STM32_CFG_MDF1_REQUIRED value specified"
#endif

#if !((STM32_CFG_ADF1_REQUIRED == TRUE) || (STM32_CFG_ADF1_REQUIRED == FALSE)) && \
    !defined(__DOXYGEN__)
  #error "invalid STM32_CFG_ADF1_REQUIRED value specified"
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
#define STM32_VOS1_USBCLK_MIN               47880000
#define STM32_VOS1_USBCLK_MAX               48120000
#if ((STM32_FLASH_ACR & FLASH_ACR_LPM) == 0) || \
    defined(__DOXYGEN__)
#define STM32_VOS1_FLASH_0WS_MAX            32000000
#else
#define STM32_VOS1_FLASH_0WS_MAX            10000000
#endif
#if ((STM32_FLASH_ACR & FLASH_ACR_LPM) == 0) || \
    defined(__DOXYGEN__)
#define STM32_VOS1_FLASH_1WS_MAX            64000000
#else
#define STM32_VOS1_FLASH_1WS_MAX            20000000
#endif
#if ((STM32_FLASH_ACR & FLASH_ACR_LPM) == 0) || \
    defined(__DOXYGEN__)
#define STM32_VOS1_FLASH_2WS_MAX            96000000
#else
#define STM32_VOS1_FLASH_2WS_MAX            30000000
#endif
#if ((STM32_FLASH_ACR & FLASH_ACR_LPM) == 0) || \
    defined(__DOXYGEN__)
#define STM32_VOS1_FLASH_3WS_MAX            128000000
#else
#define STM32_VOS1_FLASH_3WS_MAX            40000000
#endif
#if ((STM32_FLASH_ACR & FLASH_ACR_LPM) == 0) || \
    defined(__DOXYGEN__)
#define STM32_VOS1_FLASH_4WS_MAX            160000000
#else
#define STM32_VOS1_FLASH_4WS_MAX            50000000
#endif
#if ((STM32_FLASH_ACR & FLASH_ACR_LPM) == 0) || \
    defined(__DOXYGEN__)
#define STM32_VOS1_FLASH_5WS_MAX            0
#else
#define STM32_VOS1_FLASH_5WS_MAX            60000000
#endif
#if ((STM32_FLASH_ACR & FLASH_ACR_LPM) == 0) || \
    defined(__DOXYGEN__)
#define STM32_VOS1_FLASH_6WS_MAX            0
#else
#define STM32_VOS1_FLASH_6WS_MAX            70000000
#endif
#if ((STM32_FLASH_ACR & FLASH_ACR_LPM) == 0) || \
    defined(__DOXYGEN__)
#define STM32_VOS1_FLASH_7WS_MAX            0
#else
#define STM32_VOS1_FLASH_7WS_MAX            80000000
#endif
#if ((STM32_FLASH_ACR & FLASH_ACR_LPM) == 0) || \
    defined(__DOXYGEN__)
#define STM32_VOS1_FLASH_8WS_MAX            0
#else
#define STM32_VOS1_FLASH_8WS_MAX            90000000
#endif
#if ((STM32_FLASH_ACR & FLASH_ACR_LPM) == 0) || \
    defined(__DOXYGEN__)
#define STM32_VOS1_FLASH_9WS_MAX            0
#else
#define STM32_VOS1_FLASH_9WS_MAX            100000000
#endif
#if ((STM32_FLASH_ACR & FLASH_ACR_LPM) == 0) || \
    defined(__DOXYGEN__)
#define STM32_VOS1_FLASH_10WS_MAX           0
#else
#define STM32_VOS1_FLASH_10WS_MAX           110000000
#endif
#if ((STM32_FLASH_ACR & FLASH_ACR_LPM) == 0) || \
    defined(__DOXYGEN__)
#define STM32_VOS1_FLASH_11WS_MAX           0
#else
#define STM32_VOS1_FLASH_11WS_MAX           120000000
#endif
#if ((STM32_FLASH_ACR & FLASH_ACR_LPM) == 0) || \
    defined(__DOXYGEN__)
#define STM32_VOS1_FLASH_12WS_MAX           0
#else
#define STM32_VOS1_FLASH_12WS_MAX           130000000
#endif
#if ((STM32_FLASH_ACR & FLASH_ACR_LPM) == 0) || \
    defined(__DOXYGEN__)
#define STM32_VOS1_FLASH_13WS_MAX           0
#else
#define STM32_VOS1_FLASH_13WS_MAX           140000000
#endif
#if ((STM32_FLASH_ACR & FLASH_ACR_LPM) == 0) || \
    defined(__DOXYGEN__)
#define STM32_VOS1_FLASH_14WS_MAX           0
#else
#define STM32_VOS1_FLASH_14WS_MAX           150000000
#endif
#if ((STM32_FLASH_ACR & FLASH_ACR_LPM) == 0) || \
    defined(__DOXYGEN__)
#define STM32_VOS1_FLASH_15WS_MAX           0
#else
#define STM32_VOS1_FLASH_15WS_MAX           160000000
#endif
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
#define STM32_VOS2_USBCLK_MIN               47880000
#define STM32_VOS2_USBCLK_MAX               48120000
#if ((STM32_FLASH_ACR & FLASH_ACR_LPM) == 0) || \
    defined(__DOXYGEN__)
#define STM32_VOS2_FLASH_0WS_MAX            30000000
#else
#define STM32_VOS2_FLASH_0WS_MAX            10000000
#endif
#if ((STM32_FLASH_ACR & FLASH_ACR_LPM) == 0) || \
    defined(__DOXYGEN__)
#define STM32_VOS2_FLASH_1WS_MAX            60000000
#else
#define STM32_VOS2_FLASH_1WS_MAX            20000000
#endif
#if ((STM32_FLASH_ACR & FLASH_ACR_LPM) == 0) || \
    defined(__DOXYGEN__)
#define STM32_VOS2_FLASH_2WS_MAX            90000000
#else
#define STM32_VOS2_FLASH_2WS_MAX            30000000
#endif
#if ((STM32_FLASH_ACR & FLASH_ACR_LPM) == 0) || \
    defined(__DOXYGEN__)
#define STM32_VOS2_FLASH_3WS_MAX            110000000
#else
#define STM32_VOS2_FLASH_3WS_MAX            40000000
#endif
#if ((STM32_FLASH_ACR & FLASH_ACR_LPM) == 0) || \
    defined(__DOXYGEN__)
#define STM32_VOS2_FLASH_4WS_MAX            0
#else
#define STM32_VOS2_FLASH_4WS_MAX            50000000
#endif
#if ((STM32_FLASH_ACR & FLASH_ACR_LPM) == 0) || \
    defined(__DOXYGEN__)
#define STM32_VOS2_FLASH_5WS_MAX            0
#else
#define STM32_VOS2_FLASH_5WS_MAX            60000000
#endif
#if ((STM32_FLASH_ACR & FLASH_ACR_LPM) == 0) || \
    defined(__DOXYGEN__)
#define STM32_VOS2_FLASH_6WS_MAX            0
#else
#define STM32_VOS2_FLASH_6WS_MAX            70000000
#endif
#if ((STM32_FLASH_ACR & FLASH_ACR_LPM) == 0) || \
    defined(__DOXYGEN__)
#define STM32_VOS2_FLASH_7WS_MAX            0
#else
#define STM32_VOS2_FLASH_7WS_MAX            80000000
#endif
#if ((STM32_FLASH_ACR & FLASH_ACR_LPM) == 0) || \
    defined(__DOXYGEN__)
#define STM32_VOS2_FLASH_8WS_MAX            0
#else
#define STM32_VOS2_FLASH_8WS_MAX            90000000
#endif
#if ((STM32_FLASH_ACR & FLASH_ACR_LPM) == 0) || \
    defined(__DOXYGEN__)
#define STM32_VOS2_FLASH_9WS_MAX            0
#else
#define STM32_VOS2_FLASH_9WS_MAX            100000000
#endif
#if ((STM32_FLASH_ACR & FLASH_ACR_LPM) == 0) || \
    defined(__DOXYGEN__)
#define STM32_VOS2_FLASH_10WS_MAX           0
#else
#define STM32_VOS2_FLASH_10WS_MAX           110000000
#endif
#if ((STM32_FLASH_ACR & FLASH_ACR_LPM) == 0) || \
    defined(__DOXYGEN__)
#define STM32_VOS2_FLASH_11WS_MAX           0
#else
#define STM32_VOS2_FLASH_11WS_MAX           110000000
#endif
#if ((STM32_FLASH_ACR & FLASH_ACR_LPM) == 0) || \
    defined(__DOXYGEN__)
#define STM32_VOS2_FLASH_12WS_MAX           0
#else
#define STM32_VOS2_FLASH_12WS_MAX           110000000
#endif
#if ((STM32_FLASH_ACR & FLASH_ACR_LPM) == 0) || \
    defined(__DOXYGEN__)
#define STM32_VOS2_FLASH_13WS_MAX           0
#else
#define STM32_VOS2_FLASH_13WS_MAX           110000000
#endif
#if ((STM32_FLASH_ACR & FLASH_ACR_LPM) == 0) || \
    defined(__DOXYGEN__)
#define STM32_VOS2_FLASH_14WS_MAX           0
#else
#define STM32_VOS2_FLASH_14WS_MAX           110000000
#endif
#if ((STM32_FLASH_ACR & FLASH_ACR_LPM) == 0) || \
    defined(__DOXYGEN__)
#define STM32_VOS2_FLASH_15WS_MAX           0
#else
#define STM32_VOS2_FLASH_15WS_MAX           110000000
#endif
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
#define STM32_VOS3_USBCLK_MIN               47880000
#define STM32_VOS3_USBCLK_MAX               48120000
#if ((STM32_FLASH_ACR & FLASH_ACR_LPM) == 0) || \
    defined(__DOXYGEN__)
#define STM32_VOS3_FLASH_0WS_MAX            24000000
#else
#define STM32_VOS3_FLASH_0WS_MAX            10000000
#endif
#if ((STM32_FLASH_ACR & FLASH_ACR_LPM) == 0) || \
    defined(__DOXYGEN__)
#define STM32_VOS3_FLASH_1WS_MAX            48000000
#else
#define STM32_VOS3_FLASH_1WS_MAX            20000000
#endif
#if ((STM32_FLASH_ACR & FLASH_ACR_LPM) == 0) || \
    defined(__DOXYGEN__)
#define STM32_VOS3_FLASH_2WS_MAX            55000000
#else
#define STM32_VOS3_FLASH_2WS_MAX            30000000
#endif
#if ((STM32_FLASH_ACR & FLASH_ACR_LPM) == 0) || \
    defined(__DOXYGEN__)
#define STM32_VOS3_FLASH_3WS_MAX            0
#else
#define STM32_VOS3_FLASH_3WS_MAX            40000000
#endif
#if ((STM32_FLASH_ACR & FLASH_ACR_LPM) == 0) || \
    defined(__DOXYGEN__)
#define STM32_VOS3_FLASH_4WS_MAX            0
#else
#define STM32_VOS3_FLASH_4WS_MAX            50000000
#endif
#if ((STM32_FLASH_ACR & FLASH_ACR_LPM) == 0) || \
    defined(__DOXYGEN__)
#define STM32_VOS3_FLASH_5WS_MAX            0
#else
#define STM32_VOS3_FLASH_5WS_MAX            55000000
#endif
#if ((STM32_FLASH_ACR & FLASH_ACR_LPM) == 0) || \
    defined(__DOXYGEN__)
#define STM32_VOS3_FLASH_6WS_MAX            0
#else
#define STM32_VOS3_FLASH_6WS_MAX            55000000
#endif
#if ((STM32_FLASH_ACR & FLASH_ACR_LPM) == 0) || \
    defined(__DOXYGEN__)
#define STM32_VOS3_FLASH_7WS_MAX            0
#else
#define STM32_VOS3_FLASH_7WS_MAX            55000000
#endif
#if ((STM32_FLASH_ACR & FLASH_ACR_LPM) == 0) || \
    defined(__DOXYGEN__)
#define STM32_VOS3_FLASH_8WS_MAX            0
#else
#define STM32_VOS3_FLASH_8WS_MAX            55000000
#endif
#if ((STM32_FLASH_ACR & FLASH_ACR_LPM) == 0) || \
    defined(__DOXYGEN__)
#define STM32_VOS3_FLASH_9WS_MAX            0
#else
#define STM32_VOS3_FLASH_9WS_MAX            55000000
#endif
#if ((STM32_FLASH_ACR & FLASH_ACR_LPM) == 0) || \
    defined(__DOXYGEN__)
#define STM32_VOS3_FLASH_10WS_MAX           0
#else
#define STM32_VOS3_FLASH_10WS_MAX           55000000
#endif
#if ((STM32_FLASH_ACR & FLASH_ACR_LPM) == 0) || \
    defined(__DOXYGEN__)
#define STM32_VOS3_FLASH_11WS_MAX           0
#else
#define STM32_VOS3_FLASH_11WS_MAX           55000000
#endif
#if ((STM32_FLASH_ACR & FLASH_ACR_LPM) == 0) || \
    defined(__DOXYGEN__)
#define STM32_VOS3_FLASH_12WS_MAX           0
#else
#define STM32_VOS3_FLASH_12WS_MAX           55000000
#endif
#if ((STM32_FLASH_ACR & FLASH_ACR_LPM) == 0) || \
    defined(__DOXYGEN__)
#define STM32_VOS3_FLASH_13WS_MAX           0
#else
#define STM32_VOS3_FLASH_13WS_MAX           55000000
#endif
#if ((STM32_FLASH_ACR & FLASH_ACR_LPM) == 0) || \
    defined(__DOXYGEN__)
#define STM32_VOS3_FLASH_14WS_MAX           0
#else
#define STM32_VOS3_FLASH_14WS_MAX           55000000
#endif
#if ((STM32_FLASH_ACR & FLASH_ACR_LPM) == 0) || \
    defined(__DOXYGEN__)
#define STM32_VOS3_FLASH_15WS_MAX           0
#else
#define STM32_VOS3_FLASH_15WS_MAX           55000000
#endif
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
#define STM32_VOS4_USBCLK_MIN               47880000
#define STM32_VOS4_USBCLK_MAX               48120000
#if ((STM32_FLASH_ACR & FLASH_ACR_LPM) == 0) || \
    defined(__DOXYGEN__)
#define STM32_VOS4_FLASH_0WS_MAX            12000000
#else
#define STM32_VOS4_FLASH_0WS_MAX            8000000
#endif
#if ((STM32_FLASH_ACR & FLASH_ACR_LPM) == 0) || \
    defined(__DOXYGEN__)
#define STM32_VOS4_FLASH_1WS_MAX            25000000
#else
#define STM32_VOS4_FLASH_1WS_MAX            16000000
#endif
#if ((STM32_FLASH_ACR & FLASH_ACR_LPM) == 0) || \
    defined(__DOXYGEN__)
#define STM32_VOS4_FLASH_2WS_MAX            0
#else
#define STM32_VOS4_FLASH_2WS_MAX            25000000
#endif
#if ((STM32_FLASH_ACR & FLASH_ACR_LPM) == 0) || \
    defined(__DOXYGEN__)
#define STM32_VOS4_FLASH_3WS_MAX            0
#else
#define STM32_VOS4_FLASH_3WS_MAX            0
#endif
#if ((STM32_FLASH_ACR & FLASH_ACR_LPM) == 0) || \
    defined(__DOXYGEN__)
#define STM32_VOS4_FLASH_4WS_MAX            0
#else
#define STM32_VOS4_FLASH_4WS_MAX            0
#endif
#if ((STM32_FLASH_ACR & FLASH_ACR_LPM) == 0) || \
    defined(__DOXYGEN__)
#define STM32_VOS4_FLASH_5WS_MAX            0
#else
#define STM32_VOS4_FLASH_5WS_MAX            0
#endif
#if ((STM32_FLASH_ACR & FLASH_ACR_LPM) == 0) || \
    defined(__DOXYGEN__)
#define STM32_VOS4_FLASH_6WS_MAX            0
#else
#define STM32_VOS4_FLASH_6WS_MAX            0
#endif
#if ((STM32_FLASH_ACR & FLASH_ACR_LPM) == 0) || \
    defined(__DOXYGEN__)
#define STM32_VOS4_FLASH_7WS_MAX            0
#else
#define STM32_VOS4_FLASH_7WS_MAX            0
#endif
#if ((STM32_FLASH_ACR & FLASH_ACR_LPM) == 0) || \
    defined(__DOXYGEN__)
#define STM32_VOS4_FLASH_8WS_MAX            0
#else
#define STM32_VOS4_FLASH_8WS_MAX            0
#endif
#if ((STM32_FLASH_ACR & FLASH_ACR_LPM) == 0) || \
    defined(__DOXYGEN__)
#define STM32_VOS4_FLASH_9WS_MAX            0
#else
#define STM32_VOS4_FLASH_9WS_MAX            0
#endif
#if ((STM32_FLASH_ACR & FLASH_ACR_LPM) == 0) || \
    defined(__DOXYGEN__)
#define STM32_VOS4_FLASH_10WS_MAX           0
#else
#define STM32_VOS4_FLASH_10WS_MAX           0
#endif
#if ((STM32_FLASH_ACR & FLASH_ACR_LPM) == 0) || \
    defined(__DOXYGEN__)
#define STM32_VOS4_FLASH_11WS_MAX           0
#else
#define STM32_VOS4_FLASH_11WS_MAX           0
#endif
#if ((STM32_FLASH_ACR & FLASH_ACR_LPM) == 0) || \
    defined(__DOXYGEN__)
#define STM32_VOS4_FLASH_12WS_MAX           0
#else
#define STM32_VOS4_FLASH_12WS_MAX           0
#endif
#if ((STM32_FLASH_ACR & FLASH_ACR_LPM) == 0) || \
    defined(__DOXYGEN__)
#define STM32_VOS4_FLASH_13WS_MAX           0
#else
#define STM32_VOS4_FLASH_13WS_MAX           0
#endif
#if ((STM32_FLASH_ACR & FLASH_ACR_LPM) == 0) || \
    defined(__DOXYGEN__)
#define STM32_VOS4_FLASH_14WS_MAX           0
#else
#define STM32_VOS4_FLASH_14WS_MAX           0
#endif
#if ((STM32_FLASH_ACR & FLASH_ACR_LPM) == 0) || \
    defined(__DOXYGEN__)
#define STM32_VOS4_FLASH_15WS_MAX           0
#else
#define STM32_VOS4_FLASH_15WS_MAX           0
#endif
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
#define STM32_USBCLK_MIN                    STM32_VOS1_USBCLK_MIN
#define STM32_USBCLK_MAX                    STM32_VOS1_USBCLK_MAX
#define STM32_FLASH_0WS_MAX                 STM32_VOS1_FLASH_0WS_MAX
#define STM32_FLASH_1WS_MAX                 STM32_VOS1_FLASH_1WS_MAX
#define STM32_FLASH_2WS_MAX                 STM32_VOS1_FLASH_2WS_MAX
#define STM32_FLASH_3WS_MAX                 STM32_VOS1_FLASH_3WS_MAX
#define STM32_FLASH_4WS_MAX                 STM32_VOS1_FLASH_4WS_MAX
#define STM32_FLASH_5WS_MAX                 STM32_VOS1_FLASH_5WS_MAX
#define STM32_FLASH_6WS_MAX                 STM32_VOS1_FLASH_6WS_MAX
#define STM32_FLASH_7WS_MAX                 STM32_VOS1_FLASH_7WS_MAX
#define STM32_FLASH_8WS_MAX                 STM32_VOS1_FLASH_8WS_MAX
#define STM32_FLASH_9WS_MAX                 STM32_VOS1_FLASH_9WS_MAX
#define STM32_FLASH_10WS_MAX                STM32_VOS1_FLASH_10WS_MAX
#define STM32_FLASH_11WS_MAX                STM32_VOS1_FLASH_11WS_MAX
#define STM32_FLASH_12WS_MAX                STM32_VOS1_FLASH_12WS_MAX
#define STM32_FLASH_13WS_MAX                STM32_VOS1_FLASH_13WS_MAX
#define STM32_FLASH_14WS_MAX                STM32_VOS1_FLASH_14WS_MAX
#define STM32_FLASH_15WS_MAX                STM32_VOS1_FLASH_15WS_MAX
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
#define STM32_USBCLK_MIN                    STM32_VOS2_USBCLK_MIN
#define STM32_USBCLK_MAX                    STM32_VOS2_USBCLK_MAX
#define STM32_FLASH_0WS_MAX                 STM32_VOS2_FLASH_0WS_MAX
#define STM32_FLASH_1WS_MAX                 STM32_VOS2_FLASH_1WS_MAX
#define STM32_FLASH_2WS_MAX                 STM32_VOS2_FLASH_2WS_MAX
#define STM32_FLASH_3WS_MAX                 STM32_VOS2_FLASH_3WS_MAX
#define STM32_FLASH_4WS_MAX                 STM32_VOS2_FLASH_4WS_MAX
#define STM32_FLASH_5WS_MAX                 STM32_VOS2_FLASH_5WS_MAX
#define STM32_FLASH_6WS_MAX                 STM32_VOS2_FLASH_6WS_MAX
#define STM32_FLASH_7WS_MAX                 STM32_VOS2_FLASH_7WS_MAX
#define STM32_FLASH_8WS_MAX                 STM32_VOS2_FLASH_8WS_MAX
#define STM32_FLASH_9WS_MAX                 STM32_VOS2_FLASH_9WS_MAX
#define STM32_FLASH_10WS_MAX                STM32_VOS2_FLASH_10WS_MAX
#define STM32_FLASH_11WS_MAX                STM32_VOS2_FLASH_11WS_MAX
#define STM32_FLASH_12WS_MAX                STM32_VOS2_FLASH_12WS_MAX
#define STM32_FLASH_13WS_MAX                STM32_VOS2_FLASH_13WS_MAX
#define STM32_FLASH_14WS_MAX                STM32_VOS2_FLASH_14WS_MAX
#define STM32_FLASH_15WS_MAX                STM32_VOS2_FLASH_15WS_MAX
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
#define STM32_USBCLK_MIN                    STM32_VOS3_USBCLK_MIN
#define STM32_USBCLK_MAX                    STM32_VOS3_USBCLK_MAX
#define STM32_FLASH_0WS_MAX                 STM32_VOS3_FLASH_0WS_MAX
#define STM32_FLASH_1WS_MAX                 STM32_VOS3_FLASH_1WS_MAX
#define STM32_FLASH_2WS_MAX                 STM32_VOS3_FLASH_2WS_MAX
#define STM32_FLASH_3WS_MAX                 STM32_VOS3_FLASH_3WS_MAX
#define STM32_FLASH_4WS_MAX                 STM32_VOS3_FLASH_4WS_MAX
#define STM32_FLASH_5WS_MAX                 STM32_VOS3_FLASH_5WS_MAX
#define STM32_FLASH_6WS_MAX                 STM32_VOS3_FLASH_6WS_MAX
#define STM32_FLASH_7WS_MAX                 STM32_VOS3_FLASH_7WS_MAX
#define STM32_FLASH_8WS_MAX                 STM32_VOS3_FLASH_8WS_MAX
#define STM32_FLASH_9WS_MAX                 STM32_VOS3_FLASH_9WS_MAX
#define STM32_FLASH_10WS_MAX                STM32_VOS3_FLASH_10WS_MAX
#define STM32_FLASH_11WS_MAX                STM32_VOS3_FLASH_11WS_MAX
#define STM32_FLASH_12WS_MAX                STM32_VOS3_FLASH_12WS_MAX
#define STM32_FLASH_13WS_MAX                STM32_VOS3_FLASH_13WS_MAX
#define STM32_FLASH_14WS_MAX                STM32_VOS3_FLASH_14WS_MAX
#define STM32_FLASH_15WS_MAX                STM32_VOS3_FLASH_15WS_MAX
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
#define STM32_USBCLK_MIN                    STM32_VOS4_USBCLK_MIN
#define STM32_USBCLK_MAX                    STM32_VOS4_USBCLK_MAX
#define STM32_FLASH_0WS_MAX                 STM32_VOS4_FLASH_0WS_MAX
#define STM32_FLASH_1WS_MAX                 STM32_VOS4_FLASH_1WS_MAX
#define STM32_FLASH_2WS_MAX                 STM32_VOS4_FLASH_2WS_MAX
#define STM32_FLASH_3WS_MAX                 STM32_VOS4_FLASH_3WS_MAX
#define STM32_FLASH_4WS_MAX                 STM32_VOS4_FLASH_4WS_MAX
#define STM32_FLASH_5WS_MAX                 STM32_VOS4_FLASH_5WS_MAX
#define STM32_FLASH_6WS_MAX                 STM32_VOS4_FLASH_6WS_MAX
#define STM32_FLASH_7WS_MAX                 STM32_VOS4_FLASH_7WS_MAX
#define STM32_FLASH_8WS_MAX                 STM32_VOS4_FLASH_8WS_MAX
#define STM32_FLASH_9WS_MAX                 STM32_VOS4_FLASH_9WS_MAX
#define STM32_FLASH_10WS_MAX                STM32_VOS4_FLASH_10WS_MAX
#define STM32_FLASH_11WS_MAX                STM32_VOS4_FLASH_11WS_MAX
#define STM32_FLASH_12WS_MAX                STM32_VOS4_FLASH_12WS_MAX
#define STM32_FLASH_13WS_MAX                STM32_VOS4_FLASH_13WS_MAX
#define STM32_FLASH_14WS_MAX                STM32_VOS4_FLASH_14WS_MAX
#define STM32_FLASH_15WS_MAX                STM32_VOS4_FLASH_15WS_MAX
#else
  #error "unable to select clock frequency limits"
#endif

/**
 * @name    Sink demand states
 * @{
 */
/**
 * @brief   PLL1P_REQUIRED sink demand state.
 */
#if (STM32_CFG_PLL1P_REQUIRED == TRUE) || defined(__DOXYGEN__)
  #define STM32_PLL1P_REQUIRED_DEMANDED     TRUE
#else
  #define STM32_PLL1P_REQUIRED_DEMANDED     FALSE
#endif

/**
 * @brief   PLL1Q_REQUIRED sink demand state.
 */
#if (STM32_CFG_PLL1Q_REQUIRED == TRUE) || defined(__DOXYGEN__)
  #define STM32_PLL1Q_REQUIRED_DEMANDED     TRUE
#else
  #define STM32_PLL1Q_REQUIRED_DEMANDED     FALSE
#endif

/**
 * @brief   PLL1R_REQUIRED sink demand state.
 */
#if (STM32_CFG_PLL1R_REQUIRED == TRUE) || defined(__DOXYGEN__)
  #define STM32_PLL1R_REQUIRED_DEMANDED     TRUE
#else
  #define STM32_PLL1R_REQUIRED_DEMANDED     FALSE
#endif

/**
 * @brief   PLL2P_REQUIRED sink demand state.
 */
#if (STM32_CFG_PLL2P_REQUIRED == TRUE) || defined(__DOXYGEN__)
  #define STM32_PLL2P_REQUIRED_DEMANDED     TRUE
#else
  #define STM32_PLL2P_REQUIRED_DEMANDED     FALSE
#endif

/**
 * @brief   PLL2Q_REQUIRED sink demand state.
 */
#if (STM32_CFG_PLL2Q_REQUIRED == TRUE) || defined(__DOXYGEN__)
  #define STM32_PLL2Q_REQUIRED_DEMANDED     TRUE
#else
  #define STM32_PLL2Q_REQUIRED_DEMANDED     FALSE
#endif

/**
 * @brief   PLL2R_REQUIRED sink demand state.
 */
#if (STM32_CFG_PLL2R_REQUIRED == TRUE) || defined(__DOXYGEN__)
  #define STM32_PLL2R_REQUIRED_DEMANDED     TRUE
#else
  #define STM32_PLL2R_REQUIRED_DEMANDED     FALSE
#endif

/**
 * @brief   PLL3P_REQUIRED sink demand state.
 */
#if (STM32_CFG_PLL3P_REQUIRED == TRUE) || defined(__DOXYGEN__)
  #define STM32_PLL3P_REQUIRED_DEMANDED     TRUE
#else
  #define STM32_PLL3P_REQUIRED_DEMANDED     FALSE
#endif

/**
 * @brief   PLL3Q_REQUIRED sink demand state.
 */
#if (STM32_CFG_PLL3Q_REQUIRED == TRUE) || defined(__DOXYGEN__)
  #define STM32_PLL3Q_REQUIRED_DEMANDED     TRUE
#else
  #define STM32_PLL3Q_REQUIRED_DEMANDED     FALSE
#endif

/**
 * @brief   PLL3R_REQUIRED sink demand state.
 */
#if (STM32_CFG_PLL3R_REQUIRED == TRUE) || defined(__DOXYGEN__)
  #define STM32_PLL3R_REQUIRED_DEMANDED     TRUE
#else
  #define STM32_PLL3R_REQUIRED_DEMANDED     FALSE
#endif

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
 * @brief   USART2_SERIAL_DRIVER sink demand state.
 */
#if ((HAL_USE_SERIAL == TRUE) && (STM32_SERIAL_USE_USART2 == TRUE)) ||      \
    defined(__DOXYGEN__)
  #define STM32_USART2_SERIAL_DRIVER_DEMANDED TRUE
#else
  #define STM32_USART2_SERIAL_DRIVER_DEMANDED FALSE
#endif

/**
 * @brief   USART2_SIO_DRIVER sink demand state.
 */
#if ((HAL_USE_SIO == TRUE) && (STM32_SIO_USE_USART2 == TRUE)) ||            \
    defined(__DOXYGEN__)
  #define STM32_USART2_SIO_DRIVER_DEMANDED  TRUE
#else
  #define STM32_USART2_SIO_DRIVER_DEMANDED  FALSE
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
 * @brief   I2C4_DRIVER sink demand state.
 */
#if ((HAL_USE_I2C == TRUE) && (STM32_I2C_USE_I2C4 == TRUE)) ||              \
    defined(__DOXYGEN__)
  #define STM32_I2C4_DRIVER_DEMANDED        TRUE
#else
  #define STM32_I2C4_DRIVER_DEMANDED        FALSE
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
 * @brief   FDCAN1_DRIVER sink demand state.
 */
#if ((HAL_USE_CAN == TRUE) && (STM32_CAN_USE_FDCAN1 == TRUE)) ||            \
    defined(__DOXYGEN__)
  #define STM32_FDCAN1_DRIVER_DEMANDED      TRUE
#else
  #define STM32_FDCAN1_DRIVER_DEMANDED      FALSE
#endif

/**
 * @brief   SYSTICK_DRIVER sink demand state.
 */
#if (OSAL_ST_MODE == OSAL_ST_MODE_PERIODIC) || defined(__DOXYGEN__)
  #define STM32_SYSTICK_DRIVER_DEMANDED     TRUE
#else
  #define STM32_SYSTICK_DRIVER_DEMANDED     FALSE
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
 * @brief   SDMMC2_DRIVER sink demand state.
 */
#if ((HAL_USE_SDC == TRUE) && (STM32_SDC_USE_SDMMC2 == TRUE)) ||            \
    defined(__DOXYGEN__)
  #define STM32_SDMMC2_DRIVER_DEMANDED      TRUE
#else
  #define STM32_SDMMC2_DRIVER_DEMANDED      FALSE
#endif

/**
 * @brief   OCTOSPI1_WSPI_DRIVER sink demand state.
 */
#if (defined(STM32_WSPI_USE_OCTOSPI1) && (HAL_USE_WSPI == TRUE) &&          \
     (STM32_WSPI_USE_OCTOSPI1 == TRUE)) || defined(__DOXYGEN__)
  #define STM32_OCTOSPI1_WSPI_DRIVER_DEMANDED TRUE
#else
  #define STM32_OCTOSPI1_WSPI_DRIVER_DEMANDED FALSE
#endif

/**
 * @brief   OCTOSPI2_WSPI_DRIVER sink demand state.
 */
#if (defined(STM32_WSPI_USE_OCTOSPI2) && (HAL_USE_WSPI == TRUE) &&          \
     (STM32_WSPI_USE_OCTOSPI2 == TRUE)) || defined(__DOXYGEN__)
  #define STM32_OCTOSPI2_WSPI_DRIVER_DEMANDED TRUE
#else
  #define STM32_OCTOSPI2_WSPI_DRIVER_DEMANDED FALSE
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
 * @brief   SAI1_I2S_DRIVER sink demand state.
 */
#if (defined(STM32_I2S_USE_SAI1) && (HAL_USE_I2S == TRUE) &&                \
     (STM32_I2S_USE_SAI1 == TRUE)) || defined(__DOXYGEN__)
  #define STM32_SAI1_I2S_DRIVER_DEMANDED    TRUE
#else
  #define STM32_SAI1_I2S_DRIVER_DEMANDED    FALSE
#endif

/**
 * @brief   SAI2_I2S_DRIVER sink demand state.
 */
#if (defined(STM32_I2S_USE_SAI2) && (HAL_USE_I2S == TRUE) &&                \
     (STM32_I2S_USE_SAI2 == TRUE)) || defined(__DOXYGEN__)
  #define STM32_SAI2_I2S_DRIVER_DEMANDED    TRUE
#else
  #define STM32_SAI2_I2S_DRIVER_DEMANDED    FALSE
#endif

/**
 * @brief   MDF1_REQUIRED sink demand state.
 */
#if (STM32_CFG_MDF1_REQUIRED == TRUE) || defined(__DOXYGEN__)
  #define STM32_MDF1_REQUIRED_DEMANDED      TRUE
#else
  #define STM32_MDF1_REQUIRED_DEMANDED      FALSE
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
 * @brief   ADCDAC_ADC_DRIVER sink demand state.
 */
#if ((HAL_USE_ADC == TRUE) && ((STM32_ADC_USE_ADC1 == TRUE) ||              \
      (defined(STM32_ADC_USE_ADC4) && (STM32_ADC_USE_ADC4 == TRUE)))) ||    \
    defined(__DOXYGEN__)
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
 * @brief   IWDG_DRIVER sink demand state.
 */
#if ((HAL_USE_WDG == TRUE) && (STM32_WDG_USE_IWDG == TRUE)) ||              \
    defined(__DOXYGEN__)
  #define STM32_IWDG_DRIVER_DEMANDED        TRUE
#else
  #define STM32_IWDG_DRIVER_DEMANDED        FALSE
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
#define STM32_MSIS_ENABLED                  ((STM32_TIMICSEL_MSIS_SOURCE_DEMANDED == TRUE) || \
                                             ((STM32_PLL1IN_ENABLED == TRUE) && \
                                              (STM32_CFG_PLL1IN_SEL == RCC_PLL1CFGR_PLL1SRC_MSIS)) || \
                                             ((STM32_PLL2IN_ENABLED == TRUE) && \
                                              (STM32_CFG_PLL2IN_SEL == RCC_PLL2CFGR_PLL2SRC_MSIS)) || \
                                             ((STM32_PLL3IN_ENABLED == TRUE) && \
                                              (STM32_CFG_PLL3IN_SEL == RCC_PLL3CFGR_PLL3SRC_MSIS)) || \
                                             ((STM32_SYSCLK_ENABLED == TRUE) && \
                                              (STM32_CFG_SYSCLK_SEL == RCC_CFGR1_SW_MSIS)) || \
                                             ((STM32_MCODIV_ENABLED == TRUE) && \
                                              (STM32_CFG_MCODIV_SEL == RCC_CFGR1_MCOSEL_MSIS)))

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
#define STM32_MSIK_ENABLED                  ((STM32_TIMICSEL_MSIK_SOURCE_DEMANDED == TRUE) || \
                                             ((STM32_MCODIV_ENABLED == TRUE) && \
                                              (STM32_CFG_MCODIV_SEL == RCC_CFGR1_MCOSEL_MSIK)) || \
                                             ((STM32_LPUART1_ENABLED == TRUE) && \
                                              (STM32_CFG_LPUART1_SEL == RCC_CCIPR3_LPUART1SEL_MSIK)) || \
                                             ((STM32_I2C1_ENABLED == TRUE) && \
                                              (STM32_CFG_I2C1_SEL == RCC_CCIPR1_I2C1SEL_MSIK)) || \
                                             ((STM32_I2C2_ENABLED == TRUE) && \
                                              (STM32_CFG_I2C2_SEL == RCC_CCIPR1_I2C2SEL_MSIK)) || \
                                             ((STM32_I2C4_ENABLED == TRUE) && \
                                              (STM32_CFG_I2C4_SEL == RCC_CCIPR1_I2C4SEL_MSIK)) || \
                                             ((STM32_I2C3_ENABLED == TRUE) && \
                                              (STM32_CFG_I2C3_SEL == RCC_CCIPR3_I2C3SEL_MSIK)) || \
                                             ((STM32_SPI1_ENABLED == TRUE) && \
                                              (STM32_CFG_SPI1_SEL == RCC_CCIPR1_SPI1SEL_MSIK)) || \
                                             ((STM32_SPI2_ENABLED == TRUE) && \
                                              (STM32_CFG_SPI2_SEL == RCC_CCIPR1_SPI2SEL_MSIK)) || \
                                             ((STM32_SPI3_ENABLED == TRUE) && \
                                              (STM32_CFG_SPI3_SEL == RCC_CCIPR3_SPI3SEL_MSIK)) || \
                                             ((STM32_ICLK_ENABLED == TRUE) && \
                                              (STM32_CFG_ICLK_SEL == RCC_CCIPR1_ICLKSEL_MSIK)) || \
                                             ((STM32_OCTOSPI_ENABLED == TRUE) && \
                                              (STM32_CFG_OCTOSPI_SEL == RCC_CCIPR2_OCTOSPISEL_MSIK)) || \
                                             ((STM32_MDF1_ENABLED == TRUE) && \
                                              (STM32_CFG_MDF1_SEL == RCC_CCIPR2_MDF1SEL_MSIK)) || \
                                             ((STM32_ADF1_ENABLED == TRUE) && \
                                              (STM32_CFG_ADF1_SEL == RCC_CCIPR3_ADF1SEL_MSIK)) || \
                                             ((STM32_ADCDAC_ENABLED == TRUE) && \
                                              (STM32_CFG_ADCDAC_SEL == RCC_CCIPR3_ADCDACSEL_MSIK)) || \
                                             ((STM32_LPTIM1_ENABLED == TRUE) && \
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
#define STM32_PLL1P_ENABLED                 ((STM32_PLL1P_REQUIRED_DEMANDED == TRUE) || \
                                             ((STM32_SYSCLK_ENABLED == TRUE) && \
                                              (STM32_CFG_SYSCLK_SEL == RCC_CFGR1_SW_PLL1P)) || \
                                             ((STM32_SDMMC_ENABLED == TRUE) && \
                                              (STM32_CFG_SDMMC_SEL == RCC_CCIPR2_SDMMCSEL_PLL1P)) || \
                                             ((STM32_SAI1_ENABLED == TRUE) && \
                                              (STM32_CFG_SAI1_SEL == RCC_CCIPR2_SAI1SEL_PLL1P)) || \
                                             ((STM32_SAI2_ENABLED == TRUE) && \
                                              (STM32_CFG_SAI2_SEL == RCC_CCIPR2_SAI2SEL_PLL1P)) || \
                                             ((STM32_MDF1_ENABLED == TRUE) && \
                                              (STM32_CFG_MDF1_SEL == RCC_CCIPR2_MDF1SEL_PLL1P)) || \
                                             ((STM32_ADF1_ENABLED == TRUE) && \
                                              (STM32_CFG_ADF1_SEL == RCC_CCIPR3_ADF1SEL_PLL1P)))

/**
 * @brief   PLL1Q clock derived enable state.
 */
#define STM32_PLL1Q_ENABLED                 ((STM32_PLL1Q_REQUIRED_DEMANDED == TRUE) || \
                                             ((STM32_FDCAN1_ENABLED == TRUE) && \
                                              (STM32_CFG_FDCAN1_SEL == RCC_CCIPR1_FDCANSEL_PLL1Q)) || \
                                             ((STM32_ICLK_ENABLED == TRUE) && \
                                              (STM32_CFG_ICLK_SEL == RCC_CCIPR1_ICLKSEL_PLL1Q)) || \
                                             ((STM32_OCTOSPI_ENABLED == TRUE) && \
                                              (STM32_CFG_OCTOSPI_SEL == RCC_CCIPR2_OCTOSPISEL_PLL1Q)))

/**
 * @brief   PLL1R clock derived enable state.
 */
#define STM32_PLL1R_ENABLED                 ((STM32_PLL1R_REQUIRED_DEMANDED == TRUE) || \
                                             ((STM32_MCODIV_ENABLED == TRUE) && \
                                              (STM32_CFG_MCODIV_SEL == RCC_CFGR1_MCOSEL_PLL1R)))

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
#define STM32_PLL2P_ENABLED                 ((STM32_PLL2P_REQUIRED_DEMANDED == TRUE) || \
                                             ((STM32_FDCAN1_ENABLED == TRUE) && \
                                              (STM32_CFG_FDCAN1_SEL == RCC_CCIPR1_FDCANSEL_PLL2P)) || \
                                             ((STM32_SAI1_ENABLED == TRUE) && \
                                              (STM32_CFG_SAI1_SEL == RCC_CCIPR2_SAI1SEL_PLL2P)) || \
                                             ((STM32_SAI2_ENABLED == TRUE) && \
                                              (STM32_CFG_SAI2_SEL == RCC_CCIPR2_SAI2SEL_PLL2P)))

/**
 * @brief   PLL2Q clock derived enable state.
 */
#define STM32_PLL2Q_ENABLED                 ((STM32_PLL2Q_REQUIRED_DEMANDED == TRUE) || \
                                             ((STM32_ICLK_ENABLED == TRUE) && \
                                              (STM32_CFG_ICLK_SEL == RCC_CCIPR1_ICLKSEL_PLL2Q)) || \
                                             ((STM32_OCTOSPI_ENABLED == TRUE) && \
                                              (STM32_CFG_OCTOSPI_SEL == RCC_CCIPR2_OCTOSPISEL_PLL2Q)))

/**
 * @brief   PLL2R clock derived enable state.
 */
#define STM32_PLL2R_ENABLED                 ((STM32_PLL2R_REQUIRED_DEMANDED == TRUE) || \
                                             ((STM32_ADCDAC_ENABLED == TRUE) && \
                                              (STM32_CFG_ADCDAC_SEL == RCC_CCIPR3_ADCDACSEL_PLL2R)))

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
#define STM32_PLL3P_ENABLED                 ((STM32_PLL3P_REQUIRED_DEMANDED == TRUE) || \
                                             ((STM32_SAI1_ENABLED == TRUE) && \
                                              (STM32_CFG_SAI1_SEL == RCC_CCIPR2_SAI1SEL_PLL3P)) || \
                                             ((STM32_SAI2_ENABLED == TRUE) && \
                                              (STM32_CFG_SAI2_SEL == RCC_CCIPR2_SAI2SEL_PLL3P)))

/**
 * @brief   PLL3Q clock derived enable state.
 */
#define STM32_PLL3Q_ENABLED                 ((STM32_PLL3Q_REQUIRED_DEMANDED == TRUE) || \
                                             ((STM32_MDF1_ENABLED == TRUE) && \
                                              (STM32_CFG_MDF1_SEL == RCC_CCIPR2_MDF1SEL_PLL3Q)) || \
                                             ((STM32_ADF1_ENABLED == TRUE) && \
                                              (STM32_CFG_ADF1_SEL == RCC_CCIPR3_ADF1SEL_PLL3Q)))

/**
 * @brief   PLL3R clock derived enable state.
 */
#define STM32_PLL3R_ENABLED                 ((STM32_PLL3R_REQUIRED_DEMANDED == TRUE))

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
 * @brief   MCODIV clock derived enable state.
 */
#define STM32_MCODIV_ENABLED                TRUE

/**
 * @brief   MCO clock derived enable state.
 */
#define STM32_MCO_ENABLED                   TRUE

/**
 * @brief   LSESYS clock derived enable state.
 */
#define STM32_LSESYS_ENABLED                (((STM32_LSCO_ENABLED == TRUE) && \
                                              (STM32_CFG_LSCO_SEL == RCC_BDCR_LSCOSEL_LSE)) || \
                                             ((STM32_USART1_ENABLED == TRUE) && \
                                              (STM32_CFG_USART1_SEL == RCC_CCIPR1_USART1SEL_LSE)) || \
                                             ((STM32_USART2_ENABLED == TRUE) && \
                                              (STM32_CFG_USART2_SEL == RCC_CCIPR1_USART2SEL_LSE)) || \
                                             ((STM32_USART3_ENABLED == TRUE) && \
                                              (STM32_CFG_USART3_SEL == RCC_CCIPR1_USART3SEL_LSE)) || \
                                             ((STM32_UART4_ENABLED == TRUE) && \
                                              (STM32_CFG_UART4_SEL == RCC_CCIPR1_UART4SEL_LSE)) || \
                                             ((STM32_UART5_ENABLED == TRUE) && \
                                              (STM32_CFG_UART5_SEL == RCC_CCIPR1_UART5SEL_LSE)) || \
                                             ((STM32_LPUART1_ENABLED == TRUE) && \
                                              (STM32_CFG_LPUART1_SEL == RCC_CCIPR3_LPUART1SEL_LSE)) || \
                                             ((STM32_SYSTICK_ENABLED == TRUE) && \
                                              (STM32_CFG_SYSTICK_SEL == RCC_CCIPR1_SYSTICKSEL_LSE)) || \
                                             ((STM32_DAC1SH_ENABLED == TRUE) && \
                                              (STM32_CFG_DAC1SH_SEL == RCC_CCIPR3_DAC1SEL_LSE)) || \
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
 * @brief   USART1 clock derived enable state.
 */
#define STM32_USART1_ENABLED                ((STM32_USART1_SERIAL_DRIVER_DEMANDED == TRUE) || \
                                             (STM32_USART1_SIO_DRIVER_DEMANDED == TRUE))

/**
 * @brief   USART2 clock derived enable state.
 */
#define STM32_USART2_ENABLED                ((STM32_USART2_SERIAL_DRIVER_DEMANDED == TRUE) || \
                                             (STM32_USART2_SIO_DRIVER_DEMANDED == TRUE))

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
 * @brief   I2C1 clock derived enable state.
 */
#define STM32_I2C1_ENABLED                  ((STM32_I2C1_DRIVER_DEMANDED == TRUE))

/**
 * @brief   I2C2 clock derived enable state.
 */
#define STM32_I2C2_ENABLED                  ((STM32_I2C2_DRIVER_DEMANDED == TRUE))

/**
 * @brief   I2C4 clock derived enable state.
 */
#define STM32_I2C4_ENABLED                  ((STM32_I2C4_DRIVER_DEMANDED == TRUE))

/**
 * @brief   I2C3 clock derived enable state.
 */
#define STM32_I2C3_ENABLED                  ((STM32_I2C3_DRIVER_DEMANDED == TRUE))

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
 * @brief   FDCAN1 clock derived enable state.
 */
#define STM32_FDCAN1_ENABLED                ((STM32_FDCAN1_DRIVER_DEMANDED == TRUE))

/**
 * @brief   HCLKDIV8 clock derived enable state.
 */
#define STM32_HCLKDIV8_ENABLED              (((STM32_SYSTICK_ENABLED == TRUE) && \
                                              (STM32_CFG_SYSTICK_SEL == RCC_CCIPR1_SYSTICKSEL_HCLKDIV8)))

/**
 * @brief   SYSTICK clock derived enable state.
 */
#define STM32_SYSTICK_ENABLED               ((STM32_SYSTICK_DRIVER_DEMANDED == TRUE))

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
#define STM32_ICLK_ENABLED                  ((STM32_USB_ENABLED == TRUE) || \
                                             ((STM32_SDMMC_ENABLED == TRUE) && \
                                              (STM32_CFG_SDMMC_SEL == RCC_CCIPR2_SDMMCSEL_ICLK)))

/**
 * @brief   USB clock derived enable state.
 */
#define STM32_USB_ENABLED                   ((STM32_USB1_DRIVER_DEMANDED == TRUE))

/**
 * @brief   SDMMC clock derived enable state.
 */
#define STM32_SDMMC_ENABLED                 ((STM32_SDMMC1_ENABLED == TRUE) || \
                                             (STM32_SDMMC2_ENABLED == TRUE))

/**
 * @brief   SDMMC1 clock derived enable state.
 */
#define STM32_SDMMC1_ENABLED                ((STM32_SDMMC1_DRIVER_DEMANDED == TRUE))

/**
 * @brief   SDMMC2 clock derived enable state.
 */
#define STM32_SDMMC2_ENABLED                ((STM32_SDMMC2_DRIVER_DEMANDED == TRUE))

/**
 * @brief   OCTOSPI clock derived enable state.
 */
#define STM32_OCTOSPI_ENABLED               ((STM32_OCTOSPI1_WSPI_DRIVER_DEMANDED == TRUE) || \
                                             (STM32_OCTOSPI2_WSPI_DRIVER_DEMANDED == TRUE))

/**
 * @brief   HSI48DIV2 clock derived enable state.
 */
#define STM32_HSI48DIV2_ENABLED             (((STM32_RNG_ENABLED == TRUE) && \
                                              (STM32_CFG_RNG_SEL == RCC_CCIPR2_RNGSEL_HSI48DIV2)))

/**
 * @brief   RNG clock derived enable state.
 */
#define STM32_RNG_ENABLED                   ((STM32_RNG_DRIVER_DEMANDED == TRUE))

/**
 * @brief   SAI1 clock derived enable state.
 */
#define STM32_SAI1_ENABLED                  ((STM32_SAI1_I2S_DRIVER_DEMANDED == TRUE))

/**
 * @brief   SAI2 clock derived enable state.
 */
#define STM32_SAI2_ENABLED                  ((STM32_SAI2_I2S_DRIVER_DEMANDED == TRUE))

/**
 * @brief   MDF1 clock derived enable state.
 */
#define STM32_MDF1_ENABLED                  ((STM32_MDF1_REQUIRED_DEMANDED == TRUE))

/**
 * @brief   ADF1 clock derived enable state.
 */
#define STM32_ADF1_ENABLED                  ((STM32_ADF1_REQUIRED_DEMANDED == TRUE))

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
 * @brief   IWDG clock derived enable state.
 */
#define STM32_IWDG_ENABLED                  ((STM32_IWDG_DRIVER_DEMANDED == TRUE))

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
 * @brief   External audio clock point.
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

#if !((STM32_HSI16_ENABLED == TRUE) || !((STM32_PLL1IN_ENABLED == TRUE) &&  \
      (STM32_CFG_PLL1IN_SEL == RCC_PLL1CFGR_PLL1SRC_HSI16))) &&             \
    !defined(__DOXYGEN__)
  #error "HSI16 not enabled, required by PLL1IN"
#endif

#if !((STM32_HSI16_ENABLED == TRUE) || !((STM32_PLL2IN_ENABLED == TRUE) &&  \
      (STM32_CFG_PLL2IN_SEL == RCC_PLL2CFGR_PLL2SRC_HSI16))) &&             \
    !defined(__DOXYGEN__)
  #error "HSI16 not enabled, required by PLL2IN"
#endif

#if !((STM32_HSI16_ENABLED == TRUE) || !((STM32_PLL3IN_ENABLED == TRUE) &&  \
      (STM32_CFG_PLL3IN_SEL == RCC_PLL3CFGR_PLL3SRC_HSI16))) &&             \
    !defined(__DOXYGEN__)
  #error "HSI16 not enabled, required by PLL3IN"
#endif

#if !((STM32_HSI16_ENABLED == TRUE) || !((STM32_SYSCLK_ENABLED == TRUE) &&  \
      (STM32_CFG_SYSCLK_SEL == RCC_CFGR1_SW_HSI16))) && !defined(__DOXYGEN__)
  #error "HSI16 not enabled, required by SYSCLK"
#endif

#if !((STM32_HSI16_ENABLED == TRUE) || !((STM32_MCODIV_ENABLED == TRUE) &&  \
      (STM32_CFG_MCODIV_SEL == RCC_CFGR1_MCOSEL_HSI16))) && !defined(__DOXYGEN__)
  #error "HSI16 not enabled, required by MCODIV"
#endif

#if !((STM32_HSI16_ENABLED == TRUE) || !((STM32_USART1_ENABLED == TRUE) &&  \
      (STM32_CFG_USART1_SEL == RCC_CCIPR1_USART1SEL_HSI16))) &&             \
    !defined(__DOXYGEN__)
  #error "HSI16 not enabled, required by USART1"
#endif

#if !((STM32_HSI16_ENABLED == TRUE) || !((STM32_USART2_ENABLED == TRUE) &&  \
      (STM32_CFG_USART2_SEL == RCC_CCIPR1_USART2SEL_HSI16))) &&             \
    !defined(__DOXYGEN__)
  #error "HSI16 not enabled, required by USART2"
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

#if !((STM32_HSI16_ENABLED == TRUE) || !((STM32_I2C1_ENABLED == TRUE) &&    \
      (STM32_CFG_I2C1_SEL == RCC_CCIPR1_I2C1SEL_HSI16))) && !defined(__DOXYGEN__)
  #error "HSI16 not enabled, required by I2C1"
#endif

#if !((STM32_HSI16_ENABLED == TRUE) || !((STM32_I2C2_ENABLED == TRUE) &&    \
      (STM32_CFG_I2C2_SEL == RCC_CCIPR1_I2C2SEL_HSI16))) && !defined(__DOXYGEN__)
  #error "HSI16 not enabled, required by I2C2"
#endif

#if !((STM32_HSI16_ENABLED == TRUE) || !((STM32_I2C4_ENABLED == TRUE) &&    \
      (STM32_CFG_I2C4_SEL == RCC_CCIPR1_I2C4SEL_HSI16))) && !defined(__DOXYGEN__)
  #error "HSI16 not enabled, required by I2C4"
#endif

#if !((STM32_HSI16_ENABLED == TRUE) || !((STM32_I2C3_ENABLED == TRUE) &&    \
      (STM32_CFG_I2C3_SEL == RCC_CCIPR3_I2C3SEL_HSI16))) && !defined(__DOXYGEN__)
  #error "HSI16 not enabled, required by I2C3"
#endif

#if !((STM32_HSI16_ENABLED == TRUE) || !((STM32_SPI1_ENABLED == TRUE) &&    \
      (STM32_CFG_SPI1_SEL == RCC_CCIPR1_SPI1SEL_HSI16))) && !defined(__DOXYGEN__)
  #error "HSI16 not enabled, required by SPI1"
#endif

#if !((STM32_HSI16_ENABLED == TRUE) || !((STM32_SPI2_ENABLED == TRUE) &&    \
      (STM32_CFG_SPI2_SEL == RCC_CCIPR1_SPI2SEL_HSI16))) && !defined(__DOXYGEN__)
  #error "HSI16 not enabled, required by SPI2"
#endif

#if !((STM32_HSI16_ENABLED == TRUE) || !((STM32_SPI3_ENABLED == TRUE) &&    \
      (STM32_CFG_SPI3_SEL == RCC_CCIPR3_SPI3SEL_HSI16))) && !defined(__DOXYGEN__)
  #error "HSI16 not enabled, required by SPI3"
#endif

#if !((STM32_HSI16_ENABLED == TRUE) || !((STM32_RNG_ENABLED == TRUE) &&     \
      (STM32_CFG_RNG_SEL == RCC_CCIPR2_RNGSEL_HSI16))) && !defined(__DOXYGEN__)
  #error "HSI16 not enabled, required by RNG"
#endif

#if !((STM32_HSI16_ENABLED == TRUE) || !((STM32_SAI1_ENABLED == TRUE) &&    \
      (STM32_CFG_SAI1_SEL == RCC_CCIPR2_SAI1SEL_HSI16))) && !defined(__DOXYGEN__)
  #error "HSI16 not enabled, required by SAI1"
#endif

#if !((STM32_HSI16_ENABLED == TRUE) || !((STM32_SAI2_ENABLED == TRUE) &&    \
      (STM32_CFG_SAI2_SEL == RCC_CCIPR2_SAI2SEL_HSI16))) && !defined(__DOXYGEN__)
  #error "HSI16 not enabled, required by SAI2"
#endif

#if !((STM32_HSI16_ENABLED == TRUE) || !((STM32_ADCDAC_ENABLED == TRUE) &&  \
      (STM32_CFG_ADCDAC_SEL == RCC_CCIPR3_ADCDACSEL_HSI16))) &&             \
    !defined(__DOXYGEN__)
  #error "HSI16 not enabled, required by ADCDAC"
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

#if !((STM32_HSI48_ENABLED == TRUE) || !((STM32_MCODIV_ENABLED == TRUE) &&  \
      (STM32_CFG_MCODIV_SEL == RCC_CFGR1_MCOSEL_HSI48))) && !defined(__DOXYGEN__)
  #error "HSI48 not enabled, required by MCODIV"
#endif

#if !((STM32_HSI48_ENABLED == TRUE) || !((STM32_ICLK_ENABLED == TRUE) &&    \
      (STM32_CFG_ICLK_SEL == RCC_CCIPR1_ICLKSEL_HSI48))) && !defined(__DOXYGEN__)
  #error "HSI48 not enabled, required by ICLK"
#endif

#if !defined(STM32_HSI48DIV2_ENABLED) && !defined(__DOXYGEN__)
  #error "STM32_HSI48DIV2_ENABLED not defined"
#endif
#if !((STM32_HSI48_ENABLED == TRUE) || !((STM32_HSI48DIV2_ENABLED == TRUE))) && \
    !defined(__DOXYGEN__)
  #error "HSI48 not enabled, required by HSI48DIV2"
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

#if !((STM32_HSE_ENABLED == TRUE) || !((STM32_PLL1IN_ENABLED == TRUE) &&    \
      (STM32_CFG_PLL1IN_SEL == RCC_PLL1CFGR_PLL1SRC_HSE))) &&               \
    !defined(__DOXYGEN__)
  #error "HSE not enabled, required by PLL1IN"
#endif

#if !((STM32_HSE_ENABLED == TRUE) || !((STM32_PLL2IN_ENABLED == TRUE) &&    \
      (STM32_CFG_PLL2IN_SEL == RCC_PLL2CFGR_PLL2SRC_HSE))) &&               \
    !defined(__DOXYGEN__)
  #error "HSE not enabled, required by PLL2IN"
#endif

#if !((STM32_HSE_ENABLED == TRUE) || !((STM32_PLL3IN_ENABLED == TRUE) &&    \
      (STM32_CFG_PLL3IN_SEL == RCC_PLL3CFGR_PLL3SRC_HSE))) &&               \
    !defined(__DOXYGEN__)
  #error "HSE not enabled, required by PLL3IN"
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

#if !((STM32_HSE_ENABLED == TRUE) || !((STM32_MCODIV_ENABLED == TRUE) &&    \
      (STM32_CFG_MCODIV_SEL == RCC_CFGR1_MCOSEL_HSE))) && !defined(__DOXYGEN__)
  #error "HSE not enabled, required by MCODIV"
#endif

#if !((STM32_HSE_ENABLED == TRUE) || !((STM32_FDCAN1_ENABLED == TRUE) &&    \
      (STM32_CFG_FDCAN1_SEL == RCC_CCIPR1_FDCANSEL_HSE))) && !defined(__DOXYGEN__)
  #error "HSE not enabled, required by FDCAN1"
#endif

#if !((STM32_HSE_ENABLED == TRUE) || !((STM32_ADCDAC_ENABLED == TRUE) &&    \
      (STM32_CFG_ADCDAC_SEL == RCC_CCIPR3_ADCDACSEL_HSE))) &&               \
    !defined(__DOXYGEN__)
  #error "HSE not enabled, required by ADCDAC"
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

#if !((STM32_LSE_ENABLED == TRUE) || !((STM32_MCODIV_ENABLED == TRUE) &&    \
      (STM32_CFG_MCODIV_SEL == RCC_CFGR1_MCOSEL_LSE))) && !defined(__DOXYGEN__)
  #error "LSE not enabled, required by MCODIV"
#endif

#if !defined(STM32_LSESYS_ENABLED) && !defined(__DOXYGEN__)
  #error "STM32_LSESYS_ENABLED not defined"
#endif
#if !((STM32_LSE_ENABLED == TRUE) || !((STM32_LSESYS_ENABLED == TRUE))) &&  \
    !defined(__DOXYGEN__)
  #error "LSE not enabled, required by LSESYS"
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

#if !((STM32_LSI_ENABLED == TRUE) || !((STM32_MCODIV_ENABLED == TRUE) &&    \
      (STM32_CFG_MCODIV_SEL == RCC_CFGR1_MCOSEL_LSI))) && !defined(__DOXYGEN__)
  #error "LSI not enabled, required by MCODIV"
#endif

#if !((STM32_LSI_ENABLED == TRUE) || !((STM32_RTC_ENABLED == TRUE) &&       \
      (STM32_CFG_RTC_SEL == RCC_BDCR_RTCSEL_LSI))) && !defined(__DOXYGEN__)
  #error "LSI not enabled, required by RTC"
#endif

#if !((STM32_LSI_ENABLED == TRUE) || !((STM32_LSCO_ENABLED == TRUE) &&      \
      (STM32_CFG_LSCO_SEL == RCC_BDCR_LSCOSEL_LSI))) && !defined(__DOXYGEN__)
  #error "LSI not enabled, required by LSCO"
#endif

#if !((STM32_LSI_ENABLED == TRUE) || !((STM32_SYSTICK_ENABLED == TRUE) &&   \
      (STM32_CFG_SYSTICK_SEL == RCC_CCIPR1_SYSTICKSEL_LSI))) &&             \
    !defined(__DOXYGEN__)
  #error "LSI not enabled, required by SYSTICK"
#endif

#if !((STM32_LSI_ENABLED == TRUE) || !((STM32_DAC1SH_ENABLED == TRUE) &&    \
      (STM32_CFG_DAC1SH_SEL == RCC_CCIPR3_DAC1SEL_LSI))) && !defined(__DOXYGEN__)
  #error "LSI not enabled, required by DAC1SH"
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
 * @brief   PLL1 input clock point.
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
 * @brief   PLL1 reference clock point.
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
 * @brief   PLL1 VCO clock point.
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

#if !((STM32_CFG_PLL1P_VALUE >= 1) && (STM32_CFG_PLL1P_VALUE <= 128)) &&    \
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
 * @brief   PLL1 P output clock point.
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
 * @brief   PLL1 Q output clock point.
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
 * @brief   PLL1 R output clock point.
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
 * @brief   PLL2 input clock point.
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
 * @brief   PLL2 reference clock point.
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
 * @brief   PLL2 VCO clock point.
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

#if !((STM32_CFG_PLL2P_VALUE >= 1) && (STM32_CFG_PLL2P_VALUE <= 128)) &&    \
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
 * @brief   PLL2 P output clock point.
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
 * @brief   PLL2 Q output clock point.
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
 * @brief   PLL2 R output clock point.
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
 * @brief   PLL3 input clock point.
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
 * @brief   PLL3 reference clock point.
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
 * @brief   PLL3 VCO clock point.
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

#if !((STM32_CFG_PLL3P_VALUE >= 1) && (STM32_CFG_PLL3P_VALUE <= 128)) &&    \
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
 * @brief   PLL3 P output clock point.
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
 * @brief   PLL3 Q output clock point.
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
 * @brief   PLL3 R output clock point.
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
#elif (STM32_SYSCLK_ENABLED == TRUE) && \
      (STM32_CFG_SYSCLK_SEL == RCC_CFGR1_SW_PLL1P)
  #define STM32_SYSCLK_FREQ                 STM32_PLL1P_FREQ
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
 * @brief   HSE divided-by-32 RTC clock point.
 */
#if (STM32_HSEDIV_ENABLED == TRUE) || defined(__DOXYGEN__)
  #define STM32_HSEDIV_FREQ                 (STM32_HSE_FREQ / 32U)
#else
  #define STM32_HSEDIV_FREQ                 0U
#endif

/*--- Macros and checks for the MCODIV clock point. ------------------------*/

/**
 * @brief   MCODIV clock register bits.
 */
#if (STM32_CFG_MCODIV_SEL == RCC_CFGR1_MCOSEL_NOCLOCK) || defined(__DOXYGEN__)
  #define STM32_MCODIV_BITS                 RCC_CFGR1_MCOSEL_NOCLOCK
#elif (STM32_CFG_MCODIV_SEL == RCC_CFGR1_MCOSEL_SYSCLK)
  #define STM32_MCODIV_BITS                 RCC_CFGR1_MCOSEL_SYSCLK
#elif (STM32_CFG_MCODIV_SEL == RCC_CFGR1_MCOSEL_MSIS)
  #define STM32_MCODIV_BITS                 RCC_CFGR1_MCOSEL_MSIS
#elif (STM32_CFG_MCODIV_SEL == RCC_CFGR1_MCOSEL_HSI16)
  #define STM32_MCODIV_BITS                 RCC_CFGR1_MCOSEL_HSI16
#elif (STM32_CFG_MCODIV_SEL == RCC_CFGR1_MCOSEL_HSE)
  #define STM32_MCODIV_BITS                 RCC_CFGR1_MCOSEL_HSE
#elif (STM32_CFG_MCODIV_SEL == RCC_CFGR1_MCOSEL_PLL1R)
  #define STM32_MCODIV_BITS                 RCC_CFGR1_MCOSEL_PLL1R
#elif (STM32_CFG_MCODIV_SEL == RCC_CFGR1_MCOSEL_LSI)
  #define STM32_MCODIV_BITS                 RCC_CFGR1_MCOSEL_LSI
#elif (STM32_CFG_MCODIV_SEL == RCC_CFGR1_MCOSEL_LSE)
  #define STM32_MCODIV_BITS                 RCC_CFGR1_MCOSEL_LSE
#elif (STM32_CFG_MCODIV_SEL == RCC_CFGR1_MCOSEL_HSI48)
  #define STM32_MCODIV_BITS                 RCC_CFGR1_MCOSEL_HSI48
#elif (STM32_CFG_MCODIV_SEL == RCC_CFGR1_MCOSEL_MSIK)
  #define STM32_MCODIV_BITS                 RCC_CFGR1_MCOSEL_MSIK
#else
  #error "invalid STM32_CFG_MCODIV_SEL value specified"
#endif

/**
 * @brief   MCO selected source before prescaler clock point.
 */
#if ((STM32_MCODIV_ENABLED == TRUE) && \
     (STM32_CFG_MCODIV_SEL == RCC_CFGR1_MCOSEL_NOCLOCK)) || \
    defined(__DOXYGEN__)
  #define STM32_MCODIV_FREQ                 STM32_NONE_FREQ
#elif (STM32_MCODIV_ENABLED == TRUE) && \
      (STM32_CFG_MCODIV_SEL == RCC_CFGR1_MCOSEL_SYSCLK)
  #define STM32_MCODIV_FREQ                 STM32_SYSCLK_FREQ
#elif (STM32_MCODIV_ENABLED == TRUE) && \
      (STM32_CFG_MCODIV_SEL == RCC_CFGR1_MCOSEL_MSIS)
  #define STM32_MCODIV_FREQ                 STM32_MSIS_FREQ
#elif (STM32_MCODIV_ENABLED == TRUE) && \
      (STM32_CFG_MCODIV_SEL == RCC_CFGR1_MCOSEL_HSI16)
  #define STM32_MCODIV_FREQ                 STM32_HSI16_FREQ
#elif (STM32_MCODIV_ENABLED == TRUE) && \
      (STM32_CFG_MCODIV_SEL == RCC_CFGR1_MCOSEL_HSE)
  #define STM32_MCODIV_FREQ                 STM32_HSE_FREQ
#elif (STM32_MCODIV_ENABLED == TRUE) && \
      (STM32_CFG_MCODIV_SEL == RCC_CFGR1_MCOSEL_PLL1R)
  #define STM32_MCODIV_FREQ                 STM32_PLL1R_FREQ
#elif (STM32_MCODIV_ENABLED == TRUE) && \
      (STM32_CFG_MCODIV_SEL == RCC_CFGR1_MCOSEL_LSI)
  #define STM32_MCODIV_FREQ                 STM32_LSI_FREQ
#elif (STM32_MCODIV_ENABLED == TRUE) && \
      (STM32_CFG_MCODIV_SEL == RCC_CFGR1_MCOSEL_LSE)
  #define STM32_MCODIV_FREQ                 STM32_LSE_FREQ
#elif (STM32_MCODIV_ENABLED == TRUE) && \
      (STM32_CFG_MCODIV_SEL == RCC_CFGR1_MCOSEL_HSI48)
  #define STM32_MCODIV_FREQ                 STM32_HSI48_FREQ
#elif (STM32_MCODIV_ENABLED == TRUE) && \
      (STM32_CFG_MCODIV_SEL == RCC_CFGR1_MCOSEL_MSIK)
  #define STM32_MCODIV_FREQ                 STM32_MSIK_FREQ
#else
  #define STM32_MCODIV_FREQ                 0U
#endif

/*--- Macros and checks for the MCO clock point. ---------------------------*/

/**
 * @brief   MCO clock register bits.
 */
#if (STM32_CFG_MCO_VALUE == 1) || defined(__DOXYGEN__)
  #define STM32_MCO_BITS                    RCC_CFGR1_MCOPRE_DIV1
#elif (STM32_CFG_MCO_VALUE == 2)
  #define STM32_MCO_BITS                    RCC_CFGR1_MCOPRE_DIV2
#elif (STM32_CFG_MCO_VALUE == 4)
  #define STM32_MCO_BITS                    RCC_CFGR1_MCOPRE_DIV4
#elif (STM32_CFG_MCO_VALUE == 8)
  #define STM32_MCO_BITS                    RCC_CFGR1_MCOPRE_DIV8
#elif (STM32_CFG_MCO_VALUE == 16)
  #define STM32_MCO_BITS                    RCC_CFGR1_MCOPRE_DIV16
#else
  #error "invalid STM32_CFG_MCO_VALUE value specified"
#endif

/**
 * @brief   MCO output pin clock point.
 */
#define STM32_MCO_FREQ                      (STM32_MCODIV_FREQ /            \
                                             STM32_CFG_MCO_VALUE)

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
 * @brief   LSE system clock point.
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
 * @brief   RTC and TAMP clock point.
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
#elif (STM32_CFG_USART1_SEL == RCC_CCIPR1_USART1SEL_SYSCLK)
  #if (STM32_USART1_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_USART1_BITS               RCC_CCIPR1_USART1SEL_SYSCLK
  #else
    #define STM32_USART1_BITS               0U
  #endif
#elif (STM32_CFG_USART1_SEL == RCC_CCIPR1_USART1SEL_HSI16)
  #if (STM32_USART1_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_USART1_BITS               RCC_CCIPR1_USART1SEL_HSI16
  #else
    #define STM32_USART1_BITS               0U
  #endif
#elif (STM32_CFG_USART1_SEL == RCC_CCIPR1_USART1SEL_LSE)
  #if (STM32_USART1_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_USART1_BITS               RCC_CCIPR1_USART1SEL_LSE
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
      (STM32_CFG_USART1_SEL == RCC_CCIPR1_USART1SEL_SYSCLK)
  #define STM32_USART1_FREQ                 STM32_SYSCLK_FREQ
#elif (STM32_USART1_ENABLED == TRUE) && \
      (STM32_CFG_USART1_SEL == RCC_CCIPR1_USART1SEL_HSI16)
  #define STM32_USART1_FREQ                 STM32_HSI16_FREQ
#elif (STM32_USART1_ENABLED == TRUE) && \
      (STM32_CFG_USART1_SEL == RCC_CCIPR1_USART1SEL_LSE)
  #define STM32_USART1_FREQ                 STM32_LSESYS_FREQ
#else
  #define STM32_USART1_FREQ                 0U
#endif

/*--- Macros and checks for the USART2 clock point. ------------------------*/

/**
 * @brief   USART2 clock register bits.
 */
#if (STM32_CFG_USART2_SEL == RCC_CCIPR1_USART2SEL_PCLK1) || defined(__DOXYGEN__)
  #if (STM32_USART2_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_USART2_BITS               RCC_CCIPR1_USART2SEL_PCLK1
  #else
    #define STM32_USART2_BITS               0U
  #endif
#elif (STM32_CFG_USART2_SEL == RCC_CCIPR1_USART2SEL_SYSCLK)
  #if (STM32_USART2_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_USART2_BITS               RCC_CCIPR1_USART2SEL_SYSCLK
  #else
    #define STM32_USART2_BITS               0U
  #endif
#elif (STM32_CFG_USART2_SEL == RCC_CCIPR1_USART2SEL_HSI16)
  #if (STM32_USART2_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_USART2_BITS               RCC_CCIPR1_USART2SEL_HSI16
  #else
    #define STM32_USART2_BITS               0U
  #endif
#elif (STM32_CFG_USART2_SEL == RCC_CCIPR1_USART2SEL_LSE)
  #if (STM32_USART2_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_USART2_BITS               RCC_CCIPR1_USART2SEL_LSE
  #else
    #define STM32_USART2_BITS               0U
  #endif
#else
  #error "invalid STM32_CFG_USART2_SEL value specified"
#endif

/**
 * @brief   USART2 clock point.
 */
#if ((STM32_USART2_ENABLED == TRUE) && \
     (STM32_CFG_USART2_SEL == RCC_CCIPR1_USART2SEL_PCLK1)) || \
    defined(__DOXYGEN__)
  #define STM32_USART2_FREQ                 STM32_PCLK1_FREQ
#elif (STM32_USART2_ENABLED == TRUE) && \
      (STM32_CFG_USART2_SEL == RCC_CCIPR1_USART2SEL_SYSCLK)
  #define STM32_USART2_FREQ                 STM32_SYSCLK_FREQ
#elif (STM32_USART2_ENABLED == TRUE) && \
      (STM32_CFG_USART2_SEL == RCC_CCIPR1_USART2SEL_HSI16)
  #define STM32_USART2_FREQ                 STM32_HSI16_FREQ
#elif (STM32_USART2_ENABLED == TRUE) && \
      (STM32_CFG_USART2_SEL == RCC_CCIPR1_USART2SEL_LSE)
  #define STM32_USART2_FREQ                 STM32_LSESYS_FREQ
#else
  #define STM32_USART2_FREQ                 0U
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
#elif (STM32_CFG_USART3_SEL == RCC_CCIPR1_USART3SEL_SYSCLK)
  #if (STM32_USART3_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_USART3_BITS               RCC_CCIPR1_USART3SEL_SYSCLK
  #else
    #define STM32_USART3_BITS               0U
  #endif
#elif (STM32_CFG_USART3_SEL == RCC_CCIPR1_USART3SEL_HSI16)
  #if (STM32_USART3_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_USART3_BITS               RCC_CCIPR1_USART3SEL_HSI16
  #else
    #define STM32_USART3_BITS               0U
  #endif
#elif (STM32_CFG_USART3_SEL == RCC_CCIPR1_USART3SEL_LSE)
  #if (STM32_USART3_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_USART3_BITS               RCC_CCIPR1_USART3SEL_LSE
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
      (STM32_CFG_USART3_SEL == RCC_CCIPR1_USART3SEL_SYSCLK)
  #define STM32_USART3_FREQ                 STM32_SYSCLK_FREQ
#elif (STM32_USART3_ENABLED == TRUE) && \
      (STM32_CFG_USART3_SEL == RCC_CCIPR1_USART3SEL_HSI16)
  #define STM32_USART3_FREQ                 STM32_HSI16_FREQ
#elif (STM32_USART3_ENABLED == TRUE) && \
      (STM32_CFG_USART3_SEL == RCC_CCIPR1_USART3SEL_LSE)
  #define STM32_USART3_FREQ                 STM32_LSESYS_FREQ
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
#elif (STM32_CFG_UART4_SEL == RCC_CCIPR1_UART4SEL_SYSCLK)
  #if (STM32_UART4_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_UART4_BITS                RCC_CCIPR1_UART4SEL_SYSCLK
  #else
    #define STM32_UART4_BITS                0U
  #endif
#elif (STM32_CFG_UART4_SEL == RCC_CCIPR1_UART4SEL_HSI16)
  #if (STM32_UART4_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_UART4_BITS                RCC_CCIPR1_UART4SEL_HSI16
  #else
    #define STM32_UART4_BITS                0U
  #endif
#elif (STM32_CFG_UART4_SEL == RCC_CCIPR1_UART4SEL_LSE)
  #if (STM32_UART4_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_UART4_BITS                RCC_CCIPR1_UART4SEL_LSE
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
      (STM32_CFG_UART4_SEL == RCC_CCIPR1_UART4SEL_SYSCLK)
  #define STM32_UART4_FREQ                  STM32_SYSCLK_FREQ
#elif (STM32_UART4_ENABLED == TRUE) && \
      (STM32_CFG_UART4_SEL == RCC_CCIPR1_UART4SEL_HSI16)
  #define STM32_UART4_FREQ                  STM32_HSI16_FREQ
#elif (STM32_UART4_ENABLED == TRUE) && \
      (STM32_CFG_UART4_SEL == RCC_CCIPR1_UART4SEL_LSE)
  #define STM32_UART4_FREQ                  STM32_LSESYS_FREQ
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
#elif (STM32_CFG_UART5_SEL == RCC_CCIPR1_UART5SEL_SYSCLK)
  #if (STM32_UART5_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_UART5_BITS                RCC_CCIPR1_UART5SEL_SYSCLK
  #else
    #define STM32_UART5_BITS                0U
  #endif
#elif (STM32_CFG_UART5_SEL == RCC_CCIPR1_UART5SEL_HSI16)
  #if (STM32_UART5_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_UART5_BITS                RCC_CCIPR1_UART5SEL_HSI16
  #else
    #define STM32_UART5_BITS                0U
  #endif
#elif (STM32_CFG_UART5_SEL == RCC_CCIPR1_UART5SEL_LSE)
  #if (STM32_UART5_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_UART5_BITS                RCC_CCIPR1_UART5SEL_LSE
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
      (STM32_CFG_UART5_SEL == RCC_CCIPR1_UART5SEL_SYSCLK)
  #define STM32_UART5_FREQ                  STM32_SYSCLK_FREQ
#elif (STM32_UART5_ENABLED == TRUE) && \
      (STM32_CFG_UART5_SEL == RCC_CCIPR1_UART5SEL_HSI16)
  #define STM32_UART5_FREQ                  STM32_HSI16_FREQ
#elif (STM32_UART5_ENABLED == TRUE) && \
      (STM32_CFG_UART5_SEL == RCC_CCIPR1_UART5SEL_LSE)
  #define STM32_UART5_FREQ                  STM32_LSESYS_FREQ
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
#elif (STM32_CFG_LPUART1_SEL == RCC_CCIPR3_LPUART1SEL_SYSCLK)
  #if (STM32_LPUART1_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_LPUART1_BITS              RCC_CCIPR3_LPUART1SEL_SYSCLK
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
      (STM32_CFG_LPUART1_SEL == RCC_CCIPR3_LPUART1SEL_SYSCLK)
  #define STM32_LPUART1_FREQ                STM32_SYSCLK_FREQ
#elif (STM32_LPUART1_ENABLED == TRUE) && \
      (STM32_CFG_LPUART1_SEL == RCC_CCIPR3_LPUART1SEL_HSI16)
  #define STM32_LPUART1_FREQ                STM32_HSI16_FREQ
#elif (STM32_LPUART1_ENABLED == TRUE) && \
      (STM32_CFG_LPUART1_SEL == RCC_CCIPR3_LPUART1SEL_LSE)
  #define STM32_LPUART1_FREQ                STM32_LSESYS_FREQ
#elif (STM32_LPUART1_ENABLED == TRUE) && \
      (STM32_CFG_LPUART1_SEL == RCC_CCIPR3_LPUART1SEL_MSIK)
  #define STM32_LPUART1_FREQ                STM32_MSIK_FREQ
#else
  #define STM32_LPUART1_FREQ                0U
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
#elif (STM32_CFG_I2C1_SEL == RCC_CCIPR1_I2C1SEL_SYSCLK)
  #if (STM32_I2C1_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_I2C1_BITS                 RCC_CCIPR1_I2C1SEL_SYSCLK
  #else
    #define STM32_I2C1_BITS                 0U
  #endif
#elif (STM32_CFG_I2C1_SEL == RCC_CCIPR1_I2C1SEL_HSI16)
  #if (STM32_I2C1_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_I2C1_BITS                 RCC_CCIPR1_I2C1SEL_HSI16
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
      (STM32_CFG_I2C1_SEL == RCC_CCIPR1_I2C1SEL_SYSCLK)
  #define STM32_I2C1_FREQ                   STM32_SYSCLK_FREQ
#elif (STM32_I2C1_ENABLED == TRUE) && \
      (STM32_CFG_I2C1_SEL == RCC_CCIPR1_I2C1SEL_HSI16)
  #define STM32_I2C1_FREQ                   STM32_HSI16_FREQ
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
#elif (STM32_CFG_I2C2_SEL == RCC_CCIPR1_I2C2SEL_SYSCLK)
  #if (STM32_I2C2_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_I2C2_BITS                 RCC_CCIPR1_I2C2SEL_SYSCLK
  #else
    #define STM32_I2C2_BITS                 0U
  #endif
#elif (STM32_CFG_I2C2_SEL == RCC_CCIPR1_I2C2SEL_HSI16)
  #if (STM32_I2C2_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_I2C2_BITS                 RCC_CCIPR1_I2C2SEL_HSI16
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
      (STM32_CFG_I2C2_SEL == RCC_CCIPR1_I2C2SEL_SYSCLK)
  #define STM32_I2C2_FREQ                   STM32_SYSCLK_FREQ
#elif (STM32_I2C2_ENABLED == TRUE) && \
      (STM32_CFG_I2C2_SEL == RCC_CCIPR1_I2C2SEL_HSI16)
  #define STM32_I2C2_FREQ                   STM32_HSI16_FREQ
#elif (STM32_I2C2_ENABLED == TRUE) && \
      (STM32_CFG_I2C2_SEL == RCC_CCIPR1_I2C2SEL_MSIK)
  #define STM32_I2C2_FREQ                   STM32_MSIK_FREQ
#else
  #define STM32_I2C2_FREQ                   0U
#endif

/*--- Macros and checks for the I2C4 clock point. --------------------------*/

/**
 * @brief   I2C4 clock register bits.
 */
#if (STM32_CFG_I2C4_SEL == RCC_CCIPR1_I2C4SEL_PCLK1) || defined(__DOXYGEN__)
  #if (STM32_I2C4_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_I2C4_BITS                 RCC_CCIPR1_I2C4SEL_PCLK1
  #else
    #define STM32_I2C4_BITS                 0U
  #endif
#elif (STM32_CFG_I2C4_SEL == RCC_CCIPR1_I2C4SEL_SYSCLK)
  #if (STM32_I2C4_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_I2C4_BITS                 RCC_CCIPR1_I2C4SEL_SYSCLK
  #else
    #define STM32_I2C4_BITS                 0U
  #endif
#elif (STM32_CFG_I2C4_SEL == RCC_CCIPR1_I2C4SEL_HSI16)
  #if (STM32_I2C4_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_I2C4_BITS                 RCC_CCIPR1_I2C4SEL_HSI16
  #else
    #define STM32_I2C4_BITS                 0U
  #endif
#elif (STM32_CFG_I2C4_SEL == RCC_CCIPR1_I2C4SEL_MSIK)
  #if (STM32_I2C4_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_I2C4_BITS                 RCC_CCIPR1_I2C4SEL_MSIK
  #else
    #define STM32_I2C4_BITS                 0U
  #endif
#else
  #error "invalid STM32_CFG_I2C4_SEL value specified"
#endif

/**
 * @brief   I2C4 clock point.
 */
#if ((STM32_I2C4_ENABLED == TRUE) && \
     (STM32_CFG_I2C4_SEL == RCC_CCIPR1_I2C4SEL_PCLK1)) || \
    defined(__DOXYGEN__)
  #define STM32_I2C4_FREQ                   STM32_PCLK1_FREQ
#elif (STM32_I2C4_ENABLED == TRUE) && \
      (STM32_CFG_I2C4_SEL == RCC_CCIPR1_I2C4SEL_SYSCLK)
  #define STM32_I2C4_FREQ                   STM32_SYSCLK_FREQ
#elif (STM32_I2C4_ENABLED == TRUE) && \
      (STM32_CFG_I2C4_SEL == RCC_CCIPR1_I2C4SEL_HSI16)
  #define STM32_I2C4_FREQ                   STM32_HSI16_FREQ
#elif (STM32_I2C4_ENABLED == TRUE) && \
      (STM32_CFG_I2C4_SEL == RCC_CCIPR1_I2C4SEL_MSIK)
  #define STM32_I2C4_FREQ                   STM32_MSIK_FREQ
#else
  #define STM32_I2C4_FREQ                   0U
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
#elif (STM32_CFG_I2C3_SEL == RCC_CCIPR3_I2C3SEL_SYSCLK)
  #if (STM32_I2C3_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_I2C3_BITS                 RCC_CCIPR3_I2C3SEL_SYSCLK
  #else
    #define STM32_I2C3_BITS                 0U
  #endif
#elif (STM32_CFG_I2C3_SEL == RCC_CCIPR3_I2C3SEL_HSI16)
  #if (STM32_I2C3_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_I2C3_BITS                 RCC_CCIPR3_I2C3SEL_HSI16
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
      (STM32_CFG_I2C3_SEL == RCC_CCIPR3_I2C3SEL_SYSCLK)
  #define STM32_I2C3_FREQ                   STM32_SYSCLK_FREQ
#elif (STM32_I2C3_ENABLED == TRUE) && \
      (STM32_CFG_I2C3_SEL == RCC_CCIPR3_I2C3SEL_HSI16)
  #define STM32_I2C3_FREQ                   STM32_HSI16_FREQ
#elif (STM32_I2C3_ENABLED == TRUE) && \
      (STM32_CFG_I2C3_SEL == RCC_CCIPR3_I2C3SEL_MSIK)
  #define STM32_I2C3_FREQ                   STM32_MSIK_FREQ
#else
  #define STM32_I2C3_FREQ                   0U
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
#elif (STM32_CFG_SPI1_SEL == RCC_CCIPR1_SPI1SEL_SYSCLK)
  #if (STM32_SPI1_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_SPI1_BITS                 RCC_CCIPR1_SPI1SEL_SYSCLK
  #else
    #define STM32_SPI1_BITS                 0U
  #endif
#elif (STM32_CFG_SPI1_SEL == RCC_CCIPR1_SPI1SEL_HSI16)
  #if (STM32_SPI1_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_SPI1_BITS                 RCC_CCIPR1_SPI1SEL_HSI16
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
      (STM32_CFG_SPI1_SEL == RCC_CCIPR1_SPI1SEL_SYSCLK)
  #define STM32_SPI1_FREQ                   STM32_SYSCLK_FREQ
#elif (STM32_SPI1_ENABLED == TRUE) && \
      (STM32_CFG_SPI1_SEL == RCC_CCIPR1_SPI1SEL_HSI16)
  #define STM32_SPI1_FREQ                   STM32_HSI16_FREQ
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
#elif (STM32_CFG_SPI2_SEL == RCC_CCIPR1_SPI2SEL_SYSCLK)
  #if (STM32_SPI2_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_SPI2_BITS                 RCC_CCIPR1_SPI2SEL_SYSCLK
  #else
    #define STM32_SPI2_BITS                 0U
  #endif
#elif (STM32_CFG_SPI2_SEL == RCC_CCIPR1_SPI2SEL_HSI16)
  #if (STM32_SPI2_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_SPI2_BITS                 RCC_CCIPR1_SPI2SEL_HSI16
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
      (STM32_CFG_SPI2_SEL == RCC_CCIPR1_SPI2SEL_SYSCLK)
  #define STM32_SPI2_FREQ                   STM32_SYSCLK_FREQ
#elif (STM32_SPI2_ENABLED == TRUE) && \
      (STM32_CFG_SPI2_SEL == RCC_CCIPR1_SPI2SEL_HSI16)
  #define STM32_SPI2_FREQ                   STM32_HSI16_FREQ
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
#if (STM32_CFG_SPI3_SEL == RCC_CCIPR3_SPI3SEL_PCLK3) || defined(__DOXYGEN__)
  #if (STM32_SPI3_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_SPI3_BITS                 RCC_CCIPR3_SPI3SEL_PCLK3
  #else
    #define STM32_SPI3_BITS                 0U
  #endif
#elif (STM32_CFG_SPI3_SEL == RCC_CCIPR3_SPI3SEL_SYSCLK)
  #if (STM32_SPI3_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_SPI3_BITS                 RCC_CCIPR3_SPI3SEL_SYSCLK
  #else
    #define STM32_SPI3_BITS                 0U
  #endif
#elif (STM32_CFG_SPI3_SEL == RCC_CCIPR3_SPI3SEL_HSI16)
  #if (STM32_SPI3_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_SPI3_BITS                 RCC_CCIPR3_SPI3SEL_HSI16
  #else
    #define STM32_SPI3_BITS                 0U
  #endif
#elif (STM32_CFG_SPI3_SEL == RCC_CCIPR3_SPI3SEL_MSIK)
  #if (STM32_SPI3_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_SPI3_BITS                 RCC_CCIPR3_SPI3SEL_MSIK
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
     (STM32_CFG_SPI3_SEL == RCC_CCIPR3_SPI3SEL_PCLK3)) || \
    defined(__DOXYGEN__)
  #define STM32_SPI3_FREQ                   STM32_PCLK3_FREQ
#elif (STM32_SPI3_ENABLED == TRUE) && \
      (STM32_CFG_SPI3_SEL == RCC_CCIPR3_SPI3SEL_SYSCLK)
  #define STM32_SPI3_FREQ                   STM32_SYSCLK_FREQ
#elif (STM32_SPI3_ENABLED == TRUE) && \
      (STM32_CFG_SPI3_SEL == RCC_CCIPR3_SPI3SEL_HSI16)
  #define STM32_SPI3_FREQ                   STM32_HSI16_FREQ
#elif (STM32_SPI3_ENABLED == TRUE) && \
      (STM32_CFG_SPI3_SEL == RCC_CCIPR3_SPI3SEL_MSIK)
  #define STM32_SPI3_FREQ                   STM32_MSIK_FREQ
#else
  #define STM32_SPI3_FREQ                   0U
#endif

/*--- Macros and checks for the FDCAN1 clock point. ------------------------*/

/**
 * @brief   FDCAN1 clock register bits.
 */
#if (STM32_CFG_FDCAN1_SEL == RCC_CCIPR1_FDCANSEL_HSE) || defined(__DOXYGEN__)
  #if (STM32_FDCAN1_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_FDCAN1_BITS               RCC_CCIPR1_FDCANSEL_HSE
  #else
    #define STM32_FDCAN1_BITS               0U
  #endif
#elif (STM32_CFG_FDCAN1_SEL == RCC_CCIPR1_FDCANSEL_PLL1Q)
  #if (STM32_FDCAN1_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_FDCAN1_BITS               RCC_CCIPR1_FDCANSEL_PLL1Q
  #else
    #define STM32_FDCAN1_BITS               0U
  #endif
#elif (STM32_CFG_FDCAN1_SEL == RCC_CCIPR1_FDCANSEL_PLL2P)
  #if (STM32_FDCAN1_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_FDCAN1_BITS               RCC_CCIPR1_FDCANSEL_PLL2P
  #else
    #define STM32_FDCAN1_BITS               0U
  #endif
#elif (STM32_FDCAN1_ENABLED == FALSE) &&                                    \
      (STM32_CFG_FDCAN1_SEL == RCC_CCIPR1_FDCANSEL_IGNORE)
  #define STM32_FDCAN1_BITS                 0U
#else
  #error "invalid STM32_CFG_FDCAN1_SEL value specified"
#endif

/**
 * @brief   FDCAN1 clock point.
 */
#if ((STM32_FDCAN1_ENABLED == TRUE) && \
     (STM32_CFG_FDCAN1_SEL == RCC_CCIPR1_FDCANSEL_HSE)) || \
    defined(__DOXYGEN__)
  #define STM32_FDCAN1_FREQ                 STM32_HSE_FREQ
#elif (STM32_FDCAN1_ENABLED == TRUE) && \
      (STM32_CFG_FDCAN1_SEL == RCC_CCIPR1_FDCANSEL_PLL1Q)
  #define STM32_FDCAN1_FREQ                 STM32_PLL1Q_FREQ
#elif (STM32_FDCAN1_ENABLED == TRUE) && \
      (STM32_CFG_FDCAN1_SEL == RCC_CCIPR1_FDCANSEL_PLL2P)
  #define STM32_FDCAN1_FREQ                 STM32_PLL2P_FREQ
#else
  #define STM32_FDCAN1_FREQ                 0U
#endif

/*--- Macros and checks for the HCLKDIV8 clock point. ----------------------*/

/**
 * @brief   HCLKDIV8 clock register bits.
 */
#define STM32_HCLKDIV8_BITS                 0U

/**
 * @brief   HCLK divided by 8 clock point.
 */
#if (STM32_HCLKDIV8_ENABLED == TRUE) || defined(__DOXYGEN__)
  #define STM32_HCLKDIV8_FREQ               (STM32_HCLK_FREQ / 8U)
#else
  #define STM32_HCLKDIV8_FREQ               0U
#endif

/*--- Macros and checks for the SYSTICK clock point. -----------------------*/

/**
 * @brief   SYSTICK clock register bits.
 */
#if (STM32_CFG_SYSTICK_SEL == RCC_CCIPR1_SYSTICKSEL_HCLKDIV8) ||            \
    defined(__DOXYGEN__)
  #if (STM32_SYSTICK_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_SYSTICK_BITS              RCC_CCIPR1_SYSTICKSEL_HCLKDIV8
  #else
    #define STM32_SYSTICK_BITS              0U
  #endif
#elif (STM32_CFG_SYSTICK_SEL == RCC_CCIPR1_SYSTICKSEL_LSI)
  #if (STM32_SYSTICK_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_SYSTICK_BITS              RCC_CCIPR1_SYSTICKSEL_LSI
  #else
    #define STM32_SYSTICK_BITS              0U
  #endif
#elif (STM32_CFG_SYSTICK_SEL == RCC_CCIPR1_SYSTICKSEL_LSE)
  #if (STM32_SYSTICK_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_SYSTICK_BITS              RCC_CCIPR1_SYSTICKSEL_LSE
  #else
    #define STM32_SYSTICK_BITS              0U
  #endif
#elif (STM32_SYSTICK_ENABLED == FALSE) &&                                   \
      (STM32_CFG_SYSTICK_SEL == RCC_CCIPR1_SYSTICKSEL_IGNORE)
  #define STM32_SYSTICK_BITS                0U
#else
  #error "invalid STM32_CFG_SYSTICK_SEL value specified"
#endif

/**
 * @brief   SysTick clock point.
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
  #define STM32_SYSTICK_FREQ                STM32_LSESYS_FREQ
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
#elif (STM32_CFG_ICLK_SEL == RCC_CCIPR1_ICLKSEL_PLL2Q)
  #if (STM32_ICLK_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICLK_BITS                 RCC_CCIPR1_ICLKSEL_PLL2Q
  #else
    #define STM32_ICLK_BITS                 0U
  #endif
#elif (STM32_CFG_ICLK_SEL == RCC_CCIPR1_ICLKSEL_PLL1Q)
  #if (STM32_ICLK_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICLK_BITS                 RCC_CCIPR1_ICLKSEL_PLL1Q
  #else
    #define STM32_ICLK_BITS                 0U
  #endif
#elif (STM32_CFG_ICLK_SEL == RCC_CCIPR1_ICLKSEL_MSIK)
  #if (STM32_ICLK_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICLK_BITS                 RCC_CCIPR1_ICLKSEL_MSIK
  #else
    #define STM32_ICLK_BITS                 0U
  #endif
#else
  #error "invalid STM32_CFG_ICLK_SEL value specified"
#endif

/**
 * @brief   ICLK 48 MHz clock point.
 */
#if ((STM32_ICLK_ENABLED == TRUE) && \
     (STM32_CFG_ICLK_SEL == RCC_CCIPR1_ICLKSEL_HSI48)) || \
    defined(__DOXYGEN__)
  #define STM32_ICLK_FREQ                   STM32_HSI48_FREQ
#elif (STM32_ICLK_ENABLED == TRUE) && \
      (STM32_CFG_ICLK_SEL == RCC_CCIPR1_ICLKSEL_PLL2Q)
  #define STM32_ICLK_FREQ                   STM32_PLL2Q_FREQ
#elif (STM32_ICLK_ENABLED == TRUE) && \
      (STM32_CFG_ICLK_SEL == RCC_CCIPR1_ICLKSEL_PLL1Q)
  #define STM32_ICLK_FREQ                   STM32_PLL1Q_FREQ
#elif (STM32_ICLK_ENABLED == TRUE) && \
      (STM32_CFG_ICLK_SEL == RCC_CCIPR1_ICLKSEL_MSIK)
  #define STM32_ICLK_FREQ                   STM32_MSIK_FREQ
#else
  #define STM32_ICLK_FREQ                   0U
#endif

/*--- Macros and checks for the USB clock point. ---------------------------*/

/**
 * @brief   USB clock register bits.
 */
#define STM32_USB_BITS                      0U

/**
 * @brief   USB clock point.
 */
#if (STM32_USB_ENABLED == TRUE) || defined(__DOXYGEN__)
  #define STM32_USB_FREQ                    STM32_ICLK_FREQ
#else
  #define STM32_USB_FREQ                    0U
#endif

/*--- Macros and checks for the SDMMC clock point. -------------------------*/

/**
 * @brief   SDMMC clock register bits.
 */
#if (STM32_CFG_SDMMC_SEL == RCC_CCIPR2_SDMMCSEL_ICLK) || defined(__DOXYGEN__)
  #if (STM32_SDMMC_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_SDMMC_BITS                RCC_CCIPR2_SDMMCSEL_ICLK
  #else
    #define STM32_SDMMC_BITS                0U
  #endif
#elif (STM32_CFG_SDMMC_SEL == RCC_CCIPR2_SDMMCSEL_PLL1P)
  #if (STM32_SDMMC_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_SDMMC_BITS                RCC_CCIPR2_SDMMCSEL_PLL1P
  #else
    #define STM32_SDMMC_BITS                0U
  #endif
#else
  #error "invalid STM32_CFG_SDMMC_SEL value specified"
#endif

/**
 * @brief   SDMMC clock point.
 */
#if ((STM32_SDMMC_ENABLED == TRUE) && \
     (STM32_CFG_SDMMC_SEL == RCC_CCIPR2_SDMMCSEL_ICLK)) || \
    defined(__DOXYGEN__)
  #define STM32_SDMMC_FREQ                  STM32_ICLK_FREQ
#elif (STM32_SDMMC_ENABLED == TRUE) && \
      (STM32_CFG_SDMMC_SEL == RCC_CCIPR2_SDMMCSEL_PLL1P)
  #define STM32_SDMMC_FREQ                  STM32_PLL1P_FREQ
#else
  #define STM32_SDMMC_FREQ                  0U
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
  #define STM32_SDMMC1_FREQ                 STM32_SDMMC_FREQ
#else
  #define STM32_SDMMC1_FREQ                 0U
#endif

/*--- Macros and checks for the SDMMC2 clock point. ------------------------*/

/**
 * @brief   SDMMC2 clock register bits.
 */
#define STM32_SDMMC2_BITS                   0U

/**
 * @brief   SDMMC2 clock point.
 */
#if (STM32_SDMMC2_ENABLED == TRUE) || defined(__DOXYGEN__)
  #define STM32_SDMMC2_FREQ                 STM32_SDMMC_FREQ
#else
  #define STM32_SDMMC2_FREQ                 0U
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
#elif (STM32_CFG_OCTOSPI_SEL == RCC_CCIPR2_OCTOSPISEL_PLL1Q)
  #if (STM32_OCTOSPI_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_OCTOSPI_BITS              RCC_CCIPR2_OCTOSPISEL_PLL1Q
  #else
    #define STM32_OCTOSPI_BITS              0U
  #endif
#elif (STM32_CFG_OCTOSPI_SEL == RCC_CCIPR2_OCTOSPISEL_PLL2Q)
  #if (STM32_OCTOSPI_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_OCTOSPI_BITS              RCC_CCIPR2_OCTOSPISEL_PLL2Q
  #else
    #define STM32_OCTOSPI_BITS              0U
  #endif
#elif (STM32_OCTOSPI_ENABLED == FALSE) &&                                   \
      (STM32_CFG_OCTOSPI_SEL == RCC_CCIPR2_OCTOSPISEL_IGNORE)
  #define STM32_OCTOSPI_BITS                0U
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
#elif (STM32_OCTOSPI_ENABLED == TRUE) && \
      (STM32_CFG_OCTOSPI_SEL == RCC_CCIPR2_OCTOSPISEL_PLL1Q)
  #define STM32_OCTOSPI_FREQ                STM32_PLL1Q_FREQ
#elif (STM32_OCTOSPI_ENABLED == TRUE) && \
      (STM32_CFG_OCTOSPI_SEL == RCC_CCIPR2_OCTOSPISEL_PLL2Q)
  #define STM32_OCTOSPI_FREQ                STM32_PLL2Q_FREQ
#else
  #define STM32_OCTOSPI_FREQ                0U
#endif

/*--- Macros and checks for the HSI48DIV2 clock point. ---------------------*/

/**
 * @brief   HSI48DIV2 clock register bits.
 */
#define STM32_HSI48DIV2_BITS                0U

/**
 * @brief   HSI48 divided by 2 clock point.
 */
#if (STM32_HSI48DIV2_ENABLED == TRUE) || defined(__DOXYGEN__)
  #define STM32_HSI48DIV2_FREQ              (STM32_HSI48_FREQ / 2U)
#else
  #define STM32_HSI48DIV2_FREQ              0U
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
#elif (STM32_CFG_RNG_SEL == RCC_CCIPR2_RNGSEL_HSI48DIV2)
  #if (STM32_RNG_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_RNG_BITS                  RCC_CCIPR2_RNGSEL_HSI48DIV2
  #else
    #define STM32_RNG_BITS                  0U
  #endif
#elif (STM32_CFG_RNG_SEL == RCC_CCIPR2_RNGSEL_HSI16)
  #if (STM32_RNG_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_RNG_BITS                  RCC_CCIPR2_RNGSEL_HSI16
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
      (STM32_CFG_RNG_SEL == RCC_CCIPR2_RNGSEL_HSI48DIV2)
  #define STM32_RNG_FREQ                    STM32_HSI48DIV2_FREQ
#elif (STM32_RNG_ENABLED == TRUE) && \
      (STM32_CFG_RNG_SEL == RCC_CCIPR2_RNGSEL_HSI16)
  #define STM32_RNG_FREQ                    STM32_HSI16_FREQ
#else
  #define STM32_RNG_FREQ                    0U
#endif

/*--- Macros and checks for the SAI1 clock point. --------------------------*/

/**
 * @brief   SAI1 clock register bits.
 */
#if (STM32_CFG_SAI1_SEL == RCC_CCIPR2_SAI1SEL_PLL2P) || defined(__DOXYGEN__)
  #if (STM32_SAI1_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_SAI1_BITS                 RCC_CCIPR2_SAI1SEL_PLL2P
  #else
    #define STM32_SAI1_BITS                 0U
  #endif
#elif (STM32_CFG_SAI1_SEL == RCC_CCIPR2_SAI1SEL_PLL3P)
  #if (STM32_SAI1_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_SAI1_BITS                 RCC_CCIPR2_SAI1SEL_PLL3P
  #else
    #define STM32_SAI1_BITS                 0U
  #endif
#elif (STM32_CFG_SAI1_SEL == RCC_CCIPR2_SAI1SEL_PLL1P)
  #if (STM32_SAI1_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_SAI1_BITS                 RCC_CCIPR2_SAI1SEL_PLL1P
  #else
    #define STM32_SAI1_BITS                 0U
  #endif
#elif (STM32_CFG_SAI1_SEL == RCC_CCIPR2_SAI1SEL_AUDIOCLK)
  #if (STM32_SAI1_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_SAI1_BITS                 RCC_CCIPR2_SAI1SEL_AUDIOCLK
  #else
    #define STM32_SAI1_BITS                 0U
  #endif
#elif (STM32_CFG_SAI1_SEL == RCC_CCIPR2_SAI1SEL_HSI16)
  #if (STM32_SAI1_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_SAI1_BITS                 RCC_CCIPR2_SAI1SEL_HSI16
  #else
    #define STM32_SAI1_BITS                 0U
  #endif
#elif (STM32_SAI1_ENABLED == FALSE) &&                                      \
      (STM32_CFG_SAI1_SEL == RCC_CCIPR2_SAI1SEL_IGNORE)
  #define STM32_SAI1_BITS                   0U
#else
  #error "invalid STM32_CFG_SAI1_SEL value specified"
#endif

/**
 * @brief   SAI1 clock point.
 */
#if ((STM32_SAI1_ENABLED == TRUE) && \
     (STM32_CFG_SAI1_SEL == RCC_CCIPR2_SAI1SEL_PLL2P)) || \
    defined(__DOXYGEN__)
  #define STM32_SAI1_FREQ                   STM32_PLL2P_FREQ
#elif (STM32_SAI1_ENABLED == TRUE) && \
      (STM32_CFG_SAI1_SEL == RCC_CCIPR2_SAI1SEL_PLL3P)
  #define STM32_SAI1_FREQ                   STM32_PLL3P_FREQ
#elif (STM32_SAI1_ENABLED == TRUE) && \
      (STM32_CFG_SAI1_SEL == RCC_CCIPR2_SAI1SEL_PLL1P)
  #define STM32_SAI1_FREQ                   STM32_PLL1P_FREQ
#elif (STM32_SAI1_ENABLED == TRUE) && \
      (STM32_CFG_SAI1_SEL == RCC_CCIPR2_SAI1SEL_AUDIOCLK)
  #define STM32_SAI1_FREQ                   STM32_AUDIOCLK_FREQ
#elif (STM32_SAI1_ENABLED == TRUE) && \
      (STM32_CFG_SAI1_SEL == RCC_CCIPR2_SAI1SEL_HSI16)
  #define STM32_SAI1_FREQ                   STM32_HSI16_FREQ
#else
  #define STM32_SAI1_FREQ                   0U
#endif

/*--- Macros and checks for the SAI2 clock point. --------------------------*/

/**
 * @brief   SAI2 clock register bits.
 */
#if (STM32_CFG_SAI2_SEL == RCC_CCIPR2_SAI2SEL_PLL2P) || defined(__DOXYGEN__)
  #if (STM32_SAI2_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_SAI2_BITS                 RCC_CCIPR2_SAI2SEL_PLL2P
  #else
    #define STM32_SAI2_BITS                 0U
  #endif
#elif (STM32_CFG_SAI2_SEL == RCC_CCIPR2_SAI2SEL_PLL3P)
  #if (STM32_SAI2_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_SAI2_BITS                 RCC_CCIPR2_SAI2SEL_PLL3P
  #else
    #define STM32_SAI2_BITS                 0U
  #endif
#elif (STM32_CFG_SAI2_SEL == RCC_CCIPR2_SAI2SEL_PLL1P)
  #if (STM32_SAI2_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_SAI2_BITS                 RCC_CCIPR2_SAI2SEL_PLL1P
  #else
    #define STM32_SAI2_BITS                 0U
  #endif
#elif (STM32_CFG_SAI2_SEL == RCC_CCIPR2_SAI2SEL_AUDIOCLK)
  #if (STM32_SAI2_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_SAI2_BITS                 RCC_CCIPR2_SAI2SEL_AUDIOCLK
  #else
    #define STM32_SAI2_BITS                 0U
  #endif
#elif (STM32_CFG_SAI2_SEL == RCC_CCIPR2_SAI2SEL_HSI16)
  #if (STM32_SAI2_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_SAI2_BITS                 RCC_CCIPR2_SAI2SEL_HSI16
  #else
    #define STM32_SAI2_BITS                 0U
  #endif
#elif (STM32_SAI2_ENABLED == FALSE) &&                                      \
      (STM32_CFG_SAI2_SEL == RCC_CCIPR2_SAI2SEL_IGNORE)
  #define STM32_SAI2_BITS                   0U
#else
  #error "invalid STM32_CFG_SAI2_SEL value specified"
#endif

/**
 * @brief   SAI2 clock point.
 */
#if ((STM32_SAI2_ENABLED == TRUE) && \
     (STM32_CFG_SAI2_SEL == RCC_CCIPR2_SAI2SEL_PLL2P)) || \
    defined(__DOXYGEN__)
  #define STM32_SAI2_FREQ                   STM32_PLL2P_FREQ
#elif (STM32_SAI2_ENABLED == TRUE) && \
      (STM32_CFG_SAI2_SEL == RCC_CCIPR2_SAI2SEL_PLL3P)
  #define STM32_SAI2_FREQ                   STM32_PLL3P_FREQ
#elif (STM32_SAI2_ENABLED == TRUE) && \
      (STM32_CFG_SAI2_SEL == RCC_CCIPR2_SAI2SEL_PLL1P)
  #define STM32_SAI2_FREQ                   STM32_PLL1P_FREQ
#elif (STM32_SAI2_ENABLED == TRUE) && \
      (STM32_CFG_SAI2_SEL == RCC_CCIPR2_SAI2SEL_AUDIOCLK)
  #define STM32_SAI2_FREQ                   STM32_AUDIOCLK_FREQ
#elif (STM32_SAI2_ENABLED == TRUE) && \
      (STM32_CFG_SAI2_SEL == RCC_CCIPR2_SAI2SEL_HSI16)
  #define STM32_SAI2_FREQ                   STM32_HSI16_FREQ
#else
  #define STM32_SAI2_FREQ                   0U
#endif

/*--- Macros and checks for the MDF1 clock point. --------------------------*/

/**
 * @brief   MDF1 clock register bits.
 */
#if (STM32_CFG_MDF1_SEL == RCC_CCIPR2_MDF1SEL_HCLK) || defined(__DOXYGEN__)
  #if (STM32_MDF1_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_MDF1_BITS                 RCC_CCIPR2_MDF1SEL_HCLK
  #else
    #define STM32_MDF1_BITS                 0U
  #endif
#elif (STM32_CFG_MDF1_SEL == RCC_CCIPR2_MDF1SEL_PLL1P)
  #if (STM32_MDF1_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_MDF1_BITS                 RCC_CCIPR2_MDF1SEL_PLL1P
  #else
    #define STM32_MDF1_BITS                 0U
  #endif
#elif (STM32_CFG_MDF1_SEL == RCC_CCIPR2_MDF1SEL_PLL3Q)
  #if (STM32_MDF1_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_MDF1_BITS                 RCC_CCIPR2_MDF1SEL_PLL3Q
  #else
    #define STM32_MDF1_BITS                 0U
  #endif
#elif (STM32_CFG_MDF1_SEL == RCC_CCIPR2_MDF1SEL_AUDIOCLK)
  #if (STM32_MDF1_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_MDF1_BITS                 RCC_CCIPR2_MDF1SEL_AUDIOCLK
  #else
    #define STM32_MDF1_BITS                 0U
  #endif
#elif (STM32_CFG_MDF1_SEL == RCC_CCIPR2_MDF1SEL_MSIK)
  #if (STM32_MDF1_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_MDF1_BITS                 RCC_CCIPR2_MDF1SEL_MSIK
  #else
    #define STM32_MDF1_BITS                 0U
  #endif
#elif (STM32_MDF1_ENABLED == FALSE) &&                                      \
      (STM32_CFG_MDF1_SEL == RCC_CCIPR2_MDF1SEL_IGNORE)
  #define STM32_MDF1_BITS                   0U
#else
  #error "invalid STM32_CFG_MDF1_SEL value specified"
#endif

/**
 * @brief   MDF1 clock point.
 */
#if ((STM32_MDF1_ENABLED == TRUE) && \
     (STM32_CFG_MDF1_SEL == RCC_CCIPR2_MDF1SEL_HCLK)) || \
    defined(__DOXYGEN__)
  #define STM32_MDF1_FREQ                   STM32_HCLK_FREQ
#elif (STM32_MDF1_ENABLED == TRUE) && \
      (STM32_CFG_MDF1_SEL == RCC_CCIPR2_MDF1SEL_PLL1P)
  #define STM32_MDF1_FREQ                   STM32_PLL1P_FREQ
#elif (STM32_MDF1_ENABLED == TRUE) && \
      (STM32_CFG_MDF1_SEL == RCC_CCIPR2_MDF1SEL_PLL3Q)
  #define STM32_MDF1_FREQ                   STM32_PLL3Q_FREQ
#elif (STM32_MDF1_ENABLED == TRUE) && \
      (STM32_CFG_MDF1_SEL == RCC_CCIPR2_MDF1SEL_AUDIOCLK)
  #define STM32_MDF1_FREQ                   STM32_AUDIOCLK_FREQ
#elif (STM32_MDF1_ENABLED == TRUE) && \
      (STM32_CFG_MDF1_SEL == RCC_CCIPR2_MDF1SEL_MSIK)
  #define STM32_MDF1_FREQ                   STM32_MSIK_FREQ
#else
  #define STM32_MDF1_FREQ                   0U
#endif

/*--- Macros and checks for the ADF1 clock point. --------------------------*/

/**
 * @brief   ADF1 clock register bits.
 */
#if (STM32_CFG_ADF1_SEL == RCC_CCIPR3_ADF1SEL_HCLK) || defined(__DOXYGEN__)
  #if (STM32_ADF1_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ADF1_BITS                 RCC_CCIPR3_ADF1SEL_HCLK
  #else
    #define STM32_ADF1_BITS                 0U
  #endif
#elif (STM32_CFG_ADF1_SEL == RCC_CCIPR3_ADF1SEL_PLL1P)
  #if (STM32_ADF1_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ADF1_BITS                 RCC_CCIPR3_ADF1SEL_PLL1P
  #else
    #define STM32_ADF1_BITS                 0U
  #endif
#elif (STM32_CFG_ADF1_SEL == RCC_CCIPR3_ADF1SEL_PLL3Q)
  #if (STM32_ADF1_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ADF1_BITS                 RCC_CCIPR3_ADF1SEL_PLL3Q
  #else
    #define STM32_ADF1_BITS                 0U
  #endif
#elif (STM32_CFG_ADF1_SEL == RCC_CCIPR3_ADF1SEL_AUDIOCLK)
  #if (STM32_ADF1_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ADF1_BITS                 RCC_CCIPR3_ADF1SEL_AUDIOCLK
  #else
    #define STM32_ADF1_BITS                 0U
  #endif
#elif (STM32_CFG_ADF1_SEL == RCC_CCIPR3_ADF1SEL_MSIK)
  #if (STM32_ADF1_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ADF1_BITS                 RCC_CCIPR3_ADF1SEL_MSIK
  #else
    #define STM32_ADF1_BITS                 0U
  #endif
#elif (STM32_ADF1_ENABLED == FALSE) &&                                      \
      (STM32_CFG_ADF1_SEL == RCC_CCIPR3_ADF1SEL_IGNORE)
  #define STM32_ADF1_BITS                   0U
#else
  #error "invalid STM32_CFG_ADF1_SEL value specified"
#endif

/**
 * @brief   ADF1 clock point.
 */
#if ((STM32_ADF1_ENABLED == TRUE) && \
     (STM32_CFG_ADF1_SEL == RCC_CCIPR3_ADF1SEL_HCLK)) || \
    defined(__DOXYGEN__)
  #define STM32_ADF1_FREQ                   STM32_HCLK_FREQ
#elif (STM32_ADF1_ENABLED == TRUE) && \
      (STM32_CFG_ADF1_SEL == RCC_CCIPR3_ADF1SEL_PLL1P)
  #define STM32_ADF1_FREQ                   STM32_PLL1P_FREQ
#elif (STM32_ADF1_ENABLED == TRUE) && \
      (STM32_CFG_ADF1_SEL == RCC_CCIPR3_ADF1SEL_PLL3Q)
  #define STM32_ADF1_FREQ                   STM32_PLL3Q_FREQ
#elif (STM32_ADF1_ENABLED == TRUE) && \
      (STM32_CFG_ADF1_SEL == RCC_CCIPR3_ADF1SEL_AUDIOCLK)
  #define STM32_ADF1_FREQ                   STM32_AUDIOCLK_FREQ
#elif (STM32_ADF1_ENABLED == TRUE) && \
      (STM32_CFG_ADF1_SEL == RCC_CCIPR3_ADF1SEL_MSIK)
  #define STM32_ADF1_FREQ                   STM32_MSIK_FREQ
#else
  #define STM32_ADF1_FREQ                   0U
#endif

/*--- Macros and checks for the ADCDAC clock point. ------------------------*/

/**
 * @brief   ADCDAC clock register bits.
 */
#if (STM32_CFG_ADCDAC_SEL == RCC_CCIPR3_ADCDACSEL_HCLK) || defined(__DOXYGEN__)
  #if (STM32_ADCDAC_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ADCDAC_BITS               RCC_CCIPR3_ADCDACSEL_HCLK
  #else
    #define STM32_ADCDAC_BITS               0U
  #endif
#elif (STM32_CFG_ADCDAC_SEL == RCC_CCIPR3_ADCDACSEL_SYSCLK)
  #if (STM32_ADCDAC_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ADCDAC_BITS               RCC_CCIPR3_ADCDACSEL_SYSCLK
  #else
    #define STM32_ADCDAC_BITS               0U
  #endif
#elif (STM32_CFG_ADCDAC_SEL == RCC_CCIPR3_ADCDACSEL_PLL2R)
  #if (STM32_ADCDAC_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ADCDAC_BITS               RCC_CCIPR3_ADCDACSEL_PLL2R
  #else
    #define STM32_ADCDAC_BITS               0U
  #endif
#elif (STM32_CFG_ADCDAC_SEL == RCC_CCIPR3_ADCDACSEL_HSE)
  #if (STM32_ADCDAC_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ADCDAC_BITS               RCC_CCIPR3_ADCDACSEL_HSE
  #else
    #define STM32_ADCDAC_BITS               0U
  #endif
#elif (STM32_CFG_ADCDAC_SEL == RCC_CCIPR3_ADCDACSEL_HSI16)
  #if (STM32_ADCDAC_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ADCDAC_BITS               RCC_CCIPR3_ADCDACSEL_HSI16
  #else
    #define STM32_ADCDAC_BITS               0U
  #endif
#elif (STM32_CFG_ADCDAC_SEL == RCC_CCIPR3_ADCDACSEL_MSIK)
  #if (STM32_ADCDAC_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ADCDAC_BITS               RCC_CCIPR3_ADCDACSEL_MSIK
  #else
    #define STM32_ADCDAC_BITS               0U
  #endif
#elif (STM32_ADCDAC_ENABLED == FALSE) &&                                    \
      (STM32_CFG_ADCDAC_SEL == RCC_CCIPR3_ADCDACSEL_IGNORE)
  #define STM32_ADCDAC_BITS                 0U
#else
  #error "invalid STM32_CFG_ADCDAC_SEL value specified"
#endif

/**
 * @brief   ADC and DAC clock point.
 */
#if ((STM32_ADCDAC_ENABLED == TRUE) && \
     (STM32_CFG_ADCDAC_SEL == RCC_CCIPR3_ADCDACSEL_HCLK)) || \
    defined(__DOXYGEN__)
  #define STM32_ADCDAC_FREQ                 STM32_HCLK_FREQ
#elif (STM32_ADCDAC_ENABLED == TRUE) && \
      (STM32_CFG_ADCDAC_SEL == RCC_CCIPR3_ADCDACSEL_SYSCLK)
  #define STM32_ADCDAC_FREQ                 STM32_SYSCLK_FREQ
#elif (STM32_ADCDAC_ENABLED == TRUE) && \
      (STM32_CFG_ADCDAC_SEL == RCC_CCIPR3_ADCDACSEL_PLL2R)
  #define STM32_ADCDAC_FREQ                 STM32_PLL2R_FREQ
#elif (STM32_ADCDAC_ENABLED == TRUE) && \
      (STM32_CFG_ADCDAC_SEL == RCC_CCIPR3_ADCDACSEL_HSE)
  #define STM32_ADCDAC_FREQ                 STM32_HSE_FREQ
#elif (STM32_ADCDAC_ENABLED == TRUE) && \
      (STM32_CFG_ADCDAC_SEL == RCC_CCIPR3_ADCDACSEL_HSI16)
  #define STM32_ADCDAC_FREQ                 STM32_HSI16_FREQ
#elif (STM32_ADCDAC_ENABLED == TRUE) && \
      (STM32_CFG_ADCDAC_SEL == RCC_CCIPR3_ADCDACSEL_MSIK)
  #define STM32_ADCDAC_FREQ                 STM32_MSIK_FREQ
#else
  #define STM32_ADCDAC_FREQ                 0U
#endif

#if !(!((STM32_ADCDAC_ENABLED == TRUE) &&                                   \
      (STM32_CFG_ADCDAC_SEL == RCC_CCIPR3_ADCDACSEL_HCLK)) ||               \
     (STM32_HCLK_FREQ <= STM32_ADCCLK_MAX)) && !defined(__DOXYGEN__)
  #error "STM32_ADCDAC_FREQ above maximum frequency"
#endif

#if !(!((STM32_ADCDAC_ENABLED == TRUE) &&                                   \
      (STM32_CFG_ADCDAC_SEL == RCC_CCIPR3_ADCDACSEL_SYSCLK)) ||             \
     (STM32_SYSCLK_FREQ <= STM32_ADCCLK_MAX)) && !defined(__DOXYGEN__)
  #error "STM32_ADCDAC_FREQ above maximum frequency"
#endif

#if !(!((STM32_ADCDAC_ENABLED == TRUE) &&                                   \
      (STM32_CFG_ADCDAC_SEL == RCC_CCIPR3_ADCDACSEL_PLL2R)) ||              \
     (STM32_PLL2R_FREQ <= STM32_ADCCLK_MAX)) && !defined(__DOXYGEN__)
  #error "STM32_ADCDAC_FREQ above maximum frequency"
#endif

#if !(!((STM32_ADCDAC_ENABLED == TRUE) &&                                   \
      (STM32_CFG_ADCDAC_SEL == RCC_CCIPR3_ADCDACSEL_HSE)) ||                \
     (STM32_HSE_FREQ <= STM32_ADCCLK_MAX)) && !defined(__DOXYGEN__)
  #error "STM32_ADCDAC_FREQ above maximum frequency"
#endif

#if !(!((STM32_ADCDAC_ENABLED == TRUE) &&                                   \
      (STM32_CFG_ADCDAC_SEL == RCC_CCIPR3_ADCDACSEL_HSI16)) ||              \
     (STM32_HSI16_FREQ <= STM32_ADCCLK_MAX)) && !defined(__DOXYGEN__)
  #error "STM32_ADCDAC_FREQ above maximum frequency"
#endif

#if !(!((STM32_ADCDAC_ENABLED == TRUE) &&                                   \
      (STM32_CFG_ADCDAC_SEL == RCC_CCIPR3_ADCDACSEL_MSIK)) ||               \
     (STM32_MSIK_FREQ <= STM32_ADCCLK_MAX)) && !defined(__DOXYGEN__)
  #error "STM32_ADCDAC_FREQ above maximum frequency"
#endif

/*--- Macros and checks for the DAC1SH clock point. ------------------------*/

/**
 * @brief   DAC1SH clock register bits.
 */
#if (STM32_CFG_DAC1SH_SEL == RCC_CCIPR3_DAC1SEL_LSE) || defined(__DOXYGEN__)
  #if (STM32_DAC1SH_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_DAC1SH_BITS               RCC_CCIPR3_DAC1SEL_LSE
  #else
    #define STM32_DAC1SH_BITS               0U
  #endif
#elif (STM32_CFG_DAC1SH_SEL == RCC_CCIPR3_DAC1SEL_LSI)
  #if (STM32_DAC1SH_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_DAC1SH_BITS               RCC_CCIPR3_DAC1SEL_LSI
  #else
    #define STM32_DAC1SH_BITS               0U
  #endif
#elif (STM32_DAC1SH_ENABLED == FALSE) &&                                    \
      (STM32_CFG_DAC1SH_SEL == RCC_CCIPR3_DAC1SEL_IGNORE)
  #define STM32_DAC1SH_BITS                 0U
#else
  #error "invalid STM32_CFG_DAC1SH_SEL value specified"
#endif

/**
 * @brief   DAC1 sample and hold clock point.
 */
#if ((STM32_DAC1SH_ENABLED == TRUE) && \
     (STM32_CFG_DAC1SH_SEL == RCC_CCIPR3_DAC1SEL_LSE)) || \
    defined(__DOXYGEN__)
  #define STM32_DAC1SH_FREQ                 STM32_LSESYS_FREQ
#elif (STM32_DAC1SH_ENABLED == TRUE) && \
      (STM32_CFG_DAC1SH_SEL == RCC_CCIPR3_DAC1SEL_LSI)
  #define STM32_DAC1SH_FREQ                 STM32_LSI_FREQ
#else
  #define STM32_DAC1SH_FREQ                 0U
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
 * @brief   IWDG clock point.
 */
#if (STM32_IWDG_ENABLED == TRUE) || defined(__DOXYGEN__)
  #define STM32_IWDG_FREQ                   STM32_LSI_FREQ
#else
  #define STM32_IWDG_FREQ                   0U
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
#define STM32_MCODIV_CLOCK                  STM32_MCODIV_FREQ
#define STM32_MCO_CLOCK                     hal_lld_get_clock_point(CLK_MCO)
#define STM32_LSESYS_CLOCK                  STM32_LSESYS_FREQ
#define STM32_RTC_CLOCK                     STM32_RTC_FREQ
#define STM32_LSCO_CLOCK                    STM32_LSCO_FREQ
#define STM32_USART1_CLOCK                  STM32_USART1_FREQ
#define STM32_USART2_CLOCK                  STM32_USART2_FREQ
#define STM32_USART3_CLOCK                  STM32_USART3_FREQ
#define STM32_UART4_CLOCK                   STM32_UART4_FREQ
#define STM32_UART5_CLOCK                   STM32_UART5_FREQ
#define STM32_LPUART1_CLOCK                 STM32_LPUART1_FREQ
#define STM32_I2C1_CLOCK                    STM32_I2C1_FREQ
#define STM32_I2C2_CLOCK                    STM32_I2C2_FREQ
#define STM32_I2C4_CLOCK                    STM32_I2C4_FREQ
#define STM32_I2C3_CLOCK                    STM32_I2C3_FREQ
#define STM32_SPI1_CLOCK                    STM32_SPI1_FREQ
#define STM32_SPI2_CLOCK                    STM32_SPI2_FREQ
#define STM32_SPI3_CLOCK                    STM32_SPI3_FREQ
#define STM32_FDCAN1_CLOCK                  STM32_FDCAN1_FREQ
#define STM32_HCLKDIV8_CLOCK                STM32_HCLKDIV8_FREQ
#define STM32_SYSTICK_CLOCK                 STM32_SYSTICK_FREQ
#define STM32_TIM16IC_CLOCK                 STM32_TIM16IC_FREQ
#define STM32_TIM17IC_CLOCK                 STM32_TIM17IC_FREQ
#define STM32_LPTIM2IC_CLOCK                STM32_LPTIM2IC_FREQ
#define STM32_ICLK_CLOCK                    STM32_ICLK_FREQ
#define STM32_USB_CLOCK                     STM32_USB_FREQ
#define STM32_SDMMC_CLOCK                   STM32_SDMMC_FREQ
#define STM32_SDMMC1_CLOCK                  STM32_SDMMC1_FREQ
#define STM32_SDMMC2_CLOCK                  STM32_SDMMC2_FREQ
#define STM32_OCTOSPI_CLOCK                 STM32_OCTOSPI_FREQ
#define STM32_HSI48DIV2_CLOCK               STM32_HSI48DIV2_FREQ
#define STM32_RNG_CLOCK                     STM32_RNG_FREQ
#define STM32_SAI1_CLOCK                    STM32_SAI1_FREQ
#define STM32_SAI2_CLOCK                    STM32_SAI2_FREQ
#define STM32_MDF1_CLOCK                    STM32_MDF1_FREQ
#define STM32_ADF1_CLOCK                    STM32_ADF1_FREQ
#define STM32_ADCDAC_CLOCK                  STM32_ADCDAC_FREQ
#define STM32_DAC1SH_CLOCK                  STM32_DAC1SH_FREQ
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
   (clkpt) == CLK_MCO          ? STM32_MCO_FREQ           :                 \
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
