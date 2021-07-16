#include "actors/common0.h"

void credits_checkpoint_loop(void) {
    if (o->oDistanceToMario < 200.0f) {
        gMarioState->creditsStep = o->oBehParams2ndByte;
        //print_text(100, 100, "AMONG US");
    }
}

void credits_npc_init(void) {
    switch (o->oBehParams2ndByte) {
        case 0: o->oAnimations = cowquack_anims;
        cur_obj_init_animation(0);
        break;
        case 1: o->oAnimations = tori_anims;
        cur_obj_init_animation(0);
        break;

    }
}


void credits_npc_loop(void) {
    switch (o->oBehParams2ndByte) {
        case 0:
        if (gMarioState->creditsStep == 1) {
            o->oPosZ += 2.0f;
        }
        break;
        case 1:
        if (gMarioState->creditsStep == 2) {
            o->oPosZ += 2.0f;
        }
        break;

    }

}