#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"

#include "make_const_nonconst.h"
#include "levels/ccm/header.h"

const LevelScript level_ccm_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _ccm_segment_7SegmentRomStart, _ccm_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _snow_yay0SegmentRomStart, _snow_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0B, _effect_yay0SegmentRomStart, _effect_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0A, _wdw_skybox_yay0SegmentRomStart, _wdw_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group7_yay0SegmentRomStart, _group7_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group7_geoSegmentRomStart, _group7_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group16_yay0SegmentRomStart, _group16_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group16_geoSegmentRomStart, _group16_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_8), 
	JUMP_LINK(script_func_global_17), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, ccm_geo_00042C), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04, ccm_geo_00045C), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05, ccm_geo_000494), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06, ccm_geo_0004BC), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07, ccm_geo_0004E4), 
	LOAD_MODEL_FROM_GEO(MODEL_CCM_CABIN_DOOR, cabin_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CCM_SNOW_TREE, snow_tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CCM_ROPEWAY_LIFT, ccm_geo_0003D0), 
	LOAD_MODEL_FROM_GEO(MODEL_CCM_SNOWMAN_BASE, ccm_geo_0003F0), 
	LOAD_MODEL_FROM_GEO(MODEL_CCM_SNOWMAN_HEAD, ccm_geo_00040C), 

	AREA(1, ccm_area_1),
		WARP_NODE(0x0A, LEVEL_CCM, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CCM, 0x01, 0x20, WARP_NO_CHECKPOINT),
		WARP_NODE(0x20, LEVEL_CCM, 0x01, 0x20, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_BASS_GUITAR, -9373, -966, 25235, 0, 0, 0, 0x17000000, bhvStar),
		OBJECT(MODEL_CHUCKYA, -3934, 3506, 3206, 0, -90, 0, 0x00000000, bhvChuckya),
		OBJECT(MODEL_CHUCKYA, 12282, 3528, -1607, 0, -90, 0, 0x00000000, bhvChuckya),
		OBJECT(MODEL_CHUCKYA, -749, 568, -2347, 0, -90, 0, 0x00000000, bhvChuckya),
		OBJECT(MODEL_NONE, 6267, 4960, 100, 0, -180, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 14114, -686, 2234, 0, -180, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 3391, 3506, 2478, 0, -180, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -4747, 3533, 5102, 0, -180, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 9110, 3528, -1681, 0, -90, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 9232, 3528, 1456, 0, -90, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 4376, 240, -116, 0, -90, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -5520, 371, 8323, 0, -90, 0, 0x00110000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 14055, -1075, 3599, 0, -90, 0, 0x00110000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -4555, 2253, 7684, 0, -90, 0, 0x00110000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -10603, -1133, 25167, 0, -90, 0, 0x00110000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -10603, 813, 25167, 0, -90, 0, 0x00110000, bhvCoinFormation),
		OBJECT(MODEL_DRUM, 13753, -716, -121, 0, 0, 0, 0x10000000, bhvStar),
		OBJECT(MODEL_ELEC_GUITAR, -6126, 1675, 1465, 0, 0, 0, 0x11000000, bhvStar),
		OBJECT(MODEL_NONE, 3627, 240, 308, 0, -90, 0, 0x00000000, bhvGoombaTripletSpawner),
		OBJECT(MODEL_NONE, -4799, 1479, 651, 0, -90, 0, 0x00000000, bhvGoombaTripletSpawner),
		OBJECT(MODEL_NONE, -5279, 3506, 3482, 0, -90, 0, 0x00000000, bhvGoombaTripletSpawner),
		OBJECT(MODEL_NONE, -8034, -1148, 25346, 0, -90, 0, 0x00000000, bhvGoombaTripletSpawner),
		OBJECT(MODEL_PIANO, -6468, 545, 8375, 0, 0, 0, 0x12000000, bhvStar),
		OBJECT(MODEL_STARSTONE, -11601, 1436, 25252, 0, 0, 0, 0x00000000, bhvStarstone),
		OBJECT(MODEL_TENOR_SAX, 7022, -769, 21267, 0, 0, 0, 0x16000000, bhvStar),
		OBJECT(MODEL_TROMBONE, 13050, 3696, 1725, 0, 0, 0, 0x14000000, bhvStar),
		OBJECT(MODEL_ALTO_SAX, 2476, -1065, 14387, 5, 1, 0, 0x15000000, bhvStar),
		OBJECT(MODEL_TRUMPET, 3394, 3653, 3649, 0, 0, 0, 0x13000000, bhvStar),
		OBJECT(MODEL_NONE, 14103, -1075, 5666, 0, -180, 0, 0x000A0000, bhvSpinAirborneWarp),
		MARIO_POS(0x01, -180, 14113, -1075, 5666),
		OBJECT(MODEL_NONE, 5769, 415, -37, 0, 0, 0, 0x0020000A, bhvInstantActiveWarp),
		TERRAIN(ccm_area_1_collision),
		MACRO_OBJECTS(ccm_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_UNDERGROUND),
		TERRAIN_TYPE(TERRAIN_GRASS),
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, -180, 14113, -1075, 5666),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
