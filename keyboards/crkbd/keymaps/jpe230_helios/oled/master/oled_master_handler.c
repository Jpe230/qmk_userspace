// Copyright 2022 Jose Pablo Ramirez (@jpe230)
// SPDX-License-Identifier: GPL-2.0-or-later

#include "jpe230.h"
#include "left.c"

extern uint32_t oled_timer;

static void render_anim(void) {

    static int current_frame = 0;
    static bool first_run = 1;

	if (first_run){
		oled_write_raw_P(frame, ANIM_SIZE);
		first_run = 0;
        return;
	}

    change_frame_bytewise(current_frame);
    current_frame = (current_frame + 1) % IDLE_FRAMES;
}

void render_master_oled(void) {
    if (timer_elapsed32(oled_timer) > CUSTOM_OLED_TIMEOUT) {
        oled_off();
        return;
    }
    oled_on();
    printf("Rendering stuff\n");
    render_anim();
}

oled_rotation_t rotate_master(oled_rotation_t rotation) {return OLED_ROTATION_0;}
