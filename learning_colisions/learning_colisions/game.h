#pragma once
#include "raylib.h"
#include <string>

class Game {

public:

	Game(int width, int height, int FPS, Color color, std::string title);
	~Game();

	void init();
	void update();
	void draw();
	void render();

private:

	int screenWidth;
	int screenHeight;
	Color color;
	int FPS;
	std::string title;

};