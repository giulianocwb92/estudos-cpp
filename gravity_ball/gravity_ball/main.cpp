#include "game.h"

int main() {

	const int screenWidth = 800;
	const int screenHeight = 600;
	Color color = DARKGREEN;
	int FPS = 60;
	std::string title = "Gravity ball";

	Game game(screenWidth, screenHeight, color, FPS, title);

	while (game.isRuning()) {

		game.render();
	}
}