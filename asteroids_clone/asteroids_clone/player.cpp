#include "player.h"
#include "bullet.h"
#include <cmath>

SpaceShip::SpaceShip(Vector2 startPosition)
		: position(startPosition), velocity({0, 0}), 
		  rotation(0), speed(200.0f), radius(15.0f){}

void SpaceShip::handleInput()
{
	if (IsKeyDown(KEY_A) || IsKeyDown(KEY_LEFT)) {
		rotation -= 200.0f * GetFrameTime();
	}
	if (IsKeyDown(KEY_D) || IsKeyDown(KEY_RIGHT)) {
		rotation += 200.0f * GetFrameTime();
	}
	if (IsKeyDown(KEY_W) || IsKeyDown(KEY_UP)) {
		float angleRed = rotation * DEG2RAD;
		velocity.x += std::cos(angleRed) * speed * GetFrameTime();
		velocity.y += std::sin(angleRed) * speed * GetFrameTime();
	}
}

void SpaceShip::update()
{
	position.x += velocity.x * GetFrameTime();
	position.y += velocity.y * GetFrameTime();

	if (position.x > GetScreenWidth()) position.x = 0;
	if (position.x < 0) position.x = GetScreenWidth();
	if (position.y > GetScreenHeight()) position.y = 0;
	if (position.y < 0) position.y = GetScreenHeight();

	velocity.x *= 0.99f;
	velocity.y *= 0.99f;
}

void SpaceShip::draw() const
{
	float angleRad = rotation * DEG2RAD;
	Vector2 tip = { position.x + std::cos(angleRad) * radius,
					position.y + std::sin(angleRad) * radius };

	DrawTriangle(
		tip,
		{ position.x + std::cos(angleRad + DEG2RAD * 140) * radius,
		  position.y + std::sin(angleRad + DEG2RAD * 140) * radius },
		{ position.x + std::cos(angleRad - DEG2RAD * 140) * radius,
		  position.y + std::sin(angleRad - DEG2RAD * 140) * radius },
		WHITE
	);
}

Vector2 SpaceShip::getPosition() const
{
	return position;
}

float SpaceShip::getRadius() const
{
	return radius;
}

Bullet SpaceShip::shoot() const
{
	float angleRad = rotation * DEG2RAD;
	Vector2 bulletVellocity = { std::cos(angleRad) * 300.0f,
							   std::sin(angleRad) * 300.0f };
	return Bullet(position, bulletVellocity);
}




