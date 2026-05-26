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
 * @file    STM32U3xx_TEST/hal_lld.h
 * @brief   STM32U3xx TEST HAL subsystem low level driver header.
 * @pre     This module requires the following macros to be defined in the
 *          @p board.h file:
 *          - STM32_LSECLK.
 *          - STM32_LSEDRV.
 *          - STM32_LSE_BYPASS (optionally).
 *          - STM32_HSECLK.
 *          - STM32_HSE_BYPASS (optionally).
 *          - STM32_HSE_DIGITAL (optionally).
 *          .
 *          One of the following macros must also be defined:
 *          - STM32U375xx, STM32U385xx.
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
#if defined(STM32U375xx) || defined(__DOXYGEN__)
  #define PLATFORM_NAME                     "STM32U3 Low-power"

#elif defined(STM32U385xx)
  #define PLATFORM_NAME                     "STM32U3 Low-power with Crypto"

#else
  #error "STM32U3 device not specified"
#endif

/**
 * @brief   Sub-family identifier.
 */
#if !defined(STM32U3XX) || defined(__DOXYGEN__)
  #define STM32U3XX
#endif
/** @} */

/**
 * @name    PWR_VOSR register helpers
 * @{
 */
#define PWR_VOSR_RANGE_Msk                  (PWR_VOSR_R1EN_Msk | PWR_VOSR_R2EN_Msk)
#define PWR_VOSR_RANGE1                     PWR_VOSR_R1EN
#define PWR_VOSR_RANGE2                     PWR_VOSR_R2EN
/** @} */


/**
 * @name    FLASH_ACR register helpers
 * @{
 */
#define FLASH_ACR_LATENCY_FIELD(n)          ((n) << FLASH_ACR_LATENCY_Pos)
#define FLASH_ACR_LATENCY_0WS               FLASH_ACR_LATENCY_FIELD(0U)
#define FLASH_ACR_LATENCY_1WS               FLASH_ACR_LATENCY_FIELD(1U)
#define FLASH_ACR_LATENCY_2WS               FLASH_ACR_LATENCY_FIELD(2U)
#define FLASH_ACR_LATENCY_3WS               FLASH_ACR_LATENCY_FIELD(3U)
#define FLASH_ACR_LATENCY_4WS               FLASH_ACR_LATENCY_FIELD(4U)
/** @} */

/**
 * @name    RCC_CFGR4 register helpers
 * @{
 */
#define RCC_CFGR4_BOOSTSEL_FIELD(n)         ((n) << RCC_CFGR4_BOOSTSEL_Pos)
#define RCC_CFGR4_BOOSTSEL_NOCLOCK          RCC_CFGR4_BOOSTSEL_FIELD(0U)
#define RCC_CFGR4_BOOSTSEL_MSIS             RCC_CFGR4_BOOSTSEL_FIELD(1U)
#define RCC_CFGR4_BOOSTSEL_HSI16            RCC_CFGR4_BOOSTSEL_FIELD(2U)
#define RCC_CFGR4_BOOSTSEL_HSE              RCC_CFGR4_BOOSTSEL_FIELD(3U)

#define RCC_CFGR4_BOOSTDIV_FIELD(n)         ((n) << RCC_CFGR4_BOOSTDIV_Pos)
#define RCC_CFGR4_BOOSTDIV_DIV1             RCC_CFGR4_BOOSTDIV_FIELD(0U)
#define RCC_CFGR4_BOOSTDIV_DIV2             RCC_CFGR4_BOOSTDIV_FIELD(1U)
#define RCC_CFGR4_BOOSTDIV_DIV4             RCC_CFGR4_BOOSTDIV_FIELD(2U)
#define RCC_CFGR4_BOOSTDIV_DIV6             RCC_CFGR4_BOOSTDIV_FIELD(3U)
#define RCC_CFGR4_BOOSTDIV_DIV8             RCC_CFGR4_BOOSTDIV_FIELD(4U)
#define RCC_CFGR4_BOOSTDIV_DIV10            RCC_CFGR4_BOOSTDIV_FIELD(5U)
#define RCC_CFGR4_BOOSTDIV_DIV12            RCC_CFGR4_BOOSTDIV_FIELD(6U)
#define RCC_CFGR4_BOOSTDIV_DIV14            RCC_CFGR4_BOOSTDIV_FIELD(7U)
#define RCC_CFGR4_BOOSTDIV_DIV16            RCC_CFGR4_BOOSTDIV_FIELD(8U)
/** @} */

/*===========================================================================*/
/* Driver pre-compile time settings.                                         */
/*===========================================================================*/

