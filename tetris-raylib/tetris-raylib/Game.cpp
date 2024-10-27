#include "Game.h"
#include <raylib.h>
#include <assert.h>

Game::Game(int width, int height, std::string title)
{
	assert(!GetWindowHandle()); //Verifica se a janela já está aberta.
	InitWindow(width, height, title.c_str());
}

Game::~Game() noexcept
{
	assert(GetWindowHandle()); //Verifica se janela está fechada.
	CloseWindow();
}

bool Game::GameShouldClose() const
{
	return WindowShouldClose();
}

void Game::Tick()
{
	BeginDrawing();
	Update();
	Draw();
	EndDrawing();
}

void Game::Draw()
{
	ClearBackground(RAYWHITE);
}

void Game::Update()
{
}
