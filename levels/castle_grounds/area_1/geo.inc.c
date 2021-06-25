#include "src/game/envfx_snow.h"

const GeoLayout castle_grounds_area_1_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_NODE_WITH_DL(1, 28, 100, -37, castle_grounds_dl_Circle_mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(5, castle_grounds_dl_Circle_mesh_layer_5),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_NODE_WITH_DL(1, 1314, 8, 3068, castle_grounds_dl_Cube_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, 3133, 13, -1324, castle_grounds_dl_Cube_001_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, -1258, 28, -3142, castle_grounds_dl_Cube_002_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, -3077, 23, 1249, castle_grounds_dl_Cube_003_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, 608, 100, 751, castle_grounds_dl_Cube_004_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, 840, 120, -1998, castle_grounds_dl_Plane_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, -666, 112, 1525, castle_grounds_dl_Plane_001_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, -1922, 116, -862, castle_grounds_dl_Plane_002_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, 1564, 120, 631, castle_grounds_dl_Plane_003_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout castle_grounds_area_1[] = {
	GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
	GEO_OPEN_NODE(),
		GEO_ZBUFFER(0),
		GEO_OPEN_NODE(),
			GEO_NODE_ORTHO(100.0000),
			GEO_OPEN_NODE(),
				GEO_BACKGROUND(BACKGROUND_BELOW_CLOUDS, geo_skybox_main),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_ZBUFFER(1),
		GEO_OPEN_NODE(),
			GEO_CAMERA_FRUSTUM_WITH_FUNC(45.0000, 100, 30000, geo_camera_fov),
			GEO_OPEN_NODE(),
				GEO_CAMERA(CAMERA_MODE_8_DIRECTIONS, 0, 0, 0, 0, -100, 0, geo_camera_main),
				GEO_OPEN_NODE(),
					GEO_BRANCH(1, castle_grounds_area_1_geo),
					GEO_RENDER_OBJ(),
					GEO_ASM(ENVFX_MODE_NONE, geo_envfx_main),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(5, castle_grounds_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(1, castle_grounds_dl_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
