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
 * @file    STM32G4xx_TEST/hal_lld.h
 * @brief   STM32G4xx generated clock tree prototype HAL header.
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
#define HAL_LLD_SELECT_SPI_V2           TRUE

/**
 * @name    Platform identification
 * @{
 */
#if defined(STM32G431xx) || defined(STM32G441xx) ||                         \
    defined(STM32G471xx) || defined(STM32G491xx) || defined(__DOXYGEN__)
#define PLATFORM_NAME                   "STM32G4 Access Line"

#elif defined(STM32G473xx)
#define PLATFORM_NAME                   "STM32G4 Performance Line"

#elif defined(STM32G483xx)
#define PLATFORM_NAME                   "STM32G4 Performance Line with Crypto"

#elif defined(STM32G474xx)
#define PLATFORM_NAME                   "STM32G4 Hi-resolution Line"

#elif defined(STM32G484xx)
#define PLATFORM_NAME                   "STM32G4 Hi-resolution Line with Crypto"

#elif defined(STM32GBK1CB)
#define PLATFORM_NAME                   "STM32G4 Mystery Line"

#else
#error "STM32G4 device not specified"
#endif

#if !defined(STM32G4XX) || defined(__DOXYGEN__)
#define STM32G4XX
#endif
/** @} */

/*===========================================================================*/
/* Driver pre-compile time settings.                                         */
/*===========================================================================*/

/**
 * @name    Static configuration options
 * @{
 */
#if !defined(STM32_NO_INIT) || defined(__DOXYGEN__)
#define STM32_NO_INIT                       FALSE
#endif

#if !defined(STM32_PWR_CR2) || defined(__DOXYGEN__)
#define STM32_PWR_CR2                       (PWR_CR2_PLS_LEV0)
#endif

#if !defined(STM32_PWR_CR3) || defined(__DOXYGEN__)
#define STM32_PWR_CR3                       (PWR_CR3_EIWF)
#endif

#if !defined(STM32_PWR_CR4) || defined(__DOXYGEN__)
#define STM32_PWR_CR4                       (0U)
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
/** @} */

/*===========================================================================*/
/* Derived constants and error checks.                                       */
/*===========================================================================*/

#if !defined(STM32G4xx_TEST_MCUCONF)
#error "Using a wrong mcuconf.h file, STM32G4xx_TEST_MCUCONF not defined"
#endif

#if defined(STM32G431xx) && !defined(STM32G431_MCUCONF)
#error "Using a wrong mcuconf.h file, STM32G431_MCUCONF not defined"

#elif defined(STM32G441xx) && !defined(STM32G441_MCUCONF)
#error "Using a wrong mcuconf.h file, STM32G441_MCUCONF not defined"

#elif defined(STM32G471xx) && !defined(STM32G471_MCUCONF)
#error "Using a wrong mcuconf.h file, STM32G471_MCUCONF not defined"

#elif defined(STM32G473xx) && !defined(STM32G473_MCUCONF)
#error "Using a wrong mcuconf.h file, STM32G473_MCUCONF not defined"

#elif defined(STM32G483xx) && !defined(STM32G483_MCUCONF)
#error "Using a wrong mcuconf.h file, STM32G483_MCUCONF not defined"

#elif defined(STM32G474xx) && !defined(STM32G474_MCUCONF)
#error "Using a wrong mcuconf.h file, STM32G474_MCUCONF not defined"

#elif defined(STM32G484xx) && !defined(STM32G484_MCUCONF)
#error "Using a wrong mcuconf.h file, STM32G484_MCUCONF not defined"

#elif defined(STM32GBK1CB) && !defined(STM32GBK1CB_MCUCONF)
#error "Using a wrong mcuconf.h file, STM32GBK1CB_MCUCONF not defined"

#elif defined(STM32G491xx) && !defined(STM32G491_MCUCONF)
#error "Using a wrong mcuconf.h file, STM32G491_MCUCONF not defined"
#endif

#include "clocktree.h"

#if STM32_CFG_PWR_BOOST && (STM32_CFG_PWR_VOS != PWR_CR1_VOS_RANGE1)
#error "STM32_CFG_PWR_BOOST requires STM32_CFG_PWR_VOS to be PWR_CR1_VOS_RANGE1"
#endif

/**
 * @name    Activation times in microseconds
 * @{
 */
