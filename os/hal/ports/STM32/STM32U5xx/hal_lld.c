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
 * @file    STM32U5xx/hal_lld.c
 * @brief   STM32U5xx HAL subsystem low level driver source.
 *
 * @addtogroup HAL
 * @{
 */

#include "hal.h"

/*===========================================================================*/
/* Driver local definitions.                                                 */
/*===========================================================================*/

/**
 * @name    Registers reset values
 * @{
 */
#define STM32_PWR_VOSR_RESET            (PWR_VOSR_VOS_RANGE4 | PWR_VOSR_VOSRDY)
#define STM32_FLASH_ACR_RESET           FLASH_ACR_LATENCY_3WS
#define STM32_RCC_CR_RESET              (RCC_CR_MSISON | RCC_CR_MSIKERON |  \
                                         RCC_CR_MSIKON)
#define STM32_RCC_ICSCR1_RESET          (RCC_ICSCR1_MSIRGSEL_ICSCR1 |      \
                                         RCC_ICSCR1_MSISRANGE_RANGE4_4M |   \
                                         RCC_ICSCR1_MSIKRANGE_RANGE4_4M)
#define STM32_RCC_CFGR1_RESET           0U
#define STM32_RCC_CFGR2_RESET           0U
#define STM32_RCC_CFGR3_RESET           0U
#define STM32_RCC_BDCR_RESET            0U
#define STM32_RCC_CCIPR1_RESET          0U
#define STM32_RCC_CCIPR2_RESET          0U
#define STM32_RCC_CCIPR3_RESET          0U
#define STM32_RCC_PLL1CFGR_RESET        0U
#define STM32_RCC_PLL2CFGR_RESET        0U
#define STM32_RCC_PLL3CFGR_RESET        0U
#define STM32_RCC_PLL1DIVR_RESET        0x01010280U
#define STM32_RCC_PLL1FRACR_RESET       0U
#define STM32_RCC_PLL2DIVR_RESET        0x01010280U
#define STM32_RCC_PLL2FRACR_RESET       0U
#define STM32_RCC_PLL3DIVR_RESET        0x01010280U
#define STM32_RCC_PLL3FRACR_RESET       0U
/** @} */

/*===========================================================================*/
/* Driver exported variables.                                                */
/*===========================================================================*/

/**
 * @brief   CMSIS system core clock variable.
 * @note    It is declared in system_stm32u5xx.h.
 */
uint32_t SystemCoreClock;

/**
 * @brief   Post-reset clock configuration.
 */
const halclkcfg_t hal_clkcfg_reset = {
  .pwr_vosr             = STM32_PWR_VOSR_RESET,
  .rcc_cr               = STM32_RCC_CR_RESET,
  .rcc_icscr1           = STM32_RCC_ICSCR1_RESET,
  .rcc_cfgr1            = STM32_RCC_CFGR1_RESET,
  .rcc_cfgr2            = STM32_RCC_CFGR2_RESET,
  .rcc_cfgr3            = STM32_RCC_CFGR3_RESET,
  .rcc_bdcr             = STM32_RCC_BDCR_RESET,
  .rcc_ccipr1           = STM32_RCC_CCIPR1_RESET,
  .rcc_ccipr2           = STM32_RCC_CCIPR2_RESET,
  .rcc_ccipr3           = STM32_RCC_CCIPR3_RESET,
  .flash_acr            = STM32_FLASH_ACR_RESET,
  .plls = {
    [0] = {
      .cfgr             = STM32_RCC_PLL1CFGR_RESET,
      .divr             = STM32_RCC_PLL1DIVR_RESET,
      .fracr            = STM32_RCC_PLL1FRACR_RESET
    },
    [1] = {
      .cfgr             = STM32_RCC_PLL2CFGR_RESET,
      .divr             = STM32_RCC_PLL2DIVR_RESET,
      .fracr            = STM32_RCC_PLL2FRACR_RESET
    },
    [2] = {
      .cfgr             = STM32_RCC_PLL3CFGR_RESET,
      .divr             = STM32_RCC_PLL3DIVR_RESET,
      .fracr            = STM32_RCC_PLL3FRACR_RESET
    }
  }
};

