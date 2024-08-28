// LJS04-26.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

struct S_NODE
{
	int nData;
	S_NODE* pNext;
};

int main()
{
	S_NODE* pBegin{};

	pBegin = new S_NODE{ 1, nullptr };

	pBegin->pNext = new S_NODE{ 2, nullptr };

	pBegin->pNext->pNext = new S_NODE{ 3, nullptr };

	pBegin->pNext->pNext->pNext = new S_NODE{ 4, nullptr };

	S_NODE* pNode = pBegin;
	while (pNode)
	{
		printf("%d\n", pNode->nData);
		pNode = pNode->pNext;
	}
}

