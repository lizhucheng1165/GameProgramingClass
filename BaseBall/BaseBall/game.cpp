#include "random"
#include "game.h"
#include "table.h"

void C_GAME::Swap(int& nDst, int& nSrc)
{
	int nTmp = nDst;
	nDst = nSrc;
	nSrc = nTmp;
}

bool C_GAME::Input()
{
	bool arFlag[10]{};
	int arCheck[2]{};
	bool arResult[10]{};
	arResult[4] = true;

	for (int i = 0; i < 4; i++)
	{
		scanf_s("%d", &m_arInput[i]);
	}

	for (int i = 0; i < 4; i++)
	{
		arFlag[m_arInput[i]] = true;
	}

	for (int i = 0; i < 10; i++)
	{
		arCheck[arFlag[i]]++;
	}

	return false;
}

void C_GAME::Init()
{
	std::random_device rd;   // non-deterministic generator
	std::mt19937 gen(rd());  // to seed mersenne twister.
	std::uniform_int_distribution<> dist(0, 9); // distribute results between 1 and 6 inclusive.

	int arNumber[10]{ 0,1,2,3,4,5,6,7,8,9 };
	for (int i = 0; i < 50; i++)
	{
		Swap(arNumber[dist(gen)], arNumber[dist(gen)]);
	}

	printf("답 : ");
	for (int i = 0; i < 4; i++)
	{
		printf("%d ", arNumber[i]);
	}
	printf("\n");
	for (int i = 0; i < 4; i++)
	{
		m_arTable[i] = new C_TABLE{};
		m_arTable[i]->Init(arNumber, 4, arNumber[i]);
	}

	
}

void C_GAME::Run()
{
	//int arInput[4]{};
	//int arCheck[10]{};
	//for (int i = 0; i < 4; i++)
	//{
	//	scanf_s("%d", &arInput[i]);
	//	arCheck[arInput[i]] = 1;
	//}
	while (Input())
	{
		printf("다시입력하세요\n");
	}

}
