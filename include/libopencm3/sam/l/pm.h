/** @defgroup pm_defines PM Defines
 *
 * @ingroup SAML_defines
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

/** PM_CTRLA Control A **/
#define PM_CTRLA			MMIO32(PM_BASE + 0x00)
/** PM_SLEEPCFG Sleep Configuration **/
#define PM_SLEEPCFG			MMIO32(PM_BASE + 0x01)
/** PM_PLCFG Performance Level Configuration **/
#define PM_PLCFG			MMIO32(PM_BASE + 0x02)
/** PM_INTENCLR Interrupt Enable Clear **/
#define PM_INTENCLR			MMIO32(PM_BASE + 0x04)
/** PM_INTENSET Interrupt Enable Set **/
#define PM_INTENSET			MMIO32(PM_BASE + 0x05)
/** PM_INTFLAG Interrupt Flag Status and Clear **/
#define PM_INTFLAG			MMIO32(PM_BASE + 0x06)
/** PM_STDBYCFG Standby Configuration **/
#define PM_STDBYCFG			MMIO32(PM_BASE + 0x08)
/** PM_PWSAKDLY Power Switch Acknowledge Delay **/
#define PM_PWSAKDLY			MMIO32(PM_BASE + 0x0c)

/**@}*/


/** @defgroup pm_ctrla CTRLA Control A
@{*/

/** PM_CTRLA_IORET I/O Retention **/
#define PM_CTRLA_IORET		(1 << 2)

/**@}*/

/** @defgroup pm_sleepcfg SLEEPCFG Sleep Configuration
@{*/


#define PM_SLEEPCFG_SLEEPMODE_SHIFT		0
#define PM_SLEEPCFG_SLEEPMODE_MASK		0x07
/** @defgroup pm_sleepcfg_sleepmode SLEEPMODE Sleep Mode
@{*/
/**@}*/


/**@}*/

/** @defgroup pm_plcfg PLCFG Performance Level Configuration
@{*/

#define PM_PLCFG_PLSEL_SHIFT		0
#define PM_PLCFG_PLSEL_MASK		0x03
/** @defgroup pm_plcfg_plsel PLSEL Performance Level Select
@{*/
/**@}*/

/**@}*/

/** @defgroup pm_intenclr INTENCLR Interrupt Enable Clear
@{*/

/** PM_INTENCLR_PLRDY Performance Level Interrupt Enable **/
#define PM_INTENCLR_PLRDY		(1 << 0)

/**@}*/

/** @defgroup pm_intenset INTENSET Interrupt Enable Set
@{*/

/** PM_INTENSET_PLRDY Performance Level Ready interrupt Enable **/
#define PM_INTENSET_PLRDY		(1 << 0)

/**@}*/

/** @defgroup pm_intflag INTFLAG Interrupt Flag Status and Clear
@{*/

/** PM_INTFLAG_PLRDY Performance Level Ready **/
#define PM_INTFLAG_PLRDY		(1 << 0)

/**@}*/

/** @defgroup pm_stdbycfg STDBYCFG Standby Configuration
@{*/


#define PM_STDBYCFG_BBIASPP_SHIFT		14
#define PM_STDBYCFG_BBIASPP_MASK		0x03
/** @defgroup pm_stdbycfg_bbiaspp BBIASPP Back Bias for PicoPram
@{*/
/**@}*/


#define PM_STDBYCFG_BBIASLP_SHIFT		12
#define PM_STDBYCFG_BBIASLP_MASK		0x03
/** @defgroup pm_stdbycfg_bbiaslp BBIASLP Back Bias for HMCRAMCLP
@{*/
/**@}*/


#define PM_STDBYCFG_BBIASHS_SHIFT		10
#define PM_STDBYCFG_BBIASHS_MASK		0x03
/** @defgroup pm_stdbycfg_bbiashs BBIASHS Back Bias for HMCRAMCHS
@{*/
/**@}*/


#define PM_STDBYCFG_LINKPD_SHIFT		8
#define PM_STDBYCFG_LINKPD_MASK		0x03
/** @defgroup pm_stdbycfg_linkpd LINKPD Linked Power Domain
@{*/
/**@}*/

/** PM_STDBYCFG_AVREGSD Automatic VREG Switching Disable **/
#define PM_STDBYCFG_AVREGSD		(1 << 7)
/** PM_STDBYCFG_DPGPD1 Dynamic Power Gating for PD1 **/
#define PM_STDBYCFG_DPGPD1		(1 << 5)
/** PM_STDBYCFG_DPGPD0 Dynamic Power Gating for PD0 **/
#define PM_STDBYCFG_DPGPD0		(1 << 4)

#define PM_STDBYCFG_PDCFG_SHIFT		0
#define PM_STDBYCFG_PDCFG_MASK		0x03
/** @defgroup pm_stdbycfg_pdcfg PDCFG Power Domain Configuration
@{*/
/**@}*/


/**@}*/

/** @defgroup pm_pwsakdly PWSAKDLY Power Switch Acknowledge Delay
@{*/

/** PM_PWSAKDLY_IGNACK Ignore Acknowledge **/
#define PM_PWSAKDLY_IGNACK		(1 << 7)

#define PM_PWSAKDLY_DLYVAL_SHIFT		0
#define PM_PWSAKDLY_DLYVAL_MASK		0x7f
/** @defgroup pm_pwsakdly_dlyval DLYVAL Delay Value
@{*/
/**@}*/


/**@}*/

/**@}*/
