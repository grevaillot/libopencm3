/** @defgroup rcc_file RCC peripheral API
 *
 * @ingroup peripheral_apis
 *
 * @brief <b>libopencm3 STM32G4xx Reset and Clock Control</b>
 *
 * @author @htmlonly &copy; @endhtmlonly 2019 Guillaume Revaillot <g.revaillot@gmail.com>
 *
 * @date 30 August 2019
 *
 * This library supports the Reset and Clock Control System in the STM32 series
 * of ARM Cortex Microcontrollers by ST Microelectronics.
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

#include <libopencm3/stm32/rcc.h>
#include <libopencm3/stm32/pwr.h>
#include <libopencm3/stm32/flash.h>
#include <libopencm3/cm3/assert.h>

/* Set the default clock frequencies after reset. */
uint32_t rcc_ahb_frequency =  16000000;
uint32_t rcc_apb1_frequency = 16000000;
uint32_t rcc_apb2_frequency = 16000000;

const struct rcc_clock_scale rcc_clock_config[RCC_CLOCK_CONFIG_END] = {
	[RCC_CLOCK_CONFIG_HSI_16MHZ] = {
		/* 16mhz from hsi, scale2, 1ws */
		.sysclock_source = RCC_HSI,
		.hpre = RCC_CFGR_HPRE_NODIV,
		.ppre1 = RCC_CFGR_PPRE1_NODIV,
		.ppre2 = RCC_CFGR_PPRE2_NODIV,
		.voltage_scale = PWR_SCALE2,
		.flash_waitstates = FLASH_ACR_LATENCY_WS(1),
		.ahb_frequency = 16e6,
		.apb1_frequency = 16e6,
		.apb2_frequency = 16e6,
	},
	[RCC_CLOCK_CONFIG_HSI_PLL_150MHZ] = {
		/* 150mhz from pll, src hsi, scale1, 7ws */
		/* vco in at 2mhz, out at 300mhz, pplr at 150 mhz */
		.sysclock_source = RCC_PLL,
		.pll_source = RCC_PLLCFGR_PLLSRC_HSI16,
		.pll_div = RCC_PLLCFGR_PLLM_DIV(4),
		.pll_mul = RCC_PLLCFGR_PLLN_MUL(75),
		.pllp_div = RCC_PLLCFGR_PLLP_DIV(2),
		.pllq_div = RCC_PLLCFGR_PLLQ_DIV2,
		.pllr_div = RCC_PLLCFGR_PLLR_DIV2,
		.hpre = RCC_CFGR_HPRE_NODIV,
		.ppre1 = RCC_CFGR_PPRE1_NODIV,
		.ppre2 = RCC_CFGR_PPRE2_NODIV,
		.voltage_scale = PWR_SCALE1,
		.flash_waitstates = FLASH_ACR_LATENCY_WS(7),
		.ahb_frequency = 150e6,
		.apb1_frequency = 150e6,
		.apb2_frequency = 150e6,
	},
	[RCC_CLOCK_CONFIG_HSI_PLL_170MHZ] = {
		/* 170mhz from pll, src hsi, scale1, boost mode, 8ws */
		/* vco in at 2mhz, out at 340mhz, pplr at 170 mhz */
		.sysclock_source = RCC_PLL,
		.pll_source = RCC_PLLCFGR_PLLSRC_HSI16,
		.pll_div = RCC_PLLCFGR_PLLM_DIV(4),
		.pll_mul = RCC_PLLCFGR_PLLN_MUL(85),
		.pllp_div = RCC_PLLCFGR_PLLP_DIV(2),
		.pllq_div = RCC_PLLCFGR_PLLQ_DIV2,
		.pllr_div = RCC_PLLCFGR_PLLR_DIV2,
		.hpre = RCC_CFGR_HPRE_NODIV,
		.ppre1 = RCC_CFGR_PPRE1_NODIV,
		.ppre2 = RCC_CFGR_PPRE2_NODIV,
		.voltage_scale = PWR_SCALE1_BOOST,
		.flash_waitstates = FLASH_ACR_LATENCY_WS(8),
		.ahb_frequency = 170e6,
		.apb1_frequency = 170e6,
		.apb2_frequency = 170e6,
	},
	[RCC_CLOCK_CONFIG_HSE_24MHZ] = {
		/* 24mhz from hse, scale2, 2ws */
		.sysclock_source = RCC_HSI,
		.hpre = RCC_CFGR_HPRE_NODIV,
		.ppre1 = RCC_CFGR_PPRE1_NODIV,
		.ppre2 = RCC_CFGR_PPRE2_NODIV,
		.voltage_scale = PWR_SCALE2,
		.flash_waitstates = FLASH_ACR_LATENCY_WS(2),
		.ahb_frequency = 24e6,
		.apb1_frequency = 24e6,
		.apb2_frequency = 24e6,
	},
	[RCC_CLOCK_CONFIG_HSE_24MHZ_PLL_170MHZ] = {
		/* 170mhz from pll, src 24mhz hse, scale1, boost mode, 8ws */
		/* vco in at 2mhz, out at 340mhz, pplr at 170 mhz */
		.sysclock_source = RCC_PLL,
		.pll_source = RCC_PLLCFGR_PLLSRC_HSE,
		.pll_div = RCC_PLLCFGR_PLLM_DIV(6),
		.pll_mul = RCC_PLLCFGR_PLLN_MUL(85),
		.pllp_div = RCC_PLLCFGR_PLLP_DIV(2),
		.pllq_div = RCC_PLLCFGR_PLLQ_DIV2,
		.pllr_div = RCC_PLLCFGR_PLLR_DIV2,
		.hpre = RCC_CFGR_HPRE_NODIV,
		.ppre1 = RCC_CFGR_PPRE1_NODIV,
		.ppre2 = RCC_CFGR_PPRE2_NODIV,
		.voltage_scale = PWR_SCALE1_BOOST,
		.flash_waitstates = FLASH_ACR_LATENCY_WS(8),
		.ahb_frequency = 170e6,
		.apb1_frequency = 170e6,
		.apb2_frequency = 170e6,
	},
};

