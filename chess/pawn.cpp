#include <allegro5/allegro_primitives.h>

#include "board.h"
#include "pawn.h"

void Pawn::calculate_available_moves(std::vector<Object*> objs) {
	for (int i = 0; i < objs.size(); i++) {
		if (player == PlayerType::WHITE) {
			if (coordinates.x == 1) {

			}
			else {

			}
		}
		else {

		}
	}
}

void Pawn::render() {
	al_draw_filled_rectangle(coordinates.x * SIZE + PADDING, coordinates.y * SIZE + PADDING,
		(coordinates.x + 1) * SIZE - PADDING, (coordinates.y + 1) * SIZE - PADDING, al_map_rgb(255, 0, 0));
}
