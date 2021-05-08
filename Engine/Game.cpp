/****************************************************************************************** 
 *	Chili DirectX Framework Version 16.07.20											  *	
 *	Game.cpp																			  *
 *	Copyright 2016 PlanetChili.net <http://www.planetchili.net>							  *
 *																						  *
 *	This file is part of The Chili DirectX Framework.									  *
 *																						  *
 *	The Chili DirectX Framework is free software: you can redistribute it and/or modify	  *
 *	it under the terms of the GNU General Public License as published by				  *
 *	the Free Software Foundation, either version 3 of the License, or					  *
 *	(at your option) any later version.													  *
 *																						  *
 *	The Chili DirectX Framework is distributed in the hope that it will be useful,		  *
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of						  *
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the						  *
 *	GNU General Public License for more details.										  *
 *																						  *
 *	You should have received a copy of the GNU General Public License					  *
 *	along with The Chili DirectX Framework.  If not, see <http://www.gnu.org/licenses/>.  *
 ******************************************************************************************/
#include "MainWindow.h"
#include "Game.h"
#include "Notification.h"

Game::Game(MainWindow& wnd)
	:
	wnd(wnd),
	gfx(wnd),
	rg(std::random_device()()),
	rng(std::random_device()()),
	target_dist_x(brd.loc.x, board::width-1),
	target_dist_y(brd.loc.y, board::height-1),
	col_dist(0, 255),
	brd(gfx)
{
	Target.x = target_dist_x(rng);
	Target.y = target_dist_y(rng);

}


void Game::Go()
{
	gfx.BeginFrame();	
	UpdateModel();
	ComposeFrame();
	gfx.EndFrame();
}

void Game::UpdateModel()
{
	float time_elapsed = Timer.Time_Elapsed();
	if (!Snake.IsGameOver())
	{		
		
	    if (Snake.Eat_Target(Target))
	    {
	    	Target.x = target_dist_x(rng);
	    	Target.y = target_dist_y(rng);
	    }
		Snake.Displacement(time_elapsed, wnd.kbd);
	}
}

void Game::ComposeFrame()
{
	brd.draw_border();
	if (Snake.IsGameOver())
	{
		Notification::draw_gameover(gfx, 300, 300);
	}
	Snake.Draw(brd);
	brd.draw_cell(Target, Colors::Cyan);
}

