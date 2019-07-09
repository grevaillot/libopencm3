/** @defgroup sysctrl_file SYSCTRL peripheral API
 *
 * @ingroup peripheral_apis
 *
 * @version 1.0.0
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

#include <libopencm3/sam/sysctrl.h>
#include <libopencm3/cm3/assert.h>

uint32_t ahb_frequency = 1000000;
uint32_t apb1_frequency = 1000000;
uint32_t apb2_frequency = 1000000;

/* 
	Table 10-5. NVM Software Calibration Area Mapping Bit Position Name Description 
		2:0		Reserved 
		14:3	Reserved
		26:15	Reserved
		34:27	ADC LINEARITY ADC Linearity Calibration. Should be written to ADC CALIB register.
		37:35	ADC BIASCAL ADC Bias Calibration. Should be written to ADC CALIB register. 
		44:38	OSC32K CAL OSC32KCalibration. Should be written to SYSCTRL OSC32K register. 
		49:45	USB TRANSN USB TRANSN calibration value. Should be written to USB PADCAL register. 
		54:50	USB TRANSP USB TRANSP calibration value. Should be written to USB PADCAL register.
		57:55	USB TRIM USB TRIM calibration value. Should be written to the USB PADCAL register.
		63:58	DFLL48M COARSE CAL DFLL48M Coarse calibration value. Should be written to SYSCTRL DFLLVAL register.
		73:64	DFLL48M FINE CAL DFLL48M Fine calibration value, Should be written to SYSCTRL DFLLVAL register.
		127:74	Reserved

		DFLL48M Fine cal is not present on D21 or L21.
*/

#define NVM_CAL_ROW_GET(reg, pos, size) ((reg) >> ((pos) % 32)) & ((1 << (size)) - 1);

#define NVM_CALIBRATION_ROW0 MMIO32(NVM_SOFTWARE_CALIBRATION_ROW)
#define NVM_CALIBRATION_ROW1 MMIO32(NVM_SOFTWARE_CALIBRATION_ROW + 4)
#define NVM_CALIBRATION_ROW2 MMIO32(NVM_SOFTWARE_CALIBRATION_ROW + 8)
#define NVM_CALIBRATION_ROW3 MMIO32(NVM_SOFTWARE_CALIBRATION_ROW + 16)

#define NVM_CALIBRATION_ROW0_ADC_LINEARITY_SHIFT	(27 % 32)
#define NVM_CALIBRATION_ROW0_ADC_LINEARITY_MASK		((1 << (34 - 27)) - 1)

#define NVM_CALIBRATION_ROW1_ADC_BIASCAL_SHIFT		(35 % 32)
#define NVM_CALIBRATION_ROW1_ADC_BIASCAL_MASK		((1 << (37 - 35)) - 1)

#define NVM_CALIBRATION_ROW1_OSC32_CAL_SHIFT		(38 % 32)
#define NVM_CALIBRATION_ROW1_OSC32_CAL_MASK			((1 << (44 - 38)) - 1)

#define NVM_CALIBRATION_ROW1_USB_TRANSP_CAL_SHIFT	(45 % 32)
#define NVM_CALIBRATION_ROW1_USB_TRANSP_CAL_MASK	((1 << (49 - 45)) - 1)

#define NVM_CALIBRATION_ROW1_USB_TRANSN_CAL_SHIFT	(50 % 32)
#define NVM_CALIBRATION_ROW1_USB_TRANSN_CAL_MASK	((1 << (54 - 50)) - 1)

#define NVM_CALIBRATION_ROW1_USB_TRIM_SHIFT			(55 % 32)
#define NVM_CALIBRATION_ROW1_USB_TRIM_MASK			((1 << (57 - 55)) - 1)

#define NVM_CALIBRATION_ROW1_DFLL48M_COARSE_CAL_SHIFT		(58 % 32)
#define NVM_CALIBRATION_ROW1_DFLL48M_COARSE_CAL_MASK		((1 << (63 - 58)) - 1)

#define NVM_CALIBRATION_ROW2_DFLL48M_FINE_CAL_SHIFT			(64 % 32)
#define NVM_CALIBRATION_ROW2_DFLL48M_FINE_CAL_MASK			((1 << (73 - 64)) - 1)		
      /*                                                  	

	uint8_t dffl48m_coarse_cal = (NVM_CALIBRATION_ROW1 >> NVM_CALIBRATION_ROW1_DFLL48M_COARSE_CAL_SHIFT) & NVM_CALIBRATION_ROW1_DFLL48M_COARSE_CAL_MASK;
	*/

