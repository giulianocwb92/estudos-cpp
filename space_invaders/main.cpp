#include <raylib.h>
#include "Game.h"
#include "laser.h"

int main() {
	int windowHeight = 700;
	int windowWidth  = 750;
	Color grey = { 29, 29, 27, 255 };

	InitWindow(windowWidth, windowHeight, "C++ Space Invaders");
	SetTargetFPS(60);
	Game game;

	while (!WindowShouldClose())
	{
		game.HandleInput();
		game.Update();
		BeginDrawing();
		ClearBackground(grey);
		EndDrawing();

		game.Draw();
	}

	CloseWindow();
}