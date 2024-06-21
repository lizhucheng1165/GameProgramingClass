// LJS2-15.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
	int arData[5]{ 5,4,3,2,1 };
	int* p{};
	int ar[5][4]{};



	//p = &arData[0];
	p = arData;

	printf("%d\n",p[3]);
	printf("%d\n", *(p + 3));

	printf("%d\n", arData[3]);
	printf("%d\n", *(arData + 3));


}

