/* Copyright 2025 Glorious, LLC <salman@pcgamingrace.com>
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

#include "quantum.h"

#ifdef RGB_MATRIX_ENABLE
// clang-format off
const is31fl3236_led_t PROGMEM g_is31fl3236_leds[IS31FL3236_LED_COUNT] = {
    {0,  OUT4,  OUT5,  OUT6},
    {0,  OUT7,  OUT8,  OUT9},
    {0, OUT10, OUT11, OUT12},
    {0, OUT13, OUT14, OUT15},
    {0, OUT16, OUT17, OUT18},
    {0, OUT19, OUT20, OUT21},
    {0, OUT22, OUT23, OUT24},
    {0, OUT25, OUT26, OUT27},
    {0, OUT28, OUT29, OUT30},
    {0, OUT31, OUT32, OUT33},
};
// clang-format on
#endif
