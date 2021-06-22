#include "src/game/envfx_snow.h"

const GeoLayout ccm_area_1_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_NODE_WITH_DL(1, 1448, -201, -37, ccm_dl_Cube_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, -8871, 989, 1176, ccm_dl_Cube_001_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, -8256, 789, 3535, ccm_dl_Cube_002_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, -9636, 481, 4784, ccm_dl_Cube_003_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, -8303, 47, 7247, ccm_dl_Cube_004_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, 14171, 624, 9733, ccm_dl_Cube_005_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, 15019, -1075, 11962, ccm_dl_Cube_006_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, 13751, -1709, 14214, ccm_dl_Cube_007_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, 7430, -1814, 14310, ccm_dl_Cube_008_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, 5284, -1980, 14270, ccm_dl_Cube_009_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, 688, -2103, 24836, ccm_dl_Cube_010_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, -6121, -1927, 23510, ccm_dl_Cube_011_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, 9520, -1774, 14310, ccm_dl_Cube_012_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, 28, 100, -37, ccm_dl_Plane_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, 4959, 100, -37, ccm_dl_Plane_001_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, 4959, 100, -37, ccm_dl_Plane_002_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, 3376, 3546, 3630, ccm_dl_Plane_003_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, 13032, 3589, 1706, ccm_dl_Plane_004_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, 2458, -1170, 14359, ccm_dl_Plane_005_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, 7005, -876, 21248, ccm_dl_Plane_006_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, 4959, 100, -37, ccm_dl_Plane_007_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, -9391, -1073, 25217, ccm_dl_Plane_008_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 7212, -1075, 167, ccm_dl_skinned_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -4581, 1851, 1803, ccm_dl_skinned_001_mesh),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -5727, 1727, 489, ccm_dl_skinned_002_mesh),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout ccm_area_1[] = {
	GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
	GEO_OPEN_NODE(),
		GEO_ZBUFFER(0),
		GEO_OPEN_NODE(),
			GEO_NODE_ORTHO(100.0000),
			GEO_OPEN_NODE(),
				GEO_BACKGROUND(BACKGROUND_OCEAN_SKY, geo_skybox_main),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_ZBUFFER(1),
		GEO_OPEN_NODE(),
			GEO_CAMERA_FRUSTUM_WITH_FUNC(45.0000, 100, 30000, geo_camera_fov),
			GEO_OPEN_NODE(),
				GEO_CAMERA(CAMERA_MODE_8_DIRECTIONS, 0, 0, 0, 0, -100, 0, geo_camera_main),
				GEO_OPEN_NODE(),
					GEO_BRANCH(1, ccm_area_1_geo),
					GEO_RENDER_OBJ(),
					GEO_ASM(ENVFX_MODE_NONE, geo_envfx_main),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, ccm_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(1, ccm_dl_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};