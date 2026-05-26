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
 * @file    STM32U5xx/hal_lld.h
 * @brief   STM32U5xx HAL subsystem low level driver header.
 * @pre     This module requires the following macros to be defined in the
 *          @p board.h file:
 *          - STM32_LSECLK.
 *          - STM32_LSEDRV.
 *          - STM32_LSE_BYPASS (optionally).
 *          - STM32_HSECLK.
 *          - STM32_HSE_BYPASS (optionally).
 *          - STM32_HSE_DIGITAL (optionally).
 *          .
 *
 * @addtogroup HAL
 * @{
 */

#ifndef HAL_LLD_H
#define HAL_LLD_H

#include "stm32_registry.h"

/*===========================================================================*/
/* Driver constants.                                                         */
/*===========================================================================*/

/**
 * @brief   Requires use of SPIv2 driver model.
 */
#define HAL_LLD_SELECT_SPI_V2               TRUE

/**
 * @name    Platform identification
 * @{
 */
#if defined(STM32U535xx) || defined(__DOXYGEN__)
  #define PLATFORM_NAME                     "STM32U5 Ultra Low Power"

#elif defined(STM32U545xx)
  #define PLATFORM_NAME                     "STM32U5 Ultra Low Power with Crypto"

#elif defined(STM32U575xx)
  #define PLATFORM_NAME                     "STM32U5 Ultra Low Power"

#elif defined(STM32U585xx)
  #define PLATFORM_NAME                     "STM32U5 Ultra Low Power with Crypto"

#elif defined(STM32U595xx) || defined(STM32U599xx)
  #define PLATFORM_NAME                     "STM32U5 Ultra Low Power with Graphics"

#elif defined(STM32U5A5xx) || defined(STM32U5A9xx)
  #define PLATFORM_NAME                     "STM32U5 Ultra Low Power with Graphics"

#elif defined(STM32U5F7xx) || defined(STM32U5G7xx)
  #define PLATFORM_NAME                     "STM32U5 Ultra Low Power with Neo-Chrom"

#elif defined(STM32U5F9xx) || defined(STM32U5G9xx)
  #define PLATFORM_NAME                     "STM32U5 Ultra Low Power with Graphics and Neo-Chrom"

#else
  #error "STM32U5 device not specified"
#endif

/**
 * @brief   Sub-family identifier.
 */
#if !defined(STM32U5XX) || defined(__DOXYGEN__)
  #define STM32U5XX
#endif
/** @} */

/*===========================================================================*/
/* RCC/PWR/FLASH configuration aliases.                                      */
/*===========================================================================*/

/**
 * @name    FLASH_ACR register helpers
 * @{
 */
#define FLASH_ACR_LATENCY_FIELD(n)          ((n) << FLASH_ACR_LATENCY_Pos)
/** @} */

/**
 * @name    PWR_VOSR register helpers
 * @{
 */
#define PWR_VOSR_VOS_FIELD(n)               ((n) << PWR_VOSR_VOS_Pos)
#define PWR_VOSR_VOS_RANGE4                 PWR_VOSR_VOS_FIELD(0U)
#define PWR_VOSR_VOS_RANGE3                 PWR_VOSR_VOS_FIELD(1U)
#define PWR_VOSR_VOS_RANGE2                 PWR_VOSR_VOS_FIELD(2U)
#define PWR_VOSR_VOS_RANGE1                 PWR_VOSR_VOS_FIELD(3U)
/** @} */

/**
 * @name    Board-defined oscillator mode helpers
 * @{
 */
#if defined(STM32_HSE_BYPASS) || defined(__DOXYGEN__)
  #if defined(STM32_HSE_DIGITAL) || defined(__DOXYGEN__)
    #define STM32_HSE_MODE_BITS             (RCC_CR_HSEBYP | RCC_CR_HSEEXT)
  #else
    #define STM32_HSE_MODE_BITS             RCC_CR_HSEBYP
  #endif
#else
  #define STM32_HSE_MODE_BITS               0U
#endif

#if !defined(STM32_LSEDRV)
  #error "STM32_LSEDRV not defined in board.h"
#endif

#if (STM32_LSEDRV & ~RCC_BDCR_LSEDRV_Msk) != 0U
  #error "STM32_LSEDRV outside acceptable range ((0<<3)...(3<<3))"
#endif

#if defined(STM32_LSE_BYPASS) || defined(__DOXYGEN__)
  #define STM32_LSE_MODE_BITS               (STM32_LSEDRV | RCC_BDCR_LSEBYP)
#else
  #define STM32_LSE_MODE_BITS               STM32_LSEDRV
#endif
/** @} */

/*===========================================================================*/
/* Driver pre-compile time settings.                                         */
/*===========================================================================*/

#if !defined(STM32_NO_INIT) || defined(__DOXYGEN__)
#define STM32_NO_INIT                       FALSE
#endif

#include "clocktree.h"

/*===========================================================================*/
/* Compatibility clock aliases.                                              */
/*===========================================================================*/

#define STM32_HSI16CLK                      STM32_HSI16_CLOCK
#define STM32_HSI48CLK                      STM32_HSI48_CLOCK
#define STM32_MSISCLK                       STM32_MSIS_CLOCK
#define STM32_MSIKCLK                       STM32_MSIK_CLOCK
#define STM32_LSICLK                        STM32_LSI_CLOCK

#define STM32_SYSCLK                        STM32_SYSCLK_CLOCK
#define STM32_HCLK                          STM32_HCLK_CLOCK
#define STM32_PCLK1                         STM32_PCLK1_CLOCK
#define STM32_PCLK1TIM                      STM32_PCLK1TIM_CLOCK
#define STM32_PCLK2                         STM32_PCLK2_CLOCK
#define STM32_PCLK2TIM                      STM32_PCLK2TIM_CLOCK
#define STM32_PCLK3                         STM32_PCLK3_CLOCK
#define STM32_RTCCLK                        STM32_RTC_CLOCK

#define STM32_USART1CLK                     STM32_USART1_CLOCK
#define STM32_USART2CLK                     STM32_USART2_CLOCK
#define STM32_USART3CLK                     STM32_USART3_CLOCK
#define STM32_UART4CLK                      STM32_UART4_CLOCK
#define STM32_UART5CLK                      STM32_UART5_CLOCK
#define STM32_LPUART1CLK                    STM32_LPUART1_CLOCK

#define STM32_TIM16CCLK                     STM32_TIM16IC_CLOCK
#define STM32_TIM17CCLK                     STM32_TIM17IC_CLOCK
#define STM32_LPTIM2CCLK                    STM32_LPTIM2IC_CLOCK
#define STM32_LPTIM1CLK                     STM32_LPTIM1_CLOCK
#define STM32_LPTIM2CLK                     STM32_LPTIM2_CLOCK
#define STM32_LPTIM3CLK                     STM32_LPTIM34_CLOCK
#define STM32_LPTIM4CLK                     STM32_LPTIM34_CLOCK
#define STM32_SPI1CLK                       STM32_SPI1_CLOCK
#define STM32_SPI2CLK                       STM32_SPI2_CLOCK
#define STM32_SPI3CLK                       STM32_SPI3_CLOCK
#define STM32_OSPICLK                       STM32_OCTOSPI_CLOCK
#define STM32_SYSTICKCLK                    STM32_SYSTICK_CLOCK
#define STM32_ICLK                          STM32_ICLK_CLOCK
#define STM32_USBCLK                        STM32_USB_CLOCK
#define STM32_SDMMC1CLK                     STM32_SDMMC1_CLOCK
#define STM32_SDMMC2CLK                     STM32_SDMMC2_CLOCK
#define STM32_I2C1CLK                       STM32_I2C1_CLOCK
#define STM32_I2C2CLK                       STM32_I2C2_CLOCK
#define STM32_I2C3CLK                       STM32_I2C3_CLOCK
#define STM32_I2C4CLK                       STM32_I2C4_CLOCK
#define STM32_ADCDACCLK                     STM32_ADCDAC_CLOCK
#define STM32_DAC1SHSELCLK                  STM32_DAC1SH_CLOCK
#define STM32_RNGCLK                        STM32_RNG_CLOCK
#define STM32_FDCAN1CLK                     STM32_FDCAN1_CLOCK
#define STM32_SAI1CLK                       STM32_SAI1_CLOCK
#define STM32_SAI2CLK                       STM32_SAI2_CLOCK
#define STM32_MDF1CLK                       STM32_MDF1_CLOCK
#define STM32_ADF1CLK                       STM32_ADF1_CLOCK

#define STM32_TIMP1CLK                      STM32_PCLK1TIM_CLOCK
#define STM32_TIMP2CLK                      STM32_PCLK2TIM_CLOCK
#define STM32_TIMCLK1                       STM32_PCLK1TIM_CLOCK
#define STM32_TIMCLK2                       STM32_PCLK2TIM_CLOCK
#define STM32_ADC1_CLOCK                    STM32_ADCDAC_CLOCK
#define STM32_ADC2_CLOCK                    STM32_ADCDAC_CLOCK
#define STM32_ADC4_CLOCK                    STM32_ADCDAC_CLOCK
#define STM32_DAC1_CLOCK                    STM32_ADCDAC_CLOCK

/**
 * @brief   Maximum allowed SDMMC kernel clock frequency.
 */
#define STM32_SDMMC_MAXCLK                  208000000U

/*===========================================================================*/
/* Driver data structures and types.                                         */
/*===========================================================================*/

/**
 * @brief   Type of a timeout counter.
 */
typedef uint32_t halcnt_t;

/*===========================================================================*/
/* Driver macros.                                                            */
/*===========================================================================*/

/**
 * @brief   Real time counter frequency exported to the safety module.
 * @note    The counter is the internal DWT cycles counter so it runs at the
 *          same frequency as the CPU.
 */
#define HAL_LLD_GET_CNT_FREQUENCY()         hal_lld_get_clock_point(CLK_HCLK)

/**
 * @brief   Real time counter value exported to the safety module.
 */
#define HAL_LLD_GET_CNT_VALUE()             (DWT->CYCCNT)

/*===========================================================================*/
/* External declarations.                                                    */
/*===========================================================================*/

/* Various helpers.*/
#include "nvic.h"
#include "cache.h"
#include "stm32_isr.h"
#include "stm32_exti.h"
#include "stm32_rcc.h"
#include "stm32_tim.h"

#if HAL_USE_ADC || HAL_USE_DAC || HAL_USE_I2C || HAL_USE_SPI ||             \
    defined(__DOXYGEN__)
#include "stm32_dma3.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif
  void hal_lld_init(void);
  void stm32_clock_init(void);
#ifdef __cplusplus
}
#endif

#endif /* HAL_LLD_H */

/** @} */
