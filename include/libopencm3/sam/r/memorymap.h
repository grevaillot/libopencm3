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

#ifndef LIBOPENCM3_MEMORYMAP_H
#define LIBOPENCM3_MEMORYMAP_H

#include <libopencm3/cm3/memorymap.h>

/* --- SAML AHB-APB bridge A -------------------------------------------- */
#define PM_BASE			(0x40000000U)
#define MCLK_BASE			(0x40000400U)
#define RSTC_BASE			(0x40000800U)
#define OSCCTRL_BASE			(0x40000c00U)
#define OSC32KCTRL_BASE			(0x40001000U)
#define SUPC_BASE			(0x40001400U)
#define GCLK_BASE			(0x40001800U)
#define WDT_BASE			(0x40001c00U)
#define RTC_BASE			(0x40002000U)
#define EIC_BASE			(0x40002400U)
#define PORT_BASE			(0x40002800U)

/* --- SAML AHB-APB bridge B -------------------------------------------- */
#define USB_BASE			(0x41000000U)
#define DSU_BASE			(0x41002000U)
#define NVMCTRL_BASE			(0x41004000U)
#define MTB_BASE			(0x41006000U)

/* --- SAML AHB-APB bridge C -------------------------------------------- */
#define SERCOM0_BASE			(0x42000000U)
#define SERCOM1_BASE			(0x42000400U)
#define SERCOM2_BASE			(0x42000800U)
#define SERCOM3_BASE			(0x42000c00U)
#define SERCOM4_BASE			(0x42001000U)
#define TCC0_BASE			(0x42001400U)
#define TCC1_BASE			(0x42001800U)
#define TCC2_BASE			(0x42001c00U)
#define TC0_BASE			(0x42002000U)
#define TC1_BASE			(0x42002400U)
#define DAC_BASE			(0x42003000U)
#define AES_BASE			(0x42003400U)
#define TRNG_BASE			(0x42003800U)

/* --- SAML AHB-APB bridge D -------------------------------------------- */
#define EVSYS_BASE			(0x43000000U)
#define SERCOM5_BASE			(0x43000400U)
#define TC4_BASE			(0x43000800U)
#define ADC_BASE			(0x43000c00U)
#define AC_BASE			(0x43001000U)
#define OPAMP_BASE			(0x43001800U)
#define CCL_BASE			(0x43001c00U)

/* --- SAML AHB-APB bridge E -------------------------------------------- */
#define PAC_BASE			(0x44000000U)
#define DMAC_BASE			(0x44000400U)

/* --- SAML IOBUS --------------------------------------------------------*/
#define PORT_IOBUS_BASE			(0x60000000U)

#define NVM_SOFTWARE_CALIBRATION_ROW	(0x00806020U)

#endif
