// LJS2-29.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
//int형 배열을 int형 배열에 복사하는 함수
//함수 프로토타입(전방선언)을 정확하게 만든다
//함수를 구현한다
//main에서 본인이 만든 함수를 사용해보고 모든 상황을 테스트한다
bool copyArray(const int* pSrcArray, int nSrcArrayLength, int* pDstArray, int nDstArrayLength);



int main()
{
	int arSrcData[5]{ 5,4,3,2,1 };
	//int arDstData[5]{ 0,0,0,0 };
	int arDstData[15]{ 0,0,0,0,1,1,1,1,1,1,1,1,1 };
	int nArData1Length{};
	int nArData2Length{};

	nArData1Length = 5;
	nArData2Length = 5;
	if (copyArray(arSrcData,nArData1Length,arDstData,nArData2Length))
	{
		for (int i = 0; i < nArData2Length; i++)
		{
			printf("%d\n", arDstData[i]);
		}
	}
}

bool copyArray(const int* pSrcArray, int nSrcArrayLength, int* pDstArray, int nDstArrayLength)
{
	if (nSrcArrayLength != nDstArrayLength)
	{
		printf("실패");
		return false;
	}

	int nIndex{};
	while (nIndex < nSrcArrayLength)
	{
		pDstArray[nIndex] = pSrcArray[nIndex];
		nIndex++;
	}
	while (nIndex < nDstArrayLength)
	{
		pDstArray[nIndex] = 0;
		nIndex++;
	}

	//for (int i = 0; i < nSrcArrayLength; i++)
	//{
	//	pDstArray[i] = pSrcArray[i];
	//}

	return true;
}