void rcc_osc_on(enum rcc_osc osc)
{
	switch (osc) {
	case RCC_PLL:
		RCC_CR |= RCC_CR_PLLON;
		break;
	case RCC_HSE:
		RCC_CR |= RCC_CR_HSEON;
		break;
	case RCC_HSI:
		RCC_CR |= RCC_CR_HSION;
		break;
	case RCC_LSE:
		RCC_BDCR |= RCC_BDCR_LSEON;
		break;
	case RCC_LSI:
		RCC_CSR |= RCC_CSR_LSION;
		break;
	default:
		cm3_assert_not_reached();
		break;
	}
}

void rcc_osc_off(enum rcc_osc osc)
{
	switch (osc) {
	case RCC_PLL:
		RCC_CR &= ~RCC_CR_PLLON;
		break;
	case RCC_HSE:
		RCC_CR &= ~RCC_CR_HSEON;
		break;
	case RCC_HSI:
		RCC_CR &= ~RCC_CR_HSION;
		break;
	case RCC_LSE:
		RCC_BDCR &= ~RCC_BDCR_LSEON;
		break;
	case RCC_LSI:
		RCC_CSR &= ~RCC_CSR_LSION;
		break;
	default:
		cm3_assert_not_reached();
		break;
	}
}

bool rcc_is_osc_ready(enum rcc_osc osc)
{
	switch (osc) {
	case RCC_PLL:
		return RCC_CR & RCC_CR_PLLRDY;
	case RCC_HSE:
		return RCC_CR & RCC_CR_HSERDY;
	case RCC_HSI:
		return RCC_CR & RCC_CR_HSIRDY;
	case RCC_LSE:
		return RCC_BDCR & RCC_BDCR_LSERDY;
	case RCC_LSI:
		return RCC_CSR & RCC_CSR_LSIRDY;
	default:
		cm3_assert_not_reached();
		return 0;
	}
	return false;
}

