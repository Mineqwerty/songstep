int pipe1;
int pipe2;
int pipeC;

void pipe_summoner_init(void) {
pipe1 = 0;
pipe2 = 0;
pipeC = 0;
}

void pipe_summoner_loop(void) {
    if (gMarioState->lvlOneStars[10] >= 0 && pipe1 == 0) {
        pipe1 = 1;
        spawn_object_relative(0x0B, 1167, 100, -2848, o, MODEL_CASTLE_GROUNDS_WARP_PIPE, bhvWarpPipe);
    }

    if (gMarioState->lvlOneStars[10] >= 3 && pipe2 == 0) {
        pipe2 = 1;
        spawn_object_relative(0x0C, -1225, 100, 2803, o, MODEL_CASTLE_GROUNDS_WARP_PIPE, bhvWarpPipe);
    }

    if (gMarioState->lvlOneStars[10] >= 6 && pipeC == 0) {
        pipeC = 1;
        spawn_object_relative(0x0D, 2825, 100, 1138, o, MODEL_CASTLE_GROUNDS_WARP_PIPE, bhvWarpPipe);
    }
}