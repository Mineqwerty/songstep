#include "src/game/envfx_snow.h"

const GeoLayout songbi_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 41, 0, 0, -92, 0),
		GEO_OPEN_NODE(),
			GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, songbi_Bone_mesh_layer_1),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, songbi_Bone_001_skinned_mesh_layer_1),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 0, -68, 0, songbi_Bone_001_mesh_layer_1),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 33, 0, songbi_Bone_002_mesh_layer_1),
				GEO_ANIMATED_PART(LAYER_OPAQUE, -30, 11, -13, songbi_Bone_003_mesh_layer_1),
				GEO_ANIMATED_PART(LAYER_OPAQUE, -30, 11, 14, songbi_Bone_004_mesh_layer_1),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, songbi_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
