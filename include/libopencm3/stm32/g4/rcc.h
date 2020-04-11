/** @defgroup rcc_defines RCC Defines
 *
 * @ingroup STM32G4xx_defines
 *
 * @brief <b>Defined Constants and Types for the STM32G4xx Reset and Clock Control</b>
 *
 * @version 1.0.0
 *
 * @author @htmlonly &copy; @endhtmlonly 2020 Karl Palsson <karlp@tweak.net.au>
 *
 * LGPL License Terms @ref lgpl_license
 *  */
/*
 * This file is part of the libopencm3 project.
 *
 * Copyright (C) 2020 Karl Palsson <karlp@tweak.net.au>
 *
 * This library is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this library.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**@{*/

#ifndef LIBOPENCM3_RCC_H
#define LIBOPENCM3_RCC_H

#include <libopencm3/stm32/pwr.h>

/** @defgroup rcc_registers Reset and clock control Registers
 * @{
 */

/** RCC_CR Clock control register **/
#define RCC_CR			MMIO32(RCC_BASE + 0x00)
/** RCC_ICSCR Internal clock sources calibration register **/
#define RCC_ICSCR			MMIO32(RCC_BASE + 0x04)
/** RCC_CFGR Clock configuration register **/
#define RCC_CFGR			MMIO32(RCC_BASE + 0x08)
/** RCC_PLLCFGR PLL configuration register **/
#define RCC_PLLCFGR			MMIO32(RCC_BASE + 0x0c)
/** RCC_CIER Clock interrupt enable register **/
#define RCC_CIER			MMIO32(RCC_BASE + 0x18)
/** RCC_CIFR Clock interrupt flag register **/
#define RCC_CIFR			MMIO32(RCC_BASE + 0x1c)
/** RCC_CICR Clock interrupt clear register **/
#define RCC_CICR			MMIO32(RCC_BASE + 0x20)

#define RCC_AHB1RSTR_OFFSET		0x28
/** RCC_AHB1RSTR AHB1 peripheral reset register **/
#define RCC_AHB1RSTR			MMIO32(RCC_BASE + RCC_AHB1RSTR_OFFSET)
#define RCC_AHB2RSTR_OFFSET		0x2c
/** RCC_AHB2RSTR AHB2 peripheral reset register **/
#define RCC_AHB2RSTR			MMIO32(RCC_BASE + RCC_AHB2RSTR_OFFSET)
#define RCC_AHB3RSTR_OFFSET		0x30
/** RCC_AHB3RSTR AHB3 peripheral reset register **/
#define RCC_AHB3RSTR			MMIO32(RCC_BASE + RCC_AHB3RSTR_OFFSET)
#define RCC_APB1RSTR1_OFFSET		0x38
/** RCC_APB1RSTR1 APB1 peripheral reset register 1 **/
#define RCC_APB1RSTR1			MMIO32(RCC_BASE +  RCC_APB1RSTR1_OFFSET)
#define RCC_APB1RSTR2_OFFSET		0x3c
/** RCC_APB1RSTR2 APB1 peripheral reset register 2 **/
#define RCC_APB1RSTR2			MMIO32(RCC_BASE + RCC_APB1RSTR2_OFFSET)
#define RCC_APB2RSTR_OFFSET		0x40
/** RCC_APB2RSTR APB2 peripheral reset register **/
#define RCC_APB2RSTR			MMIO32(RCC_BASE + RCC_APB2RSTR_OFFSET)
#define RCC_AHB1ENR_OFFSET			0x48
/** RCC_AHB1ENR AHB1 peripheral clock enable register **/
#define RCC_AHB1ENR			MMIO32(RCC_BASE + RCC_AHB1ENR_OFFSET)
#define RCC_AHB2ENR_OFFSET			0x4c
/** RCC_AHB2ENR AHB2 peripheral clock enable register **/
#define RCC_AHB2ENR			MMIO32(RCC_BASE + RCC_AHB2ENR_OFFSET)
#define RCC_AHB3ENR_OFFSET			0x50
/** RCC_AHB3ENR AHB3 peripheral clock enable register **/
#define RCC_AHB3ENR			MMIO32(RCC_BASE + RCC_AHB3ENR_OFFSET)
#define RCC_APB1ENR1_OFFSET		0x58
/** RCC_APB1ENR1 APB1 peripheral clock enable register 1 **/
#define RCC_APB1ENR1			MMIO32(RCC_BASE + RCC_APB1ENR1_OFFSET)
#define RCC_APB1ENR2_OFFSET		0x5c
/** RCC_APB1ENR2 APB1 peripheral clock enable register 2 **/
#define RCC_APB1ENR2			MMIO32(RCC_BASE + RCC_APB1ENR2_OFFSET)
#define RCC_APB2ENR_OFFSET			0x60
/** RCC_APB2ENR APB2ENR **/
#define RCC_APB2ENR			MMIO32(RCC_BASE + RCC_APB2ENR_OFFSET)
#define RCC_AHB1SMENR_OFFSET		0x68
/** RCC_AHB1SMENR AHB1 peripheral clocks enable in Sleep and Stop modes register **/
#define RCC_AHB1SMENR			MMIO32(RCC_BASE + RCC_AHB1SMENR_OFFSET)
#define RCC_AHB2SMENR_OFFSET		0x6c
/** RCC_AHB2SMENR AHB2 peripheral clocks enable in Sleep and Stop modes register **/
#define RCC_AHB2SMENR			MMIO32(RCC_BASE + RCC_AHB2SMENR_OFFSET)
#define RCC_AHB3SMENR_OFFSET		0x70
/** RCC_AHB3SMENR AHB3 peripheral clocks enable in Sleep and Stop modes register **/
#define RCC_AHB3SMENR			MMIO32(RCC_BASE + RCC_AHB3SMENR_OFFSET)
#define RCC_APB1SMENR1_OFFSET		0x78
/** RCC_APB1SMENR1 APB1SMENR1 **/
#define RCC_APB1SMENR1			MMIO32(RCC_BASE + RCC_APB1SMENR1_OFFSET)
#define RCC_APB1SMENR2_OFFSET	 0x7c
/** RCC_APB1SMENR2 APB1 peripheral clocks enable in Sleep and Stop modes register 2 **/
#define RCC_APB1SMENR2			MMIO32(RCC_BASE + RCC_APB1SMENR2_OFFSET)
#define RCC_APB2SMENR_OFFSET	0x80
/** RCC_APB2SMENR APB2SMENR **/
#define RCC_APB2SMENR			MMIO32(RCC_BASE + RCC_APB2SMENR_OFFSET)

/** RCC_CCIPR1 CCIPR **/
#define RCC_CCIPR1			MMIO32(RCC_BASE + 0x88)
/** RCC_BDCR BDCR **/
#define RCC_BDCR			MMIO32(RCC_BASE + 0x90)
/** RCC_CSR CSR **/
#define RCC_CSR			MMIO32(RCC_BASE + 0x94)
/** RCC_CRRCR Clock recovery RC register **/
#define RCC_CRRCR			MMIO32(RCC_BASE + 0x98)
/** RCC_CCIPR2 Peripherals independent clock configuration register **/
#define RCC_CCIPR2			MMIO32(RCC_BASE + 0x9c)

/**@}*/

/** @defgroup rcc_cr_values RCC_CR Clock control register values
 * @{
 */
/** RCC_CR_PLLRDY Main PLL clock ready flag **/
#define RCC_CR_PLLRDY		(1 << 25)
/** RCC_CR_PLLON Main PLL enable **/
#define RCC_CR_PLLON		(1 << 24)
/** RCC_CR_CSSON Clock security system enable **/
#define RCC_CR_CSSON		(1 << 19)
/** RCC_CR_HSEBYP HSE crystal oscillator bypass **/
#define RCC_CR_HSEBYP		(1 << 18)
/** RCC_CR_HSERDY HSE clock ready flag **/
#define RCC_CR_HSERDY		(1 << 17)
/** RCC_CR_HSEON HSE clock enable **/
#define RCC_CR_HSEON		(1 << 16)
/** RCC_CR_HSIRDY HSI clock ready flag **/
#define RCC_CR_HSIRDY		(1 << 10)
/** RCC_CR_HSIKERON HSI always enable for peripheral kernels **/
#define RCC_CR_HSIKERON		(1 << 9)
/** RCC_CR_HSION HSI clock enable **/
#define RCC_CR_HSION		(1 << 8)
/**@}*/

/** @defgroup rcc_icscr_values RCC_ICSCR ICSCR Internal clock sources calibration register values
 * @{
 */
#define RCC_ICSCR_HSITRIM_SHIFT		24
#define RCC_ICSCR_HSITRIM_MASK		0x1f

