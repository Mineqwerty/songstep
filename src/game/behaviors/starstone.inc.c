void starstone_loop(void) {
    
    if (gCurrLevelNum == LEVEL_WF) {
        static int cutsceneTimer;
        if (gMarioState->starstoneCutscenes[0] == 0 && gMarioState->numStars >= 5 && gMarioState->action != ACT_STAR_DANCE_NO_EXIT && gMarioState->action != ACT_FALL_AFTER_STAR_GRAB) {
            if (cutsceneTimer == 0) {
            gCamera->cutscene = 1;
            
            gMarioState->action = ACT_WAITING_FOR_DIALOG;
            }
            cutsceneTimer += 1;
if (cutsceneTimer < 90) {
            gLakituState.goalPos[0] = o->oPosX + 1000.0f;
            gLakituState.goalPos[2] = o->oPosZ;
            gLakituState.goalPos[1] = o->oPosY + 500.0f;
            gLakituState.goalFocus[0] = o->oPosX;
         gLakituState.goalFocus[1] = o->oPosY;
         gLakituState.goalFocus[2] = o->oPosZ;

            
            o->oPosY += 10.0f;
}
            if (cutsceneTimer >= 150) {
                cutsceneTimer = 0;
                gCamera->cutscene = 0;
                gMarioState->starstoneCutscenes[0] = 1;
                gMarioState->action = ACT_IDLE;
                create_dialog_box(33);
            }


        }

        if (gMarioState->action == ACT_IDLE && gMarioObject->platform == o) {

                gMarioState->lvlOneStars[11] = 1;
            

                
            
            initiate_warp(LEVEL_CASTLE_GROUNDS, 1, 10, 0);
        }


    }
    if (gCurrLevelNum == LEVEL_CCM) {
        static int cutsceneTimer;
        if (gMarioState->starstoneCutscenes[1] == 0 && gMarioState->numStars >= 13 && gMarioState->action != ACT_STAR_DANCE_NO_EXIT && gMarioState->action != ACT_FALL_AFTER_STAR_GRAB) {
            if (cutsceneTimer == 0) {
            gCamera->cutscene = 1;
            
            gMarioState->action = ACT_WAITING_FOR_DIALOG;
            }
            cutsceneTimer += 1;
           if (cutsceneTimer < 90) {
            gLakituState.goalPos[0] = o->oPosX + 1000.0f;
            gLakituState.goalPos[2] = o->oPosZ;
            gLakituState.goalPos[1] = o->oPosY + 500.0f;
            gLakituState.goalFocus[0] = o->oPosX;
         gLakituState.goalFocus[1] = o->oPosY;
         gLakituState.goalFocus[2] = o->oPosZ;

            
            o->oPosY += 10.0f;
}
            if (cutsceneTimer >= 150) {
                cutsceneTimer = 0;
                gCamera->cutscene = 0;
                gMarioState->starstoneCutscenes[1] = 1;
                gMarioState->action = ACT_IDLE;
                create_dialog_box(33);
            }


        }

        

        if (gMarioState->action == ACT_IDLE && gMarioObject->platform == o) {
            gMarioState->lvlOneStars[12] = 1;
            initiate_warp(LEVEL_CASTLE_GROUNDS, 1, 10, 0);
        }
    }
}