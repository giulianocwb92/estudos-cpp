#include "game.h"

Game::Game(int width, int height, Color color, int FPS, std::string title)
	: screenWidth(width), screenHeight(height), color(color), FPS(FPS), title(title.c_str()),
	ball(Vector2{ screenWidth / 2.0f, screenHeight / 2.0f }, 60.0f, 15.0f, RED)
{
	InitWindow(screenWidth, screenHeight, title.c_str());
	SetTargetFPS(FPS);
}

Game::~Game()
{
	CloseWindow();
}

void Game::update()
{
	ball.update();
}

void Game::draw()
{
	update();
	BeginDrawing();
	ball.draw();
	ClearBackground(color);
	EndDrawing();
}

void Game::render()
{
	draw();
}

bool Game::isRuning()
{
	return !WindowShouldClose();
}
