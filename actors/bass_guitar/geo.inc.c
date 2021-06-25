#include "src/game/envfx_snow.h"

const GeoLayout bass_guitar_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(1, bass_guitar_Plane_005_mesh_layer_1),
		GEO_DISPLAY_LIST(4, bass_guitar_Plane_005_mesh_layer_4),
		GEO_DISPLAY_LIST(1, bass_guitar_material_revert_render_settings),
		GEO_DISPLAY_LIST(4, bass_guitar_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
