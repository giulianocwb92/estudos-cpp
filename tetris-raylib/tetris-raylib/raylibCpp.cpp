#include "raylibCpp.h"
#include <assert.h>

void raycpp::DrawRectangle(Vec2<int> pos, Vec2<int> widthHeight, Color color)
{
	//Verifica se a fun��o DrawRectangle com o Vec2 n�o desenha o objeto fora dos limites da tela
	assert(pos.GetX() >= 0 && pos.GetY() >= 0 &&
			pos.GetX() < GetScreenWidth() && pos.GetY() < GetScreenHeight());
	DrawRectangle(pos.GetX(), pos.GetY(), widthHeight.GetX(), widthHeight.GetY(), color);
}
