#pragma once

#include "move.h"

class C_MOVEMGR
{
private:
	//C_MOVE* m_arMove[3];
	C_MOVE** m_arMove;
	int m_nMoveCount;

public:
	C_MOVEMGR() = default;
	C_MOVEMGR(const C_MOVEMGR&) = delete;
	C_MOVEMGR& operator = (const C_MOVEMGR&) = delete;

	void init();
	C_MOVE* getMove(int nMoveId);
	void release();
};