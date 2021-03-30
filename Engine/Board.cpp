#include "Board.h"

board::board(Graphics &gx)
	:gfx(gx)
{
}

void board::draw_cell(Location l, Color c)
{
	gfx.DrawRectangle_by_Dim(l.x*dimention, l.y* dimention, dimention, dimention,  c);
}
