#include "Board.h"
#include "Colors.h"

board::board(Graphics &gx)
	:gfx(gx)
{
}

void board::draw_cell(Location l, Color c)
{
	gfx.DrawRectangle_by_Dim(l.x*(dimention+padding), l.y* (dimention+padding), dimention, dimention,  c);
}

void board::draw_border()
{    
	//left boundary
	gfx.DrawRectangle_start_end(loc.x*(dimention + padding) - (dimention + padding) / 2, loc.y* (dimention + padding) - (dimention + padding) / 2, loc.x*(dimention + padding), height*(dimention + padding), Colors::Magenta);
	//right boundary
	gfx.DrawRectangle_start_end(width*(dimention + padding), loc.y* (dimention + padding) - (dimention + padding) / 2, width*(dimention + padding)+ (dimention + padding)/2, height*(dimention + padding)+ (dimention + padding)/2, Colors::Magenta);
    //down boundary
	gfx.DrawRectangle_start_end(loc.x*(dimention + padding) - (dimention + padding) / 2, height* (dimention + padding), width*(dimention + padding) + (dimention + padding) / 2, height*(dimention + padding) + (dimention + padding) / 2, Colors::Magenta);   
	//up boundary
	gfx.DrawRectangle_start_end(loc.x*(dimention + padding) - (dimention + padding) / 2, loc.y* (dimention + padding) - (dimention + padding) / 2, width*(dimention + padding) + (dimention + padding) / 2, loc.y*(dimention + padding), Colors::Magenta);
}
 