/**
 * @brief   Default clock configuration.
 * @note    This is the configuration defined in mcuconf.h.
 */
const halclkcfg_t hal_clkcfg_default = {
  .pwr_vosr             = STM32_CFG_PWR_VOSR,
  .rcc_cr               = STM32_CR_HSI16_BITS  | STM32_CR_HSI48_BITS |
                          STM32_CR_SHSI_BITS   | STM32_CR_HSE_BITS   |
                          STM32_CR_MSIS_BITS   | STM32_CR_MSIK_BITS  |
#if STM32_PLL1VCO_ENABLED == TRUE
                          RCC_CR_PLL1ON        |
#endif
#if STM32_PLL2VCO_ENABLED == TRUE
                          RCC_CR_PLL2ON        |
#endif
#if STM32_PLL3VCO_ENABLED == TRUE
                          RCC_CR_PLL3ON        |
#endif
                          0U,
  .rcc_icscr1           = STM32_MSISRC_BITS    | STM32_MSISDIV_BITS  |
                          STM32_MSIKRC_BITS    | STM32_MSIKDIV_BITS  |
                          STM32_ICSCR1_MSIS_BITS |
                          STM32_ICSCR1_MSIK_BITS,
  .rcc_cfgr1            = STM32_MCODIV_BITS    | STM32_MCO_BITS      |
                          STM32_SYSCLK_BITS    | STM32_CFG_STOPWUCK  |
                          STM32_CFG_STOPKERWUCK,
  .rcc_cfgr2            = STM32_HCLK_BITS      | STM32_PCLK1_BITS    |
                          STM32_PCLK2_BITS,
  .rcc_cfgr3            = STM32_PCLK3_BITS,
  .rcc_bdcr             = STM32_BDCR_LSE_BITS  | STM32_BDCR_LSI_BITS |
                          STM32_BDCR_LSESYS_BITS |
                          STM32_RTC_BITS       | STM32_LSCO_BITS,
  .rcc_ccipr1           = STM32_USART1_BITS    | STM32_USART2_BITS   |
                          STM32_USART3_BITS    | STM32_UART4_BITS    |
                          STM32_UART5_BITS     | STM32_I2C1_BITS     |
                          STM32_I2C2_BITS      | STM32_I2C4_BITS     |
                          STM32_SPI2_BITS      | STM32_LPTIM2_BITS   |
                          STM32_SPI1_BITS      | STM32_SYSTICK_BITS  |
                          STM32_FDCAN1_BITS    | STM32_ICLK_BITS     |
                          STM32_CFG_TIMICSEL,
  .rcc_ccipr2           = STM32_MDF1_BITS      | STM32_SAI1_BITS     |
                          STM32_SAI2_BITS      | STM32_RNG_BITS      |
                          STM32_SDMMC_BITS     | STM32_OCTOSPI_BITS,
  .rcc_ccipr3           = STM32_LPUART1_BITS   | STM32_SPI3_BITS     |
                          STM32_I2C3_BITS      | STM32_LPTIM34_BITS  |
                          STM32_LPTIM1_BITS    | STM32_ADCDAC_BITS   |
                          STM32_DAC1SH_BITS    | STM32_ADF1_BITS,
  .flash_acr            = (STM32_FLASH_ACR & ~FLASH_ACR_LATENCY_Msk) |
                          STM32_FLASHBITS,
  .plls = {
    [0] = {
      .cfgr             = STM32_PLL1IN_BITS    | STM32_PLL1REF_BITS  |
#if STM32_PLL1P_ENABLED == TRUE
                          RCC_PLL1CFGR_PLL1PEN |
#endif
#if STM32_PLL1Q_ENABLED == TRUE
                          RCC_PLL1CFGR_PLL1QEN |
#endif
#if STM32_PLL1R_ENABLED == TRUE
                          RCC_PLL1CFGR_PLL1REN |
#endif
                          0U,
      .divr             = STM32_PLL1VCO_BITS   | STM32_PLL1P_BITS    |
                          STM32_PLL1Q_BITS     | STM32_PLL1R_BITS,
      .fracr            = STM32_RCC_PLL1FRACR_RESET
    },
    [1] = {
      .cfgr             = STM32_PLL2IN_BITS    | STM32_PLL2REF_BITS  |
#if STM32_PLL2P_ENABLED == TRUE
                          RCC_PLL2CFGR_PLL2PEN |
#endif
#if STM32_PLL2Q_ENABLED == TRUE
                          RCC_PLL2CFGR_PLL2QEN |
#endif
#if STM32_PLL2R_ENABLED == TRUE
                          RCC_PLL2CFGR_PLL2REN |
#endif
                          0U,
      .divr             = STM32_PLL2VCO_BITS   | STM32_PLL2P_BITS    |
                          STM32_PLL2Q_BITS     | STM32_PLL2R_BITS,
      .fracr            = STM32_RCC_PLL2FRACR_RESET
    },
    [2] = {
      .cfgr             = STM32_PLL3IN_BITS    | STM32_PLL3REF_BITS  |
#if STM32_PLL3P_ENABLED == TRUE
                          RCC_PLL3CFGR_PLL3PEN |
#endif
#if STM32_PLL3Q_ENABLED == TRUE
                          RCC_PLL3CFGR_PLL3QEN |
#endif
#if STM32_PLL3R_ENABLED == TRUE
                          RCC_PLL3CFGR_PLL3REN |
#endif
                          0U,
      .divr             = STM32_PLL3VCO_BITS   | STM32_PLL3P_BITS    |
                          STM32_PLL3Q_BITS     | STM32_PLL3R_BITS,
      .fracr            = STM32_RCC_PLL3FRACR_RESET
    }
  }
};

