#pragma once

class C_LINKEDLIST;

class C_NODE
{
	friend C_LINKEDLIST;
private:
	int m_nData{};

	C_NODE* m_pNext;
	C_NODE* m_pPrev;

private:
	C_NODE() = default;

public:
	int GetData();
	C_NODE* GetNext();
};
