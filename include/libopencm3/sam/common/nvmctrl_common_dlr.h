/** @addtogroup nvmctlr_defines
 *
 * @author @htmlonly &copy; @endhtmlonly 2016 Karl Palson  <karlp@tweak.net.au>
 *
 */
/*
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

/**@{*/

/** @defgroup nvmctrl_registers Non-Volatile Memory Controller Registers
@{*/

/** NVMCTRL_CTRLA Control A **/
#define NVMCTRL_CTRLA			MMIO32(NVMCTRL_BASE + 0x00)
/** NVMCTRL_CTRLB Control B **/
#define NVMCTRL_CTRLB			MMIO32(NVMCTRL_BASE + 0x04)
/** NVMCTRL_PARAM NVM Parameter **/
#define NVMCTRL_PARAM			MMIO32(NVMCTRL_BASE + 0x08)
/** NVMCTRL_INTENCLR Interrupt Enable Clear **/
#define NVMCTRL_INTENCLR			MMIO32(NVMCTRL_BASE + 0x0c)
/** NVMCTRL_INTENSET Interrupt Enable Set **/
#define NVMCTRL_INTENSET			MMIO32(NVMCTRL_BASE + 0x10)
/** NVMCTRL_INTFLAG Interrupt Flag Status and Clear **/
#define NVMCTRL_INTFLAG			MMIO32(NVMCTRL_BASE + 0x14)
/** NVMCTRL_STATUS Status **/
#define NVMCTRL_STATUS			MMIO32(NVMCTRL_BASE + 0x18)
/** NVMCTRL_ADDR Address **/
#define NVMCTRL_ADDR			MMIO32(NVMCTRL_BASE + 0x1c)
/** NVMCTRL_LOCK Lock Section **/
#define NVMCTRL_LOCK			MMIO32(NVMCTRL_BASE + 0x20)

/**@}*/

/** @defgroup nvmctrl_ctrla CTRLA Control A
@{*/
#define NVMCTRL_CTRLA_CMDEX_SHIFT		8
#define NVMCTRL_CTRLA_CMDEX_MASK		0xff
/** @defgroup nvmctrl_ctrla_cmdex CMDEX
* @brief Command Execution
@{*/
/**@}*/
#define NVMCTRL_CTRLA_CMD_SHIFT		0
#define NVMCTRL_CTRLA_CMD_MASK		0x7f
/** @defgroup nvmctrl_ctrla_cmd CMD
* @brief Command
@{*/
/**@}*/
/**@}*/

/** @defgroup nvmctrl_ctrlb CTRLB Control B
@{*/

/** NVMCTRL_CTRLB_CACHEDIS Cache Disable **/
#define NVMCTRL_CTRLB_CACHEDIS		(1 << 18)
#define NVMCTRL_CTRLB_READMODE_SHIFT		16
#define NVMCTRL_CTRLB_READMODE_MASK		0x03
/** @defgroup nvmctrl_ctrlb_readmode READMODE
* @brief NVMCTRL Read Mode
@{*/
/**@}*/
#define NVMCTRL_CTRLB_SLEEPPRM_SHIFT		8
#define NVMCTRL_CTRLB_SLEEPPRM_MASK		0x03
/** @defgroup nvmctrl_ctrlb_sleepprm SLEEPPRM
* @brief Power Reduction Mode during Sleep
@{*/
/**@}*/

/** NVMCTRL_CTRLB_MANW Manual Write **/
#define NVMCTRL_CTRLB_MANW		(1 << 7)
#define NVMCTRL_CTRLB_RWS_SHIFT		1
#define NVMCTRL_CTRLB_RWS_MASK		0x0f
/** @defgroup nvmctrl_ctrlb_rws RWS
* @brief NVM Read Wait States
@{*/
/**@}*/
/**@}*/

