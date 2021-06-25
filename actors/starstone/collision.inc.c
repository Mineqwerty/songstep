const Collision starstone_collision[] = {
	COL_INIT(),
	COL_VERTEX_INIT(17),
	COL_VERTEX(-87, 34, 0),
	COL_VERTEX(-62, 34, 62),
	COL_VERTEX(0, 34, 0),
	COL_VERTEX(-62, 34, -62),
	COL_VERTEX(0, 34, -87),
	COL_VERTEX(0, -8, -140),
	COL_VERTEX(-99, -8, -99),
	COL_VERTEX(-140, -8, 0),
	COL_VERTEX(-99, -8, 99),
	COL_VERTEX(0, 34, 87),
	COL_VERTEX(0, -8, 140),
	COL_VERTEX(62, 34, 62),
	COL_VERTEX(99, -8, 99),
	COL_VERTEX(87, 34, 0),
	COL_VERTEX(140, -8, 0),
	COL_VERTEX(62, 34, -62),
	COL_VERTEX(99, -8, -99),
	COL_TRI_INIT(SURFACE_DEFAULT, 24),
	COL_TRI(0, 1, 2),
	COL_TRI(3, 4, 5),
	COL_TRI(3, 5, 6),
	COL_TRI(0, 3, 6),
	COL_TRI(0, 6, 7),
	COL_TRI(1, 0, 7),
	COL_TRI(1, 7, 8),
	COL_TRI(9, 1, 8),
	COL_TRI(9, 8, 10),
	COL_TRI(11, 9, 10),
	COL_TRI(11, 10, 12),
	COL_TRI(13, 11, 12),
	COL_TRI(13, 12, 14),
	COL_TRI(15, 13, 14),
	COL_TRI(15, 14, 16),
	COL_TRI(4, 15, 16),
	COL_TRI(4, 16, 5),
	COL_TRI(2, 11, 13),
	COL_TRI(2, 1, 9),
	COL_TRI(4, 3, 2),
	COL_TRI(11, 2, 9),
	COL_TRI(15, 4, 2),
	COL_TRI(15, 2, 13),
	COL_TRI(3, 0, 2),
	COL_TRI_STOP(),
	COL_END()
};