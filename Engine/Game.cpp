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

Game::Game(MainWindow& wnd)
	:
	wnd(wnd),
	gfx(wnd),
	rg(std::random_device()()),
	rng(std::random_device()()),
	target_dist_x(0, board::width),
	target_dist_y(0, board::height),
	col_dist(0, 255),
	brd(gfx)
{
	Target.x = target_dist_x(rng);
	Target.y = target_dist_y(rng);

}

void Game::draw_gameover(Graphics & gfx, int x, int y)
{gfx.PutPixel(49 + x, 0 + y, 0, 146, 14);
gfx.PutPixel(50 + x, 0 + y, 0, 146, 14);
gfx.PutPixel(51 + x, 0 + y, 0, 146, 14);
gfx.PutPixel(49 + x, 1 + y, 0, 146, 14);
gfx.PutPixel(50 + x, 1 + y, 0, 146, 14);
gfx.PutPixel(51 + x, 1 + y, 0, 146, 14);
gfx.PutPixel(52 + x, 1 + y, 0, 146, 14);
gfx.PutPixel(38 + x, 2 + y, 0, 146, 14);
gfx.PutPixel(39 + x, 2 + y, 0, 146, 14);
gfx.PutPixel(40 + x, 2 + y, 0, 146, 14);
gfx.PutPixel(41 + x, 2 + y, 0, 146, 14);
gfx.PutPixel(50 + x, 2 + y, 0, 146, 14);
gfx.PutPixel(51 + x, 2 + y, 0, 146, 14);
gfx.PutPixel(52 + x, 2 + y, 0, 146, 14);
gfx.PutPixel(36 + x, 3 + y, 0, 146, 14);
gfx.PutPixel(37 + x, 3 + y, 0, 146, 14);
gfx.PutPixel(38 + x, 3 + y, 0, 146, 14);
gfx.PutPixel(39 + x, 3 + y, 0, 146, 14);
gfx.PutPixel(40 + x, 3 + y, 0, 146, 14);
gfx.PutPixel(41 + x, 3 + y, 0, 146, 14);
gfx.PutPixel(42 + x, 3 + y, 0, 146, 14);
gfx.PutPixel(43 + x, 3 + y, 0, 146, 14);
gfx.PutPixel(50 + x, 3 + y, 0, 146, 14);
gfx.PutPixel(51 + x, 3 + y, 0, 146, 14);
gfx.PutPixel(52 + x, 3 + y, 0, 146, 14);
gfx.PutPixel(53 + x, 3 + y, 0, 146, 14);
gfx.PutPixel(35 + x, 4 + y, 0, 146, 14);
gfx.PutPixel(36 + x, 4 + y, 0, 146, 14);
gfx.PutPixel(37 + x, 4 + y, 0, 146, 14);
gfx.PutPixel(38 + x, 4 + y, 0, 146, 14);
gfx.PutPixel(39 + x, 4 + y, 0, 146, 14);
gfx.PutPixel(40 + x, 4 + y, 0, 146, 14);
gfx.PutPixel(41 + x, 4 + y, 0, 146, 14);
gfx.PutPixel(42 + x, 4 + y, 0, 146, 14);
gfx.PutPixel(43 + x, 4 + y, 0, 146, 14);
gfx.PutPixel(44 + x, 4 + y, 0, 146, 14);
gfx.PutPixel(51 + x, 4 + y, 0, 146, 14);
gfx.PutPixel(52 + x, 4 + y, 0, 146, 14);
gfx.PutPixel(53 + x, 4 + y, 0, 146, 14);
gfx.PutPixel(68 + x, 4 + y, 0, 146, 14);
gfx.PutPixel(69 + x, 4 + y, 0, 146, 14);
gfx.PutPixel(70 + x, 4 + y, 0, 146, 14);
gfx.PutPixel(71 + x, 4 + y, 0, 146, 14);
gfx.PutPixel(72 + x, 4 + y, 0, 146, 14);
gfx.PutPixel(73 + x, 4 + y, 0, 146, 14);
gfx.PutPixel(74 + x, 4 + y, 0, 146, 14);
gfx.PutPixel(75 + x, 4 + y, 0, 146, 14);
gfx.PutPixel(76 + x, 4 + y, 0, 146, 14);
gfx.PutPixel(77 + x, 4 + y, 0, 146, 14);
gfx.PutPixel(78 + x, 4 + y, 0, 146, 14);
gfx.PutPixel(79 + x, 4 + y, 0, 146, 14);
gfx.PutPixel(34 + x, 5 + y, 0, 118, 11);
gfx.PutPixel(35 + x, 5 + y, 0, 146, 14);
gfx.PutPixel(36 + x, 5 + y, 0, 146, 14);
gfx.PutPixel(37 + x, 5 + y, 0, 146, 14);
gfx.PutPixel(38 + x, 5 + y, 0, 146, 14);
gfx.PutPixel(39 + x, 5 + y, 0, 146, 14);
gfx.PutPixel(40 + x, 5 + y, 0, 146, 14);
gfx.PutPixel(41 + x, 5 + y, 0, 146, 14);
gfx.PutPixel(42 + x, 5 + y, 0, 146, 14);
gfx.PutPixel(43 + x, 5 + y, 0, 146, 14);
gfx.PutPixel(44 + x, 5 + y, 0, 146, 14);
gfx.PutPixel(51 + x, 5 + y, 0, 142, 13);
gfx.PutPixel(52 + x, 5 + y, 0, 146, 14);
gfx.PutPixel(53 + x, 5 + y, 0, 146, 14);
gfx.PutPixel(54 + x, 5 + y, 0, 146, 14);
gfx.PutPixel(66 + x, 5 + y, 0, 146, 14);
gfx.PutPixel(67 + x, 5 + y, 0, 146, 14);
gfx.PutPixel(68 + x, 5 + y, 0, 146, 14);
gfx.PutPixel(69 + x, 5 + y, 0, 146, 14);
gfx.PutPixel(70 + x, 5 + y, 0, 146, 14);
gfx.PutPixel(71 + x, 5 + y, 0, 146, 14);
gfx.PutPixel(72 + x, 5 + y, 0, 146, 14);
gfx.PutPixel(73 + x, 5 + y, 0, 146, 14);
gfx.PutPixel(74 + x, 5 + y, 0, 146, 14);
gfx.PutPixel(75 + x, 5 + y, 0, 146, 14);
gfx.PutPixel(76 + x, 5 + y, 0, 146, 14);
gfx.PutPixel(77 + x, 5 + y, 0, 146, 14);
gfx.PutPixel(78 + x, 5 + y, 0, 146, 14);
gfx.PutPixel(79 + x, 5 + y, 0, 146, 14);
gfx.PutPixel(80 + x, 5 + y, 0, 146, 14);
gfx.PutPixel(34 + x, 6 + y, 0, 146, 14);
gfx.PutPixel(35 + x, 6 + y, 0, 146, 14);
gfx.PutPixel(36 + x, 6 + y, 0, 146, 14);
gfx.PutPixel(37 + x, 6 + y, 0, 146, 14);
gfx.PutPixel(38 + x, 6 + y, 0, 146, 14);
gfx.PutPixel(39 + x, 6 + y, 0, 146, 14);
gfx.PutPixel(40 + x, 6 + y, 0, 146, 14);
gfx.PutPixel(41 + x, 6 + y, 0, 146, 14);
gfx.PutPixel(42 + x, 6 + y, 0, 146, 14);
gfx.PutPixel(43 + x, 6 + y, 0, 146, 14);
gfx.PutPixel(44 + x, 6 + y, 0, 146, 14);
gfx.PutPixel(45 + x, 6 + y, 0, 146, 14);
gfx.PutPixel(52 + x, 6 + y, 0, 146, 14);
gfx.PutPixel(53 + x, 6 + y, 0, 146, 14);
gfx.PutPixel(54 + x, 6 + y, 0, 146, 14);
gfx.PutPixel(55 + x, 6 + y, 0, 146, 14);
gfx.PutPixel(65 + x, 6 + y, 0, 146, 14);
gfx.PutPixel(66 + x, 6 + y, 0, 146, 14);
gfx.PutPixel(67 + x, 6 + y, 0, 146, 14);
gfx.PutPixel(68 + x, 6 + y, 0, 146, 14);
gfx.PutPixel(69 + x, 6 + y, 0, 146, 14);
gfx.PutPixel(70 + x, 6 + y, 0, 146, 14);
gfx.PutPixel(71 + x, 6 + y, 0, 146, 14);
gfx.PutPixel(72 + x, 6 + y, 0, 146, 14);
gfx.PutPixel(73 + x, 6 + y, 0, 146, 14);
gfx.PutPixel(74 + x, 6 + y, 0, 146, 14);
gfx.PutPixel(75 + x, 6 + y, 0, 146, 14);
gfx.PutPixel(76 + x, 6 + y, 0, 146, 14);
gfx.PutPixel(77 + x, 6 + y, 0, 146, 14);
gfx.PutPixel(78 + x, 6 + y, 0, 146, 14);
gfx.PutPixel(79 + x, 6 + y, 0, 146, 14);
gfx.PutPixel(80 + x, 6 + y, 0, 146, 14);
gfx.PutPixel(81 + x, 6 + y, 0, 146, 14);
gfx.PutPixel(34 + x, 7 + y, 0, 146, 14);
gfx.PutPixel(35 + x, 7 + y, 0, 146, 14);
gfx.PutPixel(36 + x, 7 + y, 0, 146, 14);
gfx.PutPixel(37 + x, 7 + y, 0, 146, 14);
gfx.PutPixel(38 + x, 7 + y, 0, 146, 14);
gfx.PutPixel(39 + x, 7 + y, 0, 146, 14);
gfx.PutPixel(40 + x, 7 + y, 0, 146, 14);
gfx.PutPixel(41 + x, 7 + y, 0, 146, 14);
gfx.PutPixel(42 + x, 7 + y, 0, 146, 14);
gfx.PutPixel(43 + x, 7 + y, 0, 146, 14);
gfx.PutPixel(44 + x, 7 + y, 0, 146, 14);
gfx.PutPixel(45 + x, 7 + y, 0, 146, 14);
gfx.PutPixel(53 + x, 7 + y, 0, 146, 14);
gfx.PutPixel(54 + x, 7 + y, 0, 146, 14);
gfx.PutPixel(55 + x, 7 + y, 0, 146, 14);
gfx.PutPixel(65 + x, 7 + y, 0, 146, 14);
gfx.PutPixel(66 + x, 7 + y, 0, 146, 14);
gfx.PutPixel(67 + x, 7 + y, 0, 146, 14);
gfx.PutPixel(68 + x, 7 + y, 0, 142, 13);
gfx.PutPixel(79 + x, 7 + y, 0, 146, 14);
gfx.PutPixel(80 + x, 7 + y, 0, 146, 14);
gfx.PutPixel(81 + x, 7 + y, 0, 146, 14);
gfx.PutPixel(82 + x, 7 + y, 0, 146, 14);
gfx.PutPixel(34 + x, 8 + y, 0, 146, 14);
gfx.PutPixel(35 + x, 8 + y, 0, 146, 14);
gfx.PutPixel(36 + x, 8 + y, 0, 146, 14);
gfx.PutPixel(37 + x, 8 + y, 0, 146, 14);
gfx.PutPixel(38 + x, 8 + y, 0, 146, 14);
gfx.PutPixel(39 + x, 8 + y, 0, 146, 14);
gfx.PutPixel(40 + x, 8 + y, 0, 146, 14);
gfx.PutPixel(41 + x, 8 + y, 0, 146, 14);
gfx.PutPixel(42 + x, 8 + y, 0, 146, 14);
gfx.PutPixel(43 + x, 8 + y, 0, 146, 14);
gfx.PutPixel(44 + x, 8 + y, 0, 146, 14);
gfx.PutPixel(45 + x, 8 + y, 0, 146, 14);
gfx.PutPixel(53 + x, 8 + y, 0, 146, 14);
gfx.PutPixel(54 + x, 8 + y, 0, 146, 14);
gfx.PutPixel(55 + x, 8 + y, 0, 146, 14);
gfx.PutPixel(56 + x, 8 + y, 0, 146, 14);
gfx.PutPixel(64 + x, 8 + y, 0, 146, 14);
gfx.PutPixel(65 + x, 8 + y, 0, 146, 14);
gfx.PutPixel(66 + x, 8 + y, 0, 146, 14);
gfx.PutPixel(67 + x, 8 + y, 0, 146, 14);
gfx.PutPixel(80 + x, 8 + y, 0, 146, 14);
gfx.PutPixel(81 + x, 8 + y, 0, 146, 14);
gfx.PutPixel(82 + x, 8 + y, 0, 146, 14);
gfx.PutPixel(34 + x, 9 + y, 0, 146, 14);
gfx.PutPixel(35 + x, 9 + y, 0, 146, 14);
gfx.PutPixel(36 + x, 9 + y, 0, 146, 14);
gfx.PutPixel(37 + x, 9 + y, 0, 146, 14);
gfx.PutPixel(38 + x, 9 + y, 0, 146, 14);
gfx.PutPixel(39 + x, 9 + y, 0, 146, 14);
gfx.PutPixel(40 + x, 9 + y, 0, 146, 14);
gfx.PutPixel(41 + x, 9 + y, 0, 146, 14);
gfx.PutPixel(42 + x, 9 + y, 0, 146, 14);
gfx.PutPixel(43 + x, 9 + y, 0, 146, 14);
gfx.PutPixel(44 + x, 9 + y, 0, 146, 14);
gfx.PutPixel(45 + x, 9 + y, 0, 146, 14);
gfx.PutPixel(54 + x, 9 + y, 0, 146, 14);
gfx.PutPixel(55 + x, 9 + y, 0, 146, 14);
gfx.PutPixel(56 + x, 9 + y, 0, 146, 14);
gfx.PutPixel(57 + x, 9 + y, 0, 146, 14);
gfx.PutPixel(64 + x, 9 + y, 0, 146, 14);
gfx.PutPixel(65 + x, 9 + y, 0, 146, 14);
gfx.PutPixel(66 + x, 9 + y, 0, 146, 14);
gfx.PutPixel(80 + x, 9 + y, 0, 146, 14);
gfx.PutPixel(81 + x, 9 + y, 0, 146, 14);
gfx.PutPixel(82 + x, 9 + y, 0, 146, 14);
gfx.PutPixel(83 + x, 9 + y, 0, 118, 11);
gfx.PutPixel(34 + x, 10 + y, 0, 146, 14);
gfx.PutPixel(35 + x, 10 + y, 0, 146, 14);
gfx.PutPixel(36 + x, 10 + y, 0, 146, 14);
gfx.PutPixel(37 + x, 10 + y, 0, 146, 14);
gfx.PutPixel(38 + x, 10 + y, 0, 146, 14);
gfx.PutPixel(39 + x, 10 + y, 0, 146, 14);
gfx.PutPixel(40 + x, 10 + y, 0, 146, 14);
gfx.PutPixel(41 + x, 10 + y, 0, 146, 14);
gfx.PutPixel(42 + x, 10 + y, 0, 146, 14);
gfx.PutPixel(43 + x, 10 + y, 0, 146, 14);
gfx.PutPixel(44 + x, 10 + y, 0, 146, 14);
gfx.PutPixel(45 + x, 10 + y, 0, 146, 14);
gfx.PutPixel(55 + x, 10 + y, 0, 146, 14);
gfx.PutPixel(56 + x, 10 + y, 0, 146, 14);
gfx.PutPixel(57 + x, 10 + y, 0, 146, 14);
gfx.PutPixel(64 + x, 10 + y, 0, 146, 14);
gfx.PutPixel(65 + x, 10 + y, 0, 146, 14);
gfx.PutPixel(66 + x, 10 + y, 0, 146, 14);
gfx.PutPixel(81 + x, 10 + y, 0, 146, 14);
gfx.PutPixel(82 + x, 10 + y, 0, 146, 14);
gfx.PutPixel(83 + x, 10 + y, 0, 146, 14);
gfx.PutPixel(28 + x, 11 + y, 0, 146, 14);
gfx.PutPixel(29 + x, 11 + y, 0, 146, 14);
gfx.PutPixel(30 + x, 11 + y, 0, 146, 14);
gfx.PutPixel(31 + x, 11 + y, 0, 146, 14);
gfx.PutPixel(32 + x, 11 + y, 0, 146, 14);
gfx.PutPixel(35 + x, 11 + y, 0, 146, 14);
gfx.PutPixel(36 + x, 11 + y, 0, 146, 14);
gfx.PutPixel(37 + x, 11 + y, 0, 146, 14);
gfx.PutPixel(38 + x, 11 + y, 0, 146, 14);
gfx.PutPixel(39 + x, 11 + y, 0, 146, 14);
gfx.PutPixel(40 + x, 11 + y, 0, 146, 14);
gfx.PutPixel(41 + x, 11 + y, 0, 146, 14);
gfx.PutPixel(42 + x, 11 + y, 0, 146, 14);
gfx.PutPixel(43 + x, 11 + y, 0, 146, 14);
gfx.PutPixel(44 + x, 11 + y, 0, 146, 14);
gfx.PutPixel(55 + x, 11 + y, 0, 146, 14);
gfx.PutPixel(56 + x, 11 + y, 0, 146, 14);
gfx.PutPixel(57 + x, 11 + y, 0, 146, 14);
gfx.PutPixel(58 + x, 11 + y, 0, 146, 14);
gfx.PutPixel(64 + x, 11 + y, 0, 146, 14);
gfx.PutPixel(65 + x, 11 + y, 0, 146, 14);
gfx.PutPixel(66 + x, 11 + y, 0, 146, 14);
gfx.PutPixel(81 + x, 11 + y, 0, 146, 14);
gfx.PutPixel(82 + x, 11 + y, 0, 146, 14);
gfx.PutPixel(83 + x, 11 + y, 0, 146, 14);
gfx.PutPixel(27 + x, 12 + y, 0, 146, 14);
gfx.PutPixel(28 + x, 12 + y, 0, 146, 14);
gfx.PutPixel(29 + x, 12 + y, 0, 146, 14);
gfx.PutPixel(30 + x, 12 + y, 0, 146, 14);
gfx.PutPixel(31 + x, 12 + y, 0, 146, 14);
gfx.PutPixel(32 + x, 12 + y, 0, 146, 14);
gfx.PutPixel(33 + x, 12 + y, 0, 146, 14);
gfx.PutPixel(35 + x, 12 + y, 0, 142, 13);
gfx.PutPixel(36 + x, 12 + y, 0, 146, 14);
gfx.PutPixel(37 + x, 12 + y, 0, 146, 14);
gfx.PutPixel(38 + x, 12 + y, 0, 146, 14);
gfx.PutPixel(39 + x, 12 + y, 0, 146, 14);
gfx.PutPixel(40 + x, 12 + y, 0, 146, 14);
gfx.PutPixel(41 + x, 12 + y, 0, 146, 14);
gfx.PutPixel(42 + x, 12 + y, 0, 146, 14);
gfx.PutPixel(43 + x, 12 + y, 0, 146, 14);
gfx.PutPixel(56 + x, 12 + y, 0, 146, 14);
gfx.PutPixel(57 + x, 12 + y, 0, 146, 14);
gfx.PutPixel(58 + x, 12 + y, 0, 146, 14);
gfx.PutPixel(64 + x, 12 + y, 0, 146, 14);
gfx.PutPixel(65 + x, 12 + y, 0, 146, 14);
gfx.PutPixel(66 + x, 12 + y, 0, 146, 14);
gfx.PutPixel(67 + x, 12 + y, 0, 146, 14);
gfx.PutPixel(68 + x, 12 + y, 0, 146, 14);
gfx.PutPixel(69 + x, 12 + y, 0, 146, 14);
gfx.PutPixel(70 + x, 12 + y, 0, 146, 14);
gfx.PutPixel(71 + x, 12 + y, 0, 146, 14);
gfx.PutPixel(72 + x, 12 + y, 0, 146, 14);
gfx.PutPixel(73 + x, 12 + y, 0, 146, 14);
gfx.PutPixel(74 + x, 12 + y, 0, 146, 14);
gfx.PutPixel(75 + x, 12 + y, 0, 146, 14);
gfx.PutPixel(76 + x, 12 + y, 0, 146, 14);
gfx.PutPixel(77 + x, 12 + y, 0, 146, 14);
gfx.PutPixel(78 + x, 12 + y, 0, 146, 14);
gfx.PutPixel(79 + x, 12 + y, 0, 146, 14);
gfx.PutPixel(80 + x, 12 + y, 0, 146, 14);
gfx.PutPixel(81 + x, 12 + y, 0, 146, 14);
gfx.PutPixel(82 + x, 12 + y, 0, 146, 14);
gfx.PutPixel(83 + x, 12 + y, 0, 146, 14);
gfx.PutPixel(26 + x, 13 + y, 0, 146, 14);
gfx.PutPixel(27 + x, 13 + y, 0, 146, 14);
gfx.PutPixel(28 + x, 13 + y, 0, 146, 14);
gfx.PutPixel(29 + x, 13 + y, 0, 146, 14);
gfx.PutPixel(30 + x, 13 + y, 0, 146, 14);
gfx.PutPixel(31 + x, 13 + y, 0, 146, 14);
gfx.PutPixel(32 + x, 13 + y, 0, 146, 14);
gfx.PutPixel(33 + x, 13 + y, 0, 146, 14);
gfx.PutPixel(34 + x, 13 + y, 0, 146, 14);
gfx.PutPixel(37 + x, 13 + y, 0, 146, 14);
gfx.PutPixel(38 + x, 13 + y, 0, 146, 14);
gfx.PutPixel(39 + x, 13 + y, 0, 146, 14);
gfx.PutPixel(40 + x, 13 + y, 0, 146, 14);
gfx.PutPixel(41 + x, 13 + y, 0, 146, 14);
gfx.PutPixel(42 + x, 13 + y, 0, 146, 14);
gfx.PutPixel(56 + x, 13 + y, 0, 142, 13);
gfx.PutPixel(57 + x, 13 + y, 0, 146, 14);
gfx.PutPixel(58 + x, 13 + y, 0, 146, 14);
gfx.PutPixel(59 + x, 13 + y, 0, 146, 14);
gfx.PutPixel(64 + x, 13 + y, 0, 146, 14);
gfx.PutPixel(65 + x, 13 + y, 0, 146, 14);
gfx.PutPixel(66 + x, 13 + y, 0, 146, 14);
gfx.PutPixel(67 + x, 13 + y, 0, 146, 14);
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
	if (!Snake.IsGameOver())
	{
		bool ischanged_dir=false;
		
		if (wnd.kbd.KeyIsPressed(VK_RIGHT) && (delta.x!= -1) && !ischanged_dir)
		{
			delta = { 1,0 };
			ischanged_dir = true;
		}
		if (wnd.kbd.KeyIsPressed(VK_DOWN) && (delta.y!= -1) && !ischanged_dir)
		{
			delta = { 0,1 };
			ischanged_dir = true;

		}
		if (wnd.kbd.KeyIsPressed(VK_LEFT)  && (delta.x != 1) && !ischanged_dir)
		{
			delta = { -1,0 };
			ischanged_dir = true;

		}
		if (wnd.kbd.KeyIsPressed(VK_UP) && (delta.y != 1)  &&!ischanged_dir)
		{
			delta = { 0,-1 };
			ischanged_dir = true;

		}
		if(ischanged_dir)
			Snake.Get_delta(delta);

		
		if (!(snake_rate++%snake_frame))
		{
			if (Snake.Eat_Target(Target))
			{
				Snake.Grow();
				Target.x = target_dist_x(rng);
				Target.y = target_dist_y(rng);
				if(snake_frame>1)
				snake_frame--;
			}
			Snake.Move_By();
		} 
	}
}

void Game::ComposeFrame()
{
	if (Snake.IsGameOver())
	{
		draw_gameover(gfx, 100,100);
	}
	Snake.Draw(brd);
	brd.draw_cell(Target, Colors::Cyan);
}