/*===========================================================================*/
/* Driver local variables and types.                                         */
/*===========================================================================*/

#if defined(HAL_LLD_USE_CLOCK_MANAGEMENT) || defined(__DOXYGEN__)
/**
 * @brief   Dynamic clock points for this device.
 * @note    Pre-initialized because clock_init() runs before DATA/BSS
 *          initialization.
 */
static halfreq_t clock_points[CLK_ARRAY_SIZE] = {
  [CLK_HSI16]           = STM32_HSI16_FREQ,
  [CLK_HSI48]           = STM32_HSI48_FREQ,
  [CLK_SHSI]            = STM32_SHSI_FREQ,
  [CLK_HSE]             = STM32_HSE_FREQ,
  [CLK_MSIS]            = STM32_MSIS_FREQ,
  [CLK_MSIK]            = STM32_MSIK_FREQ,
  [CLK_PLL1IN]          = STM32_PLL1IN_FREQ,
  [CLK_PLL1REF]         = STM32_PLL1REF_FREQ,
  [CLK_PLL1VCO]         = STM32_PLL1VCO_FREQ,
  [CLK_PLL1P]           = STM32_PLL1P_FREQ,
  [CLK_PLL1Q]           = STM32_PLL1Q_FREQ,
  [CLK_PLL1R]           = STM32_PLL1R_FREQ,
  [CLK_PLL2IN]          = STM32_PLL2IN_FREQ,
  [CLK_PLL2REF]         = STM32_PLL2REF_FREQ,
  [CLK_PLL2VCO]         = STM32_PLL2VCO_FREQ,
  [CLK_PLL2P]           = STM32_PLL2P_FREQ,
  [CLK_PLL2Q]           = STM32_PLL2Q_FREQ,
  [CLK_PLL2R]           = STM32_PLL2R_FREQ,
  [CLK_PLL3IN]          = STM32_PLL3IN_FREQ,
  [CLK_PLL3REF]         = STM32_PLL3REF_FREQ,
  [CLK_PLL3VCO]         = STM32_PLL3VCO_FREQ,
  [CLK_PLL3P]           = STM32_PLL3P_FREQ,
  [CLK_PLL3Q]           = STM32_PLL3Q_FREQ,
  [CLK_PLL3R]           = STM32_PLL3R_FREQ,
  [CLK_SYSCLK]          = STM32_SYSCLK_FREQ,
  [CLK_HCLK]            = STM32_HCLK_FREQ,
  [CLK_PCLK1]           = STM32_PCLK1_FREQ,
  [CLK_PCLK1TIM]        = STM32_PCLK1TIM_FREQ,
  [CLK_PCLK2]           = STM32_PCLK2_FREQ,
  [CLK_PCLK2TIM]        = STM32_PCLK2TIM_FREQ,
  [CLK_PCLK3]           = STM32_PCLK3_FREQ,
  [CLK_MCO]             = STM32_MCO_FREQ
};
#endif

