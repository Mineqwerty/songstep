#include "src/game/envfx_snow.h"

const GeoLayout beat_push_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(1, beat_push_Cube_mesh_layer_1),
		GEO_DISPLAY_LIST(1, beat_push_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
