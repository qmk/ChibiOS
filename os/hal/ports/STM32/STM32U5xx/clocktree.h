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
#define CLK_MSIS                0U
#define CLK_MSIK                1U
#define CLK_SYSCLK              2U
#define CLK_ARRAY_SIZE          3U

#define CLK_POINT_NAMES                                                     \
  {                                                                         \
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
#define RCC_ICSCR1_MSISRANGE_RANGE6_1330K   ((6U) << RCC_ICSCR1_MSISRANGE_Pos)
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
#define RCC_ICSCR1_MSIKRANGE_RANGE6_1330K   ((6U) << RCC_ICSCR1_MSIKRANGE_Pos)
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
 * @brief   Selects the SYSCLK clock source.
 * @note    Allowed sources:
 *          - MSIS.
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

#if !((STM32_CFG_MSIS_RANGE == RCC_ICSCR1_MSISRANGE_RANGE0_48M) ||          \
     (STM32_CFG_MSIS_RANGE == RCC_ICSCR1_MSISRANGE_RANGE1_24M) ||           \
     (STM32_CFG_MSIS_RANGE == RCC_ICSCR1_MSISRANGE_RANGE2_16M) ||           \
     (STM32_CFG_MSIS_RANGE == RCC_ICSCR1_MSISRANGE_RANGE3_12M) ||           \
     (STM32_CFG_MSIS_RANGE == RCC_ICSCR1_MSISRANGE_RANGE4_4M) ||            \
     (STM32_CFG_MSIS_RANGE == RCC_ICSCR1_MSISRANGE_RANGE5_2M) ||            \
     (STM32_CFG_MSIS_RANGE == RCC_ICSCR1_MSISRANGE_RANGE6_1330K) ||         \
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
     (STM32_CFG_MSIK_RANGE == RCC_ICSCR1_MSIKRANGE_RANGE6_1330K) ||         \
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

/**
 * @brief   MSIS clock derived enable state.
 */
#define STM32_MSIS_ENABLED                  (((STM32_SYSCLK_ENABLED == TRUE) && \
                                              (STM32_CFG_SYSCLK_SEL == RCC_CFGR1_SW_MSIS)))

/**
 * @brief   MSIK clock derived enable state.
 */
#define STM32_MSIK_ENABLED                  TRUE

/**
 * @brief   SYSCLK clock derived enable state.
 */
#define STM32_SYSCLK_ENABLED                TRUE

/*--- Macros and checks for the MSIS clock point. --------------------------*/

/**
 * @brief   MSIS nominal source frequency.
 */
#define STM32_MSIS_SOURCE_FREQ              4000000U

/**
 * @brief   MSIS clock register bits.
 */
#if (STM32_MSIS_ENABLED == TRUE) || defined(__DOXYGEN__)
  #define STM32_CR_MSIS_BITS                RCC_CR_MSISON
#else
  #define STM32_CR_MSIS_BITS                0U
#endif

#if (STM32_CFG_MSIS_RANGE == RCC_ICSCR1_MSISRANGE_RANGE0_48M) || \
    defined(__DOXYGEN__)
  #if (STM32_MSIS_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIS_BITS          (RCC_ICSCR1_MSIRGSEL_ICSCR1 |   \
                                             RCC_ICSCR1_MSISRANGE_RANGE0_48M | \
                                             STM32_CFG_MSIBIAS)
  #else
    #define STM32_ICSCR1_MSIS_BITS          0U
  #endif
#elif (STM32_CFG_MSIS_RANGE == RCC_ICSCR1_MSISRANGE_RANGE1_24M)
  #if (STM32_MSIS_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIS_BITS          (RCC_ICSCR1_MSIRGSEL_ICSCR1 |   \
                                             RCC_ICSCR1_MSISRANGE_RANGE1_24M | \
                                             STM32_CFG_MSIBIAS)
  #else
    #define STM32_ICSCR1_MSIS_BITS          0U
  #endif