void rcc_wait_for_osc_ready(enum rcc_osc osc)
{
	while (!rcc_is_osc_ready(osc));
}

void rcc_css_enable(void)
{
	RCC_CR |= RCC_CR_CSSON;
}

void rcc_css_disable(void)
{
	RCC_CR &= ~RCC_CR_CSSON;
}

void rcc_css_int_clear(void)
{
	RCC_CICR |= RCC_CICR_CSSC;
}

int rcc_css_int_flag(void)
{
	return ((RCC_CIFR & RCC_CIFR_CSSF) != 0);
}

/*---------------------------------------------------------------------------*/
/** @brief Set the Source for the System Clock.
 * @param osc Oscillator to use.
 */
void rcc_set_sysclk_source(enum rcc_osc osc)
{
	uint32_t reg32;
	uint32_t sw = 0;

	switch (osc) {
		case RCC_HSI:
			sw = RCC_CFGR_SW_HSI;
			break;
		case RCC_HSE:
			sw = RCC_CFGR_SW_HSE;
			break;
		case RCC_PLL:
			sw = RCC_CFGR_SW_PLL;
			break;
		default:
			cm3_assert_not_reached();
			return;
	}

	reg32 = RCC_CFGR;
	reg32 &= ~(RCC_CFGR_SW_MASK << RCC_CFGR_SW_SHIFT);
	RCC_CFGR = (reg32 | (sw << RCC_CFGR_SW_SHIFT));
}

/*---------------------------------------------------------------------------*/
/** @brief Return the clock source which is used as system clock.
 * @return rcc_osc system clock source
 */
enum rcc_osc rcc_system_clock_source(void)
{
	switch ((RCC_CFGR >> RCC_CFGR_SWS_SHIFT) & RCC_CFGR_SWS_MASK) {
		case RCC_CFGR_SW_HSI:
			return RCC_HSI;
		case RCC_CFGR_SW_HSE:
			return RCC_HSE;
		case RCC_CFGR_SWS_PLL:
			return RCC_PLL;
		default:
			cm3_assert_not_reached();
			return 0;
	}
}

/*---------------------------------------------------------------------------*/
/** @brief Wait until system clock switched to given oscillator.
 * @param osc Oscillator.
 */
void rcc_wait_for_sysclk_status(enum rcc_osc osc)
{
	uint32_t sws = 0;

	switch (osc) {
		case RCC_PLL:
			sws = RCC_CFGR_SWS_PLL;
			break;
		case RCC_HSE:
			sws = RCC_CFGR_SWS_HSE;
			break;
		case RCC_HSI:
			sws = RCC_CFGR_SWS_HSI;
			break;
		default:
			cm3_assert_not_reached();
			break;
	}

	while (((RCC_CFGR >> RCC_CFGR_SWS_SHIFT) & RCC_CFGR_SWS_MASK) != sws);
}

/**
 * @brief Configure pll source.
 * @param[in] pllsrc pll clock source @ref rcc_pllcfgr_pllsrc
 */
void rcc_set_pll_source(uint32_t pllsrc)
{
	uint32_t reg32;

	reg32 = RCC_PLLCFGR;
	reg32 &= ~(RCC_PLLCFGR_PLLSRC_MASK << RCC_PLLCFGR_PLLSRC_SHIFT);
	RCC_PLLCFGR = (reg32 | (pllsrc << RCC_PLLCFGR_PLLSRC_SHIFT));
}

