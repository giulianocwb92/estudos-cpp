#pragma once
#include "raylib.h"
#include <vector>

class Asteroid {
private:
	Vector2 position;
	Vector2 velocity;
	float	radius;
	int		size;
	Color	color;

public:

	Asteroid(Vector2 startPosition, Vector2 startVelocity, int size);

	void update();
	void drawn() const;
	Vector2 getPosition() const;
	float	getRadius() const;
	bool	isAlive() const;
	std::vector<Asteroid> split() const;
};