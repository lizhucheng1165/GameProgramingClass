#include "table.h"

void C_TABLE::Init(int* pBall, int nBallCount, int nStrike)
{
	for (int i = 0; i < nBallCount; i++)
	{
		m_arType[pBall[i]] = C_GAME::E_BALL;
	}
	m_arType[nStrike] = C_GAME::E_STRIKE;
}

C_GAME::E_TYPE C_TABLE::GetType(int nNumber)
{
    return m_arType[nNumber];
}
