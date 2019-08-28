/** @defgroup rcc_defines RCC Defines
 *
 * @ingroup STM32G4xx_defines
 *
 * @brief <b>Defined Constants and Types for the STM32G4xx Reset and Clock Control</b>
 *
 * @version 1.0.0
 *
 * LGPL License Terms @ref lgpl_license
 *  */
/*
 * This file is part of the libopencm3 project.
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

/* --- RCC: Reset and clock control --------------------------------- */

/** @defgroup rcc_registers Reset and clock control Register
@{*/

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

/** @defgroup rcc_cr CR Clock control register
@{*/
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

/** @defgroup rcc_icscr ICSCR Internal clock sources calibration register
@{*/
#define RCC_ICSCR_HSITRIM_SHIFT		24
#define RCC_ICSCR_HSITRIM_MASK		0x7f

#define RCC_ICSCR_HSICAL0_SHIFT		16
#define RCC_ICSCR_HSICAL0_MASK		0xff
/**@}*/

/** @defgroup rcc_cfgr CFGR Clock configuration register
@{*/
#define RCC_CFGR_MCOPRE_SHIFT		28
#define RCC_CFGR_MCOPRE_MASK		0x07
/** @defgroup rcc_cfgr_mcopre MCOPRE Microcontroller clock output prescaler
@{*/
#define RCC_CFGR_MCOPRE_DIV1	    0
#define RCC_CFGR_MCOPRE_DIV2	    1
#define RCC_CFGR_MCOPRE_DIV4	    2
#define RCC_CFGR_MCOPRE_DIV8	    3
#define RCC_CFGR_MCOPRE_DIV16	    4
/**@}*/

#define RCC_CFGR_MCO_SHIFT		24
#define RCC_CFGR_MCO_MASK		0x0f
/** @defgroup rcc_cfgr_mco MCO Microcontroller clock output selection
@{*/
#define RCC_CFGR_MCO_NOCLK			0x0
#define RCC_CFGR_MCO_SYSCLK			0x1
#define RCC_CFGR_MCO_HSI16			0x3
#define RCC_CFGR_MCO_HSE			0x4
#define RCC_CFGR_MCO_PLL			0x5
#define RCC_CFGR_MCO_LSI			0x6
#define RCC_CFGR_MCO_LSE			0x7
#define RCC_CFGR_MCO_HSI48			0x8
/**@}*/

#define RCC_CFGR_PPRE2_SHIFT		11
#define RCC_CFGR_PPRE2_MASK		0x07
/** @defgroup rcc_cfgr_ppre2 PPRE2 APB high-speed prescaler (APB2)
@{*/
#define RCC_CFGR_PPRE2_NODIV		0x0
#define RCC_CFGR_PPRE2_DIV2		0x4
#define RCC_CFGR_PPRE2_DIV4		0x5
#define RCC_CFGR_PPRE2_DIV8		0x6
#define RCC_CFGR_PPRE2_DIV16		0x7
/**@}*/

#define RCC_CFGR_PPRE1_SHIFT		8
#define RCC_CFGR_PPRE1_MASK		0x07
/** @defgroup rcc_cfgr_ppre1 PPRE1 PB low-speed prescaler (APB1)
@{*/
#define RCC_CFGR_PPRE1_NODIV		0x0
#define RCC_CFGR_PPRE1_DIV2		0x4
#define RCC_CFGR_PPRE1_DIV4		0x5
#define RCC_CFGR_PPRE1_DIV8		0x6
#define RCC_CFGR_PPRE1_DIV16		0x7
/**@}*/

#define RCC_CFGR_HPRE_SHIFT		4
#define RCC_CFGR_HPRE_MASK		0x0f
/** @defgroup rcc_cfgr_hpre HPRE AHB prescaler
@{*/
#define RCC_CFGR_HPRE_NODIV		0x0
#define RCC_CFGR_HPRE_DIV2		0x8
#define RCC_CFGR_HPRE_DIV4		0x9
#define RCC_CFGR_HPRE_DIV8		0xa
#define RCC_CFGR_HPRE_DIV16		0xb
#define RCC_CFGR_HPRE_DIV64		0xc
#define RCC_CFGR_HPRE_DIV128		0xd
#define RCC_CFGR_HPRE_DIV256		0xe
#define RCC_CFGR_HPRE_DIV512		0xf
/**@}*/

#define RCC_CFGR_SWS_SHIFT		2
#define RCC_CFGR_SWS_MASK		0x03
/** @defgroup rcc_cfgr_sws SWS System clock switch status
@{*/
#define RCC_CFGR_SWS_HSI			0x1
#define RCC_CFGR_SWS_HSE			0x2
#define RCC_CFGR_SWS_PLL			0x3
/**@}*/

#define RCC_CFGR_SW_SHIFT		0
#define RCC_CFGR_SW_MASK		0x03
/** @defgroup rcc_cfgr_sw SW System clock switch
@{*/
#define RCC_CFGR_SW_HSI				0x1
#define RCC_CFGR_SW_HSE				0x2
#define RCC_CFGR_SW_PLL				0x3
/**@}*/
/**@}*/

/** @defgroup rcc_pllcfgr PLLCFGR PLL configuration register
@{*/
#define RCC_PLLCFGR_PLLP_SHIFT		27
#define RCC_PLLCFGR_PLLP_MASK		0x1f
/** @defgroup rcc_pllcfgr_pllp_div PLLP_DIV Main PLL division factor for PLLSAI2CLK
 * @brief VCO Division factor P for PLLPCLK clock output [2..31]. Setting PLLPDIV to zero
 * makes PLLP clock control handled by RCC_PLLCFGR_PLLP bit.
@{*/
#define RCC_PLLCFGR_PLLP_PLLPBIT	0
#define RCC_PLLCFGR_PLLP_DIV(x)		(x)
/**@}*/

#define RCC_PLLCFGR_PLLR_SHIFT		25
#define RCC_PLLCFGR_PLLR_MASK		0x03
/** @defgroup rcc_pllcfgr_pllr PLLR Main PLL division factor for PLLCLK (system clock)
@{*/
#define RCC_PLLCFGR_PLLR_DIV2		0
#define RCC_PLLCFGR_PLLR_DIV4		1
#define RCC_PLLCFGR_PLLR_DIV6		2
#define RCC_PLLCFGR_PLLR_DIV8		3
/**@}*/

/** RCC_PLLCFGR_PLLREN Main PLL R output enable **/
#define RCC_PLLCFGR_PLLREN		(1 << 24)

#define RCC_PLLCFGR_PLLQ_SHIFT		21
#define RCC_PLLCFGR_PLLQ_MASK		0x03
/** @defgroup rcc_pllcfgr_pllq PLLQ Main PLL division factor
@{*/
#define RCC_PLLCFGR_PLLQ_DIV2		0
#define RCC_PLLCFGR_PLLQ_DIV4		1
#define RCC_PLLCFGR_PLLQ_DIV6		2
#define RCC_PLLCFGR_PLLQ_DIV8		3
/**@}*/

/** RCC_PLLCFGR_PLLQEN Main PLL Q output enable **/
#define RCC_PLLCFGR_PLLQEN		(1 << 20)
/** RCC_PLLCFGR_PLLP Main PLL P division factor - 0 : PLLPDIV = 7, 1 : PLLPDIV = 17 **/
#define RCC_PLLCFGR_PLLP		(1 << 17)
/** RCC_PLLCFGR_PLLPEN Main PLL P output enable **/
#define RCC_PLLCFGR_PLLPEN		(1 << 16)

