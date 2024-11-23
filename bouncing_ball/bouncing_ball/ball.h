#pragma once
#include "raylib.h"
class Ball
{
public:
	Ball(Vector2 startPosition, Vector2 startVelocity, float radius, Color color);
	~Ball() = default;

	void draw();
	void update();
	float getRadius() const;
	Vector2 getVelocity() const;
	Vector2 getPosition() const;

private:
	float radius;
	Vector2 position;
	Vector2 velocity;
	Color   color;
};
