// LJS3-02.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
	char strData[64] = "fkdagbbkjhaAAkjdhBfeakwsn,xczq1";
	//int arCount[256]{};
	int arCount[26]{};

	//for (int i = 0; i < strData[i] != '\0'; i++)
	//{
	//	arCount[strData[i]]++;
	//}

	for (int i = 0; i < strData[i] != '\0'; i++)
	{
		arCount[strData[i] - 'a']++;
	}

	//printf("%d\n", arCount['a'] + arCount['A']);
	//printf("%d\n", arCount['b']);
	printf("%d\n", arCount[0]);
	printf("%d\n", arCount[1]);

}

