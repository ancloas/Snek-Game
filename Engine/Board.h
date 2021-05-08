#pragma once
#include "Location.h"
#include "Graphics.h"
class board
{public:
	board(Graphics & gx);
	void draw_cell(Location l, Color c);
	void draw_border();
    
private:	
    Graphics &gfx;
	public: static int constexpr dimention=10;
    static int constexpr padding = 1;
	static Location  constexpr  loc = { 1,1 }; 
	static int constexpr width=Graphics::ScreenWidth/ (dimention+padding) -1 ;
	static int constexpr height= Graphics::ScreenHeight / (dimention+ padding) -1;
};