/**
 * @name    Configuration options
 * @{
 */
/**
 * @brief   Disables the PWR/RCC initialization in the HAL.
 */
#if !defined(STM32_NO_INIT) || defined(__DOXYGEN__)
#define STM32_NO_INIT                       FALSE
#endif

/**
 * @brief   PWR CR3 register initialization value.
 */
#if !defined(STM32_PWR_CR3) || defined(__DOXYGEN__)
#define STM32_PWR_CR3                       (PWR_CR3_FSTEN | PWR_CR3_REGSEL)
#endif

/**
 * @brief   PWR CR3 register initialization value.
 */
#if !defined(STM32_PWR_SVMCR) || defined(__DOXYGEN__)
#define STM32_PWR_SVMCR                     (PWR_SVMCR_ASV | PWR_SVMCR_USV | PWR_SVMCR_AVM1EN | PWR_SVMCR_AVM2EN | PWR_SVMCR_UVMEN)
#endif

/**
 * @brief   PWR WUCR1 register initialization value.
 */
#if !defined(STM32_PWR_WUCR1) || defined(__DOXYGEN__)
#define STM32_PWR_WUCR1                     (0U)
#endif

/**
 * @brief   PWR WUCR2 register initialization value.
 */
#if !defined(STM32_PWR_WUCR2) || defined(__DOXYGEN__)
#define STM32_PWR_WUCR2                     (0U)
#endif

/**
 * @brief   PWR WUCR3 register initialization value.
 */
#if !defined(STM32_PWR_WUCR3) || defined(__DOXYGEN__)
#define STM32_PWR_WUCR3                     (0U)
#endif

/**
 * @brief   PWR BDCR register initialization value.
 */
#if !defined(STM32_PWR_BDCR) || defined(__DOXYGEN__)
#define STM32_PWR_BDCR                      (0U)
#endif

/**
 * @brief   PWR SECCFGR register initialization value.
 */
#if !defined(STM32_PWR_SECCFGR) || defined(__DOXYGEN__)
#define STM32_PWR_SECCFGR                   (0U)
#endif

/**
 * @brief   PWR PRIVCFGR register initialization value.
 */
#if !defined(STM32_PWR_PRIVCFGR) || defined(__DOXYGEN__)
#define STM32_PWR_PRIVCFGR                  (0U)
#endif

/**
 * @brief   PWR APCR register initialization value.
 */
#if !defined(STM32_PWR_APCR) || defined(__DOXYGEN__)
#define STM32_PWR_APCR                      (0U)
#endif

/**
 * @brief   PWR PUCRA register initialization value.
 */
#if !defined(STM32_PWR_PUCRA) || defined(__DOXYGEN__)
#define STM32_PWR_PUCRA                     (0U)
#endif

/**
 * @brief   PWR PDCRA register initialization value.
 */
#if !defined(STM32_PWR_PDCRA) || defined(__DOXYGEN__)
#define STM32_PWR_PDCRA                     (0U)
#endif

/**
 * @brief   PWR PUCRB register initialization value.
 */
#if !defined(STM32_PWR_PUCRB) || defined(__DOXYGEN__)
#define STM32_PWR_PUCRB                     (0U)
#endif

/**
 * @brief   PWR PDCRB register initialization value.
 */
#if !defined(STM32_PWR_PDCRB) || defined(__DOXYGEN__)
#define STM32_PWR_PDCRB                     (0U)
#endif

/**
 * @brief   PWR PUCRC register initialization value.
 */
#if !defined(STM32_PWR_PUCRC) || defined(__DOXYGEN__)
#define STM32_PWR_PUCRC                     (0U)
#endif

/**
 * @brief   PWR PDCRC register initialization value.
 */
#if !defined(STM32_PWR_PDCRC) || defined(__DOXYGEN__)
#define STM32_PWR_PDCRC                     (0U)
#endif

/**
 * @brief   PWR PUCRD register initialization value.
 */
#if !defined(STM32_PWR_PUCRD) || defined(__DOXYGEN__)
#define STM32_PWR_PUCRD                     (0U)
#endif

/**
 * @brief   PWR PDCRD register initialization value.
 */
#if !defined(STM32_PWR_PDCRD) || defined(__DOXYGEN__)
#define STM32_PWR_PDCRD                     (0U)
#endif

/**
 * @brief   PWR PUCRE register initialization value.
 */
#if !defined(STM32_PWR_PUCRE) || defined(__DOXYGEN__)
#define STM32_PWR_PUCRE                     (0U)
#endif

