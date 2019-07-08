/** @addtogroup port_defines
 *
 * @author @htmlonly &copy; @endhtmlonly 2016 Karl Palson  <karlp@tweak.net.au>
 *
 */
/*
 * This file is part of the libopencm3 project.
 *
 * Copyright (C) 2016 Karl Palsson <karlp@tweak.net.au>
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

/** @defgroup port_base_address Port 
@{*/
#define PORTA				(PORT_BASE + 0)
#define PORTB				(PORT_BASE + 0x80)
/**@}*/

/** @defgroup port_registers Port Registers
@{*/

/** Direction register */
#define PORT_DIR(port)			MMIO32((port) + 0x0000)

/** Direction clear register */
#define PORT_DIRCLR(port)		MMIO32((port) + 0x0004)

/** Direction set register */
#define PORT_DIRSET(port)		MMIO32((port) + 0x0008)

/** Direction toggle register */
#define PORT_DIRTGL(port)		MMIO32((port) + 0x000c)

/** Output register */
#define PORT_OUT(port)			MMIO32((port) + 0x0010)

/** Output clear register */
#define PORT_OUTCLR(port)		MMIO32((port) + 0x0014)

/** Output set register */
#define PORT_OUTSET(port)		MMIO32((port) + 0x0018)

/** Output toggle register */
#define PORT_OUTTGL(port)		MMIO32((port) + 0x001c)

/** Input register */
#define PORT_IN(port)			MMIO32((port) + 0x0020)

/** Control register */
#define PORT_CTRL(port)			MMIO32((port) + 0x0024)

/** Write configuration register */
#define PORT_WRCONFIG(port)		MMIO32((port) + 0x0028)

/** Peripheral multiplexing registers */
#define PORT_PMUX(port, n)		MMIO8((port) + 0x0030 + (n))

/** Pin configuration registers */
#define PORT_PINCFG(port, n)		MMIO8((port) + 0x0040 + (n))

/**@}*/

/** @defgroup port_wrconfig WRCONFIG Write Configuration
@{*/

/** PORT_WRCONFIG_HWSEL Half-Word Select **/
#define PORT_WRCONFIG_HWSEL		(1 << 31)
/** PORT_WRCONFIG_WRPINCFG Write PINCFG **/
#define PORT_WRCONFIG_WRPINCFG		(1 << 30)
/** PORT_WRCONFIG_WRPMUX Write PMUX **/
#define PORT_WRCONFIG_WRPMUX		(1 << 28)

#define PORT_WRCONFIG_PMUX_SHIFT		24
#define PORT_WRCONFIG_PMUX_MASK		0x0f
/** @defgroup port_wrconfig_pmux PMUX
* @brief Peripheral Multiplexing
@{*/
/**@}*/

/** PORT_WRCONFIG_DRVSTR Output Driver Strength Selection **/
#define PORT_WRCONFIG_DRVSTR		(1 << 22)
/** PORT_WRCONFIG_PULLEN Pull Enable **/
#define PORT_WRCONFIG_PULLEN		(1 << 18)
/** PORT_WRCONFIG_INEN Input Enable **/
#define PORT_WRCONFIG_INEN		(1 << 17)
/** PORT_WRCONFIG_PMUXEN Peripheral Multiplexer Enable **/
#define PORT_WRCONFIG_PMUXEN		(1 << 16)

#define PORT_WRCONFIG_PINMASK_SHIFT		0
#define PORT_WRCONFIG_PINMASK_MASK		0xffff

/**@}*/

/** @defgroup port_pmu PMUX Peripheral Multiplexing
@{*/

#define PORT_PMUX_PMUXO_SHIFT		4
#define PORT_PMUX_PMUXO_MASK		0x0f

#define PORT_PMUX_PMUXE_SHIFT		0
#define PORT_PMUX_PMUXE_MASK		0x0f
/**@}*/

/** @defgroup port_pincfg PINCFG Pin Configuration
@{*/

/** PORT_PINCFG_DRVSTR Output Driver Strength Selection **/
#define PORT_PINCFG_DRVSTR		(1 << 6)
/** PORT_PINCFG_PULLEN Pull Enable **/
#define PORT_PINCFG_PULLEN		(1 << 2)
/** PORT_PINCFG_INEN Input Enable **/
#define PORT_PINCFG_INEN		(1 << 1)
/** PORT_PINCFG_PMUXEN Peripheral Multiplexer Enable **/
#define PORT_PINCFG_PMUXEN		(1 << 0)
/**@}*/

/**@}*/
