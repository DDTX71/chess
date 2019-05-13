#include <iostream>
#include <allegro5/allegro.h>

#include "game.h"

int main() {
	if (!al_init())
		std::cout << "Failed to initialize allegro!";
	
	Game game;
	game.start();
	return 0;
}