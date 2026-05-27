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

#if !defined(STM32_FLASH_ACR) || defined(__DOXYGEN__)
#define STM32_FLASH_ACR                     (FLASH_ACR_PRFTEN)
#endif

#include "clocktree.h"

/**
 * @name    Static register initialization settings
 * @{
 */
#if !defined(STM32_PWR_CR1) || defined(__DOXYGEN__)
#define STM32_PWR_CR1                       (0U)
#endif

#if !defined(STM32_PWR_CR2) || defined(__DOXYGEN__)
#define STM32_PWR_CR2                       (0U)
#endif

#if !defined(STM32_PWR_CR3) || defined(__DOXYGEN__)
#define STM32_PWR_CR3                       (0U)
#endif

#if !defined(STM32_PWR_SVMCR) || defined(__DOXYGEN__)
#define STM32_PWR_SVMCR                     (0U)
#endif

#if !defined(STM32_PWR_WUCR1) || defined(__DOXYGEN__)
#define STM32_PWR_WUCR1                     (0U)
#endif

#if !defined(STM32_PWR_WUCR2) || defined(__DOXYGEN__)
#define STM32_PWR_WUCR2                     (0U)
#endif

#if !defined(STM32_PWR_WUCR3) || defined(__DOXYGEN__)
#define STM32_PWR_WUCR3                     (0U)
#endif

#if !defined(STM32_PWR_BDCR1) || defined(__DOXYGEN__)
#define STM32_PWR_BDCR1                     (0U)
#endif

#if !defined(STM32_PWR_BDCR2) || defined(__DOXYGEN__)
#define STM32_PWR_BDCR2                     (0U)
#endif

#if !defined(STM32_PWR_UCPDR) || defined(__DOXYGEN__)
#define STM32_PWR_UCPDR                     (0U)
#endif

#if !defined(STM32_PWR_SECCFGR) || defined(__DOXYGEN__)
#define STM32_PWR_SECCFGR                   (0U)
#endif

#if !defined(STM32_PWR_PRIVCFGR) || defined(__DOXYGEN__)
#define STM32_PWR_PRIVCFGR                  (0U)
#endif

#if !defined(STM32_PWR_APCR) || defined(__DOXYGEN__)
#define STM32_PWR_APCR                      (0U)
#endif

#if !defined(STM32_PWR_PUCRA) || defined(__DOXYGEN__)
#define STM32_PWR_PUCRA                     (0U)
#endif

#if !defined(STM32_PWR_PDCRA) || defined(__DOXYGEN__)
#define STM32_PWR_PDCRA                     (0U)
#endif

#if !defined(STM32_PWR_PUCRB) || defined(__DOXYGEN__)
#define STM32_PWR_PUCRB                     (0U)
#endif

#if !defined(STM32_PWR_PDCRB) || defined(__DOXYGEN__)
#define STM32_PWR_PDCRB                     (0U)
#endif

#if !defined(STM32_PWR_PUCRC) || defined(__DOXYGEN__)
#define STM32_PWR_PUCRC                     (0U)
#endif

#if !defined(STM32_PWR_PDCRC) || defined(__DOXYGEN__)
#define STM32_PWR_PDCRC                     (0U)
#endif

#if !defined(STM32_PWR_PUCRD) || defined(__DOXYGEN__)
#define STM32_PWR_PUCRD                     (0U)
#endif

#if !defined(STM32_PWR_PDCRD) || defined(__DOXYGEN__)
#define STM32_PWR_PDCRD                     (0U)
#endif

#if !defined(STM32_PWR_PUCRE) || defined(__DOXYGEN__)
#define STM32_PWR_PUCRE                     (0U)
#endif

#if !defined(STM32_PWR_PDCRE) || defined(__DOXYGEN__)
#define STM32_PWR_PDCRE                     (0U)
#endif

#if !defined(STM32_PWR_PUCRF) || defined(__DOXYGEN__)
#define STM32_PWR_PUCRF                     (0U)
#endif

#if !defined(STM32_PWR_PDCRF) || defined(__DOXYGEN__)
#define STM32_PWR_PDCRF                     (0U)
#endif

#if !defined(STM32_PWR_PUCRG) || defined(__DOXYGEN__)
#define STM32_PWR_PUCRG                     (0U)
#endif

#if !defined(STM32_PWR_PDCRG) || defined(__DOXYGEN__)
#define STM32_PWR_PDCRG                     (0U)
#endif

#if !defined(STM32_PWR_PUCRH) || defined(__DOXYGEN__)
#define STM32_PWR_PUCRH                     (0U)
#endif

#if !defined(STM32_PWR_PDCRH) || defined(__DOXYGEN__)
#define STM32_PWR_PDCRH                     (0U)
#endif

#if !defined(STM32_PWR_PUCRI) || defined(__DOXYGEN__)
#define STM32_PWR_PUCRI                     (0U)
#endif

#if !defined(STM32_PWR_PDCRI) || defined(__DOXYGEN__)
#define STM32_PWR_PDCRI                     (0U)
#endif

/** @} */

/**
 * @name    Activation times in microseconds
 * @{
 */
