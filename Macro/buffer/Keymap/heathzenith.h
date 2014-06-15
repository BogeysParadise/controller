/* Copyright (C) 2011 by Jacob Alexander
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef __HEATHZENITH_H
#define __HEATHZENITH_H

// This file contains various key layouts for the custom Heath-Zenith Keyboard


// ----- Variables -----

static uint8_t  heathzenith_ModifierMask [] = { 1, 17, 33, 49 };
static uint8_t  heathzenith_AlternateMask[] = { 1, 17, 33, 49, 62 };

// Default 1-indexed key mappings
static uint8_t heathzenith_DefaultMap[] = { 0,
				KEY_GUI,
				KEY_1,
				KEY_2,
				KEY_3,
				KEY_4,
				KEY_5,
				KEY_6,
				KEY_7,
				KEY_8,
				KEY_9,
				KEY_0,
				KEY_MINUS,
				KEY_EQUAL,
				KEY_BACKSLASH,
				KEY_TILDE,
				KEY_BACKSPACE,
				KEY_ALT,
				KEY_TAB,
				KEY_Q,
				KEY_W,
				KEY_E,
				KEY_R,
				KEY_T,
				KEY_Y,
				KEY_U,
				KEY_I,
				KEY_O,
				KEY_P,
				KEY_LEFT_BRACE,
				KEY_RIGHT_BRACE,
				KEY_DELETE,
				KEY_UP,
				KEY_CTRL,
				KEY_CAPS_LLOCK,
				KEY_A,
				KEY_S,
				KEY_D,
				KEY_F,
				KEY_G,
				KEY_H,
				KEY_J,
				KEY_K,
				KEY_L,
				KEY_SEMICOLON,
				KEY_QUOTE,
				KEY_ENTER,
				KEY_DOWN,
				KEY_ESC,
				KEY_LEFT_SHIFT,
				KEY_Z,
				KEY_X,
				KEY_C,
				KEY_V,
				KEY_B,
				KEY_N,
				KEY_M,
				KEY_COMMA,
				KEY_PERIOD,
				KEY_SLASH,
				KEY_RIGHT_SHIFT,
				KEY_LEFT,
				KEY_RIGHT,
				KEY_SPACE
};
static uint8_t heathzenith_NavigationMap[] = { 0,
				KEY_GUI,
				KEY_F1,
				KEY_F2,
				KEY_F3,
				KEY_F4,
				KEY_F5,
				KEY_F6,
				KEY_F7,
				KEY_F8,
				KEY_F9,
				KEY_F10,
				KEY_F11,
				KEY_F12,
				KEY_INSERT,
				KEY_DELETE,
				KEY_BACKSPACE,
				KEY_ALT,
				KEY_CAPS_LOCK,
				0,
				0,
				0,
				0,
				0,
				0,
				0,
				KEY_SYSREQ_ATT,
				KEY_SCROLL_LOCK,
				KEY_PAUSE,
				KEY_UP,
				0,
				0,
				0,
				KEY_CTRL,
				KEY_CAPS_LLOCK,
				0,
				0,
				0,
				0,
				0,
				KEYPAD_ASTERIX,
				KEYPAD_SLASH,
				KEY_HOME,
				KEY_PAGE_UP,
				KEY_LEFT,
				KEY_RIGHT,
				KEY_ENTER,
				0,
				KEY_ESC,
				KEY_LEFT_SHIFT,
				0,
				0,
				0,
				0,
				0,
				KEYPAD_PLUS,
				KEYPAD_MINUS,
				KEY_END,
				KEY_PAGE_DOWN,
				KEY_DOWN,
				KEY_RIGHT_SHIFT,
				165,
				KEY_RIGHT_ALT,
				KEY_SPACE
};

static uint8_t heathzenith_ColemakMap[] = { 0,
				KEY_GUI,
				KEY_1,
				KEY_2,
				KEY_3,
				KEY_4,
				KEY_5,
				KEY_6,
				KEY_7,
				KEY_8,
				KEY_9,
				KEY_0,
				KEY_MINUS,
				KEY_EQUAL,
				KEY_BACKSLASH,
				KEY_TILDE,
				KEY_BACKSPACE,
				KEY_ALT,
				KEY_TAB,
				KEY_Q,
				KEY_W,
				KEY_F,
				KEY_P,
				KEY_G,
				KEY_J,
				KEY_L,
				KEY_U,
				KEY_Y,
				KEY_SEMICOLON,
				KEY_LEFT_BRACE,
				KEY_RIGHT_BRACE,
				KEY_DELETE,
				KEY_PAGE_UP,
				KEY_CTRL,
				KEY_CAPS_LLOCK,
				KEY_A,
				KEY_R,
				KEY_S,
				KEY_T,
				KEY_D,
				KEY_H,
				KEY_N,
				KEY_E,
				KEY_I,
				KEY_O,
				KEY_QUOTE,
				KEY_ENTER,
				KEY_PAGE_DOWN,
				KEY_ESC,
				KEY_LEFT_SHIFT,
				KEY_Z,
				KEY_X,
				KEY_C,
				KEY_V,
				KEY_B,
				KEY_K,
				KEY_M,
				KEY_COMMA,
				KEY_PERIOD,
				KEY_SLASH,
				KEY_RIGHT_SHIFT,
				165,
				KEY_RIGHT_ALT,
				KEY_SPACE
};



#endif
