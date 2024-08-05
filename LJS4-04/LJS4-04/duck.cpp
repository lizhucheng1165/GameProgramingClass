#include "duck.h"

void C_DUCK::init(C_MOVE* pMove)
{
	m_pMove = pMove;
}

C_MOVE* C_DUCK::getMove()
{
	return m_pMove;
}
