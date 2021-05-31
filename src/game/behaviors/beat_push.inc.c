

void beat_push_init(void) {

gMarioState->curBPM = 120;

}
void beat_push_loop(void) {
    
    static int beatTimer;
    static int stretchSequence;

if (gMarioObject->platform == o) {
    beatTimer = 8;
}

if (gMarioState->curInstrument == 11) {
    stretchSequence = 1;
}
if (stretchSequence == 1) {
    o->header.gfx.scale[1] += 0.1f;

    if (o->header.gfx.scale[1] >= 1.5f) {
         o->header.gfx.scale[1] = 1.5f;
        gMarioState->beat = 0;
    }
}
else if (o->header.gfx.scale[1] > 1.0f){
    o->header.gfx.scale[1] -= 0.2f;
    if (o->header.gfx.scale[1] < 1.0f) {
                o->header.gfx.scale[1] = 1.0f;
        }
}

}