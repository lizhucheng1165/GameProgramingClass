// LJS3-17.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
	//int* p1{};
	//int* p2{};
	//int* p3{};

	//p1 = new int{};
	//p2 = p1;
	//p3 = p1;

	//*p3 = 100;
	//printf("%d\n", *p1);

	//delete p1;
	//p1 = nullptr;

	int* p{};
	int nLength{};

	scanf_s("%d", &nLength);

	p = new int[nLength]{};

	for (int i = 0; i < nLength; i++)
	{
		printf("%d ", p[i]);
	}
	printf("\n");

	//delete p;
	delete []p;
	p = nullptr;
}
