#pragma once
#include <stdio.h>

class C_DATA
{
private:
	int m_nData;

public:
	C_DATA() = default;
	void SetData(int nData);
	int GetData();
};