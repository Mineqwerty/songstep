#include "src/game/envfx_snow.h"

const GeoLayout contrabass_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(1, contrabass_Plane_003_mesh_layer_1),
		GEO_DISPLAY_LIST(4, contrabass_Plane_003_mesh_layer_4),
		GEO_DISPLAY_LIST(1, contrabass_material_revert_render_settings),
		GEO_DISPLAY_LIST(4, contrabass_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
