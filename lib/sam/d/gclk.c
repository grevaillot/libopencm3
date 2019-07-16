/** @addtogroup gclk_file GCLK peripheral API
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

#include <libopencm3/sam/gclk.h>

bool gclk_get_swrst_flag(void)
{
	return GCLK_CTRL & GCLK_CTRL_SWRST;
}

bool gclk_get_syncbusy_flag(void)
{
	return GCLK_STATUS & GCLK_STATUS_SYNCBUSY;
}

void gclk_reset(void)
{
	GCLK_CTRL |= GCLK_CTRL_SWRST;

	while (gclk_get_swrst_flag());
}

void gclk_select_generator_ctrl(uint8_t generator)
{
	while (gclk_get_syncbusy_flag());
	GCLK_GENCTRL8 = (generator & GCLK_GENCTRL_ID_MASK) << GCLK_GENCTRL_ID_SHIFT;
	while (gclk_get_syncbusy_flag());
}

void gclk_enable_generator(uint8_t generator)
{
	gclk_select_generator_ctrl(generator);
	GCLK_GENCTRL |= GCLK_GENCTRL_GENEN;
}

void gclk_disable_generator(uint8_t generator)
{
	gclk_select_generator_ctrl(generator);
	GCLK_GENCTRL &= ~GCLK_GENCTRL_GENEN;
}

void gclk_enable_generator_divsel(uint8_t generator)
{
	gclk_select_generator_ctrl(generator);
	GCLK_GENCTRL |= GCLK_GENCTRL_DIVSEL;
}

void gclk_disable_generator_divsel(uint8_t generator)
{
	gclk_select_generator_ctrl(generator);
	GCLK_GENCTRL &= ~GCLK_GENCTRL_DIVSEL;
}

void gclk_enable_generator_output(uint8_t generator)
{
	gclk_select_generator_ctrl(generator);
	GCLK_GENCTRL |= GCLK_GENCTRL_OE;
}

void gclk_disable_generator_output(uint8_t generator)
{
	gclk_select_generator_ctrl(generator);
	GCLK_GENCTRL &= ~GCLK_GENCTRL_OE;
}

/* 
   if id != 0
	   input can not be genclk
 */
void gclk_set_generator_clk_src(uint8_t generator, uint8_t clk_src)
{
	gclk_select_generator_ctrl(generator);

	uint32_t reg32 = GCLK_GENCTRL; 
	reg32 &= ~(GCLK_GENCTRL_SRC_MASK << GCLK_GENCTRL_SRC_SHIFT);
	reg32 |= ((clk_src & GCLK_GENCTRL_SRC_MASK) << GCLK_GENCTRL_SRC_SHIFT);
	GCLK_GENCTRL = reg32;
}

/*
 	0		8 division factor bits - DIV[7:0]
	1		16 division factor bits - DIV[15:0]
	2		5 division factor bits - DIV[4:0]
	3-8		8 division factor bits - DIV[7:0]
*/
void gclk_set_generator_clk_division(uint8_t generator, uint8_t prescaler)
{
	while (gclk_get_syncbusy_flag());
	GCLK_GENDIV8 = (generator & GCLK_GENDIV_ID_MASK) << GCLK_GENDIV_ID_SHIFT;
	while (gclk_get_syncbusy_flag());

	uint32_t reg32 = GCLK_GENDIV;; 
	reg32 &= ~(GCLK_GENDIV_DIV_MASK << GCLK_GENDIV_DIV_SHIFT);
	reg32 |= ((prescaler & GCLK_GENDIV_DIV_MASK) << GCLK_GENDIV_DIV_SHIFT);
	GCLK_GENDIV = reg32;
}

void gclk_set_clk_generator(uint8_t clk, uint8_t generator)
{
	gclk_select_clk_ctrl(clk);

	uint32_t reg32 = GCLK_CLKCTRL; 
	reg32 &= ~(GCLK_CLKCTRL_GEN_MASK << GCLK_CLKCTRL_GEN_SHIFT);
	reg32 |= ((generator & GCLK_CLKCTRL_GEN_MASK) << GCLK_CLKCTRL_GEN_SHIFT);
	GCLK_CLKCTRL = reg32;
}

void gclk_enable_clk(uint8_t clk)
{
	gclk_select_clk_ctrl(clk);
	GCLK_CLKCTRL |= GCLK_CLKCTRL_CLKEN;
}

void gclk_disable_clk(uint8_t clk)
{
	gclk_select_clk_ctrl(clk);
	GCLK_CLKCTRL &= ~GCLK_CLKCTRL_CLKEN;
}

