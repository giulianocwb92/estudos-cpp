#include "bullet.h"

Bullet::Bullet(Vector2 startPosition, Vector2 startVelocity, float life)
	:
	position(startPosition), velocity(startVelocity), radius(5.0f),
	lifeTime(life), alive(true){}

void Bullet::update() {
	if (!alive) return;

	position.x += velocity.x * GetFrameTime();
	position.y += velocity.y * GetFrameTime();

	lifeTime -= GetFrameTime();

	if (lifeTime <= 0.0f) {
		alive = false;
	}

	if (position.x > GetScreenWidth()) position.x = 0;
	if (position.x < 0) position.x = GetScreenWidth();
	if (position.y > GetScreenHeight()) position.y = 0;
	if (position.y < 0) position.y = GetScreenHeight();
}

void Bullet::draw() const
{
	if (isAlive()) {
		DrawCircleV(position, radius, YELLOW);
	}
}

bool Bullet::isAlive() const
{
	return alive;
}

void Bullet::destroy()
{
	alive = false;
}

Vector2 Bullet::getPosition() const
{
	return position;
}

float Bullet::getRadius() const
{
	return radius;
}
