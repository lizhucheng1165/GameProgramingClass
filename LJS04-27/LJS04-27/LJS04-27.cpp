// LJS04-27.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include "data.h"

int main()
{
	C_DATA c1{};
	C_DATA c2{};

	C_DATA::SetDataStatic(100);
	//c1.SetData(100);

	c1.PrintData();
	c2.PrintData();
}



//void func();
//
//int main()
//{
//	//int nData{};
//	//static int nData2{};
//
//	func();
//	func();
//	func();
//}
//
//void func()
//{
//	//int nData{};
//	static int nData{};
//
//	nData++;
//	printf("%d\n", nData);
//}