// LJS2-10.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
	int nCount{};
	int nData{};

	nData = 10;
	for (int i = 0; i < 9; i++)
	{
		nCount = nData / 2;
		for (int j = 0; j < nCount; j++)
		{
			//index1 ,2 를 계산 / 스위치처럼 방향이 반대로 전환되는 기능 추가

		}
		nData--;
	}
}

