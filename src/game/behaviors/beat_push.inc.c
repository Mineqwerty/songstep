

void beat_push_init(void) {

gMarioState->curBPM = 120;

}
void beat_push_loop(void) {
    
    static int stretchSequence;
    static int yVelCap;

if (gMarioState->curInstrument[0] == 11) {
    //stretchSequence = 1;
}

if (yVelCap > 0) {
    yVelCap -= 1;
    if (gMarioState->vel[1] > 75.0f) {
        gMarioState->vel[1] = 75.0f;
    }
}
//stretch the block
if (stretchSequence == 1) {
    o->header.gfx.scale[1] += 0.1f;

    if (o->header.gfx.scale[1] >= 1.5f) {
         o->header.gfx.scale[1] = 1.5f;
        stretchSequence = 0;
    }
}
else if (o->header.gfx.scale[1] > 1.0f){
    o->header.gfx.scale[1] -= 0.2f;
    
    if (o->header.gfx.scale[1] < 1.0f) {
                o->header.gfx.scale[1] = 1.0f;
        }
}

//give mario le boost


//maybe have a system where the last interacted music thingy is kept in memory, that way one function can sort out everything?
s32 beatDetect;
if (gMarioState->lastPlatform == o) {
//beatDetect = detect_instrument_hits(11, A_BUTTON, o);
}
    
    if (beatDetect == TRUE) {
        gMarioState->action = ACT_DOUBLE_JUMP;
        gMarioState->lastPlatform = NULL;
        yVelCap = 20;
        gMarioState->vel[1] = 75.0f;
        gMarioState->pos[1] += 20.0f;
            gMarioState->fogFlare = 1;
        play_sound(SOUND_GENERAL_SHORT_POUND1, gMarioState->pos);
        
    }
    else if (beatDetect == 2) {
        //gMarioState->vel[1] = 2.0f;
    }


}