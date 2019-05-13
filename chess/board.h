#pragma once

#include "object.h"

const int SIZE = 100;

enum PlayerType {
	WHITE = 0,
	BLACK,
};

class Board {
public:
	Board();
	~Board();
	void check_events(ALLEGRO_EVENT event);
	void render();
	void update();

private:
	bool selected = false;
	PlayerType current = WHITE;
	std::vector<Object*> objs;
};