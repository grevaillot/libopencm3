/** @addtogroup nvmctlr_file NVMCTRL peripheral API
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

#include <libopencm3/sam/nvmctrl.h>

/**@{*/

void nvm_cache_enable(void)
{
	NVMCTRL_CTRLB &= ~NVMCTRL_CTRLB_CACHEDIS;
}

void nvm_cache_disable(void)
{
	NVMCTRL_CTRLB |= NVMCTRL_CTRLB_CACHEDIS;
}

/*
	on D21/D20/D10
	VDD range		NVM Wait States		Maximum Operating Frequency (MHZ)
	1.62V to 2.7V	0					14
					1					28
					2					42
					3					48
	2.7V to 3.63V	0					24
					1					48 (67mhz on D10)

	on L21/Rxx
	Conditions 					CPU Fmax (MHz) 
								0WS 1WS 2WS 3WS
	PL0 (-40/85°C)	VDDIN>1.6V	6	12	12	12
					VDDIN>2.7V	7.5	12	12	12
	PL2 (-40/85°C)	VDDIN>1.6V	14	28	42	48
					VDDIN>2.7V	24	45	48	48
*/

void nvm_set_ws(uint8_t ws)
{
	uint32_t reg32 = NVMCTRL_CTRLB;
	reg32 &= ~(NVMCTRL_CTRLB_RWS_MASK << NVMCTRL_CTRLB_RWS_SHIFT);
	reg32 |= (ws & NVMCTRL_CTRLB_RWS_MASK) << NVMCTRL_CTRLB_RWS_SHIFT;
	NVMCTRL_CTRLB = reg32;
}

/**@}*/