/* XXX could be factorized with l4 and g0 */
/**
 * @brief Configure pll source and output frequencies.
 * @param[in] source pll clock source @ref rcc_pllcfgr_pllsrc
 * @param[in] pllm pll vco division factor @ref rcc_pllcfgr_pllm
 * @param[in] plln pll vco multiplation factor @ref rcc_pllcfgr_plln
 * @param[in] pllp pll P clock output division factor @ref rcc_pllcfgr_pllp
 * @param[in] pllq pll Q clock output division factor @ref rcc_pllcfgr_pllq
 * @param[in] pllr pll R clock output (sysclock pll) division factor @ref rcc_pllcfgr_pllr
 */
void rcc_set_main_pll(uint32_t source, uint32_t pllm, uint32_t plln, uint32_t pllp,
	uint32_t pllq, uint32_t pllr)
{
	RCC_PLLCFGR = (source << RCC_PLLCFGR_PLLSRC_SHIFT) |
		(pllm << RCC_PLLCFGR_PLLM_SHIFT) |
		(plln << RCC_PLLCFGR_PLLN_SHIFT) |
		(pllp << RCC_PLLCFGR_PLLP_SHIFT) |
		(pllq << RCC_PLLCFGR_PLLQ_SHIFT) |
		(pllr << RCC_PLLCFGR_PLLR_SHIFT);
}

/**
 * @brief Enable PLL P clock output.
 * @param[in] enable or disable P clock output
 */
void rcc_enable_pllp(bool enable)
{
	if (enable) {
		RCC_PLLCFGR |= RCC_PLLCFGR_PLLPEN;
	} else {
		RCC_PLLCFGR &= ~RCC_PLLCFGR_PLLPEN;
	}
}

/**
 * @brief Enable PLL Q clock output.
 * @param[in] enable or disable Q clock output
 */
void rcc_enable_pllq(bool enable)
{
	if (enable) {
		RCC_PLLCFGR |= RCC_PLLCFGR_PLLQEN;
	} else {
		RCC_PLLCFGR &= ~RCC_PLLCFGR_PLLQEN;
	}
}

/**
 * @brief Enable PLL R clock output.
 * @param[in] enable or disable R clock output
 */
void rcc_enable_pllr(bool enable)
{
	if (enable) {
		RCC_PLLCFGR |= RCC_PLLCFGR_PLLREN;
	} else {
		RCC_PLLCFGR &= ~RCC_PLLCFGR_PLLREN;
	}
}

/* XXX factorize me .. */

/**
 * @brief Configure APB1 peripheral clock prescaler
 * @param[in] ppre APB1 clock prescaler value @ref rcc_cfgr_ppre1
 */
void rcc_set_ppre1(uint32_t ppre1)
{
	uint32_t reg32;

	reg32 = RCC_CFGR;
	reg32 &= ~(RCC_CFGR_PPRE1_MASK << RCC_CFGR_PPRE1_SHIFT);
	RCC_CFGR = (reg32 | (ppre1 << RCC_CFGR_PPRE1_SHIFT));
}

/**
 * @brief Configure APB2 peripheral clock prescaler
 * @param[in] ppre APB2 clock prescaler value @ref rcc_cfgr_ppre2
 */
void rcc_set_ppre2(uint32_t ppre2)
{
	uint32_t reg32;

	reg32 = RCC_CFGR;
	reg32 &= ~(RCC_CFGR_PPRE2_MASK << RCC_CFGR_PPRE2_SHIFT);
	RCC_CFGR = (reg32 | (ppre2 << RCC_CFGR_PPRE2_SHIFT));
}

/**
 * @brief Configure AHB peripheral clock prescaler
 * @param[in] hpre AHB clock prescaler value @ref rcc_cfgr_hpre
 */
void rcc_set_hpre(uint32_t hpre)
{
	uint32_t reg32;

	reg32 = RCC_CFGR;
	reg32 &= ~(RCC_CFGR_HPRE_MASK << RCC_CFGR_HPRE_SHIFT);
	RCC_CFGR = (reg32 | (hpre << RCC_CFGR_HPRE_SHIFT));
}

/**
 * @brief Configure mco prescaler.
 * @param[in] mcopre prescaler value @ref rcc_cfgr_mcopre
 */
