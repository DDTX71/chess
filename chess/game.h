#include <allegro5/allegro.h>

class Game {
public:
	Game();
	~Game();
	void start();
	
private:
	ALLEGRO_DISPLAY* display;
	ALLEGRO_TIMER* timer;
	ALLEGRO_EVENT_QUEUE* event_queue;
	bool running = false;
	void run();
	void update();
	void render();
	void check_events(ALLEGRO_EVENT event);
};
