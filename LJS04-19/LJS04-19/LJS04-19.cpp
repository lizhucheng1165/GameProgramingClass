// LJS04-19.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

void func(int nData)
{
	//printf("테스트\n");
	if (nData < 0)
	{
		return;
	}
	//func(nData - 1);
	printf("%d\n", nData);
	//func(nData - 1);
	func(nData - 1);
}

int main()
{
	//int nData{};
	//int* p{};


	//nData = 100;

	//p = &nData;

	//*p = 200;

	//printf("%d\n", nData);

	func(3);
}


