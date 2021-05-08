#pragma once
#include "Location.h"
#include "Colors.h"
#include "Board.h"
#include <vector>
#include "Keyboard.h"
class snake
{
public:
	snake();
	void Grow();
	void Move_By();
	void Get_delta(Location d);
	void Draw(board &brd);
	bool IsGameOver();
	bool Eat_Target(const Location Target);
	void Speed_Up();
	void Displacement(float dt, Keyboard &kbd);
private:
	class segment
	{public:
		void follow(segment &seg);
		void move_by(Location  const &Delta) ;
		void init_head();
		Location get_pos() const;
		void init_body(Color c);
		void draw(board &b);
		void touching_boundary();
		void change_color(Color c);
	private:
		Location pos;
		Color c;
	};
private:
	std::vector<segment> Segments;
	static constexpr Color head_color=Colors::Red;
	static constexpr Color body_color[2] = { Colors::Green, Colors::Yellow};
	bool grid[board::width][board::height];
	bool grown=false;
	int size;
	Location delta;
    bool GameOver=false;
	float move_time = 1.0/10.0f;   //snake moves every ($move_time )secs by 1 cell
	float time_period = 0.0f;       //time period, time count from start
	float move_time_reduced = 0.002f;   //snake move time would reduce by speed_up amount
	bool grow=false;
	Keyboard kbd;
	bool isChanged_dir = false;
};