#define RCC_PLLCFGR_PLLN_SHIFT		8
#define RCC_PLLCFGR_PLLN_MASK		0x7f
/** @defgroup rcc_pllcfgr_plln PLLN Main PLL multiplication factor for VCO
 * @brief Multiplication factor N [8..127] for PLL VCO output frequency. Frequency must be between 64mhz and 344mhz.
@{*/
#define RCC_PLLCFGR_PLLN_MUL(x)		(x)
/**@}*/

#define RCC_PLLCFGR_PLLM_SHIFT		4
#define RCC_PLLCFGR_PLLM_MASK		0x0f
/** @defgroup rcc_pllcfgr_pllm PLLM Division factor for the main PLL input clock
 * @brief Division factor M [1..16] for PLL input clock. Input frequency must be between 2.66mhz and 8mhz. 
@{*/
#define RCC_PLLCFGR_PLLM_DIV(x)		((x)-1)
/**@}*/

#define RCC_PLLCFGR_PLLSRC_SHIFT		0
#define RCC_PLLCFGR_PLLSRC_MASK		0x03
/** @defgroup rcc_pllcfgr_pllsrc PLLSRC Main PLL entry clock source
@{*/
#define RCC_PLLCFGR_PLLSRC_NONE		0
#define RCC_PLLCFGR_PLLSRC_HSI16	2
#define RCC_PLLCFGR_PLLSRC_HSE		3
/**@}*/
/**@}*/

/** @defgroup rcc_cier CIER Clock interrupt enable register
@{*/
/** RCC_CIER_RC48RDYIE HSI48 ready interrupt enable **/
#define RCC_CIER_RC48RDYIE		(1 << 10)
/** RCC_CIER_LSECSSIE LSE clock security system interrupt enable **/
#define RCC_CIER_LSECSSIE		(1 << 9)
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

/** @defgroup rcc_cifr CIFR Clock interrupt flag register
@{*/
/** RCC_CIFR_RC48RDYF HSI48 ready interrupt flag **/
#define RCC_CIFR_RC48RDYF		(1 << 10)
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

/** @defgroup rcc_cicr CICR Clock interrupt clear register
@{*/
/** RCC_CICR_RC48RDYC HSI48 oscillator ready interrupt clear **/
#define RCC_CICR_RC48RDYC		(1 << 10)
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

/** @defgroup rcc_ahb1rstr AHB1RSTR AHB1 peripheral reset register
@{*/
/** RCC_AHB1RSTR_CRCRST CRC reset **/
#define RCC_AHB1RSTR_CRCRST		(1 << 12)
/** RCC_AHB1RSTR_FLITFRST_ FLITF reset **/
#define RCC_AHB1RSTR_FLITFRST_		(1 << 8)
/** RCC_AHB1RSTR_MATRIXRST MATRIX reset **/
#define RCC_AHB1RSTR_MATRIXRST		(1 << 4)
/** RCC_AHB1RSTR_CORDICRST CORDIC reset **/
#define RCC_AHB1RSTR_CORDICRST		(1 << 3)
/** RCC_AHB1RSTR_DMAMUX1RST DMAMUXRST **/
#define RCC_AHB1RSTR_DMAMUX1RST		(1 << 2)
/** RCC_AHB1RSTR_DMA2RST DMA2 reset **/
#define RCC_AHB1RSTR_DMA2RST		(1 << 1)
/** RCC_AHB1RSTR_DMA1RST DMA1 reset **/
#define RCC_AHB1RSTR_DMA1RST		(1 << 0)
/**@}*/

/** @defgroup rcc_ahb2rstr AHB2RSTR AHB2 peripheral reset register
@{*/
/** RCC_AHB2RSTR_RNGRST Random Number Generator module reset **/
#define RCC_AHB2RSTR_RNGRST		(1 << 26)
/** RCC_AHB2RSTR_CRYPTRST Cryptography module reset **/
#define RCC_AHB2RSTR_CRYPTRST		(1 << 24)
/** RCC_AHB2RSTR_DAC4RST DAC4 interface reset **/
#define RCC_AHB2RSTR_DAC4RST		(1 << 19)
/** RCC_AHB2RSTR_DAC3RST DAC3 interface reset **/
#define RCC_AHB2RSTR_DAC3RST		(1 << 18)
/** RCC_AHB2RSTR_DAC2RST DAC2 interface reset **/
#define RCC_AHB2RSTR_DAC2RST		(1 << 17)
/** RCC_AHB2RSTR_DAC1RST_ DAC1 interface reset **/
#define RCC_AHB2RSTR_DAC1RST_		(1 << 16)
/** RCC_AHB2RSTR_ADC345RST_ SAR ADC345 interface reset **/
#define RCC_AHB2RSTR_ADC345RST_		(1 << 14)
/** RCC_AHB2RSTR_ADC12RST ADC reset **/
#define RCC_AHB2RSTR_ADC12RST		(1 << 13)
/** RCC_AHB2RSTR_GPIOGRST IO port G reset **/
#define RCC_AHB2RSTR_GPIOGRST		(1 << 6)
/** RCC_AHB2RSTR_GPIOFRST IO port F reset **/
#define RCC_AHB2RSTR_GPIOFRST		(1 << 5)
/** RCC_AHB2RSTR_GPIOERST IO port E reset **/
#define RCC_AHB2RSTR_GPIOERST		(1 << 4)
/** RCC_AHB2RSTR_GPIODRST IO port D reset **/
#define RCC_AHB2RSTR_GPIODRST		(1 << 3)
/** RCC_AHB2RSTR_GPIOCRST IO port C reset **/
#define RCC_AHB2RSTR_GPIOCRST		(1 << 2)
/** RCC_AHB2RSTR_GPIOBRST IO port B reset **/
#define RCC_AHB2RSTR_GPIOBRST		(1 << 1)
/** RCC_AHB2RSTR_GPIOARST IO port A reset **/
#define RCC_AHB2RSTR_GPIOARST		(1 << 0)
/**@}*/

/** @defgroup rcc_ahb3rstr AHB3RSTR AHB3 peripheral reset register
@{*/
/** RCC_AHB3RSTR_QUADSPI1RST Quad SPI 1 module reset **/
#define RCC_AHB3RSTR_QUADSPI1RST		(1 << 8)
/** RCC_AHB3RSTR_FMCRST Flexible memory controller reset **/
#define RCC_AHB3RSTR_FMCRST		(1 << 0)
/**@}*/

