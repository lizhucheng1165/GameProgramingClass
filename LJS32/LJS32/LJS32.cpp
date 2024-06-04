// LJS32.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
	//배열에 들어간 숫자 중 가장 작은 숫자 출력
	int arData[5]{ 23, 13,6,2,17 };
	int nMinDataIndex{};

	nMinDataIndex = 0;
	for (int  i = 1; i < 5; i++)
	{
		if (arData[i] < arData[nMinDataIndex])
		{
			nMinDataIndex = i;
		}
	}
	
	printf("주소 : %d  값 : %d \n", nMinDataIndex, arData[nMinDataIndex]);
	
	
	
	
	
	
	
	
	/*int nSmallNumber{};
	int nSmallIndex{};

	nSmallNumber = arData[0];
	for (int i = 1; i < 5; i++)
	{
		if (nSmallNumber > arData[i])
		{
			nSmallNumber = arData[i];
			nSmallIndex = i;
		}
	}
	
	printf("주소 : %d  값 : %d \n", nSmallIndex,nSmallNumber);*/
}


