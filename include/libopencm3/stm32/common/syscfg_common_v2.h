/** @addtogroup syscfg_defines
 *
 * @brief Defined Constants and Types for SYSCFG peripheral.
 *
 * @version 1.0.0
 *
 * @date 28 December 2017
 *
 * LGPL License Terms @ref lgpl_license
 */
/*
 * This file is part of the libopencm3 project.
 *
 * Copyright (C) Bruno Randolf <br1@einfach.org>
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

/** @cond */
#if defined(LIBOPENCM3_SYSCFG_H)
/** @endcond */
#ifndef LIBOPENCM3_SYSCFG_COMMON_V2_H
#define LIBOPENCM3_SYSCFG_COMMON_V2_H

/**@{*/

/* --- SYSCFG registers ---------------------------------------------------- */

/** @defgroup syscfg_registers System configuration controller Register
@{*/
/** SYSCFG_MEMRMP Remap Memory register **/
#define SYSCFG_MEMRMP			MMIO32(SYSCFG_BASE + 0x00)
/** SYSCFG_CFGR1 peripheral mode configuration register **/
#define SYSCFG_CFGR1			MMIO32(SYSCFG_BASE + 0x04)
#define SYSCFG_EXTICR(i)		MMIO32(SYSCFG_BASE + 0x08 + (i)*4)
#define SYSCFG_EXTICR1			SYSCFG_EXTICR(0)
#define SYSCFG_EXTICR2			SYSCFG_EXTICR(1)
#define SYSCFG_EXTICR3			SYSCFG_EXTICR(2)
#define SYSCFG_EXTICR4			SYSCFG_EXTICR(3)
/** SYSCFG_SCSR CCM SRAM control and status register **/
#define SYSCFG_SCSR			MMIO32(SYSCFG_BASE + 0x18)
/** SYSCFG_CFGR2 configuration register 2 **/
#define SYSCFG_CFGR2			MMIO32(SYSCFG_BASE + 0x1C)
/** SYSCFG_SWPR SRAM Write protection register 1 **/
#define SYSCFG_SWPR			MMIO32(SYSCFG_BASE + 0x20)
/** SYSCFG_SKR SRAM2 Key Register **/
#define SYSCFG_SKR			MMIO32(SYSCFG_BASE + 0x24)
/**@}*/
/* --- SYSCFG_MEMRMP Values ------------------------------------------------ */

/** @defgroup syscfg_memrmp MEMRMP Remap Memory register
@{*/
/** SYSCFG_MEMRMP_FB_mode User Flash Bank mode **/
#define SYSCFG_MEMRMP_FB_mode		(1 << 8)

#define SYSCFG_MEMRMP_MEM_MODE_SHIFT	0
#define SYSCFG_MEMRMP_MEM_MODE_MASK	0x07
/** @defgroup syscfg_memrmp_mem_mode MEMMODE Memory mapping selection
@{*/
#define SYSCFG_MEMRMP_MEM_MODE_FLASH	0
#define SYSCFG_MEMRMP_MEM_MODE_SYSTEM	1
#define SYSCFG_MEMRMP_MEM_MODE_FMC	2
#define SYSCFG_MEMRMP_MEM_MODE_SRAM	3
#define SYSCFG_MEMRMP_MEM_MODE_QSPI	6
/**@}*/
/**@}*/

/* --- SYSCFG_CFGR1 Values ------------------------------------------------- */

/** @defgroup syscfg_cfgr1 CFGR1 peripheral mode configuration register
@{*/
#define SYSCFG_CFGR1_FPU_IE_INEXACT	(1 << 31)
#define SYSCFG_CFGR1_FPU_IE_DENORMAL	(1 << 30)
#define SYSCFG_CFGR1_FPU_IE_OVERFLOW	(1 << 29)
#define SYSCFG_CFGR1_FPU_IE_UNDERFLOW	(1 << 28)
#define SYSCFG_CFGR1_FPU_IE_DIVZERO	(1 << 27)
#define SYSCFG_CFGR1_FPU_IE_INVALID	(1 << 26)

#define SYSCFG_CFGR1_I2C3_FMP		(1 << 22)
#define SYSCFG_CFGR1_I2C2_FMP		(1 << 21)
#define SYSCFG_CFGR1_I2C1_FMP		(1 << 20)

#define SYSCFG_CFGR1_I2C_PB9_FMP	(1 << 19)
#define SYSCFG_CFGR1_I2C_PB8_FMP	(1 << 18)
#define SYSCFG_CFGR1_I2C_PB7_FMP	(1 << 17)
#define SYSCFG_CFGR1_I2C_PB6_FMP	(1 << 16)

#define SYSCFG_CFGR1_BOOSTEN		(1 << 8)
#define SYSCFG_CFGR1_FWDIS		(1 << 0)
/**@}*/

/* --- SYSCFG_EXTICR Values -------------------------------------------------*/

#define SYSCFG_EXTICR_FIELDSIZE		4
#define SYSCFG_EXTICR_GPIOA		0
#define SYSCFG_EXTICR_GPIOB		1
#define SYSCFG_EXTICR_GPIOC		2
#define SYSCFG_EXTICR_GPIOD		3
#define SYSCFG_EXTICR_GPIOE		4
#define SYSCFG_EXTICR_GPIOH		7

/* --- SYSCFG_SCSR Values -------------------------------------------------- */
/** @defgroup syscfg_scsr SCSR CCM SRAM control and status register
@{*/
#define SYSCFG_SCSR_SRAM2BSY		(1 << 1)
#define SYSCFG_SCSR_SRAM2ER		(1 << 0)
/**@}*/

/* --- SYSCFG_CFGR2 Values ------------------------------------------------- */
/** @defgroup syscfg_cfgr2 CFGR2 configuration register 2
@{*/
#define SYSCFG_CFGR2_SPF		(1 << 8)
#define SYSCFG_CFGR2_ECCL		(1 << 3)
#define SYSCFG_CFGR2_PVDL		(1 << 2)
#define SYSCFG_CFGR2_SPL		(1 << 1)
#define SYSCFG_CFGR2_CCL		(1 << 0)
/**@}*/

/* --- SYSCFG_SWPR Values -------------------------------------------------- */

/** @defgroup syscfg_swpr SWPR SRAM Write protection register 1
@{*/
/* SYSCFG_SWPR_PxWP SRAM Page x Write protection */
#define SYSCFG_SWPR_PxWP(x)		(1 << x)
/**@}*/

/* --- SYSCFG_SKR Values --------------------------------------------------- */

/** @defgroup syscfg_skr SKR SRAM2 Key Register
@{*/
#define SYSCFG_SKR_KEY1			0xCA
#define SYSCFG_SKR_KEY2			0x53
/**@}*/

/**@}*/

#endif
/**@}*/

/** @cond */
#else
#warning "syscfg_common_v2.h should not be included explicitly,"
#warning "only via syscfg.h"
#endif
/** @endcond */