#define RCC_ICSCR_HSICAL_SHIFT		16
#define RCC_ICSCR_HSICAL_MASK		0xff
/**@}*/

/** @defgroup rcc_cfgr_values RCC_CFGR Clock configuration register values
 * @{
 */
/** @defgroup rcc_cfgr_mcopre MCOPRE MCO prescaler
 * @{
 */
#define RCC_CFGR_MCOPRE_DIV1	    0
#define RCC_CFGR_MCOPRE_DIV2	    1
#define RCC_CFGR_MCOPRE_DIV4	    2
#define RCC_CFGR_MCOPRE_DIV8	    3
#define RCC_CFGR_MCOPRE_DIV16	    4
/**@}*/
#define RCC_CFGR_MCOPRE_SHIFT	    28
#define RCC_CFGR_MCOPRE_MASK	    0x7

/** @defgroup rcc_cfgr_mco MCO: Microcontroller clock output
 * @{
 */
#define RCC_CFGR_MCO_NOCLK			0x0
#define RCC_CFGR_MCO_SYSCLK			0x1
#define RCC_CFGR_MCO_HSI16			0x3
#define RCC_CFGR_MCO_HSE			0x4
#define RCC_CFGR_MCO_PLL			0x5
#define RCC_CFGR_MCO_LSI			0x6
#define RCC_CFGR_MCO_LSE			0x7
#define RCC_CFGR_MCO_HSI48			0x8
/**@}*/
#define RCC_CFGR_MCO_SHIFT			24
#define RCC_CFGR_MCO_MASK			0xf

/** @defgroup rcc_cfgr_pprex PPREx: APBx prescaler
 * @{
 */
#define RCC_CFGR_PPREx_NODIV		0x0
#define RCC_CFGR_PPREx_DIV2		0x4
#define RCC_CFGR_PPREx_DIV4		0x5
#define RCC_CFGR_PPREx_DIV8		0x6
#define RCC_CFGR_PPREx_DIV16		0x7
/**@}*/
#define RCC_CFGR_PPRE2_MASK		0x7
#define RCC_CFGR_PPRE2_SHIFT		11

#define RCC_CFGR_PPRE1_MASK		0x7
#define RCC_CFGR_PPRE1_SHIFT		8

/** @defgroup rcc_cfgr_hpre HPRE: AHB prescaler
 * @{
 */
#define RCC_CFGR_HPRE_NODIV		0x0
#define RCC_CFGR_HPRE_DIV2		0x8
#define RCC_CFGR_HPRE_DIV4		0x9
#define RCC_CFGR_HPRE_DIV8		0xa
#define RCC_CFGR_HPRE_DIV16		0xb
#define RCC_CFGR_HPRE_DIV64		0xc
#define RCC_CFGR_HPRE_DIV128		0xd
#define RCC_CFGR_HPRE_DIV256		0xe
#define RCC_CFGR_HPRE_DIV512		0xf
/*@}*/
#define RCC_CFGR_HPRE_MASK		0xf
#define RCC_CFGR_HPRE_SHIFT		4

/** @defgroup rcc_cfgr_swx SW/SWS System clock switch (status)
 * @{
 */
#define RCC_CFGR_SWx_HSI16			0x1
#define RCC_CFGR_SWx_HSE			0x2
#define RCC_CFGR_SWx_PLL			0x3
/**@}*/

#define RCC_CFGR_SWS_MASK			0x3
#define RCC_CFGR_SWS_SHIFT		2

#define RCC_CFGR_SW_MASK			0x3
#define RCC_CFGR_SW_SHIFT		0
/**@}*/

/** @defgroup rcc_pllcfgr_values RCC_PLLCFGR - PLL Configuration Register
 * @{
 */

/** @defgroup rcc_pllcfgr_pllp_div PLLP_DIV Main PLL division factor for PLLSAI2CLK
 * @brief VCO Division factor P for PLLPCLK clock output [2..31]. Setting PLLPDIV to zero
 * makes PLLP clock control handled by RCC_PLLCFGR_PLLP bit.
@{*/
#define RCC_PLLCFGR_PLLP_DIV(x)		(x)
/**@}*/
#define RCC_PLLCFGR_PLLPDIV_MASK		0x1f
#define RCC_PLLCFGR_PLLPDIV_SHIFT		27

/** @defgroup rcc_pllcfgr_pllr PLLR Main PLL division factor for PLLCLK (system clock)
@{*/
#define RCC_PLLCFGR_PLLR_DIV2		0
#define RCC_PLLCFGR_PLLR_DIV4		1
#define RCC_PLLCFGR_PLLR_DIV6		2
#define RCC_PLLCFGR_PLLR_DIV8		3
/**@}*/
#define RCC_PLLCFGR_PLLR_SHIFT		25
#define RCC_PLLCFGR_PLLR_MASK		0x3

#define RCC_PLLCFGR_PLLREN		BIT24

/** @defgroup rcc_pllcfgr_pllq PLLQ Main PLL division factor
@{*/
#define RCC_PLLCFGR_PLLQ_DIV2		0
#define RCC_PLLCFGR_PLLQ_DIV4		1
#define RCC_PLLCFGR_PLLQ_DIV6		2
#define RCC_PLLCFGR_PLLQ_DIV8		3
/**@}*/
#define RCC_PLLCFGR_PLLQ_SHIFT		21
#define RCC_PLLCFGR_PLLQ_MASK		0x3

#define RCC_PLLCFGR_PLLQEN		BIT20

/* Division for PLLSAI3CLK, 0 == 7, 1 == 17 */
#define RCC_PLLCFGR_PLLP		BIT17
/** @defgroup rcc_pllcfgr_pllp RCC_PLLCFGR PLLP values
 * Main PLL P division factor - 0 : PLLPDIV = 7, 1 : PLLPDIV = 17 
 * @{*/
#define RCC_PLLCFGR_PLLP_DIV7		0
#define RCC_PLLCFGR_PLLP_DIV17		RCC_PLLCFGR_PLLP
/**@}*/

/** RCC_PLLCFGR_PLLPEN Main PLL P output enable **/
#define RCC_PLLCFGR_PLLPEN			(1 << 16)

/** @defgroup rcc_pllcfgr_plln RCC_PLLCFGR PLLN values
 * Allowed values 8 <= n <= 127, VCO output between 64 and 344 MHz
 * @{*/
#define RCC_PLLCFGR_PLLN_MUL(x)		(x)
/**@}*/
#define RCC_PLLCFGR_PLLN_SHIFT		8
#define RCC_PLLCFGR_PLLN_MASK		0x7f

/** @defgroup rcc_pllcfgr_pllm RCC_PLLCFGR PLLM values
 * Allowed values 1 <= m <= 16, VCO input between 2.66 and 8 MHz
 * @{*/
/** @defgroup rcc_pllcfgr_pllm PLLM Division factor for the main PLL input clock
 * @brief Division factor M [1..16] for PLL input clock. Input frequency must be between 2.66mhz and 8mhz. 
@{*/
#define RCC_PLLCFGR_PLLM_DIV(x)		((x)-1)
/**@}*/
#define RCC_PLLCFGR_PLLM_SHIFT		0x4
#define RCC_PLLCFGR_PLLM_MASK		0xf
/**@}*/

/** @defgroup rcc_pllcfgr_pllsrc PLLSRC Main PLL entry clock source
@{*/
#define RCC_PLLCFGR_PLLSRC_NONE		0
#define RCC_PLLCFGR_PLLSRC_HSI16	2
#define RCC_PLLCFGR_PLLSRC_HSE		3
/**@}*/
#define RCC_PLLCFGR_PLLSRC_SHIFT	0
#define RCC_PLLCFGR_PLLSRC_MASK		0x3
/**@}*/

/** @defgroup rcc_cier_values RCC_CIER - Clock interrupt enable register
 * @{
 */
/** RCC_CIER_HSI48RDYIE HSI48 ready interrupt enable **/
#define RCC_CIER_HSI48RDYIE			(1 << 10)
/** RCC_CIER_LSE_CSSIE LSE clock security system interrupt enable **/
#define RCC_CIER_LSE_CSSIE			(1 << 9)
/** RCC_CIER_PLLRDYIE PLL ready interrupt enable **/
#define RCC_CIER_PLLRDYIE		(1 << 5)
/** RCC_CIER_HSERDYIE HSE ready interrupt enable **/
#define RCC_CIER_HSERDYIE		(1 << 4)
/** RCC_CIER_HSIRDYIE HSI ready interrupt enable **/
#define RCC_CIER_HSIRDYIE		(1 << 3)
/** RCC_CIER_LSERDYIE LSE ready interrupt enable **/
#define RCC_CIER_LSERDYIE		(1 << 1)
/** RCC_CIER_LSIRDYIE LSI ready interrupt enable **/
#define RCC_CIER_LSIRDYIE		(1 << 0)
/**@}*/

