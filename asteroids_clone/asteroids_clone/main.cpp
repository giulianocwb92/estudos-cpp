#include "raylib.h"
#include "game.h"

int main() {

	Game game;

	game.init();

	while (game.isRuning())
	{
		game.update();
		game.render();
		game.reset();
	}

	return 0;
}