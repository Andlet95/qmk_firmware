/* Copyright 2019
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

#include "process_backlight.h"
#include "backlight.h"

bool process_backlight(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch (keycode) {
            case QK_BACKLIGHT_ON:
                backlight_level(BACKLIGHT_LEVELS);
                return false;
            case QK_BACKLIGHT_OFF:
                backlight_level(0);
                return false;
            case QK_BACKLIGHT_DOWN:
                backlight_decrease();
                return false;
            case QK_BACKLIGHT_UP:
                backlight_increase();
                return false;
            case QK_BACKLIGHT_TOGGLE:
                backlight_toggle();
                return false;
            case QK_BACKLIGHT_STEP:
                backlight_step();
                return false;
#ifdef BACKLIGHT_BREATHING
            case QK_BACKLIGHT_TOGGLE_BREATHING:
                backlight_toggle_breathing();
                return false;
#endif
        }
    }

    return true;
}
