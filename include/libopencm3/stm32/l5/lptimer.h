/** @defgroup lptimer_defines LPTIM Defines
 *
 * @ingroup STM32L5xx_defines
 * 
 * @brief <b>libopencm3 Defined Constants and Types for the STM32L5xx Low Power Timer</b>
 *
 * @version 1.0.0
 *
 * LGPL License Terms @ref lgpl_license
 *  */
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

#ifndef LIBOPENCM3_LPTIMER_H
#define LIBOPENCM3_LPTIMER_H
/**@{*/

#include <libopencm3/stm32/common/lptimer_common_all.h>

/** @defgroup lptim_reg_base Low Power Timer register base addresses
@{*/
#define LPTIM1				LPTIM1_BASE
#define LPTIM2				LPTIM2_BASE
#define LPTIM3				LPTIM3_BASE
/**@}*/

/** @addtogroup lptim_registers
@{*/

/** LPTIM_OR LPTIM option register */
#define LPTIM_OR(tim_base)			MMIO32((tim_base) + 0x20)

/** LPTIM_RCR LPTIM repetition register */
#define LPTIM_RCR(tim_base)			MMIO32((tim_base) + 0x28)

/**@}*/

/** @addtogroup lptim_cr
@{*/
/** RSTARE Reset after read enable **/
#define LPTIM_CR_RSTARE		(1 << 3)
/** COUNTRST Counter reset **/
#define LPTIM_CR_COUNTRST		(1 << 4)
/**@}*/

/** @defgroup lptim_or LPTIM_OR Option Register
@{*/

#define LPTIM_OR_OR_SHIFT	0
#define LPTIM_OR_OR_MASK	0x3

/**@}*/

BEGIN_DECLS

END_DECLS

/**@}*/
#endif