void rcc_set_mcopre(uint32_t mcopre)
{
	uint32_t reg32;

	reg32 = RCC_CFGR;
	reg32 &= ~(RCC_CFGR_MCOPRE_MASK << RCC_CFGR_MCOPRE_SHIFT);
	RCC_CFGR = (reg32 | (mcopre << RCC_CFGR_MCOPRE_SHIFT));
}

/**
 * @brief Setup sysclock with desired source (HSE/HSI/PLL/LSE/LSI). taking care of flash/pwr and src configuration
 * @param clock rcc_clock_scale with desired parameters
 */
void rcc_clock_setup(const struct rcc_clock_scale *clock)
{	
	if (clock->sysclock_source == RCC_PLL) {
		enum rcc_osc pll_source;

		if (clock->pll_source == RCC_PLLCFGR_PLLSRC_HSE)
			pll_source = RCC_HSE;
		else
			pll_source = RCC_HSI;

		/* start pll src osc. */
		rcc_osc_on(pll_source);
		rcc_wait_for_osc_ready(pll_source);

		/* stop pll to reconfigure it. */
		rcc_osc_off(RCC_PLL);
		while (rcc_is_osc_ready(RCC_PLL));

		rcc_set_main_pll(clock->pll_source, clock->pll_div, clock->pll_mul, clock->pllp_div, clock->pllq_div, clock->pllr_div);

		rcc_enable_pllr(true);
	}

	rcc_periph_clock_enable(RCC_PWR);
	pwr_set_vos_scale(clock->voltage_scale);

	flash_set_ws(clock->flash_waitstates);

	/* enable flash prefetch if we have at least 1WS */
	if (clock->flash_waitstates > FLASH_ACR_LATENCY_0WS)
		flash_prefetch_enable();
	else
		flash_prefetch_disable();

	rcc_set_hpre(clock->hpre);
	rcc_set_ppre1(clock->ppre1);
	rcc_set_ppre2(clock->ppre2);

	rcc_osc_on(clock->sysclock_source);
	rcc_wait_for_osc_ready(clock->sysclock_source);

	rcc_set_sysclk_source(clock->sysclock_source);
	rcc_wait_for_sysclk_status(clock->sysclock_source);

	rcc_ahb_frequency = clock->ahb_frequency;
	rcc_apb1_frequency = clock->apb1_frequency;
	rcc_apb2_frequency = clock->apb2_frequency;
}

/**
 * @brief Set clock source for 48MHz clock
 * @param sel clock source @ref rcc_ccipr1_clk48sel
 */
void rcc_set_clock48_source(uint32_t sel)
{
	uint32_t reg32 = RCC_CCIPR1 & ~(RCC_CCIPR1_CLK48SEL_MASK << RCC_CCIPR1_CLK48SEL_SHIFT);
	RCC_CCIPR1 = reg32 | (sel << RCC_CCIPR1_CLK48SEL_SHIFT);
}

/**
 * @brief Set the peripheral clock source
 * @param periph peripheral of choice, eg XXX_BASE
 * @param sel peripheral clock source
 */
