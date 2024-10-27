#pragma once
#include <string>
#include "Board.h"

class Game
{
public:
	Game(int width, int height, int fps, std::string title);
	Game(const Game& other) = delete;
	Game& operator = (const Game& other) = delete;
	//Game(const Game&& other) = delete; impede que ocorram c�pias ou movimenta��es de instru��es do objeto.
	// colocando igual delete como acima n�o precisa implementar essas partes.
	//Game& operator = (const Game&& other) = delete;
	~Game() noexcept;

	bool GameShouldClose() const;

	void Tick();

private:
	void Draw();
	void Update();
	Board board;
};
