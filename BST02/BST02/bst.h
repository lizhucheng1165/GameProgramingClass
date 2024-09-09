#pragma once

class C_BST
{
private:
	struct S_NODE
	{
		int nData;
		S_NODE* pL;
		S_NODE* pR;
	};
private:
	S_NODE* m_pRoot;
private:
	S_NODE** FindNode(S_NODE** ppNode, int nData);
	S_NODE** FindMax(S_NODE** ppNode);
	S_NODE* CreateNode(int nData);
	void PrintNode(S_NODE* pNode);
public:
	C_BST() = default;
	bool Insert(int nData);
	bool Erase(int nData);
	void Print();
};