/**
 * @brief   PWR PDCRE register initialization value.
 */
#if !defined(STM32_PWR_PDCRE) || defined(__DOXYGEN__)
#define STM32_PWR_PDCRE                     (0U)
#endif

/**
 * @brief   PWR PUCRG register initialization value.
 */
#if !defined(STM32_PWR_PUCRG) || defined(__DOXYGEN__)
#define STM32_PWR_PUCRG                     (0U)
#endif

/**
 * @brief   PWR PDCRG register initialization value.
 */
#if !defined(STM32_PWR_PDCRG) || defined(__DOXYGEN__)
#define STM32_PWR_PDCRG                     (0U)
#endif

/**
 * @brief   PWR PUCRH register initialization value.
 */
#if !defined(STM32_PWR_PUCRH) || defined(__DOXYGEN__)
#define STM32_PWR_PUCRH                     (0U)
#endif

/**
 * @brief   PWR PDCRH register initialization value.
 */
#if !defined(STM32_PWR_PDCRH) || defined(__DOXYGEN__)
#define STM32_PWR_PDCRH                     (0U)
#endif

/**
 * @brief   PWR I3CPUCR1 register initialization value.
 */
#if !defined(STM32_PWR_I3CPUCR1) || defined(__DOXYGEN__)
#define STM32_PWR_I3CPUCR1                  (0U)
#endif

/**
 * @brief   PWR I3CPUCR2 register initialization value.
 */
#if !defined(STM32_PWR_I3CPUCR2) || defined(__DOXYGEN__)
#define STM32_PWR_I3CPUCR2                  (0U)
#endif

/**
 * @brief   FLASH ACR register initialization value.
 * @note    Do not specify the LATENCY bits because those are calculated
 *          depending on other settings and ORed to this value.
 */
#if !defined(STM32_FLASH_ACR) || defined(__DOXYGEN__)
#define STM32_FLASH_ACR                     (FLASH_ACR_PRFTEN)
#endif

/** @} */

/*===========================================================================*/
/* Derived constants and error checks.                                       */
/*===========================================================================*/

/*
 * Configuration-related checks.
 */
#if !defined(STM32U3xx_TEST_MCUCONF)
#error "Using a wrong mcuconf.h file, STM32U3xx_TEST_MCUCONF not defined"
#endif

#if defined(STM32U375xx) && !defined(STM32U375_MCUCONF)
#error "Using a wrong mcuconf.h file, STM32U375_MCUCONF not defined"

#elif defined(STM32U385xx) && !defined(STM32U385_MCUCONF)
#error "Using a wrong mcuconf.h file, STM32U385_MCUCONF not defined"

#endif

#include "clocktree.h"

/**
 * @name    Activation times in microseconds
 * @{
 */
#define STM32_RELAXED_TIMEOUT_FACTOR        5U
#define STM32_REGULATORS_TRANSITION_TIME    (21U * STM32_RELAXED_TIMEOUT_FACTOR)
#define STM32_OSCILLATORS_STARTUP_TIME      (2000U * STM32_RELAXED_TIMEOUT_FACTOR)
#define STM32_MSIPLL_STARTUP_TIME           (800U * STM32_RELAXED_TIMEOUT_FACTOR)
#define STM32_SYSCLK_SWITCH_TIME            (50U * STM32_RELAXED_TIMEOUT_FACTOR)
/** @} */

/* Compatibility aliases for helpers still expecting bypass-specific names. */
#define STM32_HSECLK_BYP_MIN                STM32_HSECLK_MIN
#define STM32_HSECLK_BYP_MAX                STM32_HSECLK_MAX
#define STM32_LSECLK_BYP_MIN                STM32_LSECLK_MIN
#define STM32_LSECLK_BYP_MAX                STM32_LSECLK_MAX

#if (STM32_CFG_PWR_VOSR == PWR_VOSR_RANGE1) || defined(__DOXYGEN__)
#define STM32_BOOSTEN_THRESHOLD             0U
#elif (STM32_CFG_PWR_VOSR == PWR_VOSR_RANGE2)
#define STM32_BOOSTEN_THRESHOLD             24000000U
#else
#error "invalid STM32_CFG_PWR_VOSR value specified"
#endif

