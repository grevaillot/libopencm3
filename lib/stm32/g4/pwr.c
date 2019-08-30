/** @defgroup pwr_file PWR peripheral API
 * @ingroup peripheral_apis
 *
 * @author @htmlonly &copy; @endhtmlonly 2019 Guillaume Revaillot <g.revaillot@gmail.com>
 *
 * @ingroup peripheral_apis
 *
 * @brief <b>libopencm3 STM32G4xx Power Control</b>
 *
 * @version 1.0.0
 *
 * This library supports the power control system for the
 * STM32G4 series of ARM Cortex Microcontrollers by ST Microelectronics.
 *
 * LGPL License Terms @ref lgpl_license
 */
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

#include <libopencm3/stm32/pwr.h>
#include <libopencm3/cm3/assert.h>

/*---------------------------------------------------------------------------*/
/** @brief Setup voltage scaling range. 
 */
void pwr_set_vos_scale(enum pwr_vos_scale pwr_scale)
{
	uint32_t vos = PWR_CR1_VOS_RANGE_1;
	bool boost = false;
	uint32_t reg32;

	switch (pwr_scale) {
		case PWR_SCALE2:
			vos = PWR_CR1_VOS_RANGE_2;
			boost = false;
			break;
		case PWR_SCALE1:
			vos = PWR_CR1_VOS_RANGE_1;
			boost = false;
			break;
		case PWR_SCALE1_BOOST:
			vos = PWR_CR1_VOS_RANGE_1;
			boost = true;
			break;
		default:
			cm3_assert_not_reached();
			return;
	}

	reg32 = PWR_CR1 & ~(PWR_CR1_VOS_MASK << PWR_CR1_VOS_SHIFT);
	reg32 |= (vos & PWR_CR1_VOS_MASK) << PWR_CR1_VOS_SHIFT;
	PWR_CR1 = reg32;

	if (boost)
		PWR_CR5 |= PWR_CR5_R1MODE;
	else
		PWR_CR5 &= ~PWR_CR5_R1MODE;
}

/*---------------------------------------------------------------------------*/
/** @brief Disable RTC domain write protect. 
 */
void pwr_disable_backup_domain_write_protect(void)
{
	PWR_CR1 |= PWR_CR1_DBP;
}

/*---------------------------------------------------------------------------*/
/** @brief Enable RTC domain write protect. 
 */
void pwr_enable_backup_domain_write_protect(void)
{
	PWR_CR1 &= ~PWR_CR1_DBP;
}