/*===========================================================================*/
/* Driver local functions.                                                   */
/*===========================================================================*/

__STATIC_INLINE void hal_lld_set_coreclock(halfreq_t coreclock) {

  SystemCoreClock = (uint32_t)coreclock;
}

/**
 * @brief   Configures the PWR unit.
 * @note    VOSR is handled by the clock switch path.
 */
__STATIC_INLINE void hal_lld_set_static_pwr(void) {

  /* PWR clock enabled.*/
  rccEnablePWRInterface(false);

  /* Enable write access to Backup domain.*/
  halRegWrite32X(&PWR->DBPR, PWR_DBPR_DBP, true);

  /* Static settings for PWR registers.*/
  halRegWrite32X(&PWR->CR1,      STM32_PWR_CR1,      true);
  halRegWrite32X(&PWR->CR2,      STM32_PWR_CR2,      true);
  halRegWrite32X(&PWR->CR3,      STM32_PWR_CR3,      true);
  halRegWrite32X(&PWR->SVMCR,    STM32_PWR_SVMCR,    true);
  halRegWrite32X(&PWR->WUCR1,    STM32_PWR_WUCR1,    true);
  halRegWrite32X(&PWR->WUCR2,    STM32_PWR_WUCR2,    true);
  halRegWrite32X(&PWR->WUCR3,    STM32_PWR_WUCR3,    true);
  halRegWrite32X(&PWR->BDCR1,    STM32_PWR_BDCR1,    true);
  halRegWrite32X(&PWR->BDCR2,    STM32_PWR_BDCR2,    true);
  halRegWrite32X(&PWR->UCPDR,    STM32_PWR_UCPDR,    true);
  halRegWrite32X(&PWR->SECCFGR,  STM32_PWR_SECCFGR,  true);
  halRegWrite32X(&PWR->PRIVCFGR, STM32_PWR_PRIVCFGR, true);
  halRegWrite32X(&PWR->APCR,     STM32_PWR_APCR,     true);
  halRegWrite32X(&PWR->PUCRA,    STM32_PWR_PUCRA,    true);
  halRegWrite32X(&PWR->PDCRA,    STM32_PWR_PDCRA,    true);
  halRegWrite32X(&PWR->PUCRB,    STM32_PWR_PUCRB,    true);
  halRegWrite32X(&PWR->PDCRB,    STM32_PWR_PDCRB,    true);
  halRegWrite32X(&PWR->PUCRC,    STM32_PWR_PUCRC,    true);
  halRegWrite32X(&PWR->PDCRC,    STM32_PWR_PDCRC,    true);
  halRegWrite32X(&PWR->PUCRD,    STM32_PWR_PUCRD,    true);
  halRegWrite32X(&PWR->PDCRD,    STM32_PWR_PDCRD,    true);
  halRegWrite32X(&PWR->PUCRE,    STM32_PWR_PUCRE,    true);
  halRegWrite32X(&PWR->PDCRE,    STM32_PWR_PDCRE,    true);
  halRegWrite32X(&PWR->PUCRF,    STM32_PWR_PUCRF,    true);
  halRegWrite32X(&PWR->PDCRF,    STM32_PWR_PDCRF,    true);
  halRegWrite32X(&PWR->PUCRG,    STM32_PWR_PUCRG,    true);
  halRegWrite32X(&PWR->PDCRG,    STM32_PWR_PDCRG,    true);
  halRegWrite32X(&PWR->PUCRH,    STM32_PWR_PUCRH,    true);
  halRegWrite32X(&PWR->PDCRH,    STM32_PWR_PDCRH,    true);
  halRegWrite32X(&PWR->PUCRI,    STM32_PWR_PUCRI,    true);
  halRegWrite32X(&PWR->PDCRI,    STM32_PWR_PDCRI,    true);
}