#elif (STM32_CFG_MSIS_RANGE == RCC_ICSCR1_MSISRANGE_RANGE2_16M)
  #if (STM32_MSIS_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIS_BITS          (RCC_ICSCR1_MSIRGSEL_ICSCR1 |   \
                                             RCC_ICSCR1_MSISRANGE_RANGE2_16M | \
                                             STM32_CFG_MSIBIAS)
  #else
    #define STM32_ICSCR1_MSIS_BITS          0U
  #endif
#elif (STM32_CFG_MSIS_RANGE == RCC_ICSCR1_MSISRANGE_RANGE3_12M)
  #if (STM32_MSIS_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIS_BITS          (RCC_ICSCR1_MSIRGSEL_ICSCR1 |   \
                                             RCC_ICSCR1_MSISRANGE_RANGE3_12M | \
                                             STM32_CFG_MSIBIAS)
  #else
    #define STM32_ICSCR1_MSIS_BITS          0U
  #endif
#elif (STM32_CFG_MSIS_RANGE == RCC_ICSCR1_MSISRANGE_RANGE4_4M)
  #if (STM32_MSIS_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIS_BITS          (RCC_ICSCR1_MSIRGSEL_ICSCR1 |   \
                                             RCC_ICSCR1_MSISRANGE_RANGE4_4M | \
                                             STM32_CFG_MSIBIAS)
  #else
    #define STM32_ICSCR1_MSIS_BITS          0U
  #endif
#elif (STM32_CFG_MSIS_RANGE == RCC_ICSCR1_MSISRANGE_RANGE5_2M)
  #if (STM32_MSIS_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIS_BITS          (RCC_ICSCR1_MSIRGSEL_ICSCR1 |   \
                                             RCC_ICSCR1_MSISRANGE_RANGE5_2M | \
                                             STM32_CFG_MSIBIAS)
  #else
    #define STM32_ICSCR1_MSIS_BITS          0U
  #endif
#elif (STM32_CFG_MSIS_RANGE == RCC_ICSCR1_MSISRANGE_RANGE6_1330K)
  #if (STM32_MSIS_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIS_BITS          (RCC_ICSCR1_MSIRGSEL_ICSCR1 |   \
                                             RCC_ICSCR1_MSISRANGE_RANGE6_1330K | \
                                             STM32_CFG_MSIBIAS)
  #else
    #define STM32_ICSCR1_MSIS_BITS          0U
  #endif
#elif (STM32_CFG_MSIS_RANGE == RCC_ICSCR1_MSISRANGE_RANGE7_1M)
  #if (STM32_MSIS_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIS_BITS          (RCC_ICSCR1_MSIRGSEL_ICSCR1 |   \
                                             RCC_ICSCR1_MSISRANGE_RANGE7_1M | \
                                             STM32_CFG_MSIBIAS)
  #else
    #define STM32_ICSCR1_MSIS_BITS          0U
  #endif
#elif (STM32_CFG_MSIS_RANGE == RCC_ICSCR1_MSISRANGE_RANGE8_3072K)
  #if (STM32_MSIS_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIS_BITS          (RCC_ICSCR1_MSIRGSEL_ICSCR1 |   \
                                             RCC_ICSCR1_MSISRANGE_RANGE8_3072K | \
                                             STM32_CFG_MSIBIAS)
  #else
    #define STM32_ICSCR1_MSIS_BITS          0U
  #endif
#elif (STM32_CFG_MSIS_RANGE == RCC_ICSCR1_MSISRANGE_RANGE9_1536K)
  #if (STM32_MSIS_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIS_BITS          (RCC_ICSCR1_MSIRGSEL_ICSCR1 |   \
                                             RCC_ICSCR1_MSISRANGE_RANGE9_1536K | \
                                             STM32_CFG_MSIBIAS)
  #else
    #define STM32_ICSCR1_MSIS_BITS          0U
  #endif
