/** @defgroup syscfg_defines SYSCFG Defines
 *
 * @ingroup STM32L4xx_defines
 *
 * @brief Defined Constants and Types for the STM32L4xx Sysconfig
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
 */

/**@{*/
#ifndef LIBOPENCM3_SYSCFG_H
#define LIBOPENCM3_SYSCFG_H

#include <libopencm3/stm32/common/syscfg_common_v2.h>

/** @addtogroup syscfg_registers
@{*/
#define SYSCFG_SWPR2			MMIO32(SYSCFG_BASE + 0x29)
/**@}*/

/* --- SYSCFG_SWPR2 Values -------------------------------------------------- */

/* 32 - 63 or not available depending on L4 version */
#define SYSCFG_SWPR2_PxWP(x)		(1 << (x - 32))

#endif
/**@}*/