#define STM32_RELAXED_TIMEOUT_FACTOR        5U
#define STM32_HSI_STARTUP_TIME              (4U * STM32_RELAXED_TIMEOUT_FACTOR)
#define STM32_OSCILLATORS_STARTUP_TIME      (2000U * STM32_RELAXED_TIMEOUT_FACTOR)
#define STM32_HSI48_STARTUP_TIME            (6U * STM32_RELAXED_TIMEOUT_FACTOR)
#define STM32_PLL_STARTUP_TIME              (40U * STM32_RELAXED_TIMEOUT_FACTOR)
#define STM32_SYSCLK_SWITCH_TIME            (50U * STM32_RELAXED_TIMEOUT_FACTOR)
#define STM32_REGULATORS_TRANSITION_TIME    (40U * STM32_RELAXED_TIMEOUT_FACTOR)
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
#else
#define STM32_FLASHBITS                     FLASH_ACR_LATENCY_5WS
#endif

#if STM32_CFG_CLOCK_DYNAMIC == TRUE
#define HAL_LLD_USE_CLOCK_MANAGEMENT
#endif

/* Clock handlers.*/
#include "stm32_lse.inc"
#include "stm32_lsi.inc"

/*===========================================================================*/
/* Compatibility clock aliases.                                              */
/*===========================================================================*/

/*
 * LLD drivers still consume the historical STM32_*CLK symbols.  The clock
 * tree generator owns the actual model; this block is only the compatibility
 * boundary exported by hal_lld.h.
 */
#define STM32_SYSCLK                        STM32_SYSCLK_CLOCK
#define STM32_HCLK                          STM32_HCLK_CLOCK
#define STM32_PCLK1                         STM32_PCLK1_CLOCK
#define STM32_LSCOSEL                       STM32_LSCO_BITS
#define STM32_RTCCLK                        STM32_RTC_CLOCK
#define STM32_RTCSEL                        STM32_RTC_BITS

#define STM32_USART1CLK                     STM32_USART1_CLOCK
#define STM32_USART2CLK                     STM32_USART2_CLOCK
#define STM32_USART3CLK                     STM32_USART3_CLOCK
#define STM32_UART4CLK                      STM32_UART4_CLOCK
#define STM32_UART5CLK                      STM32_UART5_CLOCK
#define STM32_LPUART1CLK                    STM32_LPUART1_CLOCK

#define STM32_ADC12CLK                      STM32_ADC12_CLOCK
#define STM32_ADC345CLK                     STM32_ADC345_CLOCK
#define STM32_TIMCLK1                       STM32_PCLK1TIM_CLOCK
#define STM32_TIMCLK2                       STM32_PCLK2TIM_CLOCK
#define STM32_RNGCLK                        STM32_RNG_CLOCK
#define STM32_USBCLK                        STM32_USB_CLOCK

/*===========================================================================*/
/* Driver data structures and types.                                         */
/*===========================================================================*/

/**
 * @brief   Type of a clock configuration structure.
 */
typedef struct {
  uint32_t          pwr_cr1;
  uint32_t          pwr_cr2;
  uint32_t          pwr_cr5;
  uint32_t          rcc_cr;
  uint32_t          rcc_cfgr;
  uint32_t          rcc_pllcfgr;
  uint32_t          flash_acr;
  uint32_t          rcc_crrcr;
} halclkcfg_t;

/**
 * @brief   Type of a timeout counter.
 */
typedef uint32_t halcnt_t;

/*===========================================================================*/
/* Driver macros.                                                            */
/*===========================================================================*/

/**
 * @brief   Real time counter frequency exported to the safety module.
 */
#define HAL_LLD_GET_CNT_FREQUENCY()         SystemCoreClock

/**
 * @brief   Real time counter value exported to the safety module.
 */
#define HAL_LLD_GET_CNT_VALUE()             (DWT->CYCCNT)

/*===========================================================================*/
/* External declarations.                                                    */
/*===========================================================================*/

#include "nvic.h"
#include "cache.h"
#include "mpu_v7m.h"
#include "stm32_isr.h"
#include "stm32_dma.h"
#include "stm32_exti.h"
#include "stm32_rcc.h"
#include "stm32_tim.h"

#if defined(HAL_LLD_USE_CLOCK_MANAGEMENT) && !defined(__DOXYGEN__)
extern const halclkcfg_t hal_clkcfg_reset;
extern const halclkcfg_t hal_clkcfg_default;
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
