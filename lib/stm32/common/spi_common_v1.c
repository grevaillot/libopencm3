
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

/*---------------------------------------------------------------------------*/
/** @brief SPI Set Data Frame Format to 8 bits

@param[in] spi Unsigned int32. SPI peripheral identifier @ref spi_reg_base.
*/

void spi_set_dff_8bit(uint32_t spi)
{
	SPI_CR1(spi) &= ~SPI_CR1_DFF;
}

/*---------------------------------------------------------------------------*/
/** @brief SPI Set Data Frame Format to 16 bits

@param[in] spi Unsigned int32. SPI peripheral identifier @ref spi_reg_base.
*/

void spi_set_dff_16bit(uint32_t spi)
{
	SPI_CR1(spi) |= SPI_CR1_DFF;
}

/**@}*/
