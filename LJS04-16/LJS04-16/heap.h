#pragma once
#include <stdio.h>

class C_HEAP
{
private:
	int* m_pData;
	int m_nSize;
	int m_nLastIndex;

public:
	C_HEAP() = default;
	C_HEAP(const C_HEAP&) = delete;
	C_HEAP& operator = (const C_HEAP) = delete;

	void Init(int nSize);
	bool Add(int nData);
	void Release();
	
	void Print();

};