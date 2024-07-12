// LJS3-6.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
struct S_DATA
{
	//(1,1, 빈공간 2),4,4 -> 12
	//char c1;
	//char c2;
	//int n1;
	//int n2;

	//4,4,4,4바이트 -> 16
	//char c1;
	//int n1;
	//char c2;
	//int n2;

	char c1;
	char c2;
	int n1;
	int n2;
};


int main()
{
	//S_DATA sData = { 'a','b', 10, 20 };
	S_DATA sData;

	memset(&sData, 0, sizeof(S_DATA));

	printf("%d\n", sData.n1);

	//printf("%zd\n", sizeof(S_DATA));
	
}
