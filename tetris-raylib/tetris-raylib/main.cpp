#include "Game.h"

int main(void)
{
    // Initialization--------------------------------------------------------------------------------------
    const int screenWidth = 800;
    const int screenHeight = 450;

    Game game{ screenWidth, screenHeight, "Tetris Raylib" };

    while (!game.GameShouldClose())
    {
        game.Tick();
    }

    return 0;
}