#define STM32_RELAXED_TIMEOUT_FACTOR        5U
#define STM32_REGULATORS_TRANSITION_TIME    (21U * STM32_RELAXED_TIMEOUT_FACTOR)
#define STM32_OSCILLATORS_STARTUP_TIME      (2000U * STM32_RELAXED_TIMEOUT_FACTOR)
#define STM32_PLL_STARTUP_TIME              (800U * STM32_RELAXED_TIMEOUT_FACTOR)
#define STM32_SYSCLK_SWITCH_TIME            (50U * STM32_RELAXED_TIMEOUT_FACTOR)
/** @} */

/**
 * @brief   Flash wait-state settings.
 */
#if (STM32_HCLK_FREQ <= STM32_FLASH_0WS_MAX) || defined(__DOXYGEN__)
#define STM32_FLASHBITS                     FLASH_ACR_LATENCY_0WS
#elif (STM32_HCLK_FREQ <= STM32_FLASH_1WS_MAX)
#define STM32_FLASHBITS                     FLASH_ACR_LATENCY_1WS
#elif (STM32_HCLK_FREQ <= STM32_FLASH_2WS_MAX)
#define STM32_FLASHBITS                     FLASH_ACR_LATENCY_2WS
#elif (STM32_HCLK_FREQ <= STM32_FLASH_3WS_MAX)
#define STM32_FLASHBITS                     FLASH_ACR_LATENCY_3WS
#elif (STM32_HCLK_FREQ <= STM32_FLASH_4WS_MAX)
#define STM32_FLASHBITS                     FLASH_ACR_LATENCY_4WS
#elif (STM32_HCLK_FREQ <= STM32_FLASH_5WS_MAX)
#define STM32_FLASHBITS                     FLASH_ACR_LATENCY_5WS
#elif (STM32_HCLK_FREQ <= STM32_FLASH_6WS_MAX)
#define STM32_FLASHBITS                     FLASH_ACR_LATENCY_6WS
#elif (STM32_HCLK_FREQ <= STM32_FLASH_7WS_MAX)
#define STM32_FLASHBITS                     FLASH_ACR_LATENCY_7WS
#elif (STM32_HCLK_FREQ <= STM32_FLASH_8WS_MAX)
#define STM32_FLASHBITS                     FLASH_ACR_LATENCY_8WS
#elif (STM32_HCLK_FREQ <= STM32_FLASH_9WS_MAX)
#define STM32_FLASHBITS                     FLASH_ACR_LATENCY_9WS
#elif (STM32_HCLK_FREQ <= STM32_FLASH_10WS_MAX)
#define STM32_FLASHBITS                     FLASH_ACR_LATENCY_10WS
#elif (STM32_HCLK_FREQ <= STM32_FLASH_11WS_MAX)
#define STM32_FLASHBITS                     FLASH_ACR_LATENCY_11WS
#elif (STM32_HCLK_FREQ <= STM32_FLASH_12WS_MAX)
#define STM32_FLASHBITS                     FLASH_ACR_LATENCY_12WS
#elif (STM32_HCLK_FREQ <= STM32_FLASH_13WS_MAX)
#define STM32_FLASHBITS                     FLASH_ACR_LATENCY_13WS
#elif (STM32_HCLK_FREQ <= STM32_FLASH_14WS_MAX)
#define STM32_FLASHBITS                     FLASH_ACR_LATENCY_14WS
#elif (STM32_HCLK_FREQ <= STM32_FLASH_15WS_MAX)
#define STM32_FLASHBITS                     FLASH_ACR_LATENCY_15WS
#else
#error "invalid STM32_HCLK frequency specified"
#endif

#if STM32_CFG_CLOCK_DYNAMIC == TRUE
#define HAL_LLD_USE_CLOCK_MANAGEMENT
#endif

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

/**
 * @brief   Type of a PLL configuration structure.
 */
typedef struct {
  uint32_t          cfgr;
  uint32_t          divr;
  uint32_t          fracr;
} stm32_pllcfg_t;

/**
 * @brief   Type of a clock configuration structure.
 */
typedef struct {
  uint32_t          pwr_vosr;
  uint32_t          rcc_cr;
  uint32_t          rcc_icscr1;
  uint32_t          rcc_cfgr1;
  uint32_t          rcc_cfgr2;
  uint32_t          rcc_cfgr3;
  uint32_t          rcc_bdcr;
  uint32_t          rcc_ccipr1;
  uint32_t          rcc_ccipr2;
  uint32_t          rcc_ccipr3;
  uint32_t          flash_acr;
  stm32_pllcfg_t    plls[3];
} halclkcfg_t;

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

#if defined(HAL_LLD_USE_CLOCK_MANAGEMENT) && !defined(__DOXYGEN__)
extern const halclkcfg_t hal_clkcfg_reset;
extern const halclkcfg_t hal_clkcfg_default;
#endif

#if HAL_USE_ADC || HAL_USE_DAC || HAL_USE_I2C || HAL_USE_SPI ||             \
    defined(__DOXYGEN__)
#include "stm32_dma3.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif
  void hal_lld_init(void);
  void stm32_clock_init(void);
#if defined(HAL_LLD_USE_CLOCK_MANAGEMENT) || defined(__DOXYGEN__)
  bool hal_lld_clock_switch_mode(const halclkcfg_t *ccp);
  halfreq_t hal_lld_get_clock_point(halclkpt_t clkpt);
#endif
#ifdef __cplusplus
}
#endif

#endif /* HAL_LLD_H */

/** @} */
