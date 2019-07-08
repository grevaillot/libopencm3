/** @addtogroup port_defines
 *
 * @author @htmlonly &copy; @endhtmlonly 2019 Guillaume Revaillot <g.revaillot@gmail.com>
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

/** @addtogroup port_registers
@{*/

/** Event Input Control */
#define PORT_EVCTRL(port)		MMIO32((port) + 0x002c)

/**@}*/

/** @defgroup port_evctrl EVCTRL Event Input Control
@{*/

/** @defgroup port_evctrl_evact EVACT
* @brief Port Event Action
@{*/
#define PORT_EVCTRL_EVACT_OUT	0x0
#define PORT_EVCTRL_EVACT_SET	0x1
#define PORT_EVCTRL_EVACT_CLR	0x2
#define PORT_EVCTRL_EVACT_TGL	0x3
/**@}*/

/** PORT_EVCTRL_PORTEI3 Port Event Enable Input 3 **/
#define PORT_EVCTRL_PORTEI3		(1 << 31)

#define PORT_EVCTRL_EVACT3_SHIFT		29
#define PORT_EVCTRL_EVACT3_MASK		0x03

#define PORT_EVCTRL_PID3_SHIFT		24
#define PORT_EVCTRL_PID3_MASK		0x1f

/** PORT_EVCTRL_PORTEI2 Port Event Enable Input 2 **/
#define PORT_EVCTRL_PORTEI2		(1 << 23)

#define PORT_EVCTRL_EVACT2_SHIFT		21
#define PORT_EVCTRL_EVACT2_MASK		0x03

#define PORT_EVCTRL_PID2_SHIFT		16
#define PORT_EVCTRL_PID2_MASK		0x1f

/** PORT_EVCTRL_PORTEI1 Port Event Enable Input 1 **/
#define PORT_EVCTRL_PORTEI1		(1 << 15)

#define PORT_EVCTRL_EVACT1_SHIFT		13
#define PORT_EVCTRL_EVACT1_MASK		0x03

#define PORT_EVCTRL_PID1_SHIFT		8
#define PORT_EVCTRL_PID1_MASK		0x1f

/** PORT_EVCTRL_PORTEI0 Port Event Enable Input 0 **/
#define PORT_EVCTRL_PORTEI0		(1 << 7)

#define PORT_EVCTRL_EVACT_SHIFT		5
#define PORT_EVCTRL_EVACT_MASK		0x03

#define PORT_EVCTRL_PID_SHIFT		0
#define PORT_EVCTRL_PID_MASK		0x1f

/**@}*/

/**@}*/
