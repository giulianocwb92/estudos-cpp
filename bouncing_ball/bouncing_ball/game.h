#pragma once
#include "raylib.h"


class Game {

public:

	Game();
	~Game();

private:
	int screenWidth;
	int screenHeight;
	Color color;
	int FPS;

};