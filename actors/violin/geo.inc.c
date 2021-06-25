#include "src/game/envfx_snow.h"

const GeoLayout violin_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(1, violin_Plane_001_mesh_layer_1),
		GEO_DISPLAY_LIST(4, violin_Plane_001_mesh_layer_4),
		GEO_DISPLAY_LIST(1, violin_material_revert_render_settings),
		GEO_DISPLAY_LIST(4, violin_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
