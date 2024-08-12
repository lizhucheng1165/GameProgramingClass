// LJS04-13.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

void InsertionSortLogic(int* arData, int nLength);
void InsertionSort(int* arData, int nLength);
void PrintData(const int* arData, int nLength);
int main()
{
	int arData[7]{ 1,2,4,5,6,7,3 };

	int* pData = arData;
	int nLength = 7;
	
	InsertionSort(pData, nLength);
	PrintData(pData, nLength);
}

void InsertionSortLogic(int* arData, int nLength)
{
	int nKeyVaue = arData[nLength - 1];
	int nIndex = nLength - 2;
	while (nIndex >= 0 && nKeyVaue < arData[nIndex])
	{
		arData[nIndex + 1] = arData[nIndex];
		nIndex--;
	}
	arData[nIndex + 1] = nKeyVaue;
}

void InsertionSort(int* arData, int nLength)
{
	for (int i = 2; i <= nLength; i++)
	{
		InsertionSortLogic(arData, i);
	}
}

void PrintData(const int* arData, int nLength)
{
	for (int i = 0; i < nLength; i++)
	{
		printf("%d ", arData[i]);
	}
	printf("\n");
}

