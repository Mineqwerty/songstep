static int pianoEventTimer;
void luigi_piano_loop(void) {
    if (gMarioState->lvlOneStars[12] == 0) {
        mark_obj_for_deletion(o);
    }


    if (cur_obj_was_attacked_or_ground_pounded() != 0 && pianoEventTimer == 0) {
        spawn_triangle_break_particles(30, 138, 3.0f, 4);
        o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_BROKEN_PIANO];
        cur_obj_play_sound_1(SOUND_OBJ_UKIKI_CHATTER_LONG);
        pianoEventTimer = 90;
        if (gMarioState->pianoSmashed == 0) {
        play_secondary_music(0, 0, 0, 1);
        }
    }

        

    if (pianoEventTimer > 0) {
        pianoEventTimer -= 1;
    }

    if (pianoEventTimer == 1) {
        gMarioState->pianoSmashed = 1;
    }

}

void luigi_playing_loop(void) {
if (gMarioState->lvlOneStars[12] == 0) {
        mark_obj_for_deletion(o);
    }

    if (pianoEventTimer != 0) {
        cur_obj_init_animation(1);
    }
    else if (gMarioState->pianoSmashed == 0) {
        cur_obj_init_animation(0);
    }
}