#elif (STM32_CFG_MSIS_RANGE == RCC_ICSCR1_MSISRANGE_RANGE10_1024K)
  #if (STM32_MSIS_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIS_BITS          (RCC_ICSCR1_MSIRGSEL_ICSCR1 |   \
                                             RCC_ICSCR1_MSISRANGE_RANGE10_1024K | \
                                             STM32_CFG_MSIBIAS)
  #else
    #define STM32_ICSCR1_MSIS_BITS          0U
  #endif
#elif (STM32_CFG_MSIS_RANGE == RCC_ICSCR1_MSISRANGE_RANGE11_768K)
  #if (STM32_MSIS_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIS_BITS          (RCC_ICSCR1_MSIRGSEL_ICSCR1 |   \
                                             RCC_ICSCR1_MSISRANGE_RANGE11_768K | \
                                             STM32_CFG_MSIBIAS)
  #else
    #define STM32_ICSCR1_MSIS_BITS          0U
  #endif
#elif (STM32_CFG_MSIS_RANGE == RCC_ICSCR1_MSISRANGE_RANGE12_400K)
  #if (STM32_MSIS_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIS_BITS          (RCC_ICSCR1_MSIRGSEL_ICSCR1 |   \
                                             RCC_ICSCR1_MSISRANGE_RANGE12_400K | \
                                             STM32_CFG_MSIBIAS)
  #else
    #define STM32_ICSCR1_MSIS_BITS          0U
  #endif
#elif (STM32_CFG_MSIS_RANGE == RCC_ICSCR1_MSISRANGE_RANGE13_200K)
  #if (STM32_MSIS_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIS_BITS          (RCC_ICSCR1_MSIRGSEL_ICSCR1 |   \
                                             RCC_ICSCR1_MSISRANGE_RANGE13_200K | \
                                             STM32_CFG_MSIBIAS)
  #else
    #define STM32_ICSCR1_MSIS_BITS          0U
  #endif
#elif (STM32_CFG_MSIS_RANGE == RCC_ICSCR1_MSISRANGE_RANGE14_133K)
  #if (STM32_MSIS_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIS_BITS          (RCC_ICSCR1_MSIRGSEL_ICSCR1 |   \
                                             RCC_ICSCR1_MSISRANGE_RANGE14_133K | \
                                             STM32_CFG_MSIBIAS)
  #else
    #define STM32_ICSCR1_MSIS_BITS          0U
  #endif
#elif (STM32_CFG_MSIS_RANGE == RCC_ICSCR1_MSISRANGE_RANGE15_100K)
  #if (STM32_MSIS_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIS_BITS          (RCC_ICSCR1_MSIRGSEL_ICSCR1 |   \
                                             RCC_ICSCR1_MSISRANGE_RANGE15_100K | \
                                             STM32_CFG_MSIBIAS)
  #else
    #define STM32_ICSCR1_MSIS_BITS          0U
  #endif
#else
  #if (STM32_MSIS_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIS_BITS          (RCC_ICSCR1_MSIRGSEL_ICSCR1 |   \
                                             RCC_ICSCR1_MSISRANGE_RANGE4_4M | \
                                             STM32_CFG_MSIBIAS)
  #else
    #define STM32_ICSCR1_MSIS_BITS          0U
  #endif
#endif

/**
 * @brief   MSI system oscillator clock point.
 */
#if (STM32_MSIS_ENABLED == FALSE) && !defined(__DOXYGEN__)
  #define STM32_MSIS_FREQ                   0U
#elif (STM32_CFG_MSIS_RANGE == RCC_ICSCR1_MSISRANGE_RANGE0_48M) || \
    defined(__DOXYGEN__)
  #define STM32_MSIS_FREQ                   48000000U
#elif (STM32_CFG_MSIS_RANGE == RCC_ICSCR1_MSISRANGE_RANGE1_24M)
  #define STM32_MSIS_FREQ                   24000000U
