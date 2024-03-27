// Copyright 2022 Jose Pablo Ramirez (@jpe230)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/* ---------------------------
 * Common Spit Configuration
 * ---------------------------
 */
#define SPLIT_OLED_ENABLE

/* ---------------------------
 * Common OLED Configuration
 * ---------------------------
 */
#define OLED_TIMEOUT 0
#define CUSTOM_OLED_TIMEOUT 50000

/* ---------------------------
 * Common Bootmagic Lite
 * ---------------------------
 */
#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 0


/* ---------------------------
 * Common other Configuration
 * ---------------------------
 */
#define ENABLE_COMPILE_KEYCODE


/* ---------------------------
 * RP2040 OLED Configuration
 * ---------------------------
 */
// #define I2C1_CLOCK_SPEED 400000
// #define OLED_UPDATE_INTERVAL 1
// #define OLED_I2C_TIMEOUT 1
#define OLED_DISPLAY_64X128

/* ---------------------------
 * RP2040 Split Configuration
 * ---------------------------
 */
#define SPLIT_WPM_ENABLE

/* ---------------------------
 * RP2040 Debounce
 * ---------------------------
 */
#undef DEBOUNCE
#define DEBOUNCE 5
