/** @defgroup pm_defines PM Defines
 *
 * @ingroup SAMD_defines
 *
 * This file is part of the libopencm3 project.
 *
 * Copyright (C) 2019 Guillaume Revaillot <revaillot@archos.com>
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

/*@{*/

#pragma once

#include <libopencm3/sam/memorymap.h>
#include <libopencm3/sam/common/pm_common_dlr.h>

/** @defgroup pm_registers Power Manager Register
@{*/

/** PM_CTRL Control **/
#define PM_CTRL			MMIO32(PM_BASE + 0x00)
/** PM_SLEEP Sleep Mode **/
#define PM_SLEEP			MMIO32(PM_BASE + 0x01)
/** PM_EXTCTRL External Reset Controller **/
#define PM_EXTCTRL			MMIO32(PM_BASE + 0x02)
/** PM_CPUSEL CPU Clock Select **/
#define PM_CPUSEL			MMIO32(PM_BASE + 0x08)
/** PM_APBASEL APBA Clock Select **/
#define PM_APBASEL			MMIO8(PM_BASE + 0x09)
/** PM_APBBSEL APBB Clock Select **/
#define PM_APBBSEL			MMIO8(PM_BASE + 0x0a)
/** PM_APBCSEL APBC Clock Select **/
#define PM_APBCSEL			MMIO8(PM_BASE + 0x0b)
/** PM_AHBMASK AHB Mask **/
#define PM_AHBMASK			MMIO32(PM_BASE + 0x14)
/** PM_APBAMASK APBA Mask **/
#define PM_APBAMASK			MMIO32(PM_BASE + 0x18)
/** PM_APBBMASK APBB Mask **/
#define PM_APBBMASK			MMIO32(PM_BASE + 0x1c)
/** PM_APBCMASK APBC Mask **/
#define PM_APBCMASK			MMIO32(PM_BASE + 0x20)
/** PM_INTENCLR Interrupt Enable Clear **/
#define PM_INTENCLR			MMIO32(PM_BASE + 0x34)
/** PM_INTENSET Interrupt Enable Set **/
#define PM_INTENSET			MMIO32(PM_BASE + 0x35)
/** PM_INTFLAG Interrupt Flag Status and Clear **/
#define PM_INTFLAG			MMIO32(PM_BASE + 0x36)
/** PM_RCAUSE Reset Cause **/
#define PM_RCAUSE			MMIO32(PM_BASE + 0x38)

/**@}*/


/** @defgroup pm_ctrl CTRL Control
@{*/
/**@}*/

/** @defgroup pm_sleep SLEEP Sleep Mode
@{*/

#define PM_SLEEP_IDLE_SHIFT		0
#define PM_SLEEP_IDLE_MASK		0x03
/** @defgroup pm_sleep_idle IDLE Idle Mode Configuration
@{*/
/**@}*/

/**@}*/

/** @defgroup pm_extctrl EXTCTRL External Reset Controller
@{*/

/** PM_EXTCTRL_SETDIS External Reset Disable **/
#define PM_EXTCTRL_SETDIS		(1 << 0)

/**@}*/

/** @defgroup pm_cpusel CPUSEL CPU Clock Select
@{*/

#define PM_CPUSEL_CPUDIV_SHIFT		0
#define PM_CPUSEL_CPUDIV_MASK		0x07
/** @defgroup pm_cpusel_cpudiv CPUDIV CPU Prescaler Selection
@{*/
#define PM_CPUSEL_CPUDIV_NODIV		0x0
#define PM_CPUSEL_CPUDIV_DIV2		0x1
#define PM_CPUSEL_CPUDIV_DIV4		0x2
#define PM_CPUSEL_CPUDIV_DIV8		0x3
#define PM_CPUSEL_CPUDIV_DIV16		0x4
#define PM_CPUSEL_CPUDIV_DIV32		0x5
#define PM_CPUSEL_CPUDIV_DIV64		0x6
#define PM_CPUSEL_CPUDIV_DIV128		0x7
/**@}*/


/**@}*/

/** @defgroup pm_apbasel APBASEL APBA Clock Select
@{*/