#elif (STM32_CFG_MSIS_RANGE == RCC_ICSCR1_MSISRANGE_RANGE2_16M)
  #define STM32_MSIS_FREQ                   16000000U
#elif (STM32_CFG_MSIS_RANGE == RCC_ICSCR1_MSISRANGE_RANGE3_12M)
  #define STM32_MSIS_FREQ                   12000000U
#elif (STM32_CFG_MSIS_RANGE == RCC_ICSCR1_MSISRANGE_RANGE4_4M)
  #define STM32_MSIS_FREQ                   4000000U
#elif (STM32_CFG_MSIS_RANGE == RCC_ICSCR1_MSISRANGE_RANGE5_2M)
  #define STM32_MSIS_FREQ                   2000000U
#elif (STM32_CFG_MSIS_RANGE == RCC_ICSCR1_MSISRANGE_RANGE6_1330K)
  #define STM32_MSIS_FREQ                   1330000U
#elif (STM32_CFG_MSIS_RANGE == RCC_ICSCR1_MSISRANGE_RANGE7_1M)
  #define STM32_MSIS_FREQ                   1000000U
#elif (STM32_CFG_MSIS_RANGE == RCC_ICSCR1_MSISRANGE_RANGE8_3072K)
  #define STM32_MSIS_FREQ                   3072000U
#elif (STM32_CFG_MSIS_RANGE == RCC_ICSCR1_MSISRANGE_RANGE9_1536K)
  #define STM32_MSIS_FREQ                   1536000U
#elif (STM32_CFG_MSIS_RANGE == RCC_ICSCR1_MSISRANGE_RANGE10_1024K)
  #define STM32_MSIS_FREQ                   1024000U
#elif (STM32_CFG_MSIS_RANGE == RCC_ICSCR1_MSISRANGE_RANGE11_768K)
  #define STM32_MSIS_FREQ                   768000U
#elif (STM32_CFG_MSIS_RANGE == RCC_ICSCR1_MSISRANGE_RANGE12_400K)
  #define STM32_MSIS_FREQ                   400000U
#elif (STM32_CFG_MSIS_RANGE == RCC_ICSCR1_MSISRANGE_RANGE13_200K)
  #define STM32_MSIS_FREQ                   200000U
#elif (STM32_CFG_MSIS_RANGE == RCC_ICSCR1_MSISRANGE_RANGE14_133K)
  #define STM32_MSIS_FREQ                   133000U
#elif (STM32_CFG_MSIS_RANGE == RCC_ICSCR1_MSISRANGE_RANGE15_100K)
  #define STM32_MSIS_FREQ                   100000U
#else
  #define STM32_MSIS_FREQ                   4000000U
#endif

/*--- Macros and checks for the MSIK clock point. --------------------------*/

/**
 * @brief   MSIK nominal source frequency.
 */
#define STM32_MSIK_SOURCE_FREQ              4000000U

/**
 * @brief   MSIK clock register bits.
 */
#if (STM32_MSIK_ENABLED == TRUE) || defined(__DOXYGEN__)
  #define STM32_CR_MSIK_BITS                RCC_CR_MSIKON
#else
  #define STM32_CR_MSIK_BITS                0U
#endif

#if (STM32_CFG_MSIK_RANGE == RCC_ICSCR1_MSIKRANGE_RANGE0_48M) || \
    defined(__DOXYGEN__)
  #if (STM32_MSIK_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIK_BITS          (RCC_ICSCR1_MSIRGSEL_ICSCR1 |   \
                                             RCC_ICSCR1_MSIKRANGE_RANGE0_48M | \
                                             STM32_CFG_MSIBIAS)
  #else
    #define STM32_ICSCR1_MSIK_BITS          0U
  #endif