/** @defgroup rcc_cifr_values RCC_CIFR - Clock interrupt flag register
 * @{
 */
/** RCC_CIFR_HSI48RDYF HSI48 ready interrupt flag **/
#define RCC_CIFR_HSI48RDYF			(1 << 10)
/** RCC_CIFR_LSECSSF LSE Clock security system interrupt flag **/
#define RCC_CIFR_LSECSSF		(1 << 9)
/** RCC_CIFR_CSSF Clock security system interrupt flag **/
#define RCC_CIFR_CSSF		(1 << 8)
/** RCC_CIFR_PLLRDYF PLL ready interrupt flag **/
#define RCC_CIFR_PLLRDYF		(1 << 5)
/** RCC_CIFR_HSERDYF HSE ready interrupt flag **/
#define RCC_CIFR_HSERDYF		(1 << 4)
/** RCC_CIFR_HSIRDYF HSI ready interrupt flag **/
#define RCC_CIFR_HSIRDYF		(1 << 3)
/** RCC_CIFR_LSERDYF LSE ready interrupt flag **/
#define RCC_CIFR_LSERDYF		(1 << 1)
/** RCC_CIFR_LSIRDYF LSI ready interrupt flag **/
#define RCC_CIFR_LSIRDYF		(1 << 0)
/**@}*/

/** @defgroup rcc_cicr_values RCC_CICR - Clock interrupt clear register
 * @{
 */
/** RCC_CICR_HSI48RDYC HSI48 oscillator ready interrupt clear **/
#define RCC_CICR_HSI48RDYC			(1 << 10)
/** RCC_CICR_LSECSSC LSE Clock security system interrupt clear **/
#define RCC_CICR_LSECSSC		(1 << 9)
/** RCC_CICR_CSSC Clock security system interrupt clear **/
#define RCC_CICR_CSSC		(1 << 8)
/** RCC_CICR_PLLRDYC PLL ready interrupt clear **/
#define RCC_CICR_PLLRDYC		(1 << 5)
/** RCC_CICR_HSERDYC HSE ready interrupt clear **/
#define RCC_CICR_HSERDYC		(1 << 4)
/** RCC_CICR_HSIRDYC HSI ready interrupt clear **/
#define RCC_CICR_HSIRDYC		(1 << 3)
/** RCC_CICR_LSERDYC LSE ready interrupt clear **/
#define RCC_CICR_LSERDYC		(1 << 1)
/** RCC_CICR_LSIRDYC LSI ready interrupt clear **/
#define RCC_CICR_LSIRDYC		(1 << 0)
/**@}*/

/** @defgroup rcc_ahbrstr_rst RCC_AHBxRSTR reset values (full set)
@{*/
/** @defgroup rcc_ahb1rstr_rst RCC_AHB1RSTR reset values
@{*/
#define RCC_AHB1RSTR_CRCRST		(1 << 12)
#define RCC_AHB1RSTR_FLASHRST			(1 << 8)
#define RCC_AHB1RSTR_FMACRST			(1 << 4)
#define RCC_AHB1RSTR_CORDIC2RST			(1 << 3)
#define RCC_AHB1RSTR_DMAMUX1RST		(1 << 2)
#define RCC_AHB1RSTR_DMA2RST		(1 << 1)
#define RCC_AHB1RSTR_DMA1RST		(1 << 0)
/**@}*/

/** @defgroup rcc_ahb2rstr_rst RCC_AHB2RSTR reset values
@{*/
#define RCC_AHB2RSTR_RNGRST		(1 << 26)
#define RCC_AHB2RSTR_AESRST			(1 << 24)
#define RCC_AHB2RSTR_DAC4RST		(1 << 19)
#define RCC_AHB2RSTR_DAC3RST		(1 << 18)
#define RCC_AHB2RSTR_DAC2RST		(1 << 17)
#define RCC_AHB2RSTR_DAC1RST			(1 << 16)
#define RCC_AHB2RSTR_ADC345RST			(1 << 14)
#define RCC_AHB2RSTR_ADC12RST		(1 << 13)
#define RCC_AHB2RSTR_GPIOGRST		(1 << 6)
#define RCC_AHB2RSTR_GPIOFRST		(1 << 5)
#define RCC_AHB2RSTR_GPIOERST		(1 << 4)
#define RCC_AHB2RSTR_GPIODRST		(1 << 3)
#define RCC_AHB2RSTR_GPIOCRST		(1 << 2)
#define RCC_AHB2RSTR_GPIOBRST		(1 << 1)
#define RCC_AHB2RSTR_GPIOARST		(1 << 0)
/**@}*/

/** @defgroup rcc_ahb3rstr_rst RCC_AHB3RSTR reset values
@{*/
#define RCC_AHB3RSTR_QSPIRST			(1 << 8)
#define RCC_AHB3RSTR_FMCRST		(1 << 0)
/**@}*/
/**@}*/

/** @defgroup rcc_apb1rstr_rst RCC_APB1RSTRx reset values (full set)
@{*/
/** @defgroup rcc_apb1rstr1_rst RCC_APB1RSTR1 reset values
@{*/
#define RCC_APB1RSTR1_LPTIM1RST		(1 << 31)
#define RCC_APB1RSTR1_I2C3RST			(1 << 30)
#define RCC_APB1RSTR1_PWRRST		(1 << 28)
#define RCC_APB1RSTR1_FDCANRST		(1 << 25)
#define RCC_APB1RSTR1_USBRST			(1 << 23)
#define RCC_APB1RSTR1_I2C2RST		(1 << 22)
#define RCC_APB1RSTR1_I2C1RST		(1 << 21)
#define RCC_APB1RSTR1_UART5RST		(1 << 20)
#define RCC_APB1RSTR1_UART4RST		(1 << 19)
#define RCC_APB1RSTR1_USART3RST		(1 << 18)
#define RCC_APB1RSTR1_USART2RST		(1 << 17)
#define RCC_APB1RSTR1_SPI3RST		(1 << 15)
#define RCC_APB1RSTR1_SPI2RST		(1 << 14)
#define RCC_APB1RSTR1_CRSRST		(1 << 8)
#define RCC_APB1RSTR1_TIM7RST		(1 << 5)
#define RCC_APB1RSTR1_TIM6RST		(1 << 4)
#define RCC_APB1RSTR1_TIM5RST		(1 << 3)
#define RCC_APB1RSTR1_TIM4RST		(1 << 2)
#define RCC_APB1RSTR1_TIM3RST		(1 << 1)
#define RCC_APB1RSTR1_TIM2RST		(1 << 0)
/**@}*/

/** @defgroup rcc_apb1rstr2_rst RCC_APB1RSTR2 reset values
@{*/
#define RCC_APB1RSTR2_UCPD1RST			(1 << 8)
#define RCC_APB1RSTR2_I2C4RST		(1 << 1)
#define RCC_APB1RSTR2_LPUART1RST		(1 << 0)
/**@}*/
/**@}*/

/** @defgroup rcc_apb2rstr_rst RCC_APB2RSTR reset values
@{*/
#define RCC_APB2RSTR_HRTIM1RST		(1 << 26)
#define RCC_APB2RSTR_SAI1RST		(1 << 21)
#define RCC_APB2RSTR_TIM20RST		(1 << 20)
#define RCC_APB2RSTR_TIM17RST		(1 << 18)
#define RCC_APB2RSTR_TIM16RST		(1 << 17)
#define RCC_APB2RSTR_TIM15RST		(1 << 16)
#define RCC_APB2RSTR_SPI4RST		(1 << 15)
#define RCC_APB2RSTR_USART1RST		(1 << 14)
#define RCC_APB2RSTR_TIM8RST		(1 << 13)
#define RCC_APB2RSTR_SPI1RST		(1 << 12)
#define RCC_APB2RSTR_TIM1RST		(1 << 11)
#define RCC_APB2RSTR_SYSCFGRST		(1 << 0)
/**@}*/

/** @defgroup rcc_ahbenr_en RCC_AHBxENR enable values (full set)
 *@{*/
/** @defgroup rcc_ahb1enr_en RCC_AHB1ENR enable values
 *@{*/
#define RCC_AHB1ENR_CRCEN		(1 << 12)
#define RCC_AHB1ENR_FLASHEN			(1 << 8)
#define RCC_AHB1ENR_FMACEN		(1 << 4)
#define RCC_AHB1ENR_CORDICEN		(1 << 3)
#define RCC_AHB1ENR_DMAMUX1EN			(1 << 2)
#define RCC_AHB1ENR_DMA2EN		(1 << 1)
#define RCC_AHB1ENR_DMA1EN		(1 << 0)
/**@}*/

