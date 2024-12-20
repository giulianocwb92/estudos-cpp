#include "game.h"

int main() {
    // Parāmetros para o jogo
    int screenWidth = 800;
    int screenHeight = 600;
    int FPS = 60;
    Color backgroundColor = DARKGRAY;
    std::string title = "Bouncing Ball Game";

    // Instāncia do jogo
    Game game(screenWidth, screenHeight, FPS, backgroundColor, title);

    // Inicia o loop principal do jogo
    while (game.isRuning())
    {
        game.update();
        game.draw();
    }

    return 0;
}
