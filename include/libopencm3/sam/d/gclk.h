/** @defgroup gclk_defines GCLK Defines
 *
 * @ingroup SAMD_defines
 *
 * This file is part of the libopencm3 project.
 *
 * Copyright (C) 2019 Guillaume Revaillot <g.revaillot@gmail.com>
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
 */

#pragma once

#include <libopencm3/cm3/common.h>
#include <libopencm3/sam/memorymap.h>

/**@{*/

/* --- GCLK: Generic Clock Generator -------------------------------- */

/** @defgroup gclk_registers Generic Clock Generator Register
@{*/

/** GCLK_CTRL Control **/
#define GCLK_CTRL			MMIO32(GCLK_BASE + 0x00)
/** GCLK_STATUS Status **/
#define GCLK_STATUS			MMIO32(GCLK_BASE + 0x01)
/** GCLK_CLKCTRL Generic Clock Control **/
#define GCLK_CLKCTRL			MMIO32(GCLK_BASE + 0x02)
/** GCLK_GENCTRL Generic Clock Generator Control **/
#define GCLK_GENCTRL			MMIO32(GCLK_BASE + 0x04)
#define GCLK_GENCTRL8			MMIO8(GCLK_BASE + 0x04)

/** GCLK_GENDIV Generic Clock Generator Division **/
#define GCLK_GENDIV			MMIO32(GCLK_BASE + 0x08)
#define GCLK_GENDIV8			MMIO8(GCLK_BASE + 0x08)

/**@}*/

/** @defgroup gclk_ctrl CTRL Control
@{*/

/** GCLK_CTRL_SWRST Software Reset **/
#define GCLK_CTRL_SWRST		(1 << 0)

/**@}*/

/** @defgroup gclk_status STATUS Status
@{*/

/** GCLK_STATUS_SYNCBUSY Synchronization Busy Status **/
#define GCLK_STATUS_SYNCBUSY		(1 << 7)

/**@}*/

/** @defgroup gclk_clkctrl CLKCTRL Generic Clock Control
@{*/

/** GCLK_CLKCTRL_WRTLOCK Write Lock **/
#define GCLK_CLKCTRL_WRTLOCK		(1 << 15)
/** GCLK_CLKCTRL_CLKEN Clock Enable **/
#define GCLK_CLKCTRL_CLKEN		(1 << 14)

#define GCLK_CLKCTRL_GEN_SHIFT		8
#define GCLK_CLKCTRL_GEN_MASK		0x0f
/** @defgroup gclk_clkctrl_gen GEN Generic Clock Generator (0-8)
@{*/
/**@}*/

#define GCLK_CLKCTRL_ID_SHIFT		0
#define GCLK_CLKCTRL_ID_MASK		0x3f

/**@}*/

/** @defgroup gclk_genctrl GENCTRL Generic Clock Generator Control
@{*/

/** GCLK_GENCTRL_RUNSTDBY Run in Standby **/
#define GCLK_GENCTRL_RUNSTDBY		(1 << 21)
/** GCLK_GENCTRL_DIVSEL Divide Selection **/
#define GCLK_GENCTRL_DIVSEL		(1 << 20)
/** GCLK_GENCTRL_OE Output Enable **/
#define GCLK_GENCTRL_OE		(1 << 19)
/** GCLK_GENCTRL_OOV Output Off Value **/
#define GCLK_GENCTRL_OOV		(1 << 18)
/** GCLK_GENCTRL_IDC Improve Duty Cycle **/
#define GCLK_GENCTRL_IDC		(1 << 17)
/** GCLK_GENCTRL_GENEN Generic Clock Generator Enable **/
#define GCLK_GENCTRL_GENEN		(1 << 16)

#define GCLK_GENCTRL_SRC_SHIFT		8
#define GCLK_GENCTRL_SRC_MASK		0x1f
/** @defgroup gclk_genctrl_src SRC Source Select
@{*/
#define GCLK_XOSC 			0x00	/** XOSC oscillator output */
#define GCLK_GCLKIN       0x01	/** Generator input pad */
#define GCLK_GCLKGEN1     0x02   /** Generic clock generator 1 output */
#define GCLK_OSCULP32K    0x03   /** OSCULP32K oscillator output */
#define GCLK_OSC32K       0x04   /** OSC32K oscillator output */
#define GCLK_XOSC32K      0x05   /** XOSC32K oscillator output */
#define GCLK_OSC8M        0x06   /** OSC8M oscillator output */
#define GCLK_DFLL48M      0x07   /** DFLL48M output */
#define GCLK_FDPLL96M     0x08   /** FDPLL96M output */
/**@}*/

