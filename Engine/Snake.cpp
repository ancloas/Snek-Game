#include "Snake.h"
#include <assert.h>

void snake::segment::follow(segment & seg)
{
	this->pos = seg.pos;
}

void snake::segment::move_by(Location const &delta) 
{
	assert(abs(delta.x) + abs(delta.y) == 1);
	this->pos.add(delta);
	touching_boundary();
}

void snake::segment::init_head()
{
	this->pos.x =29;
	this->pos.y = 10;
	c = snake::head_color;
}
Location snake::segment::get_pos() const
{
	return pos;
}

void snake::segment::init_body(Color C)
{
	c = C;
	pos = { -1,-1 };
}

void snake::segment::draw(board &b)
{
	assert(pos.x < board::width);
	assert(pos.x >= board::loc.x);
	assert(pos.y < board::height);
	assert(pos.y >= board::loc.y);
	b.draw_cell(pos, c);
}

void snake::segment::touching_boundary()
{

	if (pos.x >= board::width)
		pos.x = board::loc.x;

	if (pos.x < board::loc.x)
		pos.x = board::width - 1;
	if (pos.y >= board::height)
		pos.y = board::loc.y;
	if (pos.y < board::loc.y)
		pos.y = board::height - 1;

}

snake::snake()
{
	for (int i = 0; i < board::width; i++)
	{
		for (int j = 0; j < board::height; j++)
			grid[i][j] = false;
	}
	segment s;
	delta = { 1,0 };
	s.init_head();
	Segments.push_back(s);
	grid[s.get_pos().x][s.get_pos().y] = true;
	size = 1;
}

void snake::Grow()
{
	segment s;
	s.init_body(body_color[size % 2]);
	Segments.push_back(s);
	size++;
	grown = true;
}

void snake::Move_By()
{//Move 1 cell for each 10 secs..

	if (grown != true)
	{
		grid[Segments[size - 1].get_pos().x][Segments[size - 1].get_pos().y] = false;
	}
	for (int i = size - 1; i > 0; i--)
	{

		Segments[i].follow(Segments[i - 1]);
	}
	Segments[0].move_by(delta);
	if (grid[Segments[0].get_pos().x][Segments[0].get_pos().y])
		GameOver = true;
	int X = Segments[0].get_pos().x;
	int Y = Segments[0].get_pos().y;
	grid[X][Y] = true; // update flag if position is occupied
	grown = false;
}
void snake::Get_delta(Location d)
{
	delta = d;
}
void snake::Draw(board &b)
{
	for (int i = 0; i < size; i++)
	{
		Segments[i].draw(b);
	}
}

bool snake::IsGameOver()
{
	return GameOver;
}

bool snake::Eat_Target(const Location Target)
{
	if ((Segments[0].get_pos().x == Target.x) && (Segments[0].get_pos().y == Target.y))
	{
	Speed_Up();
	grow = true;
	return true;
    }
	return false;
}

void snake::Speed_Up()
{
	move_time -= move_time_reduced;
}
void snake::Displacement(float dt)
{ 
	time_period += dt;
	//growing the snake
	
	if (time_period >= move_time)
	{
		//move
		if (grow)
		{
			Grow();
			grow = false;
		}
		Move_By();
		time_period = time_period-move_time;
	}
}