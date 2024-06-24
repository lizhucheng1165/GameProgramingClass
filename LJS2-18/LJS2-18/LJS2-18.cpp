// LJS2-18.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
	int arData[2][3]{ {6,5,4},{3,2,1} };
	int(*p)[2][3] {};

	p = &arData;

	//[]를 사용하지 않고 p를 이용해 모든 데이터 출력

	//for (int i = 0; i < 2; i++)
	//{
	//	for (int j = 0; j < 3; j++)
	//	{
	//		printf("%zd\n", *(*(*p + i) + j));
	//	}
	//}


	printf("%zd\n", *(*(*p + 1) +0));

	//printf("%zd\n", *((*p)[0]+0));
	//printf("%zd\n", *((*p)[0]+1));
	//printf("%zd\n", *((*p)[0]+2));

	//printf("%zd\n", *((*p)[1]+0));
	//printf("%zd\n", *((*p)[1]+1));
	//printf("%zd\n", *((*p)[1]+2));

	//printf("\n");

	//printf("%zd\n", *(*((*p)+ 0)+0));
	//printf("%zd\n", *(*((*p)+ 0)+1));
	//printf("%zd\n", *(*((*p)+ 0)+2));

	printf("%zd\n", *(*((*p)+ 1)+0));
	//printf("%zd\n", *(*((*p)+ 1)+1));
	//printf("%zd\n", *(*((*p)+ 1)+2));


}

