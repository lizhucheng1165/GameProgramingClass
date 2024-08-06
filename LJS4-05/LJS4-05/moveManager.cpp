#include "moveManager.h"
#include "move.h"

void C_MOVEMGR::init()
{
	m_nMoveCount = 3;
	m_arMove = new C_MOVE * [m_nMoveCount] {};

	m_arMove[0] = new C_WALK{};
	m_arMove[1] = new C_FLY{};
	m_arMove[2] = new C_SWIM{};
}

C_MOVE* C_MOVEMGR::getMove(int nMoveId)
{
	if (nMoveId <0 || nMoveId >= m_nMoveCount)
	{
		return nullptr;
	}
	return m_arMove[nMoveId];
}

void C_MOVEMGR::release()
{
	for (int i = 0; i < m_nMoveCount; i++)
	{
		delete m_arMove[i];
		m_arMove[i] = nullptr;
	}
	delete[] m_arMove;
	m_arMove = nullptr;
}