/**
 * @brief   Initializes static peripheral clock selectors.
 */
__STATIC_INLINE void hal_lld_set_static_clocks(const halclkcfg_t *ccp) {

  halRegWrite32X(&RCC->CCIPR1, ccp->rcc_ccipr1, true);
  halRegWrite32X(&RCC->CCIPR2, ccp->rcc_ccipr2, true);
  halRegWrite32X(&RCC->CCIPR3, ccp->rcc_ccipr3, true);
}

/**
 * @brief   Programs a PLL while it is disabled.
 */
__STATIC_INLINE void hal_lld_pll_setup(uint32_t pll,
                                       const stm32_pllcfg_t *pllp) {

  switch (pll) {
  case 0U:
    halRegWrite32X(&RCC->PLL1CFGR,  pllp->cfgr,  true);
    halRegWrite32X(&RCC->PLL1DIVR,  pllp->divr,  true);
    halRegWrite32X(&RCC->PLL1FRACR, pllp->fracr, true);
    break;
  case 1U:
    halRegWrite32X(&RCC->PLL2CFGR,  pllp->cfgr,  true);
    halRegWrite32X(&RCC->PLL2DIVR,  pllp->divr,  true);
    halRegWrite32X(&RCC->PLL2FRACR, pllp->fracr, true);
    break;
  default:
    halRegWrite32X(&RCC->PLL3CFGR,  pllp->cfgr,  true);
    halRegWrite32X(&RCC->PLL3DIVR,  pllp->divr,  true);
    halRegWrite32X(&RCC->PLL3FRACR, pllp->fracr, true);
    break;
  }
}

/**
 * @brief   Switches to a different clock configuration.
 *
 * @param[in] ccp       pointer to clock a @p halclkcfg_t structure
 * @return              The clock switch result.
 * @retval false        if the clock switch succeeded
 * @retval true         if the clock switch failed
 *
 * @notapi
 */
