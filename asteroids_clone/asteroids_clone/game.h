#pragma once
#include <vector>
#include "bullet.h"
#include "player.h"
#include "asteroids.h"

class Game
{
public:
	Game();
	~Game();

	void init();
	void update();
	void render();
	void reset();
	bool isRuning() const;


private:
	int score;
	bool isGameOver;
	bool isPaused;
	SpaceShip player = SpaceShip(Vector2{400, 300});
	std::vector<Bullet> bullets;
	std::vector<Asteroid> asteroids;

	void handleInput();
	void updateEntities();
	void checkColisions();
	void drawEntities();

};

