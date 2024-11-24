#pragma once
#include "ball.h"
#include "raylib.h"
#include <string>

class Game {

public:

	Game(int width, int height, Color color, int FPS, std::string title);
	~Game();

	void update();
	void draw();
	void render();
	bool isRuning();

private:

	int screenWidth;
	int screenHeight;
	Color color;
	int FPS;
	std::string title;
	Ball ball;

};