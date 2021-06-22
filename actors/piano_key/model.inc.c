Lights1 piano_key_f3d_material_006_lights = gdSPDefLights1(
	0x0, 0x0, 0x0,
	0x0, 0x0, 0x0, 0x28, 0x28, 0x28);

Lights1 piano_key_f3d_material_005_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Vtx piano_key_Cube_001_mesh_layer_1_vtx_0[20] = {
	{{{-1, -100, -2},0, {368, 1008},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-1, 100, -2},0, {624, 1008},{0x0, 0x0, 0x81, 0xFF}}},
	{{{100, 100, -2},0, {624, 752},{0x0, 0x0, 0x81, 0xFF}}},
	{{{100, -100, -2},0, {368, 752},{0x0, 0x0, 0x81, 0xFF}}},
	{{{100, -100, 371},0, {368, 496},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{100, 100, 371},0, {624, 496},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-1, 100, 371},0, {624, 240},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-1, -100, 371},0, {368, 240},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-1, -100, 371},0, {368, 240},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-1, 100, 371},0, {624, 240},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-1, 100, -2},0, {624, -16},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-1, -100, -2},0, {368, -16},{0x81, 0x0, 0x0, 0xFF}}},
	{{{100, -100, -2},0, {112, 496},{0x0, 0x81, 0x0, 0xFF}}},
	{{{100, -100, 371},0, {368, 496},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-1, -100, 371},0, {368, 240},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-1, -100, -2},0, {112, 240},{0x0, 0x81, 0x0, 0xFF}}},
	{{{100, 100, 371},0, {624, 496},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{100, 100, -2},0, {880, 496},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-1, 100, -2},0, {880, 240},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-1, 100, 371},0, {624, 240},{0x0, 0x7F, 0x0, 0xFF}}},
};

Gfx piano_key_Cube_001_mesh_layer_1_tri_0[] = {
	gsSPVertex(piano_key_Cube_001_mesh_layer_1_vtx_0 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(piano_key_Cube_001_mesh_layer_1_vtx_0 + 16, 4, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSPEndDisplayList(),
};

Vtx piano_key_Cube_001_mesh_layer_1_vtx_1[4] = {
	{{{100, -100, -2},0, {368, 752},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{100, 100, -2},0, {624, 752},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{100, 100, 371},0, {624, 496},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{100, -100, 371},0, {368, 496},{0x7F, 0x0, 0x0, 0xFF}}},
};

Gfx piano_key_Cube_001_mesh_layer_1_tri_1[] = {
	gsSPVertex(piano_key_Cube_001_mesh_layer_1_vtx_1 + 0, 4, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSPEndDisplayList(),
};


Gfx mat_piano_key_f3d_material_006[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPSetLights1(piano_key_f3d_material_006_lights),
	gsSPEndDisplayList(),
};

Gfx mat_piano_key_f3d_material_005[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPSetLights1(piano_key_f3d_material_005_lights),
	gsSPEndDisplayList(),
};

Gfx piano_key_Cube_001_mesh_layer_1[] = {
	gsSPDisplayList(mat_piano_key_f3d_material_006),
	gsSPDisplayList(piano_key_Cube_001_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_piano_key_f3d_material_005),
	gsSPDisplayList(piano_key_Cube_001_mesh_layer_1_tri_1),
	gsSPEndDisplayList(),
};

Gfx piano_key_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

