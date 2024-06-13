// LJS2-02.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
	int arData[2][3]{ {6,5,4}, {3,2,1} };
	

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d", arData[i][j]);
		}
		printf("\n");
	}



}