/* TODO: add ONDEMAND, RUNDSTBY helpers */

void sysctrl_set_osc8m_prescaler(uint8_t presc)
{
	uint32_t reg32 = SYSCTRL_OSC8M;
	reg32 &= ~(SYSCTRL_OSC8M_PRESC_MASK << SYSCTRL_OSC8M_PRESC_SHIFT);
	reg32 |= ((presc & SYSCTRL_OSC8M_PRESC_MASK) << SYSCTRL_OSC8M_PRESC_SHIFT);
	SYSCTRL_OSC8M = reg32;
}

void sysctrl_set_dfll48m_fine_calibration(uint32_t fine_cal)
{
	uint32_t reg32 = SYSCTRL_DFLLVAL;
	reg32 &= ~(SYSCTRL_DFLLVAL_FINE_MASK << SYSCTRL_DFLLVAL_FINE_SHIFT);
	reg32 |= (fine_cal & SYSCTRL_DFLLVAL_FINE_MASK) << SYSCTRL_DFLLVAL_FINE_SHIFT;
	SYSCTRL_DFLLVAL = reg32;
}

void sysctrl_set_dfll48m_coarse_calibration(uint32_t coarse_cal)
{
	uint32_t reg32 = SYSCTRL_DFLLVAL;
	reg32 &= ~(SYSCTRL_DFLLVAL_COARSE_MASK << SYSCTRL_DFLLVAL_FINE_SHIFT);
	reg32 |= (coarse_cal & SYSCTRL_DFLLVAL_COARSE_MASK) << SYSCTRL_DFLLVAL_COARSE_SHIFT;
	SYSCTRL_DFLLVAL = reg32;
}

void sysctrl_set_xosc_mode(bool xtalen, bool ampgc, uint8_t startup_time)
{
	uint32_t reg32 = SYSCTRL_XOSC;

	reg32 &= ~(SYSCTRL_XOSC_STARTUP_MASK << SYSCTRL_XOSC_STARTUP_SHIFT);
	reg32 |= (startup_time & SYSCTRL_XOSC_STARTUP_MASK) << SYSCTRL_XOSC_STARTUP_SHIFT;

	if (xtalen)
		reg32 |= (SYSCTRL_XOSC_XTALEN);
	else
		reg32 &= ~(SYSCTRL_XOSC_XTALEN);

	if (ampgc)
		reg32 |= (SYSCTRL_XOSC_AMPGC);
	else
		reg32 &= ~(SYSCTRL_XOSC_AMPGC);

	SYSCTRL_XOSC = reg32;
}

void sysctrl_set_osc32k_mode(int8_t calib, int8_t startup_time)
{	
	uint32_t reg32 = SYSCTRL_OSC32K;

	reg32 &= ~(SYSCTRL_OSC32K_CALIB_MASK << SYSCTRL_OSC32K_CALIB_SHIFT);
	reg32 |= (calib & SYSCTRL_OSC32K_CALIB_MASK) << SYSCTRL_OSC32K_CALIB_SHIFT;

	reg32 &= ~(SYSCTRL_OSC32K_STARTUP_MASK << SYSCTRL_OSC32K_STARTUP_SHIFT);
	reg32 |= (startup_time & SYSCTRL_OSC32K_STARTUP_MASK) << SYSCTRL_OSC32K_STARTUP_SHIFT;

	SYSCTRL_OSC32K = reg32;
}

void sysctrl_set_osculp32k_mode(int8_t calib)
{	
	uint32_t reg32 = SYSCTRL_OSC32K;

	reg32 &= ~(SYSCTRL_OSC32K_CALIB_MASK << SYSCTRL_OSC32K_CALIB_SHIFT);
	reg32 |= (calib & SYSCTRL_OSC32K_CALIB_MASK) << SYSCTRL_OSC32K_CALIB_SHIFT;

	SYSCTRL_OSC32K = reg32;
}