static bool hal_lld_clock_configure(const halclkcfg_t *ccp) {
  uint32_t cr, wtmask;

  /* Use the safest flash latency while the current clock tree is unknown.*/
  halRegWrite32X(&FLASH->ACR, FLASH_ACR_LATENCY_15WS, true);

  /* Enter a known MSIS-based state before applying the requested tree.*/
  halRegWrite32X(&RCC->ICSCR1, STM32_RCC_ICSCR1_RESET, true);
  halRegWrite32X(&RCC->CR,     STM32_RCC_CR_RESET, true);
  if (halRegWaitAllSet32X(&RCC->CR,
                          RCC_CR_MSISRDY | RCC_CR_MSIKRDY,
                          STM32_OSCILLATORS_STARTUP_TIME,
                          NULL)) {
    return true;
  }

  halRegWrite32X(&RCC->CFGR2, STM32_RCC_CFGR2_RESET, true);
  halRegWrite32X(&RCC->CFGR3, STM32_RCC_CFGR3_RESET, true);
  halRegWrite32X(&RCC->CFGR1, STM32_RCC_CFGR1_RESET, true);
  if (halRegWaitMatch32X(&RCC->CFGR1,
                         RCC_CFGR1_SWS_Msk,
                         0U,
                         STM32_SYSCLK_SWITCH_TIME,
                         NULL)) {
    return true;
  }

  /* At this point SYSCLK is MSIS/4 MHz with reset bus prescalers.*/
  hal_lld_set_coreclock(4000000U);
  halRegWrite32X(&FLASH->ACR, STM32_FLASH_ACR_RESET, true);

  /* Voltage scaling must be ready before high-frequency clocks are used.*/
  halRegWrite32X(&PWR->VOSR, ccp->pwr_vosr, true);
  if (halRegWaitAllSet32X(&PWR->VOSR,
                          PWR_VOSR_VOSRDY,
                          STM32_REGULATORS_TRANSITION_TIME,
                          NULL)) {
    return true;
  }

  /* MSI ranges and bias selection. MSIRGSEL is enforced for determinism.*/
  halRegWrite32X(&RCC->ICSCR1,
                 ccp->rcc_icscr1 | RCC_ICSCR1_MSIRGSEL_ICSCR1,
                 true);

  /* Backup-domain clock sources and selectors.*/
  halRegWrite32X(&RCC->BDCR, ccp->rcc_bdcr, true);
  wtmask = 0U;
  if ((ccp->rcc_bdcr & RCC_BDCR_LSEON) != 0U) {
    wtmask |= RCC_BDCR_LSERDY;
  }
  if ((ccp->rcc_bdcr & RCC_BDCR_LSION) != 0U) {
    wtmask |= RCC_BDCR_LSIRDY;
  }
  if (halRegWaitAllSet32X(&RCC->BDCR,
                          wtmask,
                          STM32_OSCILLATORS_STARTUP_TIME,
                          NULL)) {
    return true;
  }

  /* Start configured non-PLL oscillators while keeping MSIS available.*/
  cr = (ccp->rcc_cr & ~(RCC_CR_PLL1ON | RCC_CR_PLL2ON | RCC_CR_PLL3ON)) |
       RCC_CR_MSISON;
  halRegWrite32X(&RCC->CR, cr, true);

  wtmask = RCC_CR_MSISRDY;
  if ((ccp->rcc_cr & RCC_CR_MSIKON) != 0U) {
    wtmask |= RCC_CR_MSIKRDY;
  }
  if ((ccp->rcc_cr & RCC_CR_HSION) != 0U) {
    wtmask |= RCC_CR_HSIRDY;
  }
  if ((ccp->rcc_cr & RCC_CR_HSI48ON) != 0U) {
    wtmask |= RCC_CR_HSI48RDY;
  }
  if ((ccp->rcc_cr & RCC_CR_SHSION) != 0U) {
    wtmask |= RCC_CR_SHSIRDY;
  }
  if ((ccp->rcc_cr & RCC_CR_HSEON) != 0U) {
    wtmask |= RCC_CR_HSERDY;
  }
  if (halRegWaitAllSet32X(&RCC->CR,
                          wtmask,
                          STM32_OSCILLATORS_STARTUP_TIME,
                          NULL)) {
    return true;
  }

  /* PLL setup and activation. Fractional mode is intentionally unused yet.*/
  hal_lld_pll_setup(0U, &ccp->plls[0]);
  hal_lld_pll_setup(1U, &ccp->plls[1]);
  hal_lld_pll_setup(2U, &ccp->plls[2]);

  cr = ccp->rcc_cr | RCC_CR_MSISON;
  halRegWrite32X(&RCC->CR, cr, true);

  wtmask = 0U;
  if ((ccp->rcc_cr & RCC_CR_PLL1ON) != 0U) {
    wtmask |= RCC_CR_PLL1RDY;
  }
  if ((ccp->rcc_cr & RCC_CR_PLL2ON) != 0U) {
    wtmask |= RCC_CR_PLL2RDY;
  }
  if ((ccp->rcc_cr & RCC_CR_PLL3ON) != 0U) {
    wtmask |= RCC_CR_PLL3RDY;
  }
  if (halRegWaitAllSet32X(&RCC->CR, wtmask, STM32_PLL_STARTUP_TIME, NULL)) {
    return true;
  }

  /* Static peripheral selectors are independent from SYSCLK switching.*/
  hal_lld_set_static_clocks(ccp);

  /* Final prescalers, flash latency and SYSCLK source.*/
  halRegWrite32X(&RCC->CFGR2, ccp->rcc_cfgr2, true);
  halRegWrite32X(&RCC->CFGR3, ccp->rcc_cfgr3, true);
  halRegWrite32X(&FLASH->ACR, ccp->flash_acr, true);
  halRegWrite32X(&RCC->CFGR1, ccp->rcc_cfgr1, true);
  if (halRegWaitMatch32X(&RCC->CFGR1,
                         RCC_CFGR1_SWS_Msk,
                         (ccp->rcc_cfgr1 & RCC_CFGR1_SW_Msk) << RCC_CFGR1_SWS_Pos,
                         STM32_SYSCLK_SWITCH_TIME,
                         NULL)) {
    return true;
  }

  /* MSIS can be disabled now if it is not part of the requested tree.*/
  halRegWrite32X(&RCC->CR, ccp->rcc_cr, true);

  return false;
}

