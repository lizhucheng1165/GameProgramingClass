#pragma once

#include <stdio.h>
class C_TABLE;

class C_GAME
{
public:
	enum E_TYPE
	{
		E_NONE = 0,
		E_BALL,
		E_STRIKE,
		E_OUT
	};
private:
	C_TABLE* m_arTable[4];
	int m_arInput[4];

private:
	void Swap(int& nDst, int& nSrc);
private:
	bool Input();

public:
	void Init();
	void Run();

};