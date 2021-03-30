#pragma once
#include "Location.h"
#include "Graphics.h"
class board
{public:
	board(Graphics & gx);
	void draw_cell(Location l, Color c);
private:
	Location loc = {0,0};
	Graphics &gfx;
	public: static int constexpr dimention=20;
	static int constexpr width=Graphics::ScreenWidth/ dimention;
	static int constexpr height= Graphics::ScreenHeight / dimention;
};


