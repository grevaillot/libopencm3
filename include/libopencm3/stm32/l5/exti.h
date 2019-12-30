/** @defgroup exti_defines EXTI Defines
 *
 * @ingroup STM32L5xx_defines
 *
 * @brief <b>Defined Constants and Types for the STM32L5xx EXTI Control</b>
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
#ifndef LIBOPENCM3_EXTI_H
#define LIBOPENCM3_EXTI_H

#include <libopencm3/stm32/common/exti_common_all.h>
#include <libopencm3/stm32/common/exti_common_v2.h>

/** @addtogroup exti_registers
@{*/

/** EXTI Rising Trigger Selection Register 2 */
#define EXTI_RTSR2			MMIO32(EXTI_BASE + 0x20)
/** EXTI Falling Trigger Selection Register 2 */
#define EXTI_FTSR2			MMIO32(EXTI_BASE + 0x24)
/** EXTI Rising Edge Pending Register */
#define EXTI_RPR2			MMIO32(EXTI_BASE + 0x2c)
/** EXTI Falling Edge Pending Register */
#define EXTI_FPR2			MMIO32(EXTI_BASE + 0x30)


/** EXTI Security Configuration Register 1 */
#define EXTI_SECCFGR1			MMIO32(EXTI_BASE + 0x14)
/** EXTI Privilege Configuration Register 1 */
#define EXTI_PRIVCFGR1			MMIO32(EXTI_BASE + 0x18)
/** EXTI Security Configuration Register 2 */
#define EXTI_SECCFGR2			MMIO32(EXTI_BASE + 0x34)
/** EXTI Privilege Configuration Register 2 */
#define EXTI_PRIVCFGR2			MMIO32(EXTI_BASE + 0x38)

/** EXTI Lock Register */
#define EXTI_LOCKR				MMIO32(EXTI_BASE + 0x70)

/**@}*/

BEGIN_DECLS

END_DECLS

#endif

/**@}*/
