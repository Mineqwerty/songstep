void bowstring_loop(void) {
    /*
    static int success;
    static int failTimer;

    if (gMarioObject->platform == o) {
    gMarioState->action = ACT_BOWSTRING;
    gMarioState->pos[2] = o->oPosZ;
if (gMarioState->lastPlatform == 0) {
    if (gMarioState->faceAngle[1] > 0) {
        gMarioState->faceAngle[1] = o->oFaceAngleYaw + 0x4000;
    }
    else {
        gMarioState->faceAngle[1] = o->oFaceAngleYaw - 0x4000;
    }
}
    if (gPlayer1Controller->buttonPressed == A_BUTTON) {
        failTimer = 7;
    }
    }
    else if (gMarioState->action == ACT_BOWSTRING) {
        gMarioState->vel[0] = 0.0f;
        gMarioState->pos[2] += 30.0f;
        gMarioState->vel[1] = 20.0f;
        gMarioState->pos[1] += 20.0f;
        gMarioState->lastPlatform = 0;
        gMarioState->action = ACT_JUMP;
        gPlayer1Controller->buttonDown = 0;
        success = 0;
        return;
    }

    
    
    if (failTimer > 0) {
        failTimer -= 1;
    }

    if (failTimer == 1 && success == 0) {
        failTimer = 0;
        gMarioState->vel[0] = 0.0f;
        gMarioState->vel[2] = 20.0f;
        gMarioState->vel[1] = 20.0f;
        gMarioState->pos[1] += 20.0f;
        gMarioState->lastPlatform = 0;
        gMarioState->action = ACT_HARD_BACKWARD_AIR_KB;

    }

    s32 beatDetect;
    if (gMarioState->lastPlatform == o) {
    beatDetect = detect_instrument_hold(1, A_BUTTON, o);
    }

    if (beatDetect == TRUE) {
        if (gMarioState->faceAngle[1] < 0) {
        gMarioState->vel[0] = -50.0f;
        }
        else {
            gMarioState->vel[0] = 50.0f;
        }
        success = 1;
        gMarioState->fogFlare = 2;

    }
    else {
        gMarioState->vel[0] = 0.0f;
    }

    if (success == 1 && gPlayer1Controller->buttonDown == 0) {
        gMarioState->lastPlatform = 0;
        gMarioObject->platform = 0;
        gMarioState->forwardVel = 100.0f;
        gMarioState->vel[1] = 200.0f;
        gMarioState->pos[1] += 20.0f;
        gMarioState->action = ACT_JUMP;
        success = 0;
    }

*/
}