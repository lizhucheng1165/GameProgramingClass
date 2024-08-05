#pragma once

class C_MOVE;

class C_DUCK
{
private:
	C_MOVE* m_pMove;

public:
	C_DUCK() = default;
	void init(C_MOVE* pMove);
	C_MOVE* getMove();


};