/** @defgroup nvmctrl_param PARAM NVM Parameter
@{*/
#define NVMCTRL_PARAM_RWWEEP_SHIFT		20
#define NVMCTRL_PARAM_RWWEEP_MASK		0xfff
/** @defgroup nvmctrl_param_rwweep RWWEEP
* @brief RWW EEPROM Pages
@{*/
/**@}*/
#define NVMCTRL_PARAM_PSZ_SHIFT		16
#define NVMCTRL_PARAM_PSZ_MASK		0x07
/** @defgroup nvmctrl_param_psz PSZ
* @brief Page Size
@{*/
/**@}*/
#define NVMCTRL_PARAM_NVMP_SHIFT		0
#define NVMCTRL_PARAM_NVMP_MASK		0xffff
/** @defgroup nvmctrl_param_nvmp NVMP
* @brief NVM Pages
@{*/
/**@}*/
/**@}*/

/** @defgroup nvmctrl_intenclr INTENCLR Interrupt Enable Clear
@{*/

/** NVMCTRL_INTENCLR_ERROR Error Interrupt Enable **/
#define NVMCTRL_INTENCLR_ERROR		(1 << 1)
/** NVMCTRL_INTENCLR_READY NVM Ready Interrupt Enable **/
#define NVMCTRL_INTENCLR_READY		(1 << 0)
/**@}*/

/** @defgroup nvmctrl_intenset INTENSET Interrupt Enable Set
@{*/

/** NVMCTRL_INTENSET_ERROR Error Interrupt Enable **/
#define NVMCTRL_INTENSET_ERROR		(1 << 1)
/** NVMCTRL_INTENSET_READY NVM Ready Interrupt Enable **/
#define NVMCTRL_INTENSET_READY		(1 << 0)
/**@}*/

/** @defgroup nvmctrl_intflag INTFLAG Interrupt Flag Status and Clear
@{*/

/** NVMCTRL_INTFLAG_ERROR Error **/
#define NVMCTRL_INTFLAG_ERROR		(1 << 1)
/** NVMCTRL_INTFLAG_READY NVM Ready **/
#define NVMCTRL_INTFLAG_READY		(1 << 0)

/**@}*/

/** @defgroup nvmctrl_status STATUS Status
@{*/

/** NVMCTRL_STATUS_SB Security Bit Status **/
#define NVMCTRL_STATUS_SB		(1 << 8)
/** NVMCTRL_STATUS_NVME NVM Error **/
#define NVMCTRL_STATUS_NVME		(1 << 4)
/** NVMCTRL_STATUS_LOCKE Lock Error Status **/
#define NVMCTRL_STATUS_LOCKE		(1 << 3)
/** NVMCTRL_STATUS_PROGE Programming Error Status **/
#define NVMCTRL_STATUS_PROGE		(1 << 2)
/** NVMCTRL_STATUS_LOAD NVM Page Buffer Active Loading **/
#define NVMCTRL_STATUS_LOAD		(1 << 1)
/** NVMCTRL_STATUS_PRM Power Reduction Mode **/
#define NVMCTRL_STATUS_PRM		(1 << 0)

/**@}*/

/** @defgroup nvmctrl_addr ADDR Address
@{*/
#define NVMCTRL_ADDR_ADDR_SHIFT		0
#define NVMCTRL_ADDR_ADDR_MASK		0x3fffff
/** @defgroup nvmctrl_addr_addr ADDR
* @brief NVM Address
@{*/
/**@}*/
/**@}*/

/** @defgroup nvmctrl_lock LOCK Lock Section
@{*/
#define NVMCTRL_LOCK_LOCK_SHIFT		0
#define NVMCTRL_LOCK_LOCK_MASK		0xffff
/** @defgroup nvmctrl_lock_lock LOCK
* @brief Region Lock Bits
@{*/
/**@}*/

BEGIN_DECLS

void nvm_cache_enable(void);
void nvm_cache_disable(void);

void nvm_set_ws(uint8_t ws);

END_DECLS

/**@}*/