#elif (STM32_CFG_MSIK_RANGE == RCC_ICSCR1_MSIKRANGE_RANGE1_24M)
  #if (STM32_MSIK_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIK_BITS          (RCC_ICSCR1_MSIRGSEL_ICSCR1 |   \
                                             RCC_ICSCR1_MSIKRANGE_RANGE1_24M | \
                                             STM32_CFG_MSIBIAS)
  #else
    #define STM32_ICSCR1_MSIK_BITS          0U
  #endif
#elif (STM32_CFG_MSIK_RANGE == RCC_ICSCR1_MSIKRANGE_RANGE2_16M)
  #if (STM32_MSIK_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIK_BITS          (RCC_ICSCR1_MSIRGSEL_ICSCR1 |   \
                                             RCC_ICSCR1_MSIKRANGE_RANGE2_16M | \
                                             STM32_CFG_MSIBIAS)
  #else
    #define STM32_ICSCR1_MSIK_BITS          0U
  #endif
#elif (STM32_CFG_MSIK_RANGE == RCC_ICSCR1_MSIKRANGE_RANGE3_12M)
  #if (STM32_MSIK_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIK_BITS          (RCC_ICSCR1_MSIRGSEL_ICSCR1 |   \
                                             RCC_ICSCR1_MSIKRANGE_RANGE3_12M | \
                                             STM32_CFG_MSIBIAS)
  #else
    #define STM32_ICSCR1_MSIK_BITS          0U
  #endif
#elif (STM32_CFG_MSIK_RANGE == RCC_ICSCR1_MSIKRANGE_RANGE4_4M)
  #if (STM32_MSIK_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIK_BITS          (RCC_ICSCR1_MSIRGSEL_ICSCR1 |   \
                                             RCC_ICSCR1_MSIKRANGE_RANGE4_4M | \
                                             STM32_CFG_MSIBIAS)
  #else
    #define STM32_ICSCR1_MSIK_BITS          0U
  #endif
#elif (STM32_CFG_MSIK_RANGE == RCC_ICSCR1_MSIKRANGE_RANGE5_2M)
  #if (STM32_MSIK_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIK_BITS          (RCC_ICSCR1_MSIRGSEL_ICSCR1 |   \
                                             RCC_ICSCR1_MSIKRANGE_RANGE5_2M | \
                                             STM32_CFG_MSIBIAS)
  #else
    #define STM32_ICSCR1_MSIK_BITS          0U
  #endif
#elif (STM32_CFG_MSIK_RANGE == RCC_ICSCR1_MSIKRANGE_RANGE6_1330K)
  #if (STM32_MSIK_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIK_BITS          (RCC_ICSCR1_MSIRGSEL_ICSCR1 |   \
                                             RCC_ICSCR1_MSIKRANGE_RANGE6_1330K | \
                                             STM32_CFG_MSIBIAS)
  #else
    #define STM32_ICSCR1_MSIK_BITS          0U
  #endif
#elif (STM32_CFG_MSIK_RANGE == RCC_ICSCR1_MSIKRANGE_RANGE7_1M)
  #if (STM32_MSIK_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIK_BITS          (RCC_ICSCR1_MSIRGSEL_ICSCR1 |   \
                                             RCC_ICSCR1_MSIKRANGE_RANGE7_1M | \
                                             STM32_CFG_MSIBIAS)
  #else
    #define STM32_ICSCR1_MSIK_BITS          0U
  #endif
#elif (STM32_CFG_MSIK_RANGE == RCC_ICSCR1_MSIKRANGE_RANGE8_3072K)
  #if (STM32_MSIK_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIK_BITS          (RCC_ICSCR1_MSIRGSEL_ICSCR1 |   \
                                             RCC_ICSCR1_MSIKRANGE_RANGE8_3072K | \
                                             STM32_CFG_MSIBIAS)
  #else
    #define STM32_ICSCR1_MSIK_BITS          0U
  #endif