void rcc_set_peripheral_clk_sel(uint32_t periph, uint32_t sel)
{
	uint32_t mask = 0;
	uint8_t shift = 0;
	uint32_t reg32;

	switch (periph) {
		case ADC345_Common_BASE:
			shift = RCC_CCIPR1_ADC345SEL_SHIFT;
			mask = RCC_CCIPR1_ADC345SEL_MASK;
			break;
		case ADC12_Common_BASE:
			shift = RCC_CCIPR1_ADC12SEL_SHIFT;
			mask = RCC_CCIPR1_ADC12SEL_MASK;
			break;
		case FDCAN_BASE:
			shift = RCC_CCIPR1_FDCANSEL_SHIFT;
			mask = RCC_CCIPR1_FDCANSEL_MASK;
			break;
		case SAI_BASE:
			shift = RCC_CCIPR1_SAI1SEL_SHIFT;
			mask = RCC_CCIPR1_SAI1SEL_MASK;
			break;
		case LPTIM1_BASE:
			shift = RCC_CCIPR1_LPTIM1SEL_SHIFT;
			mask = RCC_CCIPR1_LPTIM1SEL_MASK;
			break;
		case I2C2_BASE:
			shift = RCC_CCIPR1_I2C2SEL_SHIFT;
			mask = RCC_CCIPR1_I2C2SEL_MASK;
			break;
		case I2C3_BASE:
			shift = RCC_CCIPR1_I2C3SEL_SHIFT;
			mask = RCC_CCIPR1_I2C3SEL_MASK;
			break;
		case I2C1_BASE:
			shift = RCC_CCIPR1_I2C1SEL_SHIFT;
			mask = RCC_CCIPR1_I2C1SEL_MASK;
			break;
		case LPUART1_BASE:
			shift = RCC_CCIPR1_LPUART1SEL_SHIFT;
			mask = RCC_CCIPR1_LPUART1SEL_MASK;
			break;
		case UART5_BASE:
			shift = RCC_CCIPR1_UART5SEL_SHIFT;
			mask = RCC_CCIPR1_UART5SEL_MASK;
			break;
		case UART4_BASE:
			shift = RCC_CCIPR1_UART4SEL_SHIFT;
			mask = RCC_CCIPR1_UART4SEL_MASK;
			break;
		case USART2_BASE:
			shift = RCC_CCIPR1_USART2SEL_SHIFT;
			mask = RCC_CCIPR1_USART2SEL_MASK;
			break;
		case USART1_BASE:
			shift = RCC_CCIPR1_USART1SEL_SHIFT;
			mask = RCC_CCIPR1_USART1SEL_MASK;
			break;
		default:
			return;
	}

	if (mask) {
		reg32 = RCC_CCIPR1 & ~(mask << shift);
		RCC_CCIPR1 = reg32 | (sel << shift);
		return;
	}

  /* peripheral clock src selection its in ccipr2 */

	switch (periph) {
		case QUADSPI_BASE:
			shift = RCC_CCIPR2_QUADSPISEL_SHIFT;
			mask = RCC_CCIPR2_QUADSPISEL_MASK;
			break;
		case I2C4_BASE:
			shift = RCC_CCIPR2_I2C4SEL_SHIFT;
			mask = RCC_CCIPR2_I2C4SEL_MASK;
		default:
			break;
	}

	if (mask) {
		reg32 = RCC_CCIPR2 & ~(mask << shift);
		RCC_CCIPR2 = reg32 | (sel << shift);
		return;
	}
}

// XXX these are the same than l4 ..

/** Enable the RTC clock */
void rcc_enable_rtc_clock(void)
{
	RCC_BDCR |= RCC_BDCR_RTCEN;
}

/** Disable the RTC clock */
void rcc_disable_rtc_clock(void)
{
	RCC_BDCR &= ~RCC_BDCR_RTCEN;
}

/**
 * @brief Set the rtc clock source
 * @param clk Oscillator.
 */
void rcc_set_rtc_clock_source(enum rcc_osc clk)
{
	uint32_t rtcsel;
	uint32_t reg32;

	switch (clk) {
	case RCC_HSE:
		rtcsel = RCC_BDCR_RTCSEL_HSEDIV32;
		break;
	case RCC_LSE:
		rtcsel = RCC_BDCR_RTCSEL_LSE;
		break;
	case RCC_LSI:
		rtcsel = RCC_BDCR_RTCSEL_LSI;
		break;
	default:
		cm3_assert_not_reached();
		return;
	}

  reg32 = RCC_BDCR & ~(RCC_BDCR_RTCSEL_MASK << RCC_BDCR_RTCSEL_SHIFT);
  RCC_BDCR = reg32 | (rtcsel << RCC_BDCR_RTCSEL_SHIFT);
}

/**@}*/
