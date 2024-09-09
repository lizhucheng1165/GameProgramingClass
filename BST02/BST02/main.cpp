// BST02.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include "bst.h"
int main()
{
	C_BST cBst{};

	cBst.Insert(5);
	cBst.Insert(4);
	cBst.Insert(8);
	cBst.Insert(9);
	cBst.Insert(6);
	cBst.Insert(3);
	cBst.Insert(1);
	cBst.Insert(2);
	cBst.Insert(7);

	cBst.Print();
	cBst.Erase(5);
	cBst.Print();
}

