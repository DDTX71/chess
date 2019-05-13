#include <iostream>
#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>

#include "game.h"

int main() {
	if (!al_init())
		std::cout << "Failed to initialize allegro!";
	if (!al_init_primitives_addon())
		std::cout << "Failed to initialize primitives addon!";
	if (!al_install_mouse())
		std::cout << "Failed to install mouse!";
	
	Game game;
	game.start();
	return 0;
}