// LJS04-24.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
void PrintData(const int* pData, int nLength);
void MergeSort(int* pData, int nLength, int* pTmp);

int main()
{
	int arData[9]{1,5,6,3,2,4,7,8,9 };
	int arTmp[9]{};

	int* pData = arData;
	int nLength = 9;
	int* pTmp = arTmp;

	PrintData(arData, nLength);
	MergeSort(pData, nLength, pTmp);


	PrintData(pTmp, nLength);
}

void PrintData(const int* pData, int nLength)
{
	for (int i = 0; i < nLength; i++)
	{
		printf("%d ", pData[i]);
	}
	printf("\n");
}

// Must pTmpLength >= nLength
void MergeSort(int* pData, int nLength, int* pTmp)
{
	if (nLength <= 1)
	{
		return;
	}

	int* pLeft = pData;
	int nLeftLength = nLength / 2;
	int* pRight = pData + nLeftLength;
	int nRightLength = nLength - nLeftLength;

	int nLeftIndex{};
	int nRightIndex{};
	int nTmpIndex{};

	//PrintData(pLeft, nLeftLength);
	//PrintData(pRight, nRightLength);
	MergeSort(pLeft, nLeftLength, pTmp);
	MergeSort(pRight, nRightLength, pTmp);


	for (int i = 0; i < nLength; i++)
	{
		int* pMin = pLeft;
		int* pMinIndex = &nLeftIndex;

		if (nLeftIndex >= nLeftLength || (nRightIndex < nRightLength && pLeft[nLeftIndex] > pRight[nRightIndex]))
		{
			pMin = pRight;
			pMinIndex = &nRightIndex;
		}

		pTmp[i] = pMin[*pMinIndex];
		(*pMinIndex)++;
	}


	for (int i = 0; i < nLength; i++)
	{
		pData[i] = pTmp[i];
	}
}