/*===========================================================================*/
/* Driver interrupt handlers.                                                */
/*===========================================================================*/

/*===========================================================================*/
/* Driver exported functions.                                                */
/*===========================================================================*/

/**
 * @brief   Low level HAL driver initialization.
 *
 * @notapi
 */
void hal_lld_init(void) {

  /* Frequency after applying the default configuration or assumed set by the
     bootloader in case of NO_INIT.*/
  hal_lld_set_coreclock(STM32_HCLK_CLOCK);

  /* NVIC initialization.*/
  nvicInit();

  /* IRQ subsystem initialization.*/
  irqInit();
}

/**
 * @brief   STM32U5xx clocks and PLL initialization.
 * @note    This function is invoked early by the startup files, non-automatic
 *          variables are not initialized.
 *
 * @special
 */
void stm32_clock_init(void) {

  /* DWT cycles counter enabled, used for timeouts.*/
  halRegSet32X(&DWT->CTRL, DWT_CTRL_CYCCNTENA_Msk, true);

#if !STM32_NO_INIT
  /* Assuming MSIS/4 MHz as post-reset clock.*/
  hal_lld_set_coreclock(4000000U);

  /* Reset of all peripherals.
     Note, GPIOs are not reset because initialized before this point in
     board files.*/
  rccResetAHB1(~0);
  rccResetAHB2R1(~STM32_GPIO_EN_MASK);
  rccResetAHB2R2(~0);
  rccResetAHB3(~0);
  rccResetAPB1R1(~0);
  rccResetAPB1R2(~0);
  rccResetAPB2(~0);
  rccResetAPB3(~0);

  /* RTC APB clock enable.*/
#if (HAL_USE_RTC == TRUE) && defined(RCC_APB3ENR_RTCAPBEN)
  rccEnableAPB3(RCC_APB3ENR_RTCAPBEN, true);
#endif

  /* Static PWR configurations.*/
  hal_lld_set_static_pwr();

  /* Selecting the default clock configuration. */
  halSftFailOnError(hal_lld_clock_configure(&hal_clkcfg_default), "clkinit");
#endif /* STM32_NO_INIT */
}

#if defined(HAL_LLD_USE_CLOCK_MANAGEMENT) || defined(__DOXYGEN__)
/**
 * @brief   Switches to a different clock configuration.
 *
 * @param[in] ccp       pointer to clock a @p halclkcfg_t structure
 * @return              The clock switch result.
 * @retval false        if the clock switch succeeded
 * @retval true         if the clock switch failed
 *
 * @notapi
 */
bool hal_lld_clock_switch_mode(const halclkcfg_t *ccp) {

  if (hal_lld_clock_configure(ccp)) {
    return true;
  }

  /* The first dynamic prototype uses generated static formulas as nominal
     values; full runtime recalculation will be added separately.*/
  hal_lld_set_coreclock(STM32_HCLK_CLOCK);

  return false;
}

/**
 * @brief   Returns the frequency of a clock point in Hz.
 *
 * @param[in] clkpt     clock point to be returned
 * @return              The clock point frequency in Hz or zero if the
 *                      frequency is unknown.
 *
 * @notapi
 */
halfreq_t hal_lld_get_clock_point(halclkpt_t clkpt) {

  osalDbgAssert(clkpt < CLK_ARRAY_SIZE, "invalid clock point");

  return clock_points[clkpt];
}
#endif /* defined(HAL_LLD_USE_CLOCK_MANAGEMENT) */

/** @} */
