/** @addtogroup spi_file

@author @htmlonly &copy; @endhtmlonly 2009
Uwe Hermann <uwe@hermann-uwe.de>
@author @htmlonly &copy; @endhtmlonly 2012
Ken Sarkies <ksarkies@internode.on.net>

*/

/*
 * This file is part of the libopencm3 project.
 *
 * Copyright (C) 2009 Uwe Hermann <uwe@hermann-uwe.de>
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

#include <libopencm3/stm32/spi.h>
#include <libopencm3/stm32/rcc.h>

/**@{*/

void spi_send8(uint32_t spi, uint8_t data)
{
	/* Wait for transfer finished. */
	while (!(SPI_SR(spi) & SPI_SR_TXE));

	SPI_DR8(spi) = data;
}

uint8_t spi_read8(uint32_t spi)
{
	/* Wait for transfer finished. */
	while (!(SPI_SR(spi) & SPI_SR_RXNE));

	return SPI_DR8(spi);
}

/*---------------------------------------------------------------------------*/
/** @brief SPI Set CRC length to 8 bits

@param[in] spi Unsigned int32. SPI peripheral identifier @ref spi_reg_base.
*/

void spi_set_crcl_8bit(uint32_t spi)
{
	SPI_CR1(spi) &= ~SPI_CR1_CRCL;
}

/*---------------------------------------------------------------------------*/
/** @brief SPI Set CRC length to 16 bits

@param[in] spi Unsigned int32. SPI peripheral identifier @ref spi_reg_base.
*/

void spi_set_crcl_16bit(uint32_t spi)
{
	SPI_CR1(spi) |= SPI_CR1_CRCL;
}

/** @brief SPI Set data size

@param[in] spi Unsigned int32. SPI peripheral identifier @ref spi_reg_base.
@param[in] data_s Unsigned int16. data size @ref spi_ds.
*/

void spi_set_data_size(uint32_t spi, uint16_t data_s)
{
	SPI_CR2(spi) = (SPI_CR2(spi) & ~SPI_CR2_DS_MASK) |
		       (data_s & SPI_CR2_DS_MASK);
}

/*---------------------------------------------------------------------------*/
/** @brief SPI Set reception threshold to 8 bits

@param[in] spi Unsigned int32. SPI peripheral identifier @ref spi_reg_base.
*/

void spi_fifo_reception_threshold_8bit(uint32_t spi)
{
	SPI_CR2(spi) |= SPI_CR2_FRXTH;
}

/*---------------------------------------------------------------------------*/
/** @brief SPI Set reception threshold to 16 bits

@param[in] spi Unsigned int32. SPI peripheral identifier @ref spi_reg_base.
*/

void spi_fifo_reception_threshold_16bit(uint32_t spi)
{
	SPI_CR2(spi) &= ~SPI_CR2_FRXTH;
}

/**@}*/
