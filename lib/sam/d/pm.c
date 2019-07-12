/** @addtogroup pm_file PM peripheral API
 * @ingroup peripheral_apis
 *
 * @author @htmlonly &copy; @endhtmlonly 2019 Guillaume Revaillot <g.revaillot@gmail.com>
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

#include <libopencm3/sam/pm.h>

void pm_set_idlemode(uint8_t idlemode)
{
	uint8_t reg8 = PM_SLEEP & ~PM_SLEEP_IDLE_MASK;
	PM_SLEEP = reg8 | (idlemode & PM_SLEEP_IDLE_MASK);
}

void pm_set_cpu_div(uint8_t div)
{
	uint32_t reg32 = PM_CPUSEL & ~PM_CPUSEL_CPUDIV_MASK;
	PM_CPUSEL = reg32 | (div & PM_CPUSEL_CPUDIV_MASK);
}

void pm_set_apba_div(uint8_t div)
{
	uint8_t reg8 = PM_APBASEL & ~PM_APBASEL_APBADIV_MASK;
	PM_APBASEL = reg8 | (div & PM_APBASEL_APBADIV_MASK);
}

void pm_set_apbb_div(uint8_t div)
{
	uint8_t reg8 = PM_APBBSEL & ~PM_APBBSEL_APBBDIV_MASK;
	PM_APBBSEL = reg8 | (div & PM_APBBSEL_APBBDIV_MASK);
}

void pm_set_apbc_div(uint8_t div)
{
	uint8_t reg8 = PM_APBCSEL & ~PM_APBCSEL_APBCDIV_MASK;
	PM_APBCSEL = reg8 | (div & PM_APBCSEL_APBCDIV_MASK);
}

#define _PM_REG(i)		MMIO32(PM_BASE + ((i) >> 5))
#define _PM_BIT(i)		(1 << ((i) & 0x1f))

void pm_periph_enable_clock(uint32_t clken)
{
	_PM_REG(clken) |= _PM_BIT(clken);
}

void pm_periph_disable_clock(uint32_t clken)
{
	_PM_REG(clken) &= ~_PM_BIT(clken);
}