#define PM_APBASEL_APBADIV_SHIFT		0
#define PM_APBASEL_APBADIV_MASK		0x07
/** @defgroup pm_apbasel_apbadiv APBADIV APBA Prescaler Selection
@{*/
#define PM_CPUSEL_APBADIV_NODIV		0x0
#define PM_CPUSEL_APBADIV_DIV2		0x1
#define PM_CPUSEL_APBADIV_DIV4		0x2
#define PM_CPUSEL_APBADIV_DIV8		0x3
#define PM_CPUSEL_APBADIV_DIV16		0x4
#define PM_CPUSEL_APBADIV_DIV32		0x5
#define PM_CPUSEL_APBADIV_DIV64		0x6
#define PM_CPUSEL_APBADIV_DIV128		0x7
/**@}*/

/**@}*/

/** @defgroup pm_apbbsel APBBSEL APBB Clock Select
@{*/

#define PM_APBBSEL_APBBDIV_SHIFT		0
#define PM_APBBSEL_APBBDIV_MASK		0x07
/** @defgroup pm_apbbsel_apbbdiv APBBDIV APBB Prescaler Selection
@{*/
#define PM_CPUSEL_APBBDIV_NODIV		0x0
#define PM_CPUSEL_APBBDIV_DIV2		0x1
#define PM_CPUSEL_APBBDIV_DIV4		0x2
#define PM_CPUSEL_APBBDIV_DIV8		0x3
#define PM_CPUSEL_APBBDIV_DIV16		0x4
#define PM_CPUSEL_APBBDIV_DIV32		0x5
#define PM_CPUSEL_APBBDIV_DIV64		0x6
#define PM_CPUSEL_APBBDIV_DIV128		0x7
/**@}*/

/**@}*/

/** @defgroup pm_apbcsel APBCSEL APBC Clock Select
@{*/

#define PM_APBCSEL_APBCDIV_SHIFT		0
#define PM_APBCSEL_APBCDIV_MASK		0x07
/** @defgroup pm_apbcsel_apbcdiv APBCDIV APBC Prescaler Selection
@{*/
#define PM_CPUSEL_APBCDIV_NODIV		0x0
#define PM_CPUSEL_APBCDIV_DIV2		0x1
#define PM_CPUSEL_APBCDIV_DIV4		0x2
#define PM_CPUSEL_APBCDIV_DIV8		0x3
#define PM_CPUSEL_APBCDIV_DIV16		0x4
#define PM_CPUSEL_APBCDIV_DIV32		0x5
#define PM_CPUSEL_APBCDIV_DIV64		0x6
#define PM_CPUSEL_APBCDIV_DIV128		0x7
/**@}*/

/**@}*/

/** @defgroup pm_ahbmask AHBMASK AHB Mask
@{*/

/** PM_AHBMASK_USB USB AHB Clock Mask **/
#define PM_AHBMASK_USB			(1 << 6)
/** PM_AHBMASK_DMAC DMAC AHB Clock Mask **/
#define PM_AHBMASK_DMAC			(1 << 5)
/** PM_AHBMASK_NVMCTRL NVMCTRL AHB Clock Mask **/
#define PM_AHBMASK_NVMCTRL		(1 << 4)
/** PM_AHBMASK_DSU DSU AHB Clock Mask **/
#define PM_AHBMASK_DSU			(1 << 3)
/** PM_AHBMASK_HPB2 HPB2 AHB Clock Mask **/
#define PM_AHBMASK_HPB2			(1 << 2)
/** PM_AHBMASK_HPB1 HPB1 AHB Clock Mask **/
#define PM_AHBMASK_HPB1			(1 << 1)
/** PM_AHBMASK_HPB0 HPB0 AHB Clock Mask **/
#define PM_AHBMASK_HPB0			(1 << 0)

/**@}*/

/** @defgroup pm_apbamask APBAMASK APBA Mask
@{*/

/** PM_APBAMASK_EIC EIC APB Clock Enable **/
#define PM_APBAMASK_EIC			(1 << 6)
/** PM_APBAMASK_RTC RTC APB Clock Enable **/
#define PM_APBAMASK_RTC			(1 << 5)
/** PM_APBAMASK_WDT WDT APB Clock Enable **/
#define PM_APBAMASK_WDT			(1 << 4)
/** PM_APBAMASK_GCLK GCLK APB Clock Enable **/
#define PM_APBAMASK_GCLK		(1 << 3)
/** PM_APBAMASK_SYSCTRL SYSCTRL APB Clock Enable **/
#define PM_APBAMASK_SYSCTRL		(1 << 2)
/** PM_APBAMASK_PM PM APB Clock Enable **/
#define PM_APBAMASK_PM			(1 << 1)
/** PM_APBAMASK_PAC0 PAC0 APB Clock Enable **/
#define PM_APBAMASK_PAC0			(1 << 0)

