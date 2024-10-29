#include "spaceship.h"

SpaceShip::SpaceShip()
{
	image = LoadTexture("Graphics/spaceship.png");
	position.x = (GetScreenWidth() - image.width)/2;
	position.y = GetScreenHeight() - image.height;
	lastFireTime = 0.0;
}

SpaceShip::~SpaceShip()
{
	UnloadTexture(image);
}

void SpaceShip::Draw()
{
	DrawTexture(image, position.x, position.y, WHITE);
}

void SpaceShip::MoveLeft()
{
	position.x -= 7;
	if (position.x < 0) {
		position.x = 0;
	}
}

void SpaceShip::MoveRight()
{
	position.x += 7;
	if (position.x > GetScreenWidth() - image.width) {
		position.x = GetScreenWidth() - image.width;
	}
}

void SpaceShip::FireLaser()
{
	if (GetTime() - lastFireTime >= 0.35) {
		lasers.push_back(Laser({ position.x + image.width / 2 - 2, position.y }, -6));
		lastFireTime = GetTime();
	}
}