/** @defgroup rcc_apb1rstr1 APB1RSTR1 APB1 peripheral reset register 1
@{*/
/** RCC_APB1RSTR1_LPTIM1RST Low Power Timer 1 reset **/
#define RCC_APB1RSTR1_LPTIM1RST		(1 << 31)
/** RCC_APB1RSTR1_I2C3 I2C3 interface reset **/
#define RCC_APB1RSTR1_I2C3		(1 << 30)
/** RCC_APB1RSTR1_PWRRST Power interface reset **/
#define RCC_APB1RSTR1_PWRRST		(1 << 28)
/** RCC_APB1RSTR1_FDCANRST FDCAN reset **/
#define RCC_APB1RSTR1_FDCANRST		(1 << 25)
/** RCC_APB1RSTR1_USBDRST USBD reset **/
#define RCC_APB1RSTR1_USBDRST		(1 << 23)
/** RCC_APB1RSTR1_I2C2RST I2C2 reset **/
#define RCC_APB1RSTR1_I2C2RST		(1 << 22)
/** RCC_APB1RSTR1_I2C1RST I2C1 reset **/
#define RCC_APB1RSTR1_I2C1RST		(1 << 21)
/** RCC_APB1RSTR1_UART5RST UART5 reset **/
#define RCC_APB1RSTR1_UART5RST		(1 << 20)
/** RCC_APB1RSTR1_UART4RST UART4 reset **/
#define RCC_APB1RSTR1_UART4RST		(1 << 19)
/** RCC_APB1RSTR1_USART3RST USART3 reset **/
#define RCC_APB1RSTR1_USART3RST		(1 << 18)
/** RCC_APB1RSTR1_USART2RST USART2 reset **/
#define RCC_APB1RSTR1_USART2RST		(1 << 17)
/** RCC_APB1RSTR1_SPI3RST SPI3 reset **/
#define RCC_APB1RSTR1_SPI3RST		(1 << 15)
/** RCC_APB1RSTR1_SPI2RST SPI2 reset **/
#define RCC_APB1RSTR1_SPI2RST		(1 << 14)
/** RCC_APB1RSTR1_CRSRST Clock recovery system reset **/
#define RCC_APB1RSTR1_CRSRST		(1 << 8)
/** RCC_APB1RSTR1_TIM7RST TIM7 timer reset **/
#define RCC_APB1RSTR1_TIM7RST		(1 << 5)
/** RCC_APB1RSTR1_TIM6RST TIM6 timer reset **/
#define RCC_APB1RSTR1_TIM6RST		(1 << 4)
/** RCC_APB1RSTR1_TIM5RST TIM5 timer reset **/
#define RCC_APB1RSTR1_TIM5RST		(1 << 3)
/** RCC_APB1RSTR1_TIM4RST TIM3 timer reset **/
#define RCC_APB1RSTR1_TIM4RST		(1 << 2)
/** RCC_APB1RSTR1_TIM3RST TIM3 timer reset **/
#define RCC_APB1RSTR1_TIM3RST		(1 << 1)
/** RCC_APB1RSTR1_TIM2RST TIM2 timer reset **/
#define RCC_APB1RSTR1_TIM2RST		(1 << 0)
/**@}*/

/** @defgroup rcc_apb1rstr2 APB1RSTR2 APB1 peripheral reset register 2
@{*/
/** RCC_APB1RSTR2_USBPDRST USBPD reset **/
#define RCC_APB1RSTR2_USBPDRST		(1 << 8)
/** RCC_APB1RSTR2_I2C4RST I2C4 reset **/
#define RCC_APB1RSTR2_I2C4RST		(1 << 1)
/** RCC_APB1RSTR2_LPUART1RST Low-power UART 1 reset **/
#define RCC_APB1RSTR2_LPUART1RST		(1 << 0)
/**@}*/

/** @defgroup rcc_apb2rstr APB2RSTR APB2 peripheral reset register
@{*/
/** RCC_APB2RSTR_HRTIM1RST HRTIMER reset **/
#define RCC_APB2RSTR_HRTIM1RST		(1 << 26)
/** RCC_APB2RSTR_SAI1RST Serial audio interface 1 (SAI1) reset **/
#define RCC_APB2RSTR_SAI1RST		(1 << 21)
/** RCC_APB2RSTR_TIM20RST Timer 20 reset **/
#define RCC_APB2RSTR_TIM20RST		(1 << 20)
/** RCC_APB2RSTR_TIM17RST TIM17 timer reset **/
#define RCC_APB2RSTR_TIM17RST		(1 << 18)
/** RCC_APB2RSTR_TIM16RST TIM16 timer reset **/
#define RCC_APB2RSTR_TIM16RST		(1 << 17)
/** RCC_APB2RSTR_TIM15RST TIM15 timer reset **/
#define RCC_APB2RSTR_TIM15RST		(1 << 16)
/** RCC_APB2RSTR_SPI4RST SPI 4 reset **/
#define RCC_APB2RSTR_SPI4RST		(1 << 15)
/** RCC_APB2RSTR_USART1RST USART1 reset **/
#define RCC_APB2RSTR_USART1RST		(1 << 14)
/** RCC_APB2RSTR_TIM8RST TIM8 timer reset **/
#define RCC_APB2RSTR_TIM8RST		(1 << 13)
/** RCC_APB2RSTR_SPI1RST SPI1 reset **/
#define RCC_APB2RSTR_SPI1RST		(1 << 12)
/** RCC_APB2RSTR_TIM1RST TIM1 timer reset **/
#define RCC_APB2RSTR_TIM1RST		(1 << 11)
/** RCC_APB2RSTR_SYSCFGRST System configuration (SYSCFG) reset **/
#define RCC_APB2RSTR_SYSCFGRST		(1 << 0)
/**@}*/

/** @defgroup rcc_ahb1enr AHB1ENR AHB1 peripheral clock enable register
@{*/
/** RCC_AHB1ENR_CRCEN CRC clock enable **/
#define RCC_AHB1ENR_CRCEN		(1 << 12)
/** RCC_AHB1ENR_FLITFEN FLITF clock enable **/
#define RCC_AHB1ENR_FLITFEN		(1 << 8)
/** RCC_AHB1ENR_FMACEN FMAC clock enable **/
#define RCC_AHB1ENR_FMACEN		(1 << 4)
/** RCC_AHB1ENR_CORDICEN CORDIC clock enable **/
#define RCC_AHB1ENR_CORDICEN		(1 << 3)
/** RCC_AHB1ENR_DMAMUXEN DMAMUX clock enable **/
#define RCC_AHB1ENR_DMAMUXEN		(1 << 2)
/** RCC_AHB1ENR_DMA2EN DMA2 clock enable **/
#define RCC_AHB1ENR_DMA2EN		(1 << 1)
/** RCC_AHB1ENR_DMA1EN DMA1 clock enable **/
#define RCC_AHB1ENR_DMA1EN		(1 << 0)
/**@}*/

/** @defgroup rcc_ahb2enr AHB2ENR AHB2 peripheral clock enable register
@{*/
/** RCC_AHB2ENR_RNGEN Random Number Generator clock enable **/
#define RCC_AHB2ENR_RNGEN		(1 << 26)
/** RCC_AHB2ENR_CRYPTEN Cryptography clock enable **/
#define RCC_AHB2ENR_CRYPTEN		(1 << 24)
/** RCC_AHB2ENR_DAC4 DAC4 clock enable **/
#define RCC_AHB2ENR_DAC4		(1 << 19)
/** RCC_AHB2ENR_DAC3 Random Number Generator clock enable **/
#define RCC_AHB2ENR_DAC3		(1 << 18)
/** RCC_AHB2ENR_DAC2 HASH clock enable **/
#define RCC_AHB2ENR_DAC2		(1 << 17)
/** RCC_AHB2ENR_DAC1 AES accelerator clock enable **/
#define RCC_AHB2ENR_DAC1		(1 << 16)
/** RCC_AHB2ENR_ADC345EN DCMI clock enable **/
#define RCC_AHB2ENR_ADC345EN		(1 << 14)
/** RCC_AHB2ENR_ADC12EN ADC clock enable **/
#define RCC_AHB2ENR_ADC12EN		(1 << 13)
/** RCC_AHB2ENR_GPIOGEN IO port G clock enable **/
#define RCC_AHB2ENR_GPIOGEN		(1 << 6)
/** RCC_AHB2ENR_GPIOFEN IO port F clock enable **/
#define RCC_AHB2ENR_GPIOFEN		(1 << 5)
/** RCC_AHB2ENR_GPIOEEN IO port E clock enable **/
#define RCC_AHB2ENR_GPIOEEN		(1 << 4)
/** RCC_AHB2ENR_GPIODEN IO port D clock enable **/
#define RCC_AHB2ENR_GPIODEN		(1 << 3)
/** RCC_AHB2ENR_GPIOCEN IO port C clock enable **/
#define RCC_AHB2ENR_GPIOCEN		(1 << 2)
/** RCC_AHB2ENR_GPIOBEN IO port B clock enable **/
#define RCC_AHB2ENR_GPIOBEN		(1 << 1)
/** RCC_AHB2ENR_GPIOAEN IO port A clock enable **/
#define RCC_AHB2ENR_GPIOAEN		(1 << 0)
/**@}*/

