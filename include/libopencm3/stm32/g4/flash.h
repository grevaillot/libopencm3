/** @defgroup flash_defines FLASH Defines
 *
 * @ingroup STM32G4xx_defines
 *
 * @brief <b>Defined Constants and Types for the STM32G4xx Flash Control</b>
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
 */

/**@{*/
#ifndef LIBOPENCM3_FLASH_H
#define LIBOPENCM3_FLASH_H

#include <libopencm3/stm32/common/flash_common_all.h>

/** @defgroup flash_registers Flash Register
@{*/
/** FLASH_ACR Access control register **/
#define FLASH_ACR			MMIO32(FLASH_MEM_INTERFACE_BASE + 0x00)
/** FLASH_PDKEYR Power down key register **/
#define FLASH_PDKEYR			MMIO32(FLASH_MEM_INTERFACE_BASE + 0x04)
/** FLASH_KEYR Flash key register **/
#define FLASH_KEYR			MMIO32(FLASH_MEM_INTERFACE_BASE + 0x08)
/** FLASH_OPTKEYR Option byte key register **/
#define FLASH_OPTKEYR			MMIO32(FLASH_MEM_INTERFACE_BASE + 0x0c)
/** FLASH_SR Status register **/
#define FLASH_SR			MMIO32(FLASH_MEM_INTERFACE_BASE + 0x10)
/** FLASH_CR Flash control register **/
#define FLASH_CR			MMIO32(FLASH_MEM_INTERFACE_BASE + 0x14)
/** FLASH_ECCR Flash ECC register **/
#define FLASH_ECCR			MMIO32(FLASH_MEM_INTERFACE_BASE + 0x18)
/** FLASH_OPTR Flash option register **/
#define FLASH_OPTR			MMIO32(FLASH_MEM_INTERFACE_BASE + 0x20)
/** FLASH_PCROP1SR Flash Bank 1 PCROP Start address register **/
#define FLASH_PCROP1SR			MMIO32(FLASH_MEM_INTERFACE_BASE + 0x24)
/** FLASH_PCROP1ER Flash Bank 1 PCROP End address register **/
#define FLASH_PCROP1ER			MMIO32(FLASH_MEM_INTERFACE_BASE + 0x28)
/** FLASH_WRP1AR Flash Bank 1 WRP area A address register **/
#define FLASH_WRP1AR			MMIO32(FLASH_MEM_INTERFACE_BASE + 0x2c)
/** FLASH_WRP1BR Flash Bank 1 WRP area B address register **/
#define FLASH_WRP1BR			MMIO32(FLASH_MEM_INTERFACE_BASE + 0x30)
/** FLASH_SEC1R securable area bank1 register **/
#define FLASH_SEC1R			MMIO32(FLASH_MEM_INTERFACE_BASE + 0x70)
/**@}*/

/** @defgroup flash_acr ACR Access control register
@{*/
/** FLASH_ACR_DBG_SWEN Debug software enable **/
#define FLASH_ACR_DBG_SWEN		(1 << 18)
/** FLASH_ACR_SLEEP_PD Flash Power-down mode during Low-power sleep mode **/
#define FLASH_ACR_SLEEP_PD		(1 << 14)
/** FLASH_ACR_RUN_PD Flash Power-down mode during Low-power run mode **/
#define FLASH_ACR_RUN_PD		(1 << 13)
/** FLASH_ACR_DCRST Data cache reset **/
#define FLASH_ACR_DCRST		(1 << 12)
/** FLASH_ACR_ICRST Instruction cache reset **/
#define FLASH_ACR_ICRST		(1 << 11)
/** FLASH_ACR_DCEN Data cache enable **/
#define FLASH_ACR_DCEN		(1 << 10)
/** FLASH_ACR_ICEN Instruction cache enable **/
#define FLASH_ACR_ICEN		(1 << 9)
/** FLASH_ACR_PRFTEN Prefetch enable **/
#define FLASH_ACR_PRFTEN		(1 << 8)

