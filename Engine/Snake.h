#pragma once
#include "Location.h"
#include "Colors.h"
#include "Board.h"
#include <vector>
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
private:
	class segment
	{public:
		void follow(segment &seg);
		void move_by(Location  const &Delta) ;
		void init_head();
		Location get_pos() const;
		void init_body();
		void draw(board &b);
		void touching_boundary();
	private:
		Location pos;
		Color c;
	};
private:
	std::vector<segment> Segments;
	static constexpr Color head_color=Colors::Red;
	static constexpr Color body_color= Colors::Green;
	bool grid[board::width][board::height];
	bool grown=false;
	int size;
	Location delta;
    bool GameOver=false;
};