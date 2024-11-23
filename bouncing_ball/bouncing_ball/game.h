#pragma once
#include "ball.h"
#include "raylib.h"
#include <string>



class Game {

public:

	Game(int screenWidth, int screenHeight, int FPS, Color color, std::string title);
	~Game();

	void draw();
	bool isRuning();
	void update();

private:
	int screenWidth;
	int screenHeight;
	Color color = GREEN;
	int FPS;
	std::string title;
	Ball ball;
};