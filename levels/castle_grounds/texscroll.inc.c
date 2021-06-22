void scroll_castle_grounds_dl_Circle_mesh_layer_5_vtx_0() {
	int i = 0;
	int count = 128;
	int width = 32 * 0x20;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(castle_grounds_dl_Circle_mesh_layer_5_vtx_0);

	deltaY = (int)(-0.6000000238418579 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;

}
void scroll_castle_grounds_dl_Circle_mesh_layer_5_vtx_1() {
	int i = 0;
	int count = 78;
	int width = 32 * 0x20;
	int height = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	static int timeX;
	float amplitudeX = 0.30000001192092896;
	float frequencyX = 0.30000001192092896;
	float offsetX = 0.0;
	Vtx *vertices = segmented_to_virtual(castle_grounds_dl_Circle_mesh_layer_5_vtx_1);

	deltaX = (int)(amplitudeX * frequencyX * coss((frequencyX * timeX + offsetX) * (1024 * 16 - 1) / 6.28318530718) * 0x20);

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;
	timeX += 1;

}
void scroll_castle_grounds() {
	scroll_castle_grounds_dl_Circle_mesh_layer_5_vtx_0();
	scroll_castle_grounds_dl_Circle_mesh_layer_5_vtx_1();
}
