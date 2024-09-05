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
	bool m_bCreate;

private:
	S_NODE* CreateNode(int nData);
	void DeleteNode(S_NODE* pDel, S_NODE* pUp);
private:
	void PrintNode(S_NODE* pNode);
	S_NODE* AddNode(S_NODE* pNode, int nData);
public:
	C_BST() = default;

	bool Insert(int nData);
	bool Insert2(int nData);
	void Erase(int nData);
	void Print();
};