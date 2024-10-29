#pragma once
#include "spaceship.h"

class Game {
public:
	Game();
	~Game();
	void Draw();
	void Update();
	void HandleInput();
private:
	void DeleteInactiveLasers();
	SpaceShip spaceship;
};

