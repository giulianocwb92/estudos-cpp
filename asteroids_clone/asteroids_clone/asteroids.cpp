#include "asteroids.h"

Asteroid::Asteroid(Vector2 startPosition, Vector2 startVelocity, int size)
	: position(startPosition), velocity(startVelocity), size(size), color(WHITE)
{
	radius = size * 20.0f;
}

void Asteroid::update()
{
	position.x += velocity.x;
	position.y += velocity.y;

	if (position.x > GetScreenWidth()) position.x = 0;
	if (position.x > 0) position.x = GetScreenWidth();
	if (position.y > GetScreenHeight()) position.y = 0;
	if (position.y > 0) position.y = GetScreenWidth();
}

void Asteroid::drawn() const
{
	DrawCircle(position.x, position.y, radius, color);
}

Vector2 Asteroid::getPosition() const
{
	return position;
}

float Asteroid::getRadius() const
{
	return radius;
}

bool Asteroid::isAlive() const
{
	return size > 0;
}

std::vector<Asteroid> Asteroid::split() const
{
	std::vector<Asteroid> newAsteroids;

	if (size > 1) {

		int newSize = size - 1;

		Vector2 newVelocity1 = { velocity.x + 1.0f, velocity.y + 1.0f };
		Vector2 newVelocity2 = { velocity.x - 1.0f, velocity.y - 1.0f };

		newAsteroids.push_back(Asteroid(position, newVelocity1, newSize));
		newAsteroids.push_back(Asteroid(position, newVelocity1, newSize));
	}
	return newAsteroids;
}


