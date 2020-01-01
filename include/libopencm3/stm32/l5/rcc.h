/** @defgroup rcc_defines RCC Defines
 *
 * @ingroup STM32L5xx_defines
 *
 * @brief <b>Defined Constants and Types for the STM32L5xx Reset and Clock Control</b>
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
 *
 */

/**@{*/

#ifndef LIBOPENCM3_RCC_H
#define LIBOPENCM3_RCC_H

#include <libopencm3/stm32/common/rcc_common_all.h>

BEGIN_DECLS

#if 0
void rcc_osc_on(enum rcc_osc osc);
void rcc_osc_off(enum rcc_osc osc);

void rcc_css_enable(void);
void rcc_css_disable(void);
void rcc_css_int_clear(void);
int rcc_css_int_flag(void);

void rcc_set_sysclk_source(enum rcc_osc osc);
void rcc_wait_for_sysclk_status(enum rcc_osc osc);
enum rcc_osc rcc_system_clock_source(void);

void rcc_set_pll_source(uint32_t pllsrc);
void rcc_set_main_pll(uint32_t source, uint32_t pllm, uint32_t plln, uint32_t pllp, uint32_t pllq, uint32_t pllr);
void rcc_enable_pllp(bool enable);
void rcc_enable_pllq(bool enable);
void rcc_enable_pllr(bool enable);

void rcc_set_ppre(uint32_t ppre);
void rcc_set_hpre(uint32_t hpre);
void rcc_set_hsisys_div(uint32_t hsidiv);
void rcc_set_mcopre(uint32_t mcopre);

void rcc_clock_setup(const struct rcc_clock_scale *clock);

void rcc_set_rng_clk_div(uint32_t rng_div);
void rcc_set_peripheral_clk_sel(uint32_t periph, uint32_t sel);
#endif

END_DECLS

/**@}*/

#endif
