#pragma once

#include <stdio.h>

class C_DATA
{
private:
	int m_nData;

private:
	void Nomal();
	void Double();
	void Triple();

public:
	C_DATA() = default;
	void Test();
	void SetData(int nData);
};