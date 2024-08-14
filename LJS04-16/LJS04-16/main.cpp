// LJS04-16.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include "heap.h"
int main()
{
	//int nData = 1000;
	//int nCount = 0;

	//for (int i = nData; i > 0; i = i / 2)
	//{
	//	printf("%d\n", nCount);
	//	nCount++;
	//}
	C_HEAP cHeap{};

	cHeap.Init(9);
	cHeap.Add(5);
	cHeap.Add(6);
	cHeap.Add(8);
	cHeap.Add(7);
	cHeap.Add(9);
	cHeap.Add(3);
	cHeap.Add(2);
	cHeap.Add(1);
	cHeap.Add(4);
	
	
	cHeap.Print();




}

