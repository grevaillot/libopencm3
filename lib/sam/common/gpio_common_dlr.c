/** @addtogroup gpio_file GPIO peripheral API
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

#include <libopencm3/sam/gpio.h>
#include <libopencm3/sam/port.h>

/**@{*/

// input, output ?

// mode == pullup ? level

// mode 29.6.3.1
// out :
// in, pullup pulldow

// disable input
// disable output


// XXX this reset drive strenght.
void gpio_mode_setup(uint32_t port, uint8_t mode, uint8_t pull_up_down, uint32_t gpios)
{
	uint32_t wrconfig = PORT_WRCONFIG_WRPINCFG;

	switch (mode) {
		case GPIO_MODE_INPUT:
			PORT_DIRCLR(port) = gpios;
			wrconfig |= PORT_WRCONFIG_INEN;
			break;
		case GPIO_MODE_OUTPUT:
			PORT_DIRSET(port) = gpios;
			break;
		case GPIO_MODE_PMUX:
			wrconfig |= PORT_WRCONFIG_PMUXEN;
			break;
	}

	if (pull_up_down != GPIO_PUPD_NONE) {
		wrconfig |= PORT_WRCONFIG_PULLEN;
		if (pull_up_down == GPIO_PUPD_PULLDOWN) {
			PORT_OUTCLR(port) = gpios;
		} else if (pull_up_down == GPIO_PUPD_PULLUP) {
			PORT_OUTSET(port) = gpios;
		}
	}

	PORT_WRCONFIG(port) = wrconfig | (gpios & PORT_WRCONFIG_PINMASK_MASK) << PORT_WRCONFIG_PINMASK_SHIFT;
	PORT_WRCONFIG(port) = wrconfig | PORT_WRCONFIG_HWSEL | (gpios >> 16) << PORT_WRCONFIG_PINMASK_SHIFT;
}

// XXX this does not enable pmux, this justs configure it.
void gpio_set_pmux(uint32_t port, uint8_t pmux, uint32_t gpios)
{
	uint32_t wrconfig = PORT_WRCONFIG_WRPMUX;
	wrconfig |= (pmux & PORT_WRCONFIG_PMUX_MASK) << PORT_WRCONFIG_PMUX_SHIFT;
	PORT_WRCONFIG(port) = wrconfig | (gpios & PORT_WRCONFIG_PINMASK_MASK) << PORT_WRCONFIG_PINMASK_SHIFT;
	PORT_WRCONFIG(port) = wrconfig | PORT_WRCONFIG_HWSEL | (gpios >> 16) << PORT_WRCONFIG_PINMASK_SHIFT;
}

void gpio_set(uint32_t port, uint32_t gpios)
{
	PORT_OUTSET(port) = gpios;
}

void gpio_clear(uint32_t port, uint32_t gpios)
{
	PORT_OUTCLR(port) = gpios;
}

uint32_t gpio_get(uint32_t port, uint32_t gpios)
{
	return PORT_IN(port) & gpios;
}

void gpio_toggle(uint32_t port, uint32_t gpios)
{
	PORT_OUTTGL(port) = gpios;
}

void gpio_set_drive_strength(uint32_t port, uint32_t gpios, uint8_t drive_strenght)
{
	for (int i = 0; i < 32; i++) {
		if (gpios & (1 << i)) {
			if (drive_strenght == GPIO_STRENGTH_HIGH)
				PORT_PINCFG(port, i) |= PORT_PINCFG_DRVSTR;
			else
				PORT_PINCFG(port, i) &= ~PORT_PINCFG_DRVSTR;
		}
	}
}

void gpio_enable_input(uint32_t port, uint32_t gpios)
{
	for (int i = 0; i < 32; i++) {
		if (gpios & (1 << i)) {
			PORT_PINCFG(port, i) |= PORT_PINCFG_INEN;
		}
	}
}

void gpio_disable_input(uint32_t port, uint32_t gpios)
{
	for (int i = 0; i < 32; i++) {
		if (gpios & (1 << i)) {
			PORT_PINCFG(port, i) &= ~PORT_PINCFG_INEN;
		}
	}
}

uint32_t gpio_port_read(uint32_t port)
{
	return PORT_IN(port);
}

void gpio_port_write(uint32_t port, uint32_t data)
{
	PORT_OUT(port) = data;
}

/**@}*/
