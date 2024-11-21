#include "game.h"

Game::Game()
	:
	score(0),
	isGameOver(false),
	isPaused(false)
{
	InitWindow(800, 600, "Asteroids Clone");
	SetTargetFPS(60);
}

Game::~Game()
{
	CloseWindow();
}

void Game::init()
{
	score = 0;
	isGameOver = false;
	isPaused = false;
	player;
	bullets.clear();
}

bool Game::isRuning() const
{
	return !WindowShouldClose();
}

void Game::handleInput()
{
	if (IsKeyPressed(KEY_P)) {
		isPaused = !isPaused;
	}
	if (!isPaused && !isGameOver) {

		if (IsKeyPressed(KEY_SPACE)) {
			bullets.push_back(player.shoot());
		}
	}
}
