#pragma once
#include <string>

class Game
{
public:
	Game(int width, int height, std::string title);
	Game(const Game& other) = delete;
	Game& operator = (const Game& other) = delete;
	//Game(const Game&& other) = delete; impede que ocorram cópias ou movimentações de instruções do objeto.
	// colocando igual delete como acima não precisa implementar essas partes.
	//Game& operator = (const Game&& other) = delete;
	~Game() noexcept;

	bool GameShouldClose() const;

	void Tick();

private:
	void Draw();
	void Update();
};
