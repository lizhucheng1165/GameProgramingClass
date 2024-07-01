// LJS2-26.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
int addReturn(int n1, int n2);
void addPointer(int n1, int n2, int* pResult);

int main()
{
	int nDataReturn{};
	int nDataPointer{};

	//nDataReturn = addReturn(3, 5);
	//printf("리턴함수 : %d\n", nDataReturn);
	//printf("리턴함수 : %d\n", addReturn(3, 5));
	printf("리턴함수 : %d\n", addReturn(addReturn(1, addReturn(1, 1)),addReturn(addReturn(1, 1),addReturn(1, addReturn(1, 1)))));
	

	addPointer(3, 5, &nDataPointer);
	//printf("포인터함수 : %d\n", addPointer(3, 5, &nDataPointer)); //불완전한 형식 void는 혀용되지 않음
	printf("포인터함수 : %d\n", nDataPointer);

}

int addReturn(int n1, int n2)
{
	return n1 + n2;
}

void addPointer(int n1, int n2, int* pResult)
{
	*pResult = n1 + n2;
}
