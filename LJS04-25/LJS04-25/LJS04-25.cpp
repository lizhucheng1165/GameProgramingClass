// LJS04-25.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

void Hanoi(int nNum, char S, char T, char E);

int main()
{
	Hanoi(1, 'A', 'B', 'C');
}

void Hanoi(int nNum, char S, char T, char E)
{
	if (nNum < 1)
	{
		//printf("%d %c -> %c\n", nNum, S, E);
		return;
	}

	Hanoi(nNum - 1, S, E, T);
	printf("%d %c -> %c\n", nNum, S, E);
	//printf("%d -> %c\n", nNum, E);
	Hanoi(nNum - 1, T, S, E);
}
