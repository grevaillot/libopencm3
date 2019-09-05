/** @defgroup lptimer_defines LPTIM Defines
 *
 * @ingroup STM32G4xx_defines
 * 
 * @brief <b>libopencm3 Defined Constants and Types for the STM32G4xx Low Power Timer</b>
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
/**@}*/

/** @addtogroup lptim_registers
@{*/
/** LPTIM_OR option register **/
#define LPTIM1_OR(base)			MMIO32((base) + 0x20)
/**@}*/

/** @addtogroup lptim_cr
@{*/
/** COUNTRST Counter reset **/
#define LPTIM_CR_COUNTRST		(1 << 3)
/** RSTARE Reset after read enable **/
#define LPTIM_CR_RSTARE		(1 << 4)
/**@}*/

/** @defgroup lptimer1_or OR option register
  @{*/
#define LPTIMER1_OR_IN2_2_1_SHIFT		4
#define LPTIMER1_OR_IN2_2_1_MASK		0x03
/** @defgroup lptimer1_or_in2_2_1 IN221 IN2_2_1
  @{*/
/**@}*/

#define LPTIMER1_OR_IN1_2_1_SHIFT		2
#define LPTIMER1_OR_IN1_2_1_MASK		0x03
/** @defgroup lptimer1_or_in1_2_1 IN121 IN1_2_1
  @{*/
/**@}*/

/** LPTIMER1_OR_IN2 IN2 **/
#define LPTIMER1_OR_IN2		(1 << 1)
/** LPTIMER1_OR_IN1 IN1 **/
#define LPTIMER1_OR_IN1		(1 << 0)
/**@}*/

BEGIN_DECLS

END_DECLS

/**@}*/
#endif
