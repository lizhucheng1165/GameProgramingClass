// LJS2-12.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
	int nData{};
	int* p{};
	
	nData = 100;
	p = &nData; //인트 경로를 p에 저장

	printf("%d\n", *p);
	*p = 99;
	printf("%d\n", nData);

}
