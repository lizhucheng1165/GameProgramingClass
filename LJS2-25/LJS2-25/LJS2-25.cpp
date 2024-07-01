// LJS2-25.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int add(int nData1, int nData2);

int main()
{
	int nResult{};

	//nResult = add(10, 20);

	//printf("%d\n", nResult);
	//printf("%d\n", add(10,20));


	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%d\n", add(10, 20));

	//}

	nResult = add(10, 20);
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n",nResult);

	}
}

int add(int nData1, int nData2)
{
	return nData1 + nData2;

}
