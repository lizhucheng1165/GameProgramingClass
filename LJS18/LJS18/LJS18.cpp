// LJS18.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{

	// 가장 작은 수를 출력하라
	// 프로그램이 완성된 후에 변수를 하나 추가
	// 똑같이 기능하도록 설계
	int n1{};
	int n2{};
	int n3{};
	int n4{};
	int	nSmallNumber{};
	//int nSmallNumber = 999999999;
	/*int nNumberToCompare1{};
	int nNumberToCompare2{};*/

	scanf_s("%d", &n1);
	scanf_s("%d", &n2);
	scanf_s("%d", &n3);
	scanf_s("%d", &n4);

	/*nNumberToCompare1 = n1;
	nNumberToCompare2 = n2;*/

	nSmallNumber = n1;
	if (nSmallNumber > n2)
	{
		nSmallNumber = n2;
	}
	if (nSmallNumber > n3)
	{
		nSmallNumber = n3;
	}
	if (nSmallNumber > n4)
	{
		nSmallNumber = n4;
	}

	/*if (nNumberToCompare1 <= nNumberToCompare2)
	{
		nNumberToCompare1 = n1;
		nNumberToCompare2 = n3;
	}
	else
	{
		nNumberToCompare1 = n2;
		nNumberToCompare2 = n3;
	}

	if (nNumberToCompare1 <= nNumberToCompare2)
	{
		nSmallNumber = nNumberToCompare1;
	}
	else
	{
		nSmallNumber = nNumberToCompare2;
	}*/


	//if (n1 == n2 || n1 < n2)
	//{
	//	nNumberToCompare1 = n1;
	//}
	//else if(n1 > n2)
	//{
	//	nNumberToCompare1 = n2;
	//}
	//

	//if (nNumberToCompare1 > n3)
	//{
	//	nSmallNumber = n3;
	//}
	//else
	//{
	//	nSmallNumber = nNumberToCompare;
	//}

	printf("가장 작은 수: %d", nSmallNumber);
}
