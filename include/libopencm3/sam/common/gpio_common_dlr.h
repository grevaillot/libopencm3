/** @addtogroup gpio_defines
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

#pragma once

#include <libopencm3/sam/port.h>
#include <libopencm3/cm3/common.h>

/**@{*/

/** GPIO Mode */
enum gpio_mode {
	GPIO_MODE_INPUT,
	GPIO_MODE_OUTPUT,
	GPIO_MODE_PMUX,
};

/** GPIO Pull Up/Down Configuration */
enum gpio_pull_up_down {
	GPIO_PUPD_NONE,
	GPIO_PUPD_PULLUP,
	GPIO_PUPD_PULLDOWN,
};

/** GPIO Drive Strenght */
enum gpio_drive_strength {
	GPIO_STRENGTH_STANDARD = 0,
	GPIO_STRENGTH_HIGH,
};

enum gpio {
	GPIO0 = (1 << 0),
	GPIO1 = (1 << 1),
	GPIO2 = (1 << 2),
	GPIO3 = (1 << 3),
	GPIO4 = (1 << 4),
	GPIO5 = (1 << 5),
	GPIO6 = (1 << 6),
	GPIO7 = (1 << 7),
	GPIO8 = (1 << 8),
	GPIO9 = (1 << 9),
	GPIO10 = (1 << 10),
	GPIO11 = (1 << 11),
	GPIO12 = (1 << 12),
	GPIO13 = (1 << 13),
	GPIO14 = (1 << 14),
	GPIO15 = (1 << 15),
	GPIO16 = (1 << 16),
	GPIO17 = (1 << 17),
	GPIO18 = (1 << 18),
	GPIO19 = (1 << 19),
	GPIO20 = (1 << 20),
	GPIO21 = (1 << 21),
	GPIO22 = (1 << 22),
	GPIO23 = (1 << 23),
	GPIO24 = (1 << 24),
	GPIO25 = (1 << 25),
	GPIO26 = (1 << 26),
	GPIO27 = (1 << 27),
	GPIO28 = (1 << 28),
	GPIO29 = (1 << 29),
	GPIO30 = (1 << 30),
	GPIO31 = (1 << 31),
};

/** GPIO Peripheral Multiplexing Function */
enum gpio_pmux_function {
	GPIO_PMUX_FUNCTION_A = 0x0,
	GPIO_PMUX_FUNCTION_B = 0x1,
	GPIO_PMUX_FUNCTION_C = 0x2,
	GPIO_PMUX_FUNCTION_D = 0x3,
	GPIO_PMUX_FUNCTION_E = 0x4,
	GPIO_PMUX_FUNCTION_F = 0x5,
	GPIO_PMUX_FUNCTION_G = 0x6,
	GPIO_PMUX_FUNCTION_H = 0x7,
	GPIO_PMUX_FUNCTION_I = 0x8,
};

BEGIN_DECLS

void gpio_mode_setup(uint32_t port, uint8_t mode, uint8_t pull_up_down, uint32_t gpios);
void gpio_set_pmux(uint32_t port, uint8_t pmux, uint32_t gpios);
void gpio_set(uint32_t port, uint32_t gpios);
void  gpio_clear(uint32_t port, uint32_t gpios);
uint32_t gpio_get(uint32_t port, uint32_t gpios);
void gpio_toggle(uint32_t port, uint32_t gpios);
void gpio_set_drive_strength(uint32_t port, uint32_t gpios, uint8_t drive_strenght);
void gpio_enable_input(uint32_t port, uint32_t gpios);
void gpio_disable_input(uint32_t port, uint32_t gpios);
uint32_t gpio_port_read(uint32_t port);
void gpio_port_write(uint32_t port, uint32_t data);

END_DECLS

/**@}*/
