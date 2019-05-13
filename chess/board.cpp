#pragma once

#include <allegro5/allegro_primitives.h>
#include <iostream>

#include "board.h"
#include "pawn.h"


Board::Board() {
	objs.push_back(new Pawn(7, 3, PlayerType::WHITE));
}

Board::~Board() {}

void Board::check_events(ALLEGRO_EVENT event) {
}

void Board::update() {

}

void Board::render() {
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			al_draw_filled_rectangle(i*SIZE, j*SIZE, (i + 1)*SIZE, (j + 1)*SIZE, 
				(i + j) % 2 == 0 ? al_map_rgb(255, 255, 255) : al_map_rgb(0, 0, 0));
		}
	}

	for (int i = 0; i < objs.size(); i++)
		objs[i]->render();
}