#pragma once

#include<stdio.h>

class C_BST
{
private:
	struct S_NODE
	{
		int nData{};

		S_NODE* pL;
		S_NODE* pR;
	};
private:
	S_NODE* m_pRoot;

private:
	S_NODE* CreateNode(int nData);

private:
	void PrintNode(S_NODE* pNode);

public:
	C_BST() = default;

	bool Insert(int nData);
	void Print();
};