/**@}*/

/** @defgroup pm_apbbmask APBBMASK APBB Mask
@{*/

/** PM_APBBMASK_HMATRIX HMATRIX APB Clock Enable **/
#define PM_APBBMASK_HMATRIX			(1 << 6)
/** PM_APBBMASK_USB USB APB Clock Enable **/
#define PM_APBBMASK_USB			(1 << 5)
/** PM_APBBMASK_DMAC DMAC APB Clock Enable **/
#define PM_APBBMASK_DMAC			(1 << 4)
/** PM_APBBMASK_PORT PORT APB Clock Enable **/
#define PM_APBBMASK_PORT			(1 << 3)
/** PM_APBBMASK_NVMCTRL NVMCTRL APB Clock Enable **/
#define PM_APBBMASK_NVMCTRL			(1 << 2)
/** PM_APBBMASK_DSU DSU APB Clock Enable **/
#define PM_APBBMASK_DSU			(1 << 1)
/** PM_APBBMASK_PAC1 PAC1 APB Clock Enable **/
#define PM_APBBMASK_PAC1			(1 << 0)

/**@}*/

/** @defgroup pm_apbcmask APBCMASK APBC Mask
@{*/

/** PM_APBCMASK_I2S I2S APB Clock Enable **/
#define PM_APBCMASK_I2S			(1 << 20)
/** PM_APBCMASK_PTC PTC APB Clock Enable **/
#define PM_APBCMASK_PTC			(1 << 19)
/** PM_APBCMASK_DAC DAC APB Clock Enable **/
#define PM_APBCMASK_DAC			(1 << 18)
/** PM_APBCMASK_AC AC APB Clock Enable **/
#define PM_APBCMASK_AC			(1 << 17)
/** PM_APBCMASK_ADC ADC APB Clock Enable **/
#define PM_APBCMASK_ADC			(1 << 16)
/** PM_APBCMASK_TC5 TC5 APB Clock Enable **/
#define PM_APBCMASK_TC5			(1 << 13)
/** PM_APBCMASK_TC4 TC4 APB Clock Enable **/
#define PM_APBCMASK_TC4			(1 << 12)
/** PM_APBCMASK_TC3 TC3 APB Clock Enable **/
#define PM_APBCMASK_TC3			(1 << 11)
/** PM_APBCMASK_TCC2 TCC2 APB Clock Enable **/
#define PM_APBCMASK_TCC2			(1 << 10)
/** PM_APBCMASK_TCC1 TCC1 APB Clock Enable **/
#define PM_APBCMASK_TCC1			(1 << 9)
/** PM_APBCMASK_TCC0 TCC0 APB Clock Enable **/
#define PM_APBCMASK_TCC0			(1 << 8)
/** PM_APBCMASK_SERCOM3 SERCOM3 APB Clock Enable **/
#define PM_APBCMASK_SERCOM3			(1 << 5)
/** PM_APBCMASK_SERCOM2 SERCOM2 APB Clock Enable **/
#define PM_APBCMASK_SERCOM2			(1 << 4)
/** PM_APBCMASK_SERCOM1 SERCOM1 APB Clock Enable **/
#define PM_APBCMASK_SERCOM1			(1 << 3)
/** PM_APBCMASK_SERCOM0 SERCOM0 APB Clock Enable **/
#define PM_APBCMASK_SERCOM0			(1 << 2)
/** PM_APBCMASK_EVSYS EVSYS APB Clock Enable **/
#define PM_APBCMASK_EVSYS			(1 << 1)
/** PM_APBCMASK_PAC2 PAC2 APB Clock Enable **/
#define PM_APBCMASK_PAC2			(1 << 0)

/**@}*/

/** @defgroup pm_intenclr INTENCLR Interrupt Enable Clear
@{*/
/** PM_INTENCLR_CKRDY Clock Ready Interrupt Enable **/
#define PM_INTENCLR_CKRDY		(1 << 0)
/**@}*/

/** @defgroup pm_intenset INTENSET Interrupt Enable Set
@{*/
/** PM_INTENSET_CKRDY Clock Ready Interrupt Enable **/
#define PM_INTENSET_CKRDY		(1 << 0)
/**@}*/

/** @defgroup pm_intflag INTFLAG Interrupt Flag Status and Clear
@{*/

/** PM_INTFLAG_CKRDY Clock Ready **/
#define PM_INTFLAG_CKRDY		(1 << 0)
/**@}*/