/** @defgroup rcc_ahb2enr_en RCC_AHB2ENR enable values
 *@{*/
#define RCC_AHB2ENR_RNGEN		(1 << 26)
#define RCC_AHB2ENR_AESEN			(1 << 24)
#define RCC_AHB2ENR_DAC4EN			(1 << 19)
#define RCC_AHB2ENR_DAC3EN			(1 << 18)
#define RCC_AHB2ENR_DAC2EN			(1 << 17)
#define RCC_AHB2ENR_DAC1EN			(1 << 16)
#define RCC_AHB2ENR_ADC345EN		(1 << 14)
#define RCC_AHB2ENR_ADC12EN		(1 << 13)
#define RCC_AHB2ENR_GPIOGEN		(1 << 6)
#define RCC_AHB2ENR_GPIOFEN		(1 << 5)
#define RCC_AHB2ENR_GPIOEEN		(1 << 4)
#define RCC_AHB2ENR_GPIODEN		(1 << 3)
#define RCC_AHB2ENR_GPIOCEN		(1 << 2)
#define RCC_AHB2ENR_GPIOBEN		(1 << 1)
#define RCC_AHB2ENR_GPIOAEN		(1 << 0)
/**@}*/

/** @defgroup rcc_ahb3enr_en RCC_AHB3ENR enable values
 *@{*/
#define RCC_AHB3ENR_QSPIEN			(1 << 8)
#define RCC_AHB3ENR_FMCEN		(1 << 0)
/**@}*/

/**@}*/

/** @defgroup rcc_apb1enr_en RCC_APB1ENRx enable values (full set)
 *@{*/
/** @defgroup rcc_apb1enr1_en RCC_APB1ENR1 enable values
 *@{*/
#define RCC_APB1ENR1_LPTIM1EN		(1 << 31)
#define RCC_APB1ENR1_I2C3EN			(1 << 30)
#define RCC_APB1ENR1_PWREN		(1 << 28)
#define RCC_APB1ENR1_FDCANEN		(1 << 25)
#define RCC_APB1ENR1_USBEN			(1 << 23)
#define RCC_APB1ENR1_I2C2EN		(1 << 22)
#define RCC_APB1ENR1_I2C1EN		(1 << 21)
#define RCC_APB1ENR1_UART5EN		(1 << 20)
#define RCC_APB1ENR1_UART4EN		(1 << 19)
#define RCC_APB1ENR1_USART3EN		(1 << 18)
#define RCC_APB1ENR1_USART2EN		(1 << 17)
#define RCC_APB1ENR1_SPI3EN			(1 << 15)
#define RCC_APB1ENR1_SPI2EN		(1 << 14)
#define RCC_APB1ENR1_WWDGEN		(1 << 11)
#define RCC_APB1ENR1_RTCAPBEN		(1 << 10)
#define RCC_APB1ENR1_CRSEN		(1 << 8)
#define RCC_APB1ENR1_TIM7EN		(1 << 5)
#define RCC_APB1ENR1_TIM6EN		(1 << 4)
#define RCC_APB1ENR1_TIM5EN		(1 << 3)
#define RCC_APB1ENR1_TIM4EN		(1 << 2)
#define RCC_APB1ENR1_TIM3EN		(1 << 1)
#define RCC_APB1ENR1_TIM2EN		(1 << 0)
/*@}*/

/** @defgroup rcc_apb1enr2_en RCC_APB1ENR2 enable values
 *@{*/
#define RCC_APB1ENR2_UCPD1EN			(1 << 8)
#define RCC_APB1ENR2_I2C4EN		(1 << 1)
#define RCC_APB1ENR2_LPUART1EN		(1 << 0)
/*@}*/
/*@}*/

/** @defgroup rcc_apb2enr_en RCC_APB2ENR enable values
 *@{*/
#define RCC_APB2ENR_HRTIM1EN			(1 << 26)
#define RCC_APB2ENR_SAI1EN		(1 << 21)
#define RCC_APB2ENR_TIM20EN		(1 << 20)
#define RCC_APB2ENR_TIM17EN		(1 << 18)
#define RCC_APB2ENR_TIM16EN		(1 << 17)
#define RCC_APB2ENR_TIM15EN		(1 << 16)
#define RCC_APB2ENR_SPI4EN		(1 << 15)
#define RCC_APB2ENR_USART1EN		(1 << 14)
#define RCC_APB2ENR_TIM8EN		(1 << 13)
#define RCC_APB2ENR_SPI1EN		(1 << 12)
#define RCC_APB2ENR_TIM1EN		(1 << 11)
#define RCC_APB2ENR_SYSCFGEN		(1 << 0)
/**@}*/

/** @defgroup rcc_ahb1smenr_values RCC_AHB1SMENR - AHB1 periph clock in sleep mode
 * @{
 */
#define RCC_AHB1SMENR_CRCSMEN		(1 << 12)
#define RCC_AHB1SMENR_SRAM1SMEN		(1 << 9)
#define RCC_AHB1SMENR_FLASHSMEN		(1 << 8)
#define RCC_AHB1SMENR_FMACSMEN		(1 << 4)
#define RCC_AHB1SMENR_CORFDICSMEN		(1 << 3)
#define RCC_AHB1SMENR_DMAMUX1SMEN		(1 << 2)
#define RCC_AHB1SMENR_DMA2SMEN		(1 << 1)
#define RCC_AHB1SMENR_DMA1SMEN		(1 << 0)
/**@}*/

/** @defgroup rcc_ahb2smenr RCC_AHB2SMENR - AHB2 periph clock in sleep mode
 * @{
 */
#define RCC_AHB2SMENR_RNGSMEN		(1 << 26)
#define RCC_AHB2SMENR_AESSMEN			(1 << 24)
#define RCC_AHB2SMENR_DAC4SMEN		(1 << 19)
#define RCC_AHB2SMENR_DAC3SMEN		(1 << 18)
#define RCC_AHB2SMENR_DAC2SMEN		(1 << 17)
#define RCC_AHB2SMENR_DAC1SMEN		(1 << 16)
#define RCC_AHB2SMENR_ADC345SMEN		(1 << 14)
#define RCC_AHB2SMENR_ADC12SMEN			(1 << 13)
#define RCC_AHB2SMENR_SRAM2SMEN			(1 << 10)
#define RCC_AHB2SMENR_CCMSRAMSMEN		(1 << 9)
#define RCC_AHB2SMENR_GPIOGSMEN		(1 << 6)
#define RCC_AHB2SMENR_GPIOFSMEN		(1 << 5)
#define RCC_AHB2SMENR_GPIOESMEN		(1 << 4)
#define RCC_AHB2SMENR_GPIODSMEN		(1 << 3)
#define RCC_AHB2SMENR_GPIOCSMEN		(1 << 2)
#define RCC_AHB2SMENR_GPIOBSMEN		(1 << 1)
#define RCC_AHB2SMENR_GPIOASMEN		(1 << 0)
/**@}*/

/** @defgroup rcc_ahb3smenr RCC_AHB3SMENR - AHB3 periph clock in sleep mode
 * @{
 */
#define RCC_AHB3SMENR_QSPISMEN			(1 << 8)
#define RCC_AHB3SMENR_FMCSMEN		(1 << 0)
/**@}*/

/** @defgroup rcc_apb1smenr1 RCC_APB1SMENR1 - APB1 periph clock in sleep mode
 * @{
 */