/** @defgroup rcc_ahb3enr AHB3ENR AHB3 peripheral clock enable register
@{*/
/** RCC_AHB3ENR_QUADSPI1EN Quad SPI 1 module clock enable **/
#define RCC_AHB3ENR_QUADSPI1EN		(1 << 8)
/** RCC_AHB3ENR_FMCEN Flexible memory controller clock enable **/
#define RCC_AHB3ENR_FMCEN		(1 << 0)
/**@}*/

/** @defgroup rcc_apb1enr1 APB1ENR1 APB1ENR1
@{*/
/** RCC_APB1ENR1_LPTIM1EN Low power timer 1 clock enable **/
#define RCC_APB1ENR1_LPTIM1EN		(1 << 31)
/** RCC_APB1ENR1_I2C3 OPAMP interface clock enable **/
#define RCC_APB1ENR1_I2C3		(1 << 30)
/** RCC_APB1ENR1_PWREN Power interface clock enable **/
#define RCC_APB1ENR1_PWREN		(1 << 28)
/** RCC_APB1ENR1_FDCANEN FDCAN clock enable **/
#define RCC_APB1ENR1_FDCANEN		(1 << 25)
/** RCC_APB1ENR1_USBDEN USBDclock enable **/
#define RCC_APB1ENR1_USBDEN		(1 << 23)
/** RCC_APB1ENR1_I2C2EN I2C2 clock enable **/
#define RCC_APB1ENR1_I2C2EN		(1 << 22)
/** RCC_APB1ENR1_I2C1EN I2C1 clock enable **/
#define RCC_APB1ENR1_I2C1EN		(1 << 21)
/** RCC_APB1ENR1_UART5EN UART5 clock enable **/
#define RCC_APB1ENR1_UART5EN		(1 << 20)
/** RCC_APB1ENR1_UART4EN UART4 clock enable **/
#define RCC_APB1ENR1_UART4EN		(1 << 19)
/** RCC_APB1ENR1_USART3EN USART3 clock enable **/
#define RCC_APB1ENR1_USART3EN		(1 << 18)
/** RCC_APB1ENR1_USART2EN USART2 clock enable **/
#define RCC_APB1ENR1_USART2EN		(1 << 17)
/** RCC_APB1ENR1_SP3EN SPI3 clock enable **/
#define RCC_APB1ENR1_SP3EN		(1 << 15)
/** RCC_APB1ENR1_SPI2EN SPI2 clock enable **/
#define RCC_APB1ENR1_SPI2EN		(1 << 14)
/** RCC_APB1ENR1_WWDGEN Window watchdog clock enable **/
#define RCC_APB1ENR1_WWDGEN		(1 << 11)
/** RCC_APB1ENR1_RTCAPBEN RTC APB clock enable **/
#define RCC_APB1ENR1_RTCAPBEN		(1 << 10)
/** RCC_APB1ENR1_CRSEN CRSclock enable **/
#define RCC_APB1ENR1_CRSEN		(1 << 8)
/** RCC_APB1ENR1_TIM7EN TIM7 timer clock enable **/
#define RCC_APB1ENR1_TIM7EN		(1 << 5)
/** RCC_APB1ENR1_TIM6EN TIM6 timer clock enable **/
#define RCC_APB1ENR1_TIM6EN		(1 << 4)
/** RCC_APB1ENR1_TIM5EN TIM5 timer clock enable **/
#define RCC_APB1ENR1_TIM5EN		(1 << 3)
/** RCC_APB1ENR1_TIM4EN TIM4 timer clock enable **/
#define RCC_APB1ENR1_TIM4EN		(1 << 2)
/** RCC_APB1ENR1_TIM3EN TIM3 timer clock enable **/
#define RCC_APB1ENR1_TIM3EN		(1 << 1)
/** RCC_APB1ENR1_TIM2EN TIM2 timer clock enable **/
#define RCC_APB1ENR1_TIM2EN		(1 << 0)
/**@}*/

/** @defgroup rcc_apb1enr2 APB1ENR2 APB1 peripheral clock enable register 2
@{*/
/** RCC_APB1ENR2_USBPDEN USBPD clock enable **/
#define RCC_APB1ENR2_USBPDEN		(1 << 8)
/** RCC_APB1ENR2_I2C4EN I2C4 clock enable **/
#define RCC_APB1ENR2_I2C4EN		(1 << 1)
/** RCC_APB1ENR2_LPUART1EN Low power UART 1 clock enable **/
#define RCC_APB1ENR2_LPUART1EN		(1 << 0)

/**@}*/

/** @defgroup rcc_apb2enr APB2ENR APB2ENR
@{*/
/** RCC_APB2ENR_HRTIMEREN HRTIMER clock enable **/
#define RCC_APB2ENR_HRTIMEREN		(1 << 26)
/** RCC_APB2ENR_SAI1EN SAI1 clock enable **/
#define RCC_APB2ENR_SAI1EN		(1 << 21)
/** RCC_APB2ENR_TIM20EN Timer 20 clock enable **/
#define RCC_APB2ENR_TIM20EN		(1 << 20)
/** RCC_APB2ENR_TIM17EN TIM17 timer clock enable **/
#define RCC_APB2ENR_TIM17EN		(1 << 18)
/** RCC_APB2ENR_TIM16EN TIM16 timer clock enable **/
#define RCC_APB2ENR_TIM16EN		(1 << 17)
/** RCC_APB2ENR_TIM15EN TIM15 timer clock enable **/
#define RCC_APB2ENR_TIM15EN		(1 << 16)
/** RCC_APB2ENR_SPI4EN SPI 4 clock enable **/
#define RCC_APB2ENR_SPI4EN		(1 << 15)
/** RCC_APB2ENR_USART1EN USART1clock enable **/
#define RCC_APB2ENR_USART1EN		(1 << 14)
/** RCC_APB2ENR_TIM8EN TIM8 timer clock enable **/
#define RCC_APB2ENR_TIM8EN		(1 << 13)
/** RCC_APB2ENR_SPI1EN SPI1 clock enable **/
#define RCC_APB2ENR_SPI1EN		(1 << 12)
/** RCC_APB2ENR_TIM1EN TIM1 timer clock enable **/
#define RCC_APB2ENR_TIM1EN		(1 << 11)
/** RCC_APB2ENR_SYSCFGEN SYSCFG clock enable **/
#define RCC_APB2ENR_SYSCFGEN		(1 << 0)
/**@}*/

/** @defgroup rcc_ahb1smenr AHB1SMENR AHB1 peripheral clocks enable in Sleep and Stop modes register
@{*/
/** RCC_AHB1SMENR_CRCSMEN CRCSMEN **/
#define RCC_AHB1SMENR_CRCSMEN		(1 << 12)
/** RCC_AHB1SMENR_SRAM1SMEN SRAM1 interface clocks enable during Sleep and Stop modes **/
#define RCC_AHB1SMENR_SRAM1SMEN		(1 << 9)
/** RCC_AHB1SMENR_FLASHSMEN Flash memory interface clocks enable during Sleep and Stop modes **/
#define RCC_AHB1SMENR_FLASHSMEN		(1 << 8)
/** RCC_AHB1SMENR_FMACSMEN FMACSM clock enable **/
#define RCC_AHB1SMENR_FMACSMEN		(1 << 4)
/** RCC_AHB1SMENR_CORDICSMEN CORDIC clock enable during sleep mode **/
#define RCC_AHB1SMENR_CORDICSMEN		(1 << 3)
/** RCC_AHB1SMENR_DMAMUX1SMEN DMAMUX clock enable during Sleep and Stop modes **/
#define RCC_AHB1SMENR_DMAMUX1SMEN		(1 << 2)
/** RCC_AHB1SMENR_DMA2SMEN DMA2 clocks enable during Sleep and Stop modes **/
#define RCC_AHB1SMENR_DMA2SMEN		(1 << 1)
/** RCC_AHB1SMENR_DMA1SMEN DMA1 clocks enable during Sleep and Stop modes **/
#define RCC_AHB1SMENR_DMA1SMEN		(1 << 0)
/**@}*/