#define FLASH_ACR_LATENCY_SHIFT		0
#define FLASH_ACR_LATENCY_MASK		0x0f
/** @defgroup flash_acr_latency LATENCY Latency
@{*/
#define FLASH_ACR_LATENCY_WS(ws)	(ws)
#define FLASH_ACR_LATENCY_0WS		0x00
#define FLASH_ACR_LATENCY_1WS		0x01
#define FLASH_ACR_LATENCY_2WS		0x02
#define FLASH_ACR_LATENCY_3WS		0x03
#define FLASH_ACR_LATENCY_4WS		0x04
#define FLASH_ACR_LATENCY_5WS		0x05
#define FLASH_ACR_LATENCY_6WS		0x06
#define FLASH_ACR_LATENCY_7WS		0x07
#define FLASH_ACR_LATENCY_8WS		0x08
/**@}*/
/**@}*/

/** @defgroup flash_pdkeyr PDKEYR Power-Down key register
@{*/
#define FLASH_PDKEYR_KEY1			((uint32_t)0x04152637)
#define FLASH_PDKEYR_KEY2			((uint32_t)0xfafbfcfd)
/**@}*/

/** @defgroup flash_keyr KEYR key register
@{*/
#define FLASH_KEYR_KEY1			((uint32_t)0x45670123)
#define FLASH_KEYR_KEY2			((uint32_t)0xcdef89ab)
/**@}*/

/** @defgroup flash_optkeyr OPTKEYR option key register
@{*/
#define FLASH_OPTKEYR_KEY1		((uint32_t)0x08192a3b)
#define FLASH_OPTKEYR_KEY2		((uint32_t)0x4c5d6e7f)
/**@}*/

/** @defgroup flash_sr SR Status register
@{*/
/** FLASH_SR_BSY Busy **/
#define FLASH_SR_BSY		(1 << 16)
/** FLASH_SR_OPTVERR Option validity error **/
#define FLASH_SR_OPTVERR		(1 << 15)
/** FLASH_SR_RDERR PCROP read error **/
#define FLASH_SR_RDERR		(1 << 14)
/** FLASH_SR_FASTERR Fast programming error **/
#define FLASH_SR_FASTERR		(1 << 9)
/** FLASH_SR_MISERR Fast programming data miss error **/
#define FLASH_SR_MISERR		(1 << 8)
/** FLASH_SR_PGSERR Programming sequence error **/
#define FLASH_SR_PGSERR		(1 << 7)
/** FLASH_SR_SIZERR Size error **/
#define FLASH_SR_SIZERR		(1 << 6)
/** FLASH_SR_PGAERR Programming alignment error **/
#define FLASH_SR_PGAERR		(1 << 5)
/** FLASH_SR_WRPERR Write protected error **/
#define FLASH_SR_WRPERR		(1 << 4)
/** FLASH_SR_PROGERR Programming error **/
#define FLASH_SR_PROGERR		(1 << 3)
/** FLASH_SR_OPERR Operation error **/
#define FLASH_SR_OPERR		(1 << 1)
/** FLASH_SR_EOP End of operation **/
#define FLASH_SR_EOP		(1 << 0)
/**@}*/

/** @defgroup flash_cr CR Flash control register
@{*/
/** FLASH_CR_LOCK FLASH_CR Lock **/
#define FLASH_CR_LOCK		(1 << 31)
/** FLASH_CR_OPTLOCK Options Lock **/
#define FLASH_CR_OPTLOCK		(1 << 30)
/** FLASH_CR_SEC_PROT1 SEC_PROT1 **/
#define FLASH_CR_SEC_PROT1		(1 << 28)
/** FLASH_CR_OBL_LAUNCH Force the option byte loading **/
#define FLASH_CR_OBL_LAUNCH		(1 << 27)
/** FLASH_CR_RDERRIE PCROP read error interrupt enable **/
#define FLASH_CR_RDERRIE		(1 << 26)
/** FLASH_CR_ERRIE Error interrupt enable **/
#define FLASH_CR_ERRIE		(1 << 25)
/** FLASH_CR_EOPIE End of operation interrupt enable **/
#define FLASH_CR_EOPIE		(1 << 24)
/** FLASH_CR_FSTPG Fast programming **/
#define FLASH_CR_FSTPG		(1 << 18)
/** FLASH_CR_OPTSTRT Options modification start **/
#define FLASH_CR_OPTSTRT		(1 << 17)
/** FLASH_CR_STRT Start **/
#define FLASH_CR_STRT		(1 << 16)

