#pragma once
#include "raylib.h"
#include "bullet.h"

class SpaceShip {

private:
	Vector2 position;
	Vector2 velocity;
	float	rotation;
	float	speed;
	float	radius;

public:

	SpaceShip(Vector2 startPosition);
	~SpaceShip() = default;

	void handleInput();
	void update();
	void draw() const;

	Vector2 getPosition() const;
	float	getRadius() const;
	Bullet  shoot() const;

};