/** @defgroup rcc_ahb2smenr AHB2SMENR AHB2 peripheral clocks enable in Sleep and Stop modes register
@{*/
/** RCC_AHB2SMENR_RNGSMEN Random Number Generator clock enable during sleep mode **/
#define RCC_AHB2SMENR_RNGSMEN		(1 << 26)
/** RCC_AHB2SMENR_CRYPTSMEN Cryptography clock enable during sleep mode **/
#define RCC_AHB2SMENR_CRYPTSMEN		(1 << 24)
/** RCC_AHB2SMENR_DAC4SMEN DAC4 clock enable during sleep mode **/
#define RCC_AHB2SMENR_DAC4SMEN		(1 << 19)
/** RCC_AHB2SMENR_DAC3SMEN DAC3 clock enable during sleep mode **/
#define RCC_AHB2SMENR_DAC3SMEN		(1 << 18)
/** RCC_AHB2SMENR_DAC2SMEN HASH clock enable during Sleep and Stop modes **/
#define RCC_AHB2SMENR_DAC2SMEN		(1 << 17)
/** RCC_AHB2SMENR_DAC1SMEN AES accelerator clocks enable during Sleep and Stop modes **/
#define RCC_AHB2SMENR_DAC1SMEN		(1 << 16)
/** RCC_AHB2SMENR_ADC345SMEN DCMI clock enable during Sleep and Stop modes **/
#define RCC_AHB2SMENR_ADC345SMEN		(1 << 14)
/** RCC_AHB2SMENR_AD12CSMEN ADC clocks enable during Sleep and Stop modes **/
#define RCC_AHB2SMENR_AD12CSMEN		(1 << 13)
/** RCC_AHB2SMENR_SRAM3SMEN SRAM2 interface clocks enable during Sleep and Stop modes **/
#define RCC_AHB2SMENR_SRAM3SMEN		(1 << 10)
/** RCC_AHB2SMENR_SRAM2SMEN SRAM2 interface clocks enable during Sleep and Stop modes **/
#define RCC_AHB2SMENR_SRAM2SMEN		(1 << 9)
/** RCC_AHB2SMENR_GPIOGSMEN IO port G clocks enable during Sleep and Stop modes **/
#define RCC_AHB2SMENR_GPIOGSMEN		(1 << 6)
/** RCC_AHB2SMENR_GPIOFSMEN IO port F clocks enable during Sleep and Stop modes **/
#define RCC_AHB2SMENR_GPIOFSMEN		(1 << 5)
/** RCC_AHB2SMENR_GPIOESMEN IO port E clocks enable during Sleep and Stop modes **/
#define RCC_AHB2SMENR_GPIOESMEN		(1 << 4)
/** RCC_AHB2SMENR_GPIODSMEN IO port D clocks enable during Sleep and Stop modes **/
#define RCC_AHB2SMENR_GPIODSMEN		(1 << 3)
/** RCC_AHB2SMENR_GPIOCSMEN IO port C clocks enable during Sleep and Stop modes **/
#define RCC_AHB2SMENR_GPIOCSMEN		(1 << 2)
/** RCC_AHB2SMENR_GPIOBSMEN IO port B clocks enable during Sleep and Stop modes **/
#define RCC_AHB2SMENR_GPIOBSMEN		(1 << 1)
/** RCC_AHB2SMENR_GPIOASMEN IO port A clocks enable during Sleep and Stop modes **/
#define RCC_AHB2SMENR_GPIOASMEN		(1 << 0)
/**@}*/

/** @defgroup rcc_ahb3smenr AHB3SMENR AHB3 peripheral clocks enable in Sleep and Stop modes register
@{*/
/** RCC_AHB3SMENR_QUADSPI1SMEN QUAD SPI 1 module clock enable during sleep mode **/
#define RCC_AHB3SMENR_QUADSPI1SMEN		(1 << 8)
/** RCC_AHB3SMENR_FMCSMEN Flexible memory controller clocks enable during Sleep and Stop modes **/
#define RCC_AHB3SMENR_FMCSMEN		(1 << 0)
/**@}*/

/** @defgroup rcc_apb1smenr1 APB1SMENR1 APB1SMENR1
@{*/
/** RCC_APB1SMENR1_LPTIM1SMEN Low Power Timer1 clock enable during sleep mode **/
#define RCC_APB1SMENR1_LPTIM1SMEN		(1 << 31)
/** RCC_APB1SMENR1_I2C3SMEN_3 I2C 3 interface clock enable during sleep mode **/
#define RCC_APB1SMENR1_I2C3SMEN_3		(1 << 30)
/** RCC_APB1SMENR1_PWRSMEN Power interface clocks enable during Sleep and Stop modes **/
#define RCC_APB1SMENR1_PWRSMEN		(1 << 28)
/** RCC_APB1SMENR1_FDCANSMEN FDCAN clock enable during sleep mode **/
#define RCC_APB1SMENR1_FDCANSMEN		(1 << 25)
/** RCC_APB1SMENR1_I2C3SMEN I2C3 clocks enable during Sleep and Stop modes **/
#define RCC_APB1SMENR1_I2C3SMEN		(1 << 23)
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
/** RCC_APB1SMENR1_SP3SMEN SPI3 clocks enable during Sleep and Stop modes **/
#define RCC_APB1SMENR1_SP3SMEN		(1 << 15)
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

/** @defgroup rcc_apb1smenr2 APB1SMENR2 APB1 peripheral clocks enable in Sleep and Stop modes register 2
@{*/
/** RCC_APB1SMENR2_USBPDSMEN USB PD clock enable during sleep mode **/
#define RCC_APB1SMENR2_USBPDSMEN		(1 << 8)
/** RCC_APB1SMENR2_I2C4SMEN I2C4 clocks enable during Sleep and Stop modes **/
#define RCC_APB1SMENR2_I2C4SMEN		(1 << 1)
/** RCC_APB1SMENR2_LPUART1SMEN Low power UART 1 clocks enable during Sleep and Stop modes **/
#define RCC_APB1SMENR2_LPUART1SMEN		(1 << 0)
/**@}*/

/** @defgroup rcc_apb2smenr APB2SMENR APB2SMENR
@{*/
/** RCC_APB2SMENR_HRTIMERSMEN HRTIMER clock enable during sleep mode **/
#define RCC_APB2SMENR_HRTIMERSMEN		(1 << 26)
/** RCC_APB2SMENR_SAI1SMEN SAI1 clock enable during sleep mode **/
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
/** RCC_BDCR_LSCCOEN Low speed clock output enable **/
#define RCC_BDCR_LSCCOEN		(1 << 24)
/** RCC_BDCR_VSWRST Vswitch domain software reset **/
#define RCC_BDCR_VSWRST		(1 << 16)
/** RCC_BDCR_RTCEN RTC clock enable **/
#define RCC_BDCR_RTCEN		(1 << 15)

