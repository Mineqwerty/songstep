#ifndef INTRO_HEADER_H
#define INTRO_HEADER_H

#include "types.h"

// geo
extern const GeoLayout intro_geo_0002D0[];
extern const GeoLayout intro_geo_mario_head_regular[];
extern const GeoLayout intro_geo_mario_head_dizzy[];
extern const GeoLayout intro_geo_000414[];

// leveldata
extern Lights1 title_f3d_material_001_lights;
extern Lights1 title_f3d_material_lights;
extern Lights1 title_f3d_material_002_lights;
extern u8 title_measeure_rgba16[];
extern Vtx title_titlesongstep_mesh_vtx_0[44];
extern Gfx title_titlesongstep_mesh_tri_0[];
extern Vtx title_titlesongstep_mesh_vtx_1[338];
extern Gfx title_titlesongstep_mesh_tri_1[];
extern Vtx title_titlesongstep_mesh_vtx_2[704];
extern Gfx title_titlesongstep_mesh_tri_2[];
extern Gfx mat_title_f3d_material_001[];
extern Gfx mat_title_f3d_material[];
extern Gfx mat_title_f3d_material_002[];
extern Gfx title_titlesongstep_mesh[];

extern const Gfx intro_seg7_dl_0700C6A0[];
extern const f32 intro_seg7_table_0700C790[];
extern const f32 intro_seg7_table_0700C880[];

// script
extern const LevelScript level_intro_splash_screen[];
extern const LevelScript level_intro_mario_head_regular[];
extern const LevelScript level_intro_mario_head_dizzy[];
extern const LevelScript level_intro_entry_4[];
extern const LevelScript script_intro_L1[];
extern const LevelScript script_intro_L2[];
extern const LevelScript script_intro_L3[];
extern const LevelScript script_intro_L4[];
extern const LevelScript script_intro_L5[];

#endif
