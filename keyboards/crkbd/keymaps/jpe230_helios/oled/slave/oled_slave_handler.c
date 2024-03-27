// Copyright 2022 Jose Pablo Ramirez (@jpe230)
// SPDX-License-Identifier: GPL-2.0-or-later

#include "jpe230.h"
#include "right.c"

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

void render_slave_oled(void) {
    render_anim();
}

oled_rotation_t rotate_slave(oled_rotation_t rotation) {return OLED_ROTATION_0;}