#define GCLK_GENCTRL_ID_SHIFT		0
#define GCLK_GENCTRL_ID_MASK		0x0f

/**@}*/

/** @defgroup gclk_gendiv GENDIV Generic Clock Generator Division
@{*/
#define GCLK_GENDIV_DIV_SHIFT		8
#define GCLK_GENDIV_DIV_MASK		0xffff
/** @defgroup gclk_gendiv_div DIV Division Factor
@{*/
/**@}*/

#define GCLK_GENDIV_ID_SHIFT		0
#define GCLK_GENDIV_ID_MASK		0x0f
/** @defgroup gclk_gendiv_id ID Generic Clock Generator Selection
@{*/
/**@}*/

/**@}*/

/** @defgroup gclk_id ID Generic Clock Selection ID
@{*/
#define	GCLK_DFLL48M_REF			0x00 /** DFLL48M Reference */
#define	GCLK_DPLL					0x01 /** FDPLL96M input clock source for reference */
#define	GCLK_DPLL_32K				0x02 /** FDPLL96M 32 kHz clock for FDPLL96M internal lock */
#define	GCLK_WDT					0x03 
#define	GCLK_RTC					0x04 
#define	GCLK_EIC					0x05 
#define	GCLK_USB					0x06 
#define	GCLK_EVSYS_CHANNEL_0		0x07 
#define	GCLK_EVSYS_CHANNEL_1		0x08 
#define	GCLK_EVSYS_CHANNEL_2		0x09 
#define	GCLK_EVSYS_CHANNEL_3		0x0A 
#define	GCLK_EVSYS_CHANNEL_4		0x0B 
#define	GCLK_EVSYS_CHANNEL_5		0x0C 
#define	GCLK_EVSYS_CHANNEL_6		0x0D 
#define	GCLK_EVSYS_CHANNEL_7		0x0E 
#define	GCLK_EVSYS_CHANNEL_8		0x0F 
#define	GCLK_EVSYS_CHANNEL_9		0x10 
#define	GCLK_EVSYS_CHANNEL_10		0x11 
#define	GCLK_EVSYS_CHANNEL_11		0x12 
#define	GCLK_SERCOMx_SLOW			0x13 
#define	GCLK_SERCOM0_CORE			0x14 
#define	GCLK_SERCOM1_CORE			0x15 
#define	GCLK_SERCOM2_CORE			0x16 
#define	GCLK_SERCOM3_CORE			0x17 
#define	GCLK_SERCOM4_CORE			0x18 
#define	GCLK_SERCOM5_CORE			0x19 
#define	GCLK_TCC0_TCC1				0x1A 
#define	GCLK_TCC2_TC3				0x1B 
#define	GCLK_TC4_TC5				0x1C 
#define	GCLK_TC6_TC7				0x1D 
#define	GCLK_ADC					0x1E 
#define	GCLK_AC_DIG_AC1_DIG			0x1F
#define	GCLK_AC_ANA_AC1_ANA			0x20
#define	GCLK_DAC					0x21
#define	GCLK_PTC					0x22
#define	GCLK_I2S_0					0x23
#define	GCLK_I2S_1					0x24
#define	GCLK_TCC3					0x25
/**@}*/


BEGIN_DECLS

bool gclk_get_swrst_flag(void);
bool gclk_get_syncbusy_flag(void);

void gclk_reset(void);

void gclk_select_generator_ctrl(uint8_t generator);
void gclk_select_clk_ctrl(uint8_t clk);

void gclk_enable_generator(uint8_t generator);
void gclk_disable_generator(uint8_t generator);

void gclk_set_generator_clk_src(uint8_t generator, uint8_t clk_src);

void gclk_set_generator_clk_division(uint8_t generator, uint8_t prescaler);
void gclk_enable_generator_divsel(uint8_t generator);
void gclk_disable_generator_divsel(uint8_t generator);

void gclk_disable_generator_output(uint8_t generator);
void gclk_enable_generator_output(uint8_t generator);

void gclk_set_clk_generator(uint8_t clk, uint8_t generator);
void gclk_enable_clk(uint8_t clk);
void gclk_disable_clk(uint8_t clk);

END_DECLS

/**@}*/