/** RCC_APB1SMENR1_LPTIM1SMEN Low Power Timer1 clock enable during sleep mode **/
#define RCC_APB1SMENR1_LPTIM1SMEN		(1 << 31)
/** RCC_APB1SMENR1_I2C3SMEN I2C 3 interface clock enable during sleep mode **/
#define RCC_APB1SMENR1_I2C3SMEN			(1 << 30)
/** RCC_APB1SMENR1_PWRSMEN Power interface clocks enable during Sleep and Stop modes **/
#define RCC_APB1SMENR1_PWRSMEN		(1 << 28)
/** RCC_APB1SMENR1_FDCANSMEN FDCAN clock enable during sleep mode **/
#define RCC_APB1SMENR1_FDCANSMEN		(1 << 25)
#define RCC_APB1SMENR1_USBSMEN			(1 << 23) //XXX checkeme
/** RCC_APB1SMENR1_I2C2SMEN I2C2 clocks enable during Sleep and Stop modes **/
#define RCC_APB1SMENR1_I2C2SMEN		(1 << 22)
/** RCC_APB1SMENR1_I2C1SMEN I2C1 clocks enable during Sleep and Stop modes **/
#define RCC_APB1SMENR1_I2C1SMEN		(1 << 21)
/** RCC_APB1SMENR1_UART5SMEN UART5 clocks enable during Sleep and Stop modes **/
#define RCC_APB1SMENR1_UART5SMEN		(1 << 20)
/** RCC_APB1SMENR1_UART4SMEN UART4 clocks enable during Sleep and Stop modes **/
#define RCC_APB1SMENR1_UART4SMEN		(1 << 19)
/** RCC_APB1SMENR1_USART3SMEN USART3 clocks enable during Sleep and Stop modes **/
#define RCC_APB1SMENR1_USART3SMEN		(1 << 18)
/** RCC_APB1SMENR1_USART2SMEN USART2 clocks enable during Sleep and Stop modes **/
#define RCC_APB1SMENR1_USART2SMEN		(1 << 17)
/** RCC_APB1SMENR1_SPI3SMEN SPI3 clocks enable during Sleep and Stop modes **/
#define RCC_APB1SMENR1_SPI3SMEN			(1 << 15)
/** RCC_APB1SMENR1_SPI2SMEN SPI2 clocks enable during Sleep and Stop modes **/
#define RCC_APB1SMENR1_SPI2SMEN		(1 << 14)
/** RCC_APB1SMENR1_WWDGSMEN Window watchdog clocks enable during Sleep and Stop modes **/
#define RCC_APB1SMENR1_WWDGSMEN		(1 << 11)
/** RCC_APB1SMENR1_RTCAPBSMEN RTC APB clock enable during Sleep and Stop modes **/
#define RCC_APB1SMENR1_RTCAPBSMEN		(1 << 10)
/** RCC_APB1SMENR1_CRSSMEN CRS clock enable during sleep mode **/
#define RCC_APB1SMENR1_CRSSMEN		(1 << 8)
/** RCC_APB1SMENR1_TIM7SMEN TIM7 timer clocks enable during Sleep and Stop modes **/
#define RCC_APB1SMENR1_TIM7SMEN		(1 << 5)
/** RCC_APB1SMENR1_TIM6SMEN TIM6 timer clocks enable during Sleep and Stop modes **/
#define RCC_APB1SMENR1_TIM6SMEN		(1 << 4)
/** RCC_APB1SMENR1_TIM5SMEN TIM5 timer clocks enable during Sleep and Stop modes **/
#define RCC_APB1SMENR1_TIM5SMEN		(1 << 3)
/** RCC_APB1SMENR1_TIM4SMEN TIM4 timer clocks enable during Sleep and Stop modes **/
#define RCC_APB1SMENR1_TIM4SMEN		(1 << 2)
/** RCC_APB1SMENR1_TIM3SMEN TIM3 timer clocks enable during Sleep and Stop modes **/
#define RCC_APB1SMENR1_TIM3SMEN		(1 << 1)
/** RCC_APB1SMENR1_TIM2SMEN TIM2 timer clocks enable during Sleep and Stop modes **/
#define RCC_APB1SMENR1_TIM2SMEN		(1 << 0)
/**@}*/

/** @defgroup rcc_apb1smenr2 RCC_APB1SMENR2 - APB1 periph clock in sleep mode
 * @{
 */
#define RCC_APB1SMENR2_UCPD1SMEN		(1 << 8)
#define RCC_APB1SMENR2_I2C4SMEN		(1 << 1)
/** RCC_APB1SMENR2_LPUART1SMEN Low power UART 1 clocks enable during Sleep and Stop modes **/
#define RCC_APB1SMENR2_LPUART1SMEN		(1 << 0)
/**@}*/

/** @defgroup rcc_apb2smenr RCC_APB2SMENR - APB2 periph clock in sleep mode
 * @{
 */
#define RCC_APB2SMENR_HRTIM1SMEN		(1 << 26)
#define RCC_APB2SMENR_SAI1SMEN		(1 << 21)
/** RCC_APB2SMENR_TIM20SMEN Timer 20clock enable during sleep mode **/
#define RCC_APB2SMENR_TIM20SMEN		(1 << 20)
/** RCC_APB2SMENR_TIM17SMEN TIM17 timer clocks enable during Sleep and Stop modes **/
#define RCC_APB2SMENR_TIM17SMEN		(1 << 18)
/** RCC_APB2SMENR_TIM16SMEN TIM16 timer clocks enable during Sleep and Stop modes **/
#define RCC_APB2SMENR_TIM16SMEN		(1 << 17)
/** RCC_APB2SMENR_TIM15SMEN TIM15 timer clocks enable during Sleep and Stop modes **/
#define RCC_APB2SMENR_TIM15SMEN		(1 << 16)
/** RCC_APB2SMENR_SPI4SMEN SPI4 timer clocks enable during Sleep and Stop modes **/
#define RCC_APB2SMENR_SPI4SMEN		(1 << 15)
/** RCC_APB2SMENR_USART1SMEN USART1clocks enable during Sleep and Stop modes **/
#define RCC_APB2SMENR_USART1SMEN		(1 << 14)
/** RCC_APB2SMENR_TIM8SMEN TIM8 timer clocks enable during Sleep and Stop modes **/
#define RCC_APB2SMENR_TIM8SMEN		(1 << 13)
/** RCC_APB2SMENR_SPI1SMEN SPI1 clocks enable during Sleep and Stop modes **/
#define RCC_APB2SMENR_SPI1SMEN		(1 << 12)
/** RCC_APB2SMENR_TIM1SMEN TIM1 timer clocks enable during Sleep and Stop modes **/
#define RCC_APB2SMENR_TIM1SMEN		(1 << 11)
/** RCC_APB2SMENR_SYSCFGSMEN SYSCFG clocks enable during Sleep and Stop modes **/
#define RCC_APB2SMENR_SYSCFGSMEN		(1 << 0)
/**@}*/

/** @defgroup rcc_ccipr1 CCIPR1 CCIPR
@{*/
#define RCC_CCIPR1_ADC345SEL_SHIFT		30
#define RCC_CCIPR1_ADC345SEL_MASK		0x03
/** @defgroup rcc_ccipr1_adc345sel ADC345SEL ADC3/4/5 clock source selection
@{*/
#define RCC_CCIPR1_ADC345SEL_NONE		0x0
#define RCC_CCIPR1_ADC345SEL_PLLPCLK		0x1
#define RCC_CCIPR1_ADC345SEL_PCLK		0x2
/**@}*/

#define RCC_CCIPR1_ADC12SEL_SHIFT		28
#define RCC_CCIPR1_ADC12SEL_MASK		0x03
/** @defgroup rcc_ccipr1_adcsel ADC12SEL ADC1/2s clock source selection
@{*/
#define RCC_CCIPR1_ADC12SEL_NONE		0x0
#define RCC_CCIPR1_ADC12SEL_PLLPCLK		0x1
#define RCC_CCIPR1_ADC12SEL_PCLK		0x2
/**@}*/

#define RCC_CCIPR1_CLK48SEL_SHIFT		26
#define RCC_CCIPR1_CLK48SEL_MASK		0x03
/** @defgroup rcc_ccipr1_clk48sel CLK48SEL 48 MHz clock source selection
@{*/
#define RCC_CCIPR1_CLK48SEL_HSI48		0x0
#define RCC_CCIPR1_CLK48SEL_PLLQCLK		0x2
/**@}*/

#define RCC_CCIPR1_FDCANSEL_SHIFT		24
#define RCC_CCIPR1_FDCANSEL_MASK		0x03
/** @defgroup rcc_ccipr1_fdcansel FDCANSEL Fdcan clock source selection
@{*/
#define RCC_CCIPR1_FDCANSEL_HSE		0x0
#define RCC_CCIPR1_FDCANSEL_PLLQCLK		0x1
#define RCC_CCIPR1_FDCANSEL_PCLK		0x2
/**@}*/

#define RCC_CCIPR1_I2S23SEL__SHIFT		22
#define RCC_CCIPR1_I2S13SEL__MASK		0x03
/** @defgroup rcc_ccipr1_i2s23sel I2S23SEL I2S23 clock source selection
@{*/
#define RCC_CCIPR1_I2S23SEL_PCLK		0x0
#define RCC_CCIPR1_I2S23SEL_PLLQCLK		0x1
#define RCC_CCIPR1_I2S23SEL_I2S_CKIN	0x2
#define RCC_CCIPR1_I2S23SEL_HSI16		0x3
/**@}*/

#define RCC_CCIPR1_SAI1SEL_SHIFT		20
#define RCC_CCIPR1_SAI1SEL_MASK		0x03
/** @defgroup rcc_ccipr1_saisel SAISEL SAI1 clock source selection
@{*/
#define RCC_CCIPR1_SAI1SEL_SYSCLK		0x0
#define RCC_CCIPR1_SAI1SEL_PLLQCLK		0x1
#define RCC_CCIPR1_SAI1SEL_I2S_CKIN		0x2
#define RCC_CCIPR1_SAI1SEL_HSI16		0x3
/**@}*/

