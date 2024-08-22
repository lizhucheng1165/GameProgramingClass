// LJS04-22.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
void PrintData(const int* pData, int nLength);
const int* BinarySearch(const int* pData, int nLength, int nData);
int main()
{
	int nData{};
	int arData[30]{};
	for (int i = 0; i < 30; i++)
	{
		arData[i] = i * 2;
	}
	scanf_s("%d", &nData);

	int* pData = arData;
	int nLength = 30;
	
	const int* pResult{};
	pResult = BinarySearch(pData, nLength, nData);
	if (pResult)
	{
		printf("%d\n", *pResult);
	}
	else
	{
		printf("없다\n");
	}
	//printf("%d\n", pResult - arData);-> 인덱스를 찾아낸다
	
	//nLength <= 0 = > 없는경우;
	
	//int nTargetNumber{};
	//nTargetNumber = 18;

	//
	//while (nLength > 1)
	//{
	//	if (pData[nFind] == nTargetNumber)
	//	{
	//		pData += nFind;
	//	}
	//	if (pData[nFind] < nTargetNumber) // 앞을 버린다
	//	{
	//		pData += nFind + 1;
	//		nLength -= nFind + 1;
	//	}
	//	else if (pData[nFind] > nTargetNumber) //뒤를 버린다
	//	{
	//		nLength = nFind;
	//	}
	//	nFind = nLength / 2;
	//	
	//}

	//printf("%d\n", *pData);
}

void PrintData(const int* pData, int nLength)
{
	for (int i = 0; i < nLength; i++)
	{
		printf("%d ", pData[i]);
	}
	printf("\n");
}

const int* BinarySearch(const int* pData, int nLength, int nData)
{
	if (nLength <= 0)
	{
		return nullptr;
	}

	int nFind = nLength / 2;

	if (pData[nFind] == nData)
	{
		return pData + nFind;
	}

	if (pData[nFind] > nData)
	{
		return BinarySearch(pData, nFind, nData);
	}
	if (pData[nFind] < nData)
	{
		return BinarySearch(pData + nFind + 1, nLength - (nFind + 1), nData);
	}


	return pData + nFind;






	/*int nFind = nLength / 2;
	while (nLength > 0 && pData[nFind] != nData)
	{
		if (pData[nFind] > nData)
		{
			nLength = nFind;
		}
		if (pData[nFind] < nData)
		{
			pData += nFind + 1;
			nLength -= nFind + 1;
		}
		PrintData(pData, nLength);
		nFind = nLength / 2;

	}
	if (nLength <= 0)
	{
		return nullptr;
	}
	else
	{
		return pData + nFind;
	}*/
}
