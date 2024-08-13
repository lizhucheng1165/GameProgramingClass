// LJS04-14.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

void SwapData(int& n1, int& n2);
void BubbleSortLogic(int* arData, int nLength);
void BubbleSort(int* arData, int nLength);

void Print(const int* arData, int nLength);

int main()
{
	int arData[5]{ 7,4,5,1,3 };

	BubbleSort(arData, 5);

	Print(arData, 5);
}

void SwapData(int& n1, int& n2)
{
	int nTmp = n1;
	n1 = n2;
	n2 = nTmp;
}

void BubbleSortLogic(int* arData, int nLength)
{
	int nCurrentIndex{};
	int nLastIndex = nLength - 1;

	while (nCurrentIndex < nLastIndex)
	{
		int nNextIndex = nCurrentIndex + 1;
		if (arData[nCurrentIndex] > arData[nNextIndex])
		{
			SwapData(arData[nCurrentIndex], arData[nNextIndex]);
		}
		nCurrentIndex++;
	}
}

void BubbleSort(int* arData, int nLength)
{
	while (nLength > 1 )
	{
		BubbleSortLogic(arData, nLength);
		nLength--;
	}
}

void Print(const int* arData, int nLength)
{
	for (int i = 0; i < nLength; i++)
	{
		printf("%d ", arData[i]);
	}
	printf("\n");
}
