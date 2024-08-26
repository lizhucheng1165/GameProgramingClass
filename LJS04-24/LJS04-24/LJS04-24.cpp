// LJS04-24.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
void PrintData(const int* pData, int nLength);

int main()
{
	int arData[9]{2,4,5,7          ,1,3,6,8,9 };
	int arTmp[9]{};

	int* pData = arData;
	int nLength = 9;
	int* pTmp = arTmp;

	int* pLeft = pData;
	int nLeftLength = nLength / 2;
	int* pRight = pData + nLeftLength;
	int nRightLength = nLength - nLeftLength;

	int nLeftIndex{};
	int nRightIndex{};
	int nTmpIndex{};

	PrintData(pLeft, nLeftLength);
	PrintData(pRight, nRightLength);


	while (nLeftIndex < nLeftLength && nRightIndex < nRightLength)
	{
		int* pMin = pLeft;
		int* pIndex = &nLeftIndex;
		if (pLeft[nLeftIndex] < pRight[nRightIndex])
		{
			pMin = pRight;
			pIndex = &nRightIndex;
		}
		pTmp[nTmpIndex] = pMin[*pIndex];
		nTmpIndex++;
		(*pIndex)++;

		//if (pLeft[nLeftIndex] < pRight[nRightIndex])
		//{
		//	pTmp[nTmpIndex] = pLeft[nLeftIndex];
		//	nLeftIndex++;
		//}
		//else
		//{
		//	pTmp[nTmpIndex] = pRight[nRightIndex];
		//	nRightIndex++;
		//}
		//nTmpIndex++;
	}

	while (nLeftIndex < nLeftLength)
	{
		pTmp[nTmpIndex] = pLeft[nLeftIndex];
		nLeftIndex++;
		nTmpIndex++;
	}
	while (nRightIndex < nRightLength)
	{
		pTmp[nTmpIndex] = pRight[nRightIndex];
		nRightIndex++;
		nTmpIndex++;
	}



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
