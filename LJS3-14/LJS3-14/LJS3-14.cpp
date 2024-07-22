// LJS3-14.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
//void func(int& nData);
void add(const int& n1, const int& n2, int& nResult);

int main()
{
	//int nData{};
	////int* p = &nData;

	////int& nRef{};
	////int& nRef = *p;
	//int& nRef = nData;


	//nRef = 100;
	//printf("%d\n", nData);

	//int nMain{};

	//nMain = 100;
	//printf("main %d\n", nMain);
	//func(nMain);
	//printf("main %d\n", nMain);
	int nData1{};
	int nData2{};
	int nTotal{};

	nData1 = 100;
	nData2 = 200;
	add(nData1, nData2, nTotal);
	add(5, 7, nTotal);

	printf("%d\n", nTotal);

	//const int& nRef = 99;
	//int& nRef = 99;
	 
}
//
//void func(int& nData)
//{
//	printf("%d\n", nData);
//	nData = 9;
//}

void add(const int& n1, const int& n2, int& nResult)
{
	nResult = n1 + n2;
}
