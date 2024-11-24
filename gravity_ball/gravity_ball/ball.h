#pragma once
#include "raylib.h"

class Ball {

public:

	Ball(Vector2 startPosition, float gravity, float radius, Color color);
	~Ball() = default;

	void draw();
	void handleInput();
	void update();
	float getRadius() const;
	float getVelocity() const;
	Vector2 getPosition() const;

private:

	float radius;
	Vector2 position;
	float velocity;
	Color color;
};