#elif (STM32_CFG_MSIK_RANGE == RCC_ICSCR1_MSIKRANGE_RANGE9_1536K)
  #if (STM32_MSIK_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIK_BITS          (RCC_ICSCR1_MSIRGSEL_ICSCR1 |   \
                                             RCC_ICSCR1_MSIKRANGE_RANGE9_1536K | \
                                             STM32_CFG_MSIBIAS)
  #else
    #define STM32_ICSCR1_MSIK_BITS          0U
  #endif
#elif (STM32_CFG_MSIK_RANGE == RCC_ICSCR1_MSIKRANGE_RANGE10_1024K)
  #if (STM32_MSIK_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIK_BITS          (RCC_ICSCR1_MSIRGSEL_ICSCR1 |   \
                                             RCC_ICSCR1_MSIKRANGE_RANGE10_1024K | \
                                             STM32_CFG_MSIBIAS)
  #else
    #define STM32_ICSCR1_MSIK_BITS          0U
  #endif
#elif (STM32_CFG_MSIK_RANGE == RCC_ICSCR1_MSIKRANGE_RANGE11_768K)
  #if (STM32_MSIK_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIK_BITS          (RCC_ICSCR1_MSIRGSEL_ICSCR1 |   \
                                             RCC_ICSCR1_MSIKRANGE_RANGE11_768K | \
                                             STM32_CFG_MSIBIAS)
  #else
    #define STM32_ICSCR1_MSIK_BITS          0U
  #endif
#elif (STM32_CFG_MSIK_RANGE == RCC_ICSCR1_MSIKRANGE_RANGE12_400K)
  #if (STM32_MSIK_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIK_BITS          (RCC_ICSCR1_MSIRGSEL_ICSCR1 |   \
                                             RCC_ICSCR1_MSIKRANGE_RANGE12_400K | \
                                             STM32_CFG_MSIBIAS)
  #else
    #define STM32_ICSCR1_MSIK_BITS          0U
  #endif
#elif (STM32_CFG_MSIK_RANGE == RCC_ICSCR1_MSIKRANGE_RANGE13_200K)
  #if (STM32_MSIK_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIK_BITS          (RCC_ICSCR1_MSIRGSEL_ICSCR1 |   \
                                             RCC_ICSCR1_MSIKRANGE_RANGE13_200K | \
                                             STM32_CFG_MSIBIAS)
  #else
    #define STM32_ICSCR1_MSIK_BITS          0U
  #endif
#elif (STM32_CFG_MSIK_RANGE == RCC_ICSCR1_MSIKRANGE_RANGE14_133K)
  #if (STM32_MSIK_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIK_BITS          (RCC_ICSCR1_MSIRGSEL_ICSCR1 |   \
                                             RCC_ICSCR1_MSIKRANGE_RANGE14_133K | \
                                             STM32_CFG_MSIBIAS)
  #else
    #define STM32_ICSCR1_MSIK_BITS          0U
  #endif
#elif (STM32_CFG_MSIK_RANGE == RCC_ICSCR1_MSIKRANGE_RANGE15_100K)
  #if (STM32_MSIK_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIK_BITS          (RCC_ICSCR1_MSIRGSEL_ICSCR1 |   \
                                             RCC_ICSCR1_MSIKRANGE_RANGE15_100K | \
                                             STM32_CFG_MSIBIAS)
  #else
    #define STM32_ICSCR1_MSIK_BITS          0U
  #endif
#else
  #if (STM32_MSIK_ENABLED == TRUE) || defined(__DOXYGEN__)
    #define STM32_ICSCR1_MSIK_BITS          (RCC_ICSCR1_MSIRGSEL_ICSCR1 |   \
                                             RCC_ICSCR1_MSIKRANGE_RANGE4_4M | \
                                             STM32_CFG_MSIBIAS)
  #else
    #define STM32_ICSCR1_MSIK_BITS          0U
  #endif
#endif

/**
 * @brief   MSI kernel oscillator clock point.
 */
