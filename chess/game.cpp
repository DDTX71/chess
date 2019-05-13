#include <iostream>

#include "game.h"

const float FPS = 60.0;

Game::Game() {
	display = al_create_display(800, 600);
	if (!display)
		std::cout << "Failed to create a display!\n";

	timer = al_create_timer(1.0 / FPS);
	if (!timer)
		std::cout << "Failed to create timer!\n";

	event_queue = al_create_event_queue();
	if (!event_queue) 
		std::cout << "failed to create event_queue!\n";

	al_register_event_source(event_queue, al_get_display_event_source(display));
	al_register_event_source(event_queue, al_get_timer_event_source(timer));
}

Game::~Game() {
	
}

void Game::start() {
	running = true;
	al_start_timer(timer);
	run();
}

void Game::run() {
	ALLEGRO_EVENT event;
	bool updated = true;

	while (running) {
		al_wait_for_event(event_queue, &event);
		if (event.type == ALLEGRO_EVENT_TIMER) {
			update();
			updated = true;
		} else if (event.type == ALLEGRO_EVENT_DISPLAY_CLOSE) {
			break;
		}
		check_events(event);

		if (updated) {
			render();
			updated = false;
		}

		al_clear_to_color(al_map_rgb(133, 133, 133));
		al_flip_display();
	}
}

void Game::check_events(ALLEGRO_EVENT event) {

}

void Game::update() {
	std::cout << "Updated!";
}

void Game::render() {

}