#define RCC_BDCR_RTCSEL_SHIFT		8
#define RCC_BDCR_RTCSEL_MASK		0x03
/** @defgroup rcc_bdcr_rtcsel RTCSEL RTC clock source selection
@{*/
#define RCC_BDCR_RTCSEL_NONE		0x0
#define RCC_BDCR_RTCSEL_LSE			0x1
#define RCC_BDCR_RTCSEL_LSI			0x2
#define RCC_BDCR_RTCSEL_HSEDIV32	0x3
/**@}*/

/** RCC_BDCR_LSECSSD LSECSSD **/
#define RCC_BDCR_LSECSSD		(1 << 6)
/** RCC_BDCR_LSECSSON LSECSSON **/
#define RCC_BDCR_LSECSSON		(1 << 5)

#define RCC_BDCR_LSEDRV_SHIFT		3
#define RCC_BDCR_LSEDRV_MASK		0x03
/** @defgroup rcc_bdcr_lsedrv LSEDRV SE oscillator drive capability
@{*/
#define RCC_BDCR_LSEDRV_LOW			0x0
#define RCC_BDCR_LSEDRV_MEDLOW		0x1
#define RCC_BDCR_LSEDRV_MEDHIGH		0x2
#define RCC_BDCR_LSEDRV_HIGH		0x3
/**@}*/

/** RCC_BDCR_LSEBYP LSE oscillator bypass **/
#define RCC_BDCR_LSEBYP		(1 << 2)
/** RCC_BDCR_LSERDY LSE oscillator ready **/
#define RCC_BDCR_LSERDY		(1 << 1)
/** RCC_BDCR_LSEON LSE oscillator enable **/
#define RCC_BDCR_LSEON		(1 << 0)
/**@}*/

/** @defgroup rcc_csr CSR CSR
@{*/
/** RCC_CSR_LPWRSTF Low-power reset flag **/
#define RCC_CSR_LPWRSTF		(1 << 31)
/** RCC_CSR_WWDGRSTF Window watchdog reset flag **/
#define RCC_CSR_WWDGRSTF		(1 << 30)
/** RCC_CSR_WDGRSTF Independent window watchdog reset flag **/
#define RCC_CSR_WDGRSTF		(1 << 29)
/** RCC_CSR_SFTRSTF Software reset flag **/
#define RCC_CSR_SFTRSTF		(1 << 28)
/** RCC_CSR_BORRSTF BOR flag **/
#define RCC_CSR_BORRSTF		(1 << 27)
/** RCC_CSR_PADRSTF Pad reset flag **/
#define RCC_CSR_PADRSTF		(1 << 26)
/** RCC_CSR_OBLRSTF Option byte loader reset flag **/
#define RCC_CSR_OBLRSTF		(1 << 25)
/** RCC_CSR_RMVF Remove reset flag **/
#define RCC_CSR_RMVF		(1 << 23)
/** RCC_CSR_LSIRDY LSI oscillator ready **/
#define RCC_CSR_LSIRDY		(1 << 1)
/** RCC_CSR_LSION LSI oscillator enable **/
#define RCC_CSR_LSION		(1 << 0)
/**@}*/

/** @defgroup rcc_crrcr CRRCR Clock recovery RC register
@{*/
#define RCC_CRRCR_RC48CAL_SHIFT		7
#define RCC_CRRCR_RC48CAL_MASK		0x1ff

/** RCC_CRRCR_RC48RDY HSI48 clock ready flag **/
#define RCC_CRRCR_RC48RDY		(1 << 1)
/** RCC_CRRCR_RC48ON HSI48 clock enable **/
#define RCC_CRRCR_RC48ON		(1 << 0)
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
/**@}*/

/* --- Variable definitions ------------------------------------------------ */

extern uint32_t rcc_ahb_frequency;
extern uint32_t rcc_apb1_frequency;
extern uint32_t rcc_apb2_frequency;

/* --- Function prototypes ------------------------------------------------- */
 
#define _REG_BIT(offset, bit)            (((offset) << 5) + (bit))

enum rcc_osc {
	RCC_HSI,
	RCC_HSE,
	RCC_PLL,
	RCC_LSI,
	RCC_LSE,
};

enum rcc_periph_clken {
	RCC_CRC = _REG_BIT(RCC_AHB1ENR_OFFSET, 12),
	RCC_FLASH = _REG_BIT(RCC_AHB1ENR_OFFSET, 8),
	RCC_FMAC = _REG_BIT(RCC_AHB1ENR_OFFSET, 4),
	RCC_CORDIC = _REG_BIT(RCC_AHB1ENR_OFFSET, 3),
	RCC_DMAMUX1 = _REG_BIT(RCC_AHB1ENR_OFFSET, 2),
	RCC_DMA2 = _REG_BIT(RCC_AHB1ENR_OFFSET, 1),
	RCC_DMA1 = _REG_BIT(RCC_AHB1ENR_OFFSET, 0),

	RCC_RNG = _REG_BIT(RCC_AHB2ENR_OFFSET, 26),
	RCC_AES = _REG_BIT(RCC_AHB2ENR_OFFSET, 24),
	RCC_DAC4 = _REG_BIT(RCC_AHB2ENR_OFFSET, 19),
	RCC_DAC3 = _REG_BIT(RCC_AHB2ENR_OFFSET, 18),
	RCC_DAC2 = _REG_BIT(RCC_AHB2ENR_OFFSET, 17),
	RCC_DAC1 = _REG_BIT(RCC_AHB2ENR_OFFSET, 16),
	RCC_ADC345 = _REG_BIT(RCC_AHB2ENR_OFFSET, 14),
	RCC_ADC12 = _REG_BIT(RCC_AHB2ENR_OFFSET, 13),
	RCC_GPIOG = _REG_BIT(RCC_AHB2ENR_OFFSET, 6),
	RCC_GPIOF = _REG_BIT(RCC_AHB2ENR_OFFSET, 5),
	RCC_GPIOE = _REG_BIT(RCC_AHB2ENR_OFFSET, 4),
	RCC_GPIOD = _REG_BIT(RCC_AHB2ENR_OFFSET, 3),
	RCC_GPIOC = _REG_BIT(RCC_AHB2ENR_OFFSET, 2),
	RCC_GPIOB = _REG_BIT(RCC_AHB2ENR_OFFSET, 1),
	RCC_GPIOA = _REG_BIT(RCC_AHB2ENR_OFFSET, 0),

	RCC_QSPI = _REG_BIT(RCC_AHB3ENR_OFFSET, 8),
	RCC_FMC = _REG_BIT(RCC_AHB3ENR_OFFSET, 0),