#if (STM32_MSIK_ENABLED == FALSE) && !defined(__DOXYGEN__)
  #define STM32_MSIK_FREQ                   0U
#elif (STM32_CFG_MSIK_RANGE == RCC_ICSCR1_MSIKRANGE_RANGE0_48M) || \
    defined(__DOXYGEN__)
  #define STM32_MSIK_FREQ                   48000000U
#elif (STM32_CFG_MSIK_RANGE == RCC_ICSCR1_MSIKRANGE_RANGE1_24M)
  #define STM32_MSIK_FREQ                   24000000U
#elif (STM32_CFG_MSIK_RANGE == RCC_ICSCR1_MSIKRANGE_RANGE2_16M)
  #define STM32_MSIK_FREQ                   16000000U
#elif (STM32_CFG_MSIK_RANGE == RCC_ICSCR1_MSIKRANGE_RANGE3_12M)
  #define STM32_MSIK_FREQ                   12000000U
#elif (STM32_CFG_MSIK_RANGE == RCC_ICSCR1_MSIKRANGE_RANGE4_4M)
  #define STM32_MSIK_FREQ                   4000000U
#elif (STM32_CFG_MSIK_RANGE == RCC_ICSCR1_MSIKRANGE_RANGE5_2M)
  #define STM32_MSIK_FREQ                   2000000U
#elif (STM32_CFG_MSIK_RANGE == RCC_ICSCR1_MSIKRANGE_RANGE6_1330K)
  #define STM32_MSIK_FREQ                   1330000U
#elif (STM32_CFG_MSIK_RANGE == RCC_ICSCR1_MSIKRANGE_RANGE7_1M)
  #define STM32_MSIK_FREQ                   1000000U
#elif (STM32_CFG_MSIK_RANGE == RCC_ICSCR1_MSIKRANGE_RANGE8_3072K)
  #define STM32_MSIK_FREQ                   3072000U
#elif (STM32_CFG_MSIK_RANGE == RCC_ICSCR1_MSIKRANGE_RANGE9_1536K)
  #define STM32_MSIK_FREQ                   1536000U
#elif (STM32_CFG_MSIK_RANGE == RCC_ICSCR1_MSIKRANGE_RANGE10_1024K)
  #define STM32_MSIK_FREQ                   1024000U
#elif (STM32_CFG_MSIK_RANGE == RCC_ICSCR1_MSIKRANGE_RANGE11_768K)
  #define STM32_MSIK_FREQ                   768000U
#elif (STM32_CFG_MSIK_RANGE == RCC_ICSCR1_MSIKRANGE_RANGE12_400K)
  #define STM32_MSIK_FREQ                   400000U
#elif (STM32_CFG_MSIK_RANGE == RCC_ICSCR1_MSIKRANGE_RANGE13_200K)
  #define STM32_MSIK_FREQ                   200000U
#elif (STM32_CFG_MSIK_RANGE == RCC_ICSCR1_MSIKRANGE_RANGE14_133K)
  #define STM32_MSIK_FREQ                   133000U
#elif (STM32_CFG_MSIK_RANGE == RCC_ICSCR1_MSIKRANGE_RANGE15_100K)
  #define STM32_MSIK_FREQ                   100000U
#else
  #define STM32_MSIK_FREQ                   4000000U
#endif

/*--- Macros and checks for the SYSCLK clock point. ------------------------*/

/**
 * @brief   SYSCLK clock register bits.
 */
#if (STM32_CFG_SYSCLK_SEL == RCC_CFGR1_SW_MSIS) || defined(__DOXYGEN__)
  #define STM32_SYSCLK_BITS                 RCC_CFGR1_SW_MSIS
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
#else
  #define STM32_SYSCLK_FREQ                 0U
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
#define STM32_MSIS_CLOCK                    hal_lld_get_clock_point(CLK_MSIS)
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
  ((clkpt) == CLK_MSIS         ? STM32_MSIS_FREQ          :                 \
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
