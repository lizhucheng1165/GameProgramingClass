#include <iostream>

void swapData(int& nDst, int& nSrc);
void printData(const int* pData, int nLength);
void quickSort(int* pData, int nLength);

int main()
{
	int arData[9]{ 5,3,8,7,2,9,1,4,6 };

	int* pData = arData;
	int nLength = 9;

	printData(pData, 9);
	quickSort(pData, 9);
	printData(pData, 9);
}

void swapData(int& nDst, int& nSrc)
{
	int nTmp = nDst;
	nDst = nSrc;
	nSrc = nTmp;
}

void printData(const int* pData, int nLength)
{
	for (int i = 0; i < nLength; i++)
	{
		printf("%d ", pData[i]);
	}
	printf("\n");
}

void quickSort(int* pData, int nLength)
{
	if (nLength <= 1)
	{
		return;
	}

	int nPivot = 0;
	int nLeft = 1;
	int nRight = nLength - 1;

	while (nLeft <= nRight)
	{
		while (nLeft < nLength && pData[nLeft] < pData[nPivot])
			nLeft++;

		while (pData[nRight] > pData[nPivot])
			nRight--;

		//if (nRight - nLeft == -1)
		if (nLeft < nRight)
			swapData(pData[nLeft], pData[nRight]);
		else
			swapData(pData[nPivot], pData[nRight]);
	}

	quickSort(pData, nRight); //왼쪽부분 정렬
	quickSort(pData + nLeft, nLength - nLeft); //오른쪽부분 정렬
}
