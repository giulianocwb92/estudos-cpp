#include "ball.h"

Ball::Ball(Vector2 startPosition, float gravity, float radius, Color color)
	: position (startPosition), velocity (gravity), radius (radius), color (color){}

void Ball::draw()
{
	DrawCircle(position.x, position.y, radius, color);
}

void Ball::handleInput()
{
	if (IsKeyDown(KEY_UP) || IsKeyDown(KEY_W)) {
		position.y -= 200.0f * GetFrameTime();
	}
	if (IsKeyDown(KEY_LEFT) || IsKeyDown(KEY_A)) {
		position.x -= 200.0f * GetFrameTime();
	}
	if (IsKeyDown(KEY_RIGHT) || IsKeyDown(KEY_D)) {
		position.x += 200.0f * GetFrameTime();
	}
	if (IsKeyDown(KEY_DOWN) || IsKeyDown(KEY_S)) {
		position.y += 200.0f * GetFrameTime();
	}
}

void Ball::update()
{
	handleInput();
	position.y += velocity*GetFrameTime();

	if (position.x > GetScreenWidth()) position.x = 0;
	if (position.x < 0) position.x = GetScreenWidth();
	if (position.y > GetScreenHeight() - getRadius()) position.y = (GetScreenHeight() - getRadius());
	if (position.y < 0 + getRadius()) position.y = (0 + getRadius());

}

float Ball::getRadius() const
{
	return radius;
}

float Ball::getVelocity() const
{
	return velocity;
}

Vector2 Ball::getPosition() const
{
	return position;
}