#define RCC_CCIPR1_LPTIM1SEL_SHIFT		18
#define RCC_CCIPR1_LPTIM1SEL_MASK		0x03
/** @defgroup rcc_ccipr1_lptim1sel LPTIM1SEL Low power timer 1 clock source selection
@{*/
#define RCC_CCIPR1_LPTIM1SEL_PCLK		0x0
#define RCC_CCIPR1_LPTIM1SEL_LSI		0x1
#define RCC_CCIPR1_LPTIM1SEL_HSI16		0x2
#define RCC_CCIPR1_LPTIM1SEL_LSE		0x3
/**@}*/

#define RCC_CCIPR1_I2C3SEL_SHIFT		16
#define RCC_CCIPR1_I2C3SEL_MASK			0x03
/** @defgroup rcc_ccipr1_i2c3sel I2C3SEL I2C3 clock source selection
@{*/
#define RCC_CCIPR1_I2C3SEL_PCLK			0x0
#define RCC_CCIPR1_I2C3SEL_SYSCLK		0x1
#define RCC_CCIPR1_I2C3SEL_HSI16		0x2
/**@}*/

#define RCC_CCIPR1_I2C2SEL_SHIFT		14
#define RCC_CCIPR1_I2C2SEL_MASK		0x03
/** @defgroup rcc_ccipr1_i2c2sel I2C2SEL I2C2 clock source selection
@{*/
#define RCC_CCIPR1_I2C2SEL_PCLK			0x0
#define RCC_CCIPR1_I2C2SEL_SYSCLK		0x1
#define RCC_CCIPR1_I2C2SEL_HSI16		0x2
/**@}*/

#define RCC_CCIPR1_I2C1SEL_SHIFT		12
#define RCC_CCIPR1_I2C1SEL_MASK		0x03
/** @defgroup rcc_ccipr1_i2c1sel I2C1SEL I2C1 clock source selection
@{*/
#define RCC_CCIPR1_I2C1SEL_PCLK			0x0
#define RCC_CCIPR1_I2C1SEL_SYSCLK		0x1
#define RCC_CCIPR1_I2C1SEL_HSI16		0x2
/**@}*/

#define RCC_CCIPR1_LPUART1SEL_SHIFT		10
#define RCC_CCIPR1_LPUART1SEL_MASK		0x03
/** @defgroup rcc_ccipr1_lpuart1sel LPUART1SEL LPUART1 clock source selection
@{*/
#define RCC_CCIPR1_LPUART1SEL_PCLK		0x0
#define RCC_CCIPR1_LPUART1SEL_SYSCLK	0x1
#define RCC_CCIPR1_LPUART1SEL_HSI16		0x2
#define RCC_CCIPR1_LPUART1SEL_LSE		0x3
/**@}*/

#define RCC_CCIPR1_UART5SEL_SHIFT		8
#define RCC_CCIPR1_UART5SEL_MASK		0x03
/** @defgroup rcc_ccipr1_uart5sel UART5SEL UART5 clock source selection
@{*/
#define RCC_CCIPR1_UART5SEL_PCLK		0x0
#define RCC_CCIPR1_UART5SEL_SYSCLK	0x1
#define RCC_CCIPR1_UART5SEL_HSI16		0x2
#define RCC_CCIPR1_UART5SEL_LSE		0x3
/**@}*/

#define RCC_CCIPR1_UART4SEL_SHIFT		6
#define RCC_CCIPR1_UART4SEL_MASK		0x03
/** @defgroup rcc_ccipr1_uart4sel UART4SEL UART4 clock source selection
@{*/
#define RCC_CCIPR1_UART4SEL_PCLK		0x0
#define RCC_CCIPR1_UART4SEL_SYSCLK		0x1
#define RCC_CCIPR1_UART4SEL_HSI16		0x2
#define RCC_CCIPR1_UART4SEL_LSE			0x3
/**@}*/

#define RCC_CCIPR1_USART3SEL_SHIFT		4
#define RCC_CCIPR1_USART3SEL_MASK		0x03
/** @defgroup rcc_ccipr1_usart3sel USART3SEL USART3 clock source selection
@{*/
#define RCC_CCIPR1_USART3SEL_PCLK		0x0
#define RCC_CCIPR1_USART3SEL_SYSCLK		0x1
#define RCC_CCIPR1_USART3SEL_HSI16		0x2
#define RCC_CCIPR1_USART3SEL_LSE		0x3
/**@}*/

#define RCC_CCIPR1_USART2SEL_SHIFT		2
#define RCC_CCIPR1_USART2SEL_MASK		0x03
/** @defgroup rcc_ccipr1_usart2sel USART2SEL USART2 clock source selection
@{*/
#define RCC_CCIPR1_USART2SEL_PCLK		0x0
#define RCC_CCIPR1_USART2SEL_SYSCLK		0x1
#define RCC_CCIPR1_USART2SEL_HSI16		0x2
#define RCC_CCIPR1_USART2SEL_LSE		0x3
/**@}*/

#define RCC_CCIPR1_USART1SEL_SHIFT		0
#define RCC_CCIPR1_USART1SEL_MASK		0x03
/** @defgroup rcc_ccipr1_usart1sel USART1SEL USART1 clock source selection
@{*/
#define RCC_CCIPR1_USART1SEL_PCLK		0x0
#define RCC_CCIPR1_USART1SEL_SYSCLK		0x1
#define RCC_CCIPR1_USART1SEL_HSI16		0x2
#define RCC_CCIPR1_USART1SEL_LSE		0x3
/**@}*/
/**@}*/

/** @defgroup rcc_bdcr BDCR BDCR
@{*/

/** RCC_BDCR_LSCOSEL Low speed clock output selection **/
#define RCC_BDCR_LSCOSEL		(1 << 25)
#define RCC_BDCR_LSCOEN			(1 << 24)
#define RCC_BDCR_BDRST			(1 << 16)
#define RCC_BDCR_RTCEN		(1 << 15)

#define RCC_BDCR_RTCSEL_NONE		0
#define RCC_BDCR_RTCSEL_LSE		1
#define RCC_BDCR_RTCSEL_LSI		2
#define RCC_BDCR_RTCSEL_HSEDIV32	3
#define RCC_BDCR_RTCSEL_SHIFT		8
#define RCC_BDCR_RTCSEL_MASK		0x3

#define RCC_BDCR_LSECSSD		(1 << 6)
#define RCC_BDCR_LSECSSON		(1 << 5)

#define RCC_BDCR_LSEDRV_LOW		0
#define RCC_BDCR_LSEDRV_MEDLOW		1
#define RCC_BDCR_LSEDRV_MEDHIGH		2
#define RCC_BDCR_LSEDRV_HIGH		3
#define RCC_BDCR_LSEDRV_SHIFT		3
#define RCC_BDCR_LSEDRV_MASK		0x3

#define RCC_BDCR_LSEBYP		(1 << 2)
#define RCC_BDCR_LSERDY		(1 << 1)
#define RCC_BDCR_LSEON		(1 << 0)
/**@}*/

/** @defgroup rcc_csr_values RCC_CSR - Control/Status register
 * @{
 */
#define RCC_CSR_LPWRRSTF			(1 << 31)
#define RCC_CSR_WWDGRSTF		(1 << 30)
#define RCC_CSR_IWDGRSTF			(1 << 29)
#define RCC_CSR_SFTRSTF		(1 << 28)
#define RCC_CSR_BORRSTF		(1 << 27)
#define RCC_CSR_PINRSTF				(1 << 26)
#define RCC_CSR_OBLRSTF		(1 << 25)
#define RCC_CSR_RMVF		(1 << 23)
#define RCC_CSR_RESET_FLAGS	(RCC_CSR_LPWRRSTF | RCC_CSR_WWDGRSTF |\
		RCC_CSR_IWDGRSTF | RCC_CSR_SFTRSTF | RCC_CSR_BORRSTF |\
		RCC_CSR_PINRSTF | RCC_CSR_OBLRSTF)
#define RCC_CSR_LSIRDY		(1 << 1)
#define RCC_CSR_LSION		(1 << 0)
/**@}*/

/** @defgroup rcc_crrcr RCC_CRRCR Clock Recovery RC register
 * @{
 */
#define RCC_CRRCR_HSI48VAL_MASK		0x1ff
#define RCC_CRRCR_HSI48VAL_SHIFT	7

#define RCC_CRRCR_HSI48RDY	BIT1
#define RCC_CRRCR_HSI48ON	BIT0
/**@}*/

