#pragma once

#include <vector>
#include "point.h"
#include "board.h"


const int PADDING = 10;

class Object {
public:
	Object(int x, int y, PlayerType player) { coordinates.x = x; coordinates.y = y; this->player = player; }
	virtual void calculate_available_moves(std::vector<Object*> objs) = 0;
	virtual void render() = 0;
	int getX();
	int getY();
	void setX(int x);
	void setY(int y);
	bool isAt(int x, int y);

protected:
	PlayerType player;
	Point coordinates;
	std::vector<Point> available_moves;
};