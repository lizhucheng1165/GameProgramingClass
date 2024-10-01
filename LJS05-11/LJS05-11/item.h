#pragma once

#include <stdio.h>

class C_ITEM
{
private:
	int m_nData;

public:
	C_ITEM() = default;
	void SetData(int nData);
	int GetData();
};