#define FLASH_CR_PNB_SHIFT		3
#define FLASH_CR_PNB_MASK		0x7f

/** FLASH_CR_MER1 Bank 1 Mass erase **/
#define FLASH_CR_MER1		(1 << 2)
/** FLASH_CR_PER Page erase **/
#define FLASH_CR_PER		(1 << 1)
/** FLASH_CR_PG Programming **/
#define FLASH_CR_PG		(1 << 0)
/**@}*/

/** @defgroup flash_optr OPTR Flash option register
@{*/
/** FLASH_OPTR_IRHEN IRHEN **/
#define FLASH_OPTR_IRHEN		(1 << 30)

#define FLASH_OPTR_NRST_MODE_SHIFT		28
#define FLASH_OPTR_NRST_MODE_MASK		0x03
/** @defgroup flash_optr_nrst_mode NRSTMODE NRST_MODE
@{*/
#define FLASH_OPTR_NRST_MODE_RESET	1
#define FLASH_OPTR_NRST_MODE_GPIO	2
#define FLASH_OPTR_NRST_MODE_BIDIR	3
/**@}*/

/** FLASH_OPTR_nBOOT0 nBOOT0 **/
#define FLASH_OPTR_nBOOT0		(1 << 27)
/** FLASH_OPTR_nSWBOOT0 nSWBOOT0 **/
#define FLASH_OPTR_nSWBOOT0		(1 << 26)
/** FLASH_OPTR_SRAM2_RST SRAM2 Erase when system reset **/
#define FLASH_OPTR_SRAM2_RST		(1 << 25)
/** FLASH_OPTR_SRAM2_PE SRAM2 parity check enable **/
#define FLASH_OPTR_SRAM2_PE		(1 << 24)
/** FLASH_OPTR_nBOOT1 Boot configuration **/
#define FLASH_OPTR_nBOOT1		(1 << 23)
/** FLASH_OPTR_WWDG_SW Window watchdog selection **/
#define FLASH_OPTR_WWDG_SW		(1 << 19)
/** FLASH_OPTR_IWDG_STDBY Independent watchdog counter freeze in Standby mode **/
#define FLASH_OPTR_IWDG_STDBY		(1 << 18)
/** FLASH_OPTR_IWDG_STOP Independent watchdog counter freeze in Stop mode **/
#define FLASH_OPTR_IWDG_STOP		(1 << 17)
/** FLASH_OPTR_IDWG_SW Independent watchdog selection **/
#define FLASH_OPTR_IDWG_SW		(1 << 16)
/** FLASH_OPTR_nRST_SHDW nRST_SHDW **/
#define FLASH_OPTR_nRST_SHDW		(1 << 14)
/** FLASH_OPTR_nRST_STDBY nRST_STDBY **/
#define FLASH_OPTR_nRST_STDBY		(1 << 13)
/** FLASH_OPTR_nRST_STOP nRST_STOP **/
#define FLASH_OPTR_nRST_STOP		(1 << 12)

#define FLASH_OPTR_BOR_LEV_SHIFT		8
#define FLASH_OPTR_BOR_LEV_MASK		0x07
/** @defgroup flash_optr_bor_lev BORLEV BOR reset Level
@{*/
#define FLASH_OPTR_BOR_LEV_1V7		0
#define FLASH_OPTR_BOR_LEV_2V0		1
#define FLASH_OPTR_BOR_LEV_2V2		2
#define FLASH_OPTR_BOR_LEV_2V5		3
#define FLASH_OPTR_BOR_LEV_2V8		4
/**@}*/

#define FLASH_OPTR_RDP_SHIFT		0
#define FLASH_OPTR_RDP_MASK		0xff
/** @defgroup flash_optr_rdp RDP Read protection level
@{*/
#define FLASH_OPTR_RDP_LEVEL_0		0xAA
#define FLASH_OPTR_RDP_LEVEL_1		0xBB /* or any other value. */
#define FLASH_OPTR_RDP_LEVEL_2		0xCC
/**@}*/

/**@}*/

BEGIN_DECLS

/** Unlock program memory */
void flash_unlock_progmem(void);
/** lock program memory */
void flash_lock_progmem(void);

/** lock option byte access */
void flash_lock_option_bytes(void);

END_DECLS

#endif
/**@}*/