/** @defgroup rcc_ccipr2 CCIPR2 Peripherals independent clock configuration register
@{*/
#define RCC_CCIPR2_QUADSPISEL_SHIFT		20
#define RCC_CCIPR2_QUADSPISEL_MASK		0x03
/** @defgroup rcc_ccipr2_quadspisel QUADSPISEL Octospi clock source selection
@{*/
#define RCC_CCIPR2_QSPISEL_SYSCLK		0x0
#define RCC_CCIPR2_QSPISEL_HSI16		0x1
#define RCC_CCIPR2_QSPISEL_PLLQCLK		0x2
/**@}*/

#define RCC_CCIPR2_I2C4SEL_SHIFT		0
#define RCC_CCIPR2_I2C4SEL_MASK		0x03
/** @defgroup rcc_ccipr2_i2c4sel I2C4SEL I2C4 clock source selection
@{*/
#define RCC_CCIPR2_I2C4SEL_PCLK			0x0
#define RCC_CCIPR2_I2C4SEL_SYSCLK		0x1
#define RCC_CCIPR2_I2C4SEL_HSI16		0x2
/**@}*/

/* --- Variable definitions ------------------------------------------------ */

extern uint32_t rcc_ahb_frequency;
extern uint32_t rcc_apb1_frequency;
extern uint32_t rcc_apb2_frequency;

/* --- Function prototypes ------------------------------------------------- */
 

enum rcc_osc {
	RCC_PLL, RCC_HSE, RCC_HSI16, RCC_LSE, RCC_LSI, RCC_HSI48
};

#define _REG_BIT(base, bit)		(((base) << 5) + (bit))
enum rcc_periph_clken {

	/* AHB1 peripherals */
	RCC_CRC = _REG_BIT(0x48, 12),
	RCC_FLASH = _REG_BIT(0x48, 8),
	RCC_FMAC = _REG_BIT(0x48, 4),
	RCC_CORDIC = _REG_BIT(0x48, 3),
	RCC_DMAMUX1 = _REG_BIT(0x48, 2),
	RCC_DMA2 = _REG_BIT(0x48, 1),
	RCC_DMA1 = _REG_BIT(0x48, 0),

	/* AHB2 peripherals */
	RCC_RNG = _REG_BIT(0x4c, 26),
	RCC_AES = _REG_BIT(0x4c, 24),
	RCC_DAC4 = _REG_BIT(0x4c, 19),
	RCC_DAC3 = _REG_BIT(0x4c, 18),
	RCC_DAC2 = _REG_BIT(0x4c, 17),
	RCC_DAC1 = _REG_BIT(0x4c, 16),
	RCC_ADC345 = _REG_BIT(0x4c, 14),
	RCC_ADC12 = _REG_BIT(0x4c, 13),
	RCC_ADC1 = _REG_BIT(0x4c, 13), /* Compatibility */
	RCC_GPIOG = _REG_BIT(0x4c, 6),
	RCC_GPIOF = _REG_BIT(0x4c, 5),
	RCC_GPIOE = _REG_BIT(0x4c, 4),
	RCC_GPIOD = _REG_BIT(0x4c, 3),
	RCC_GPIOC = _REG_BIT(0x4c, 2),
	RCC_GPIOB = _REG_BIT(0x4c, 1),
	RCC_GPIOA = _REG_BIT(0x4c, 0),

	/* AHB3 peripherals */
	RCC_QSPI = _REG_BIT(0x50, 8),
	RCC_FMC = _REG_BIT(0x50, 0),

	/* APB1 peripherals */
	RCC_LPTIM1 = _REG_BIT(0x58, 31),
	RCC_I2C3 = _REG_BIT(0x58, 30),
	RCC_PWR = _REG_BIT(0x58, 28),
	RCC_FDCAN = _REG_BIT(0x58, 25),
	RCC_USB = _REG_BIT(0x58, 23),
	RCC_I2C2 = _REG_BIT(0x58, 22),
	RCC_I2C1 = _REG_BIT(0x58, 21),
	RCC_UART5 = _REG_BIT(0x58, 20),
	RCC_UART4 = _REG_BIT(0x58, 19),
	RCC_USART3 = _REG_BIT(0x58, 18),
	RCC_USART2 = _REG_BIT(0x58, 17),
	RCC_SPI3 = _REG_BIT(0x58, 15),
	RCC_SPI2 = _REG_BIT(0x58, 14),
	RCC_WWDG = _REG_BIT(0x58, 11),
	RCC_RTCAPB = _REG_BIT(0x58, 10),
	RCC_CRS = _REG_BIT(0x58, 8),
	RCC_TIM7 = _REG_BIT(0x58, 5),
	RCC_TIM6 = _REG_BIT(0x58, 4),
	RCC_TIM5 = _REG_BIT(0x58, 3),
	RCC_TIM4 = _REG_BIT(0x58, 2),
	RCC_TIM3 = _REG_BIT(0x58, 1),
	RCC_TIM2 = _REG_BIT(0x58, 0),
	/* apb1-2 */
	RCC_UCPD1 = _REG_BIT(0x5c, 8),
	RCC_I2C4 = _REG_BIT(0x5c, 1),
	RCC_LPUART1 = _REG_BIT(0x5c, 0),

	/* APB2 peripherals */
	RCC_HRTIM1 = _REG_BIT(0x60, 26),
	RCC_SAI1 = _REG_BIT(0x60, 21),
	RCC_TIM20 = _REG_BIT(0x60, 20),
	RCC_TIM17 = _REG_BIT(0x60, 18),
	RCC_TIM16 = _REG_BIT(0x60, 17),
	RCC_TIM15 = _REG_BIT(0x60, 16),
	RCC_SPI4 = _REG_BIT(0x60, 15),
	RCC_USART1 = _REG_BIT(0x60, 14),
	RCC_TIM8 = _REG_BIT(0x60, 13),
	RCC_SPI1 = _REG_BIT(0x60, 12),
	RCC_TIM1 = _REG_BIT(0x60, 11),
	RCC_SYSCFG = _REG_BIT(0x60, 0),

	/* AHB1 peripherals in sleep mode */
	SCC_CRC = _REG_BIT(0x68, 12),
	SCC_SRAM1 = _REG_BIT(0x68, 9),
	SCC_FLASH = _REG_BIT(0x68, 8),
	SCC_FMAC = _REG_BIT(0x68, 4),
	SCC_CORDIC = _REG_BIT(0x68, 3),
	SCC_DMAMUX1 = _REG_BIT(0x68, 2),
	SCC_DMA2 = _REG_BIT(0x68, 1),
	SCC_DMA1 = _REG_BIT(0x68, 0),

	/* AHB2 peripherals in sleep mode */
	SCC_RNG = _REG_BIT(0x6c, 26),
	SCC_AES = _REG_BIT(0x6c, 24),
	SCC_DAC4 = _REG_BIT(0x6c, 19),
	SCC_DAC3 = _REG_BIT(0x6c, 18),
	SCC_DAC2 = _REG_BIT(0x6c, 17),
	SCC_DAC1 = _REG_BIT(0x6c, 16),
	SCC_ADC345 = _REG_BIT(0x6c, 14),
	SCC_ADC12 = _REG_BIT(0x6c, 13),
	SCC_ADC1 = _REG_BIT(0x6c, 13), /* Compatibility */
	SCC_CCMSRAM = _REG_BIT(0x6c, 10),
	SCC_SRAM2 = _REG_BIT(0x6c, 9),
	SCC_GPIOG = _REG_BIT(0x6c, 6),
	SCC_GPIOF = _REG_BIT(0x6c, 5),
	SCC_GPIOE = _REG_BIT(0x6c, 4),
	SCC_GPIOD = _REG_BIT(0x6c, 3),
	SCC_GPIOC = _REG_BIT(0x6c, 2),
	SCC_GPIOB = _REG_BIT(0x6c, 1),
	SCC_GPIOA = _REG_BIT(0x6c, 0),

	/* AHB3 peripherals in sleep mode */
	SCC_QSPI = _REG_BIT(0x70, 8),
	SCC_FMC = _REG_BIT(0x70, 0),

