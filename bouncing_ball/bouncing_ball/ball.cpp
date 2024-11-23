#include "ball.h"

Ball::Ball(Vector2 startPosition, Vector2 startVelocity, float radius, Color color)
	: position(startPosition), velocity(startVelocity), radius(radius), color(color){}

void Ball::draw()
{
	DrawCircle(position.x, position.y, radius, color);
}

void Ball::update()
{
	position.x += velocity.x;
	position.y += velocity.y;

	if (getPosition().x + getRadius() >= GetScreenWidth() ||
		getPosition().x - getRadius() <= 0) {
		velocity.x *= -1;
	}

	if (getPosition().y + getRadius() >= GetScreenHeight() ||
		getPosition().y - getRadius() <= 0) {
		velocity.y *= -1;
	}
}

float Ball::getRadius() const
{
	return radius;
}

Vector2 Ball::getVelocity() const
{
	return velocity;
}

Vector2 Ball::getPosition() const
{
	return position;
}

