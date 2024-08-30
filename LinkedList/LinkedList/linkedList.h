#pragma once

class  C_LINKED_LIST
{
public:
	C_LINKED_LIST() = default;
	void PushBack(int nData);
	void Remove(int nData);
	void Print();

private:
	struct S_NODE
	{
		int nData;
		S_NODE* pNext;
	};

	S_NODE* m_pBegin;
	S_NODE* m_pEnd;
	S_NODE* CreateNode(int nData);
};
