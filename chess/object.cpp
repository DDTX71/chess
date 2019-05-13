#include "object.h"

int Object::getX() {
	return coordinates.x;
}

int Object::getY() {
	return coordinates.y;
}

void Object::setX(int x) {
	coordinates.x = x;
}

void Object::setY(int y) {
	coordinates.y = y;
}

bool Object::isAt(int x, int y) {
	return ((coordinates.x == x) && (coordinates.y == y));
}