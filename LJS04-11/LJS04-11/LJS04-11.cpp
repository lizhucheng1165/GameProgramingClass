// LJS04-11.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
void SwapData(int& nDst, int& nSrc);
void FindMinNumber(const int* arData,int nDataSize, int& nResultIndex);
void PrintData(const int* pData, int nLength);
void SelectionSortLogic(int* pData, int nLength);
void SelectionSort(int* pData, int nLength);
int FindMinDataIndex(const int* pData, int nLength);
int main()
{
	int arData[9]{ 8,9,4,6,2,3,1,5,7 };

	//int nMinDataIndx = 0;

	//FindMinNumber(arData, 9, nMinDataIndx);
	//SwapData(arData[0], arData[nMinDataIndx]);
	//PrintData(arData, 9);

	//SelectionSortLogic(arData, 9);

	SelectionSort(arData, 9);
	PrintData(arData, 9);

}

void SwapData(int& nDst, int& nSrc)
{
	int nTmp = nDst;
	nDst = nSrc;
	nSrc = nTmp;
}

void FindMinNumber(const int* arData, int nDataSize, int& nResultIndex)
{
	int nIndex = 0;
	int nMinNumber = arData[nIndex];
	for (int i = 1; i < nDataSize; i++)
	{
		if (arData[i] < nMinNumber)
		{
			nMinNumber = arData[i];
			nIndex = i;
		}
	}

	nResultIndex = nIndex;
}

void PrintData(const int* pData, int nLength)
{
	for (int i = 0; i < nLength; i++)
	{
		printf("%d ", pData[i]);
	}
	printf("\n");
}

void SelectionSortLogic(int* pData, int nLength)
{
	SwapData(pData[0], pData[FindMinDataIndex(pData, nLength)]);
}

void SelectionSort(int* pData, int nLength)
{
	while (nLength > 1)
	{
		SelectionSortLogic(pData, nLength);
		pData++;
		nLength--;
	}
}

int FindMinDataIndex(const int* pData, int nLength)
{
	int nMinDataIndex = 0;
	for (int i = 0; i < nLength; i++)
	{
		if (pData[nMinDataIndex] > pData[i])
		{
			nMinDataIndex = i;
		}
	}

	return nMinDataIndex;
}