/* EPOD boost-related settings. */
#if STM32_SYSCLK_FREQ > STM32_BOOSTEN_THRESHOLD
  #define STM32_BOOSTER_ENABLED             TRUE
  #if STM32_CFG_SYSCLK_SEL == RCC_CFGR1_SW_MSIS
    #define STM32_BOOSTSEL                  RCC_CFGR4_BOOSTSEL_MSIS
    #define STM32_BOOSTDIV                  0U
  #elif STM32_CFG_SYSCLK_SEL == RCC_CFGR1_SW_HSI16
    #define STM32_BOOSTSEL                  RCC_CFGR4_BOOSTSEL_HSI16
    #define STM32_BOOSTDIV                  RCC_CFGR4_BOOSTDIV_DIV2
  #elif STM32_CFG_SYSCLK_SEL == RCC_CFGR1_SW_HSE
    #define STM32_BOOSTSEL                  RCC_CFGR4_BOOSTSEL_HSE
    #if STM32_HSE_FREQ <= 12000000U
      #define STM32_BOOSTDIV                RCC_CFGR4_BOOSTDIV_DIV1
    #elif STM32_HSE_FREQ <= 24000000U
      #define STM32_BOOSTDIV                RCC_CFGR4_BOOSTDIV_DIV2
    #else
      #define STM32_BOOSTDIV                RCC_CFGR4_BOOSTDIV_DIV4
    #endif
  #else
    #error "invalid STM32_CFG_SYSCLK_SEL value specified"
  #endif
#else
  #define STM32_BOOSTER_ENABLED             FALSE
  #define STM32_BOOSTSEL                    0U
  #define STM32_BOOSTDIV                    0U
#endif

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

/* ICache handler. */
#include "stm32_icache.inc"

/* Clock handlers. */
#include "stm32_lsi.inc"
#include "stm32_hsi48.inc"
#include "stm32_hsi16.inc"
#include "stm32_lse.inc"
#include "stm32_hse.inc"

/*===========================================================================*/
/* Compatibility clock aliases.                                              */
/*===========================================================================*/

#define STM32_SYSCLK                        STM32_SYSCLK_CLOCK
#define STM32_HCLK                          STM32_HCLK_CLOCK
#define STM32_PCLK1                         STM32_PCLK1_CLOCK
#define STM32_PCLK2                         STM32_PCLK2_CLOCK
#define STM32_PCLK3                         STM32_PCLK3_CLOCK
#define STM32_RTCCLK                        STM32_RTC_CLOCK
#define STM32_RTCSEL                        STM32_RTC_BITS
#define STM32_LSCOSEL                       STM32_LSCO_BITS

#define STM32_USART1CLK                     STM32_USART1_CLOCK
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
#define STM32_I2C1CLK                       STM32_I2C1_CLOCK
#define STM32_I2C2CLK                       STM32_I2C2_CLOCK
#define STM32_I2C3CLK                       STM32_I2C3_CLOCK
#define STM32_I3C1CLK                       STM32_I3C1_CLOCK
#define STM32_I3C2CLK                       STM32_I3C2_CLOCK
#define STM32_ADCDACCLK                     STM32_ADCDAC_CLOCK
#define STM32_DAC1SHSELCLK                  STM32_DAC1SH_CLOCK
#define STM32_RNGCLK                        STM32_RNG_CLOCK
#define STM32_FDCAN1CLK                     STM32_FDCAN1_CLOCK
#define STM32_SAI1CLK                       STM32_SAI1_CLOCK
#define STM32_ADF1CLK                       STM32_ADF1_CLOCK

#define STM32_TIMP1CLK                      STM32_PCLK1TIM_CLOCK
#define STM32_TIMP2CLK                      STM32_PCLK2TIM_CLOCK
#define STM32_TIMCLK1                       STM32_PCLK1TIM_CLOCK
#define STM32_TIMCLK2                       STM32_PCLK2TIM_CLOCK
#define STM32_ADC1_CLOCK                    STM32_ADCDAC_CLOCK
#define STM32_ADC2_CLOCK                    STM32_ADCDAC_CLOCK
#define STM32_DAC1_CLOCK                    STM32_ADCDAC_CLOCK

/**
 * @brief   Maximum allowed SDMMC kernel clock frequency.
 */
#define STM32_SDMMC_MAXCLK                  STM32_SYSCLK_MAX

/*===========================================================================*/
/* Driver data structures and types.                                         */
/*===========================================================================*/

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
  uint32_t          rcc_cfgr4;
  uint32_t          flash_acr;
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
 * @note    The counter is the internal DWS cycles counter so in runs at
 *          the same frequency of CPU.
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
//#include "mpu_v8m.h"
#include "stm32_isr.h"
#include "stm32_dma3.h"
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
#endif /* defined(HAL_LLD_USE_CLOCK_MANAGEMENT) */
#ifdef __cplusplus
}
#endif

#endif /* HAL_LLD_H */

/** @} */
