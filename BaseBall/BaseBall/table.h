#pragma once

#include "game.h"

class C_TABLE
{
	friend C_GAME;
private:
	C_GAME::E_TYPE m_arType[10];


private:
	C_TABLE() = default;
	void Init(int* pBall, int nBallCount, int nStrike);
	C_GAME::E_TYPE GetType(int nNumber);

};