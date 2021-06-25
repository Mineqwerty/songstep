#include "src/game/envfx_snow.h"

const GeoLayout viola_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(1, viola_Plane_002_mesh_layer_1),
		GEO_DISPLAY_LIST(4, viola_Plane_002_mesh_layer_4),
		GEO_DISPLAY_LIST(1, viola_material_revert_render_settings),
		GEO_DISPLAY_LIST(4, viola_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
