void piano_key_loop(void) {
    static int turning;
    static int cooldown;

    if (gMarioState->curInstrument[4] != 0) {
        turning = 1;
    }

    if (turning == 1) {
        o->oMoveAngleYaw += 0x800;
    }

    if (o->oMoveAngleYaw > 0x4000) {
        o->oMoveAngleYaw = 0x4000;
        turning = 0;
        cooldown = 12;
    }

    if (cooldown > 0) {
        cooldown -= 1;
    }

    if (cooldown == 0 && turning == 0 && o->oMoveAngleYaw > 0) {
        o->oMoveAngleYaw -= 0x800;
    }




}