	RCC_LPTIM1 = _REG_BIT(RCC_APB1ENR1_OFFSET, 31),
	RCC_I2C3 = _REG_BIT(RCC_APB1ENR1_OFFSET, 30),
	RCC_PWR	 = _REG_BIT(RCC_APB1ENR1_OFFSET, 28),
	RCC_FDCAN = _REG_BIT(RCC_APB1ENR1_OFFSET, 25),
	RCC_USBD = _REG_BIT(RCC_APB1ENR1_OFFSET, 23),
	RCC_I2C2 = _REG_BIT(RCC_APB1ENR1_OFFSET, 22),
	RCC_I2C1 = _REG_BIT(RCC_APB1ENR1_OFFSET, 21),
	RCC_UART5 = _REG_BIT(RCC_APB1ENR1_OFFSET, 20),
	RCC_UART4 = _REG_BIT(RCC_APB1ENR1_OFFSET, 19),
	RCC_USART3 = _REG_BIT(RCC_APB1ENR1_OFFSET, 18),
	RCC_USART2 = _REG_BIT(RCC_APB1ENR1_OFFSET, 17),
	RCC_SPI3 = _REG_BIT(RCC_APB1ENR1_OFFSET, 15),
	RCC_SPI2 = _REG_BIT(RCC_APB1ENR1_OFFSET, 14),
	RCC_WWDG = _REG_BIT(RCC_APB1ENR1_OFFSET, 11),
	RCC_RTCAPB = _REG_BIT(RCC_APB1ENR1_OFFSET, 10),
	RCC_CRS	 = _REG_BIT(RCC_APB1ENR1_OFFSET, 8),
	RCC_TIM7 = _REG_BIT(RCC_APB1ENR1_OFFSET, 5),
	RCC_TIM6 = _REG_BIT(RCC_APB1ENR1_OFFSET, 4),
	RCC_TIM5 = _REG_BIT(RCC_APB1ENR1_OFFSET, 3),
	RCC_TIM4 = _REG_BIT(RCC_APB1ENR1_OFFSET, 2),
	RCC_TIM3 = _REG_BIT(RCC_APB1ENR1_OFFSET, 1),
	RCC_TIM2 = _REG_BIT(RCC_APB1ENR1_OFFSET, 0),

	RCC_UCPD = _REG_BIT(RCC_APB1ENR2_OFFSET, 8),
	RCC_I2C4 = _REG_BIT(RCC_APB1ENR2_OFFSET, 1),
	RCC_LPUART1 = _REG_BIT(RCC_APB1ENR2_OFFSET, 0),

	RCC_HRTIM1 = _REG_BIT(RCC_APB2ENR_OFFSET, 26),
	RCC_SAI1 = _REG_BIT(RCC_APB2ENR_OFFSET, 21),
	RCC_TIM20 = _REG_BIT(RCC_APB2ENR_OFFSET, 20),
	RCC_TIM17 = _REG_BIT(RCC_APB2ENR_OFFSET, 18),
	RCC_TIM16 = _REG_BIT(RCC_APB2ENR_OFFSET, 17),
	RCC_TIM15 = _REG_BIT(RCC_APB2ENR_OFFSET, 16),
	RCC_SPI4 = _REG_BIT(RCC_APB2ENR_OFFSET, 15),
	RCC_USART1 = _REG_BIT(RCC_APB2ENR_OFFSET, 14),
	RCC_TIM8 = _REG_BIT(RCC_APB2ENR_OFFSET, 13),
	RCC_SPI1 = _REG_BIT(RCC_APB2ENR_OFFSET, 12),
	RCC_TIM1 = _REG_BIT(RCC_APB2ENR_OFFSET, 11),
	RCC_SYSCFG = _REG_BIT(RCC_APB2ENR_OFFSET, 0),

	SCC_CRC = _REG_BIT(RCC_AHB1SMENR_OFFSET, 12),
	SCC_SRAM1 = _REG_BIT(RCC_AHB1SMENR_OFFSET, 9),
	SCC_FLASH = _REG_BIT(RCC_AHB1SMENR_OFFSET, 8),
	SCC_FMAC = _REG_BIT(RCC_AHB1SMENR_OFFSET, 4),
	SCC_CORDIC = _REG_BIT(RCC_AHB1SMENR_OFFSET, 3),
	SCC_DMAMUX1 = _REG_BIT(RCC_AHB1SMENR_OFFSET, 2),
	SCC_DMA2 = _REG_BIT(RCC_AHB1SMENR_OFFSET, 1),
	SCC_DMA1 = _REG_BIT(RCC_AHB1SMENR_OFFSET, 0),

	SCC_RNG = _REG_BIT(RCC_AHB2SMENR_OFFSET, 26),
	SCC_AES = _REG_BIT(RCC_AHB2SMENR_OFFSET, 24),
	SCC_DAC4 = _REG_BIT(RCC_AHB2SMENR_OFFSET, 19),
	SCC_DAC3 = _REG_BIT(RCC_AHB2SMENR_OFFSET, 18),
	SCC_DAC2 = _REG_BIT(RCC_AHB2SMENR_OFFSET, 17),
	SCC_DAC1 = _REG_BIT(RCC_AHB2SMENR_OFFSET, 16),
	SCC_ADC345 = _REG_BIT(RCC_AHB2SMENR_OFFSET, 14),
	SCC_ADC12 = _REG_BIT(RCC_AHB2SMENR_OFFSET, 13),
	SCC_SRAM2 = _REG_BIT(RCC_AHB2SMENR_OFFSET, 10),
	SCC_CCMSRAM = _REG_BIT(RCC_AHB2SMENR_OFFSET, 9),
	SCC_GPIOG = _REG_BIT(RCC_AHB2SMENR_OFFSET, 6),
	SCC_GPIOF = _REG_BIT(RCC_AHB2SMENR_OFFSET, 5),
	SCC_GPIOE = _REG_BIT(RCC_AHB2SMENR_OFFSET, 4),
	SCC_GPIOD = _REG_BIT(RCC_AHB2SMENR_OFFSET, 3),
	SCC_GPIOC = _REG_BIT(RCC_AHB2SMENR_OFFSET, 2),
	SCC_GPIOB = _REG_BIT(RCC_AHB2SMENR_OFFSET, 1),
	SCC_GPIOA = _REG_BIT(RCC_AHB2SMENR_OFFSET, 0),

	SCC_QSPI = _REG_BIT(RCC_AHB3SMENR_OFFSET, 8),
	SCC_FMC = _REG_BIT(RCC_AHB3SMENR_OFFSET, 0),

	SCC_LPTIM1 = _REG_BIT(RCC_APB1SMENR1_OFFSET, 31),
	SCC_I2C3 = _REG_BIT(RCC_APB1SMENR1_OFFSET, 30),
	SCC_PWR	 = _REG_BIT(RCC_APB1SMENR1_OFFSET, 28),
	SCC_FDCAN = _REG_BIT(RCC_APB1SMENR1_OFFSET, 25),
	SCC_USBD = _REG_BIT(RCC_APB1SMENR1_OFFSET, 23),
	SCC_I2C2 = _REG_BIT(RCC_APB1SMENR1_OFFSET, 22),
	SCC_I2C1 = _REG_BIT(RCC_APB1SMENR1_OFFSET, 21),
	SCC_UART5 = _REG_BIT(RCC_APB1SMENR1_OFFSET, 20),
	SCC_UART4 = _REG_BIT(RCC_APB1SMENR1_OFFSET, 19),
	SCC_USART3 = _REG_BIT(RCC_APB1SMENR1_OFFSET, 18),
	SCC_USART2 = _REG_BIT(RCC_APB1SMENR1_OFFSET, 17),
	SCC_SPI3 = _REG_BIT(RCC_APB1SMENR1_OFFSET, 15),
	SCC_SPI2 = _REG_BIT(RCC_APB1SMENR1_OFFSET, 14),
	SCC_WWDG = _REG_BIT(RCC_APB1SMENR1_OFFSET, 11),
	SCC_RTCAPB = _REG_BIT(RCC_APB1SMENR1_OFFSET, 10),
	SCC_CRS	 = _REG_BIT(RCC_APB1SMENR1_OFFSET, 8),
	SCC_TIM7 = _REG_BIT(RCC_APB1SMENR1_OFFSET, 5),
	SCC_TIM6 = _REG_BIT(RCC_APB1SMENR1_OFFSET, 4),
	SCC_TIM5 = _REG_BIT(RCC_APB1SMENR1_OFFSET, 3),
	SCC_TIM4 = _REG_BIT(RCC_APB1SMENR1_OFFSET, 2),
	SCC_TIM3 = _REG_BIT(RCC_APB1SMENR1_OFFSET, 1),
	SCC_TIM2 = _REG_BIT(RCC_APB1SMENR1_OFFSET, 0),

