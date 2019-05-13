#pragma once


#include "object.h"

class Pawn : public Object {
public:
	Pawn(int x, int y, PlayerType player) : Object(x, y, player) {}
	void calculate_available_moves(std::vector<Object*> objs);
	void render();
};