/** @defgroup pm_rcause RCAUSE Reset Cause
@{*/

/** PM_RCAUSE_SYST System Reset Request **/
#define PM_RCAUSE_SYST		(1 << 6)
/** PM_RCAUSE_WDT Watchdog Reset **/
#define PM_RCAUSE_WDT		(1 << 5)
/** PM_RCAUSE_EXT External Reset **/
#define PM_RCAUSE_EXT		(1 << 4)
/** PM_RCAUSE_BOD33 Brown Out 33 Detector Reset **/
#define PM_RCAUSE_BOD33		(1 << 2)
/** PM_RCAUSE_BOD12 Brown Out 12 Detector Reset **/
#define PM_RCAUSE_BOD12		(1 << 1)
/** PM_RCAUSE_POR Power On Reset **/
#define PM_RCAUSE_POR		(1 << 0)

/**@}*/

#define _REG_BIT(reg, bit)		(((reg & 0xff) << 5) | (bit))

// D20 / D21
enum pm_periph_clken {
	PM_HBP0	= _REG_BIT(0x14, 0),
	PM_HBP1	= _REG_BIT(0x14, 1),
	PM_HPB2	= _REG_BIT(0x14, 2),
	PM_DSU_AHB	= _REG_BIT(0x14, 3),
	PM_NVMCTRL_AHB	= _REG_BIT(0x14, 4),
	PM_DMAC_AHB	= _REG_BIT(0x14, 5),
	PM_USB_AHB = _REG_BIT(0x14, 6),

	PM_PAC0	= _REG_BIT(0x18, 0),
	PM_PM	= _REG_BIT(0x18, 1),
	PM_SYSCTRL	= _REG_BIT(0x18, 2),
	PM_GCLK	= _REG_BIT(0x18, 3),
	PM_WDT	= _REG_BIT(0x18, 4),
	PM_RTC	= _REG_BIT(0x18, 5),
	PM_EIC	= _REG_BIT(0x18, 6),

	PM_PAC1	= _REG_BIT(0x1c, 0),
	PM_DSU_APB	= _REG_BIT(0x1c, 1),
	PM_NVMCTRL_APB	= _REG_BIT(0x1c, 2),
	PM_PORT	= _REG_BIT(0x1c, 3),
	PM_DMAC_APB	= _REG_BIT(0x1c, 4),
	PM_USB_APB	= _REG_BIT(0x1c, 5),

	PM_PAC2	= _REG_BIT(0x20, 0),
	PM_EVSYS = _REG_BIT(0x20, 1),
	PM_SERCOM0	= _REG_BIT(0x20, 2),
	PM_SERCOM1	= _REG_BIT(0x20, 3),
	PM_SERCOM2	= _REG_BIT(0x20, 4),
	PM_SERCOM3	= _REG_BIT(0x20, 5),
	PM_SERCOM4	= _REG_BIT(0x20, 6),
	PM_SERCOM5	= _REG_BIT(0x20, 7),
	PM_TCC0	= _REG_BIT(0x20, 8),
	PM_TCC1	= _REG_BIT(0x20, 9),
	PM_TCC2	= _REG_BIT(0x20, 10),
	PM_TC3	= _REG_BIT(0x20, 11),
	PM_TC4	= _REG_BIT(0x20, 12),
	PM_TC5	= _REG_BIT(0x20, 13),
	PM_TC6	= _REG_BIT(0x20, 14),
	PM_TC7	= _REG_BIT(0x20, 15),
	PM_ADC	= _REG_BIT(0x20, 16),
	PM_AC	= _REG_BIT(0x20, 17),
	PM_DAC	= _REG_BIT(0x20, 18),
	PM_PTC	= _REG_BIT(0x20, 19),
	PM_I2C	= _REG_BIT(0x20, 20),
	PM_I2S	= _REG_BIT(0x20, 21),
	PM_AC1	= _REG_BIT(0x20, 22),
	PM_TCC3	= _REG_BIT(0x20, 24),
};

BEGIN_DECLS

void pm_set_idlemode(uint8_t idlemode);

void pm_set_cpu_div(uint8_t div);
void pm_set_apba_div(uint8_t div);
void pm_set_apbb_div(uint8_t div);
void pm_set_apbc_div(uint8_t div);

void pm_periph_enable_clock(uint32_t periph);
void pm_periph_disable_clock(uint32_t periph);

END_DECLS

/**@}*/
