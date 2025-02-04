/* Copyright 2021 Glorious, LLC <salman@pcgamingrace.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

// TODO: remove the _MODE macros as these are the defaults

/* SPI Config for SPI flash */
#define SPI_SCK_PIN A5
#define SPI_MOSI_PIN A6
#define SPI_MISO_PIN A7
/* QSPI */
#define SPI_DRIVER SPIDQ

#define EXTERNAL_FLASH_SPI_SLAVE_SELECT_PIN B14
#define EXTERNAL_FLASH_TOTAL_SIZE (4 * 1024 * 1024)

/* I2C Config for LED driver */
#define I2C_SCL_PIN B6
#define I2C_SDA_PIN B7

#define IS31FL3236_SDB_PIN C4
#define IS31FL3236_I2C_ADDRESS_1 IS31FL3236_I2C_ADDRESS_GND
