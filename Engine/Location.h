#pragma once
class Location
{
public:
	void add(Location const &l)
	{
		x += l.x;
		y += l.y;
	}
	int x;
	int y;
};
