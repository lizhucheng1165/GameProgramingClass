// BinarySearchTree01.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include "bst.h"

int main()
{
	C_BST cBst{};

	cBst.Insert2(4);
	cBst.Insert2(5);
	cBst.Insert2(2);
	cBst.Insert2(1);
	cBst.Insert2(8);
	cBst.Insert2(9);
	cBst.Insert2(7);
	cBst.Insert2(6);
	cBst.Insert2(3);

	cBst.Print();
	cBst.Erase(4);
	//cBst.Insert(9);
	cBst.Print();


	//cBst.Insert2(5);
	//cBst.Insert2(6);
	//cBst.Insert2(2);
	//cBst.Insert2(9);
	//cBst.Insert2(7);
	//cBst.Insert2(8);
	//cBst.Insert2(3);

	//if (cBst.Insert2(30))
	//	printf("성공\n");
	//else
	//{
	//	printf("실패\n");
	//}

	//cBst.Print();
	//cBst.Erase(3);
	//cBst.Erase(8);
	//cBst.Erase(2);
	//cBst.Erase(9);
	//cBst.Print();

}

