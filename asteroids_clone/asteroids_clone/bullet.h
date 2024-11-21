#pragma once
#include "raylib.h"

class Bullet {

private:
	Vector2 position;
	Vector2 velocity;
	float	radius;
	float	lifeTime;
	bool	alive;

public:

	Bullet(Vector2 startPosition, Vector2 startVelocity, float life = 2.0f);

	void update();
	void draw() const;
	bool isAlive() const;
	void destroy();

	//Métodos auxiliares
	Vector2 getPosition() const;
	float   getRadius()	  const;
};