#pragma once
#include <stdio.h>

class C_HEAP
{
private:
	int* m_pData;
	int m_nSize;
	int m_nLastIndex;

private:
	void SwapData(int& nDst, int& nSrc);
	bool HasTwoChildNodes(int& nCurrentIndex);
	bool IsLeftChildSmaller(int& nLeftChildValue, int& nRightChildValue);

public:
	C_HEAP() = default;
	C_HEAP(const C_HEAP&) = delete;
	C_HEAP& operator = (const C_HEAP) = delete;


	void Init(int nSize);
	bool Add(int nData);
	void Release();
	bool Empty();
	int GetTop();
	void Pop();

	void Print();

};