void sysctrl_set_xosc32k_mode(bool xtalen, bool aampen, int8_t startup_time)
{
	uint32_t reg32 = SYSCTRL_XOSC32K;

	reg32 &= ~(SYSCTRL_XOSC32K_STARTUP_MASK << SYSCTRL_XOSC32K_STARTUP_SHIFT);
	reg32 |= (startup_time & SYSCTRL_XOSC32K_STARTUP_MASK) << SYSCTRL_XOSC32K_STARTUP_SHIFT;

	if (xtalen)
		reg32 |= (SYSCTRL_XOSC32K_XTALEN);
	else
		reg32 &= ~(SYSCTRL_XOSC32K_XTALEN);

	/* According to current errata sheet, AAMPEN is not functionnal on D21*/
	if (aampen)
		reg32 |= (SYSCTRL_XOSC32K_AAMPEN);
	else
		reg32 &= ~(SYSCTRL_XOSC32K_AAMPEN);

	SYSCTRL_XOSC32K = reg32;
}

void sysctrl_osc_off(enum osc osc)
{
	switch (osc) {
		case OSC_XOSC:
			SYSCTRL_XOSC &= ~SYSCTRL_XOSC_ENABLE;
			break;
		case OSC_XOSC32K:
			SYSCTRL_XOSC32K &= ~SYSCTRL_XOSC32K_ENABLE;
			break;
		case OSC_OSC32K:
			SYSCTRL_OSC32K &= ~SYSCTRL_OSC32K_ENABLE;
			break;
		case OSC_OSC32ULPK:
			/* OSC32UPLK is enabled at POR and always runs */
			break;
		case OSC_OSC8M:
			SYSCTRL_OSC8M &= ~SYSCTRL_OSC8M_ENABLE;
			break;
		case OSC_DFLL48M:
			SYSCTRL_DFLLCTRL &= ~SYSCTRL_DFLLCTRL_ENABLE;
			break;
		default:
			cm3_assert_not_reached();
			return;
	}
}

void sysctrl_osc_on(enum osc osc)
{
	switch (osc) {
		case OSC_XOSC:
			SYSCTRL_XOSC |= SYSCTRL_XOSC_ENABLE;
			break;
		case OSC_XOSC32K:
			/* enable 32k out ?*/
			SYSCTRL_XOSC32K |= SYSCTRL_XOSC32K_EN32K;
			SYSCTRL_XOSC32K |= SYSCTRL_XOSC32K_ENABLE;
			break;
		case OSC_OSC32K:
			/* enable 32k out ?*/
			SYSCTRL_OSC32K |= SYSCTRL_OSC32K_EN32K;
			SYSCTRL_OSC32K |= SYSCTRL_OSC32K_ENABLE;
			break;
		case OSC_OSC32ULPK:
			/* OSC32UPLK is enabled at POR and always runs */
			break;
		case OSC_OSC8M:
			SYSCTRL_OSC8M |= SYSCTRL_OSC8M_ENABLE;
			break;
		case OSC_DFLL48M:
			SYSCTRL_DFLLCTRL |= SYSCTRL_DFLLCTRL_ENABLE;
			break;
		default:
			cm3_assert_not_reached();
			return;
	}
}

bool sysctrl_osc_ready_flag(enum osc osc)
{
	switch (osc) {
		case OSC_XOSC:
			return SYSCTRL_PCLKSR & SYSCTRL_PCLKSR_XOSCRDY;
		case OSC_XOSC32K:
			return SYSCTRL_PCLKSR & SYSCTRL_PCLKSR_XOSC32KRDY;
		case OSC_OSC32K:
			return SYSCTRL_PCLKSR & SYSCTRL_PCLKSR_OSC32KRDY;
		case OSC_OSC32ULPK:
			/* OSC32UPLK is enabled at POR and always runs */
			return true;
		case OSC_OSC8M:
			return SYSCTRL_PCLKSR & SYSCTRL_PCLKSR_OSC8MRDY;
		case OSC_DFLL48M:
			return SYSCTRL_PCLKSR & SYSCTRL_PCLKSR_DFLLRDY;
		default:
			cm3_assert_not_reached();
			return false;
	}
}

void sysctrl_wait_for_osc_ready(enum osc osc)
{
	while (sysctrl_osc_ready_flag(osc) == false) {
		/* wait for flag */
	}
}
/**@}*/