	SCC_UCPD = _REG_BIT(RCC_APB1SMENR2_OFFSET, 8),
	SCC_I2C4 = _REG_BIT(RCC_APB1SMENR2_OFFSET, 1),
	SCC_LPUART1 = _REG_BIT(RCC_APB1SMENR2_OFFSET, 0),

	SCC_HRTIM1 = _REG_BIT(RCC_APB2SMENR_OFFSET, 26),
	SCC_SAI1 = _REG_BIT(RCC_APB2SMENR_OFFSET, 21),
	SCC_TIM20 = _REG_BIT(RCC_APB2SMENR_OFFSET, 20),
	SCC_TIM17 = _REG_BIT(RCC_APB2SMENR_OFFSET, 18),
	SCC_TIM16 = _REG_BIT(RCC_APB2SMENR_OFFSET, 17),
	SCC_TIM15 = _REG_BIT(RCC_APB2SMENR_OFFSET, 16),
	SCC_SPI4 = _REG_BIT(RCC_APB2SMENR_OFFSET, 15),
	SCC_USART1 = _REG_BIT(RCC_APB2SMENR_OFFSET, 14),
	SCC_TIM8 = _REG_BIT(RCC_APB2SMENR_OFFSET, 13),
	SCC_SPI1 = _REG_BIT(RCC_APB2SMENR_OFFSET, 12),
	SCC_TIM1 = _REG_BIT(RCC_APB2SMENR_OFFSET, 11),
	SCC_SYSCFG = _REG_BIT(RCC_APB2SMENR_OFFSET, 0),
};

enum rcc_periph_rst {
	RST_CRC = _REG_BIT(RCC_AHB1RSTR_OFFSET, 12),
	RST_FLASH = _REG_BIT(RCC_AHB1RSTR_OFFSET, 8),
	RST_FMAC = _REG_BIT(RCC_AHB1RSTR_OFFSET, 4),
	RST_CORDIC = _REG_BIT(RCC_AHB1RSTR_OFFSET, 3),
	RST_DMAMUX1 = _REG_BIT(RCC_AHB1RSTR_OFFSET, 2),
	RST_DMA2 = _REG_BIT(RCC_AHB1RSTR_OFFSET, 1),
	RST_DMA1 = _REG_BIT(RCC_AHB1RSTR_OFFSET, 0),

	RST_RNG = _REG_BIT(RCC_AHB2RSTR_OFFSET, 26),
	RST_AES = _REG_BIT(RCC_AHB2RSTR_OFFSET, 24),
	RST_DAC4 = _REG_BIT(RCC_AHB2RSTR_OFFSET, 19),
	RST_DAC3 = _REG_BIT(RCC_AHB2RSTR_OFFSET, 18),
	RST_DAC2 = _REG_BIT(RCC_AHB2RSTR_OFFSET, 17),
	RST_DAC1 = _REG_BIT(RCC_AHB2RSTR_OFFSET, 16),
	RST_ADC345 = _REG_BIT(RCC_AHB2RSTR_OFFSET, 14),
	RST_ADC12 = _REG_BIT(RCC_AHB2RSTR_OFFSET, 13),
	RST_GPIOG = _REG_BIT(RCC_AHB2RSTR_OFFSET, 6),
	RST_GPIOF = _REG_BIT(RCC_AHB2RSTR_OFFSET, 5),
	RST_GPIOE = _REG_BIT(RCC_AHB2RSTR_OFFSET, 4),
	RST_GPIOD = _REG_BIT(RCC_AHB2RSTR_OFFSET, 3),
	RST_GPIOC = _REG_BIT(RCC_AHB2RSTR_OFFSET, 2),
	RST_GPIOB = _REG_BIT(RCC_AHB2RSTR_OFFSET, 1),
	RST_GPIOA = _REG_BIT(RCC_AHB2RSTR_OFFSET, 0),

	RST_QSPI = _REG_BIT(RCC_AHB3RSTR_OFFSET, 8),
	RST_FMC = _REG_BIT(RCC_AHB3RSTR_OFFSET, 0),

	RST_LPTIM1 = _REG_BIT(RCC_APB1RSTR1_OFFSET, 31),
	RST_I2C3 = _REG_BIT(RCC_APB1RSTR1_OFFSET, 30),
	RST_PWR	 = _REG_BIT(RCC_APB1RSTR1_OFFSET, 28),
	RST_FDCAN = _REG_BIT(RCC_APB1RSTR1_OFFSET, 25),
	RST_USBD = _REG_BIT(RCC_APB1RSTR1_OFFSET, 23),
	RST_I2C2 = _REG_BIT(RCC_APB1RSTR1_OFFSET, 22),
	RST_I2C1 = _REG_BIT(RCC_APB1RSTR1_OFFSET, 21),
	RST_UART5 = _REG_BIT(RCC_APB1RSTR1_OFFSET, 20),
	RST_UART4 = _REG_BIT(RCC_APB1RSTR1_OFFSET, 19),
	RST_USART3 = _REG_BIT(RCC_APB1RSTR1_OFFSET, 18),
	RST_USART2 = _REG_BIT(RCC_APB1RSTR1_OFFSET, 17),
	RST_SPI3 = _REG_BIT(RCC_APB1RSTR1_OFFSET, 15),
	RST_SPI2 = _REG_BIT(RCC_APB1RSTR1_OFFSET, 14),
	RST_CRS	 = _REG_BIT(RCC_APB1RSTR1_OFFSET, 8),
	RST_TIM7 = _REG_BIT(RCC_APB1RSTR1_OFFSET, 5),
	RST_TIM6 = _REG_BIT(RCC_APB1RSTR1_OFFSET, 4),
	RST_TIM5 = _REG_BIT(RCC_APB1RSTR1_OFFSET, 3),
	RST_TIM4 = _REG_BIT(RCC_APB1RSTR1_OFFSET, 2),
	RST_TIM3 = _REG_BIT(RCC_APB1RSTR1_OFFSET, 1),
	RST_TIM2 = _REG_BIT(RCC_APB1RSTR1_OFFSET, 0),

	RST_UCPD = _REG_BIT(RCC_APB1RSTR2_OFFSET, 8),
	RST_I2C4 = _REG_BIT(RCC_APB1RSTR2_OFFSET, 1),
	RST_LPUART1 = _REG_BIT(RCC_APB1RSTR2_OFFSET, 0),

	RST_HRTIM1 = _REG_BIT(RCC_APB2RSTR_OFFSET, 26),
	RST_SAI1 = _REG_BIT(RCC_APB2RSTR_OFFSET, 21),
	RST_TIM20 = _REG_BIT(RCC_APB2RSTR_OFFSET, 20),
	RST_TIM17 = _REG_BIT(RCC_APB2RSTR_OFFSET, 18),
	RST_TIM16 = _REG_BIT(RCC_APB2RSTR_OFFSET, 17),
	RST_TIM15 = _REG_BIT(RCC_APB2RSTR_OFFSET, 16),
	RST_SPI4 = _REG_BIT(RCC_APB2RSTR_OFFSET, 15),
	RST_USART1 = _REG_BIT(RCC_APB2RSTR_OFFSET, 14),
	RST_TIM8 = _REG_BIT(RCC_APB2RSTR_OFFSET, 13),
	RST_SPI1 = _REG_BIT(RCC_APB2RSTR_OFFSET, 12),
	RST_TIM1 = _REG_BIT(RCC_APB2RSTR_OFFSET, 11),
	RST_SYSCFG = _REG_BIT(RCC_APB2RSTR_OFFSET, 0),
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

#endif

/**@}*/
