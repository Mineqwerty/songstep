#include "src/game/envfx_snow.h"

const GeoLayout trumpet_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(1, trumpet_Cube_002_mesh_layer_1),
		GEO_DISPLAY_LIST(1, trumpet_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
