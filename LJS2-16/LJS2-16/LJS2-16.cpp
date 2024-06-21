// LJS2-16.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
	int arData[5]{ 5,4,3,2,1 };
	//int* p[5]{ nullptr,nullptr,nullptr,nullptr,nullptr };
	int(*pAr)[5] {};
	int* p{};

	pAr = &arData;

	p = (*pAr);

	printf("%d\n", (*pAr)[2]);
	printf("%d\n", *((*pAr) + 2));




}
