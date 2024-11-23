#include "game.h"

Game::Game(int screenWidth, int screenHeight, int FPS, Color color, std::string title)
	: screenWidth(screenWidth), screenHeight(screenHeight), FPS(FPS), 
	color(color), title(title),
	ball({ screenWidth / 2.0f, screenHeight / 2.0f }, { 3.0f, 3.0f }, 15.0f, RED)
{
	SetTargetFPS(FPS);
	InitWindow(screenWidth, screenHeight, title.c_str());
}

Game::~Game()
{
	CloseWindow();
}

void Game::draw()
{
	update();
	BeginDrawing();
	ball.draw();
	ClearBackground(color);
	EndDrawing();
}

bool Game::isRuning()
{
	return !WindowShouldClose();
}

void Game::update()
{
	ball.update();
}
