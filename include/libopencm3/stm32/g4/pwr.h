/** @defgroup pwr_defines PWR Defines
 *
 * @brief <b>Defined Constants and Types for the STM32G4xx PWR Control</b>
 *
 * @ingroup STM32G4xx_defines
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

#ifndef LIBOPENCM3_PWR_H
#define LIBOPENCM3_PWR_H
/**@{*/

/** @defgroup pwr_registers PWR Registers
@{*/
/** Power control register 1 (PWR_CR1) */
#define PWR_CR1				MMIO32(POWER_CONTROL_BASE + 0x00)

/** Power control register 2 (PWR_CR2) */
#define PWR_CR2				MMIO32(POWER_CONTROL_BASE + 0x04)

/** Power control register 3 (PWR_CR3) */
#define PWR_CR3				MMIO32(POWER_CONTROL_BASE + 0x08)

/** Power control register 4 (PWR_CR4) */
#define PWR_CR4				MMIO32(POWER_CONTROL_BASE + 0x0c)

/** Power status register 1 (PWR_SR1) */
#define PWR_SR1				MMIO32(POWER_CONTROL_BASE + 0x10)

/** Power status registery 2 (PWR_SR2) */
#define PWR_SR2				MMIO32(POWER_CONTROL_BASE + 0x14)

/** Power status clear register (PWR_SCR) */
#define PWR_SCR				MMIO32(POWER_CONTROL_BASE + 0x18)

#define PWR_PORT_A		MMIO32(POWER_CONTROL_BASE + 0x20)
#define PWR_PORT_B		MMIO32(POWER_CONTROL_BASE + 0x28)
#define PWR_PORT_C		MMIO32(POWER_CONTROL_BASE + 0x30)
#define PWR_PORT_D		MMIO32(POWER_CONTROL_BASE + 0x38)
#define PWR_PORT_E		MMIO32(POWER_CONTROL_BASE + 0x40)
#define PWR_PORT_F		MMIO32(POWER_CONTROL_BASE + 0x48)
#define PWR_PORT_G		MMIO32(POWER_CONTROL_BASE + 0x4C)

#define PWR_PUCR(pwr_port)	MMIO32((pwr_port) + 0x00)
#define PWR_PDCR(pwr_port)	MMIO32((pwr_port) + 0x04)

/** Power control register 5 (PWR_CR5) */
#define PWR_CR5				MMIO32(POWER_CONTROL_BASE + 0x80)
/**@}*/

/** @defgroup pwr_cr1 CR1 Power control register 1
@{*/
/** PWR_CR1_LPR Low-power run **/
#define PWR_CR1_LPR		(1 << 14)

#define PWR_CR1_VOS_SHIFT		9
#define PWR_CR1_VOS_MASK		0x03
/** @defgroup pwr_cr1_vos VOS Voltage scaling range selection
@{*/
#define PWR_CR1_VOS_RANGE_1		1
#define PWR_CR1_VOS_RANGE_2		2
/**@}*/

/** PWR_CR1_DBP Disable backup domain write protection **/
#define PWR_CR1_DBP		(1 << 8)

#define PWR_CR1_LPMS_SHIFT		0
#define PWR_CR1_LPMS_MASK		0x07
/** @defgroup pwr_cr1_lpms LPMS Low-power mode selection
@{*/
#define PWR_CR1_LPMS_STOP_0		0
#define PWR_CR1_LPMS_STOP_1		1
#define PWR_CR1_LPMS_STANDBY	3
#define PWR_CR1_LPMS_SHUTDOWN	4
/**@}*/

/** @defgroup pwr_cr5 CR5 Power control register 5
@{*/
/** PWR_CR5_R1MODE Main regular range 1 mode **/
#define PWR_CR5_R1MODE		(1 << 0)
/**@}*/

/* --- Function prototypes ------------------------------------------------- */

/** Voltage scales for internal regulator */
enum pwr_vos_scale {
	PWR_SCALE2,
	PWR_SCALE1,
	PWR_SCALE1_BOOST,
};

BEGIN_DECLS

void pwr_set_vos_scale(enum pwr_vos_scale scale);

void pwr_disable_backup_domain_write_protect(void);
void pwr_enable_backup_domain_write_protect(void);

void pwr_set_low_power_mode_selection(uint32_t lpms);

void pwr_enable_power_voltage_detect(uint32_t pvdr_level, uint32_t pvdf_level);
void pwr_disable_power_voltage_detect(void);

END_DECLS

/**@}*/
#endif

