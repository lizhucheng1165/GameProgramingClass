#pragma once

#include "game.h"

class C_TABLE
{
	friend C_GAME;
private:
	C_GAME::E_TYPE m_arType[10];


private:
	C_TABLE() = default;
	void Init();
	C_GAME::E_TYPE GetType(int nNumber);

};