	/* APB1 peripherals in sleep mode */
	SCC_LPTIM1 = _REG_BIT(0x58, 31),
	SCC_I2C3 = _REG_BIT(0x58, 30),
	SCC_PWR = _REG_BIT(0x58, 28),
	SCC_FDCAN = _REG_BIT(0x58, 25),
	SCC_USB = _REG_BIT(0x58, 23),
	SCC_I2C2 = _REG_BIT(0x58, 22),
	SCC_I2C1 = _REG_BIT(0x58, 21),
	SCC_UART5 = _REG_BIT(0x58, 20),
	SCC_UART4 = _REG_BIT(0x58, 19),
	SCC_USART3 = _REG_BIT(0x58, 18),
	SCC_USART2 = _REG_BIT(0x58, 17),
	SCC_SPI3 = _REG_BIT(0x58, 15),
	SCC_SPI2 = _REG_BIT(0x58, 14),
	SCC_WWDG = _REG_BIT(0x58, 11),
	SCC_RTCAPB = _REG_BIT(0x58, 10),
	SCC_CRS = _REG_BIT(0x58, 8),
	SCC_TIM7 = _REG_BIT(0x58, 5),
	SCC_TIM6 = _REG_BIT(0x58, 4),
	SCC_TIM5 = _REG_BIT(0x58, 3),
	SCC_TIM4 = _REG_BIT(0x58, 2),
	SCC_TIM3 = _REG_BIT(0x58, 1),
	SCC_TIM2 = _REG_BIT(0x58, 0),
	/* apb1-2 */
	SCC_UCPD1 = _REG_BIT(0x5c, 8),
	SCC_I2C4 = _REG_BIT(0x5c, 1),
	SCC_LPUART1 = _REG_BIT(0x5c, 0),

	/* APB2 peripherals in sleep mode */
	SCC_HRTIM1 = _REG_BIT(0x60, 26),
	SCC_SAI1 = _REG_BIT(0x60, 21),
	SCC_TIM20 = _REG_BIT(0x60, 20),
	SCC_TIM17 = _REG_BIT(0x60, 18),
	SCC_TIM16 = _REG_BIT(0x60, 17),
	SCC_TIM15 = _REG_BIT(0x60, 16),
	SCC_SPI4 = _REG_BIT(0x60, 15),
	SCC_USART1 = _REG_BIT(0x60, 14),
	SCC_TIM8 = _REG_BIT(0x60, 13),
	SCC_SPI1 = _REG_BIT(0x60, 12),
	SCC_TIM1 = _REG_BIT(0x60, 11),
	SCC_SYSCFG = _REG_BIT(0x60, 0),
};

enum rcc_periph_rst {
	/* AHB1 peripherals */
	RST_CRC = _REG_BIT(0x28, 12),
	RST_FLASH = _REG_BIT(0x28, 8),
	RST_FMAC = _REG_BIT(0x28, 4),
	RST_CORDIC = _REG_BIT(0x28, 3),
	RST_DMAMUX1 = _REG_BIT(0x28, 2),
	RST_DMA2 = _REG_BIT(0x28, 1),
	RST_DMA1 = _REG_BIT(0x28, 0),

	/* AHB2 peripherals */
	RST_RNG = _REG_BIT(0x2c, 26),
	RST_AES = _REG_BIT(0x2c, 24),
	RST_DAC4 = _REG_BIT(0x2c, 19),
	RST_DAC3 = _REG_BIT(0x2c, 18),
	RST_DAC2 = _REG_BIT(0x2c, 17),
	RST_DAC1 = _REG_BIT(0x2c, 16),
	RST_ADC345 = _REG_BIT(0x2c, 14),
	RST_ADC12 = _REG_BIT(0x2c, 13),
	RST_ADC1 = _REG_BIT(0x2c, 13), /* Compatibility */
	RST_GPIOG = _REG_BIT(0x2c, 6),
	RST_GPIOF = _REG_BIT(0x2c, 5),
	RST_GPIOE = _REG_BIT(0x2c, 4),
	RST_GPIOD = _REG_BIT(0x2c, 3),
	RST_GPIOC = _REG_BIT(0x2c, 2),
	RST_GPIOB = _REG_BIT(0x2c, 1),
	RST_GPIOA = _REG_BIT(0x2c, 0),

	/* AHB3 peripherals */
	RST_QSPI = _REG_BIT(0x30, 8),
	RST_FMC = _REG_BIT(0x30, 0),

	/* APB1 peripherals */
	RST_LPTIM1 = _REG_BIT(0x38, 31),
	RST_I2C3 = _REG_BIT(0x38, 30),
	RST_PWR = _REG_BIT(0x38, 28),
	RST_FDCAN = _REG_BIT(0x38, 25),
	RST_USB = _REG_BIT(0x38, 23),
	RST_I2C2 = _REG_BIT(0x38, 22),
	RST_I2C1 = _REG_BIT(0x38, 21),
	RST_UART5 = _REG_BIT(0x38, 20),
	RST_UART4 = _REG_BIT(0x38, 19),
	RST_USART3 = _REG_BIT(0x38, 18),
	RST_USART2 = _REG_BIT(0x38, 17),
	RST_SPI3 = _REG_BIT(0x38, 15),
	RST_SPI2 = _REG_BIT(0x38, 14),
	RST_CRS = _REG_BIT(0x38, 8),
	RST_TIM7 = _REG_BIT(0x38, 5),
	RST_TIM6 = _REG_BIT(0x38, 4),
	RST_TIM5 = _REG_BIT(0x38, 3),
	RST_TIM4 = _REG_BIT(0x38, 2),
	RST_TIM3 = _REG_BIT(0x38, 1),
	RST_TIM2 = _REG_BIT(0x38, 0),
	/* apb1-2 */
	RST_UCPD1 = _REG_BIT(0x3c, 8),
	RST_I2C4 = _REG_BIT(0x3c, 1),
	RST_LPUART1 = _REG_BIT(0x3c, 0),

	/* APB2 peripherals */
	RST_HRTIM1 = _REG_BIT(0x40, 26),
	RST_SAI1 = _REG_BIT(0x40, 21),
	RST_TIM20 = _REG_BIT(0x40, 20),
	RST_TIM17 = _REG_BIT(0x40, 18),
	RST_TIM16 = _REG_BIT(0x40, 17),
	RST_TIM15 = _REG_BIT(0x40, 16),
	RST_SPI4 = _REG_BIT(0x40, 15),
	RST_USART1 = _REG_BIT(0x40, 14),
	RST_TIM8 = _REG_BIT(0x40, 13),
	RST_SPI1 = _REG_BIT(0x40, 12),
	RST_TIM1 = _REG_BIT(0x40, 11),
	RST_SYSCFG = _REG_BIT(0x40, 0),

};

struct rcc_clock_scale {
	enum rcc_osc sysclock_source;
		
	/* PLL as sysclock source cfg */
	uint8_t pll_source;
	uint8_t pll_div;
	uint8_t pll_mul;
	uint8_t pllp_div;
	uint8_t pllq_div;
	uint8_t pllr_div;

	uint8_t hpre;
	uint8_t ppre1;
	uint8_t ppre2;
	uint8_t flash_waitstates;
	enum pwr_vos_scale voltage_scale;
	uint32_t ahb_frequency;
	uint32_t apb1_frequency;
	uint32_t apb2_frequency;
};

enum rcc_clock {
	RCC_CLOCK_CONFIG_HSI_16MHZ,
	RCC_CLOCK_CONFIG_HSI_PLL_150MHZ,
	RCC_CLOCK_CONFIG_HSI_PLL_170MHZ,
	RCC_CLOCK_CONFIG_HSE_24MHZ,
	RCC_CLOCK_CONFIG_HSE_24MHZ_PLL_170MHZ,
	RCC_CLOCK_CONFIG_END
};

extern const struct rcc_clock_scale rcc_clock_config[RCC_CLOCK_CONFIG_END];

#include <libopencm3/stm32/common/rcc_common_all.h>

BEGIN_DECLS

void rcc_osc_on(enum rcc_osc osc);
void rcc_osc_off(enum rcc_osc osc);

void rcc_css_enable(void);
void rcc_css_disable(void);
void rcc_css_int_clear(void);
int rcc_css_int_flag(void);

void rcc_set_sysclk_source(enum rcc_osc osc);
void rcc_wait_for_sysclk_status(enum rcc_osc osc);
enum rcc_osc rcc_system_clock_source(void);

void rcc_set_pll_source(uint32_t pllsrc);
void rcc_set_main_pll(uint32_t source, uint32_t pllm, uint32_t plln, uint32_t pllp, uint32_t pllq, uint32_t pllr);
void rcc_enable_pllp(bool enable);
void rcc_enable_pllq(bool enable);
void rcc_enable_pllr(bool enable);

void rcc_set_hpre(uint32_t hpre);
void rcc_set_ppre1(uint32_t ppre);
void rcc_set_ppre2(uint32_t ppre);
void rcc_set_mcopre(uint32_t mcopre);

void rcc_clock_setup(const struct rcc_clock_scale *clock);

void rcc_set_clock48_source(uint32_t sel);
void rcc_set_peripheral_clk_sel(uint32_t periph, uint32_t sel);

void rcc_enable_rtc_clock(void);
void rcc_disable_rtc_clock(void);
void rcc_set_rtc_clock_source(enum rcc_osc clk);

END_DECLS

/**@}*/
#endif

