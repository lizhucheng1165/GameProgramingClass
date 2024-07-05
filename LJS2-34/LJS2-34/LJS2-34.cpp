// LJS2-34.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
void printString(const char* str);
//void printString(char* str);
int main()
{
	char str[64] = "aaaa";
	//char str[64] {};

	//str[0] = 'a';
	//str[1] = 'b';
	//str[2] = 'c';
	//str[3] = 'd';
	int nIndex{};

	//while (str[nIndex] != '\0')
	//{
	//	printf("%c", str[nIndex]);
	//	nIndex++;
	//}

	//int nCharCount{};
	//while (str[nIndex] != '\0')
	//{
	//	nCharCount++;
	//	nIndex++;
	//}

	//printf("%d", nCharCount);
	printString(str);
}

void printString(const char* str)
{
	for (int i = 0; str[i] != '\0'; i++)
	{
		printf("%c", str[i]);
	}
	printf("\n");

	//while (*str != '\0')
	//{
	//	printf("%c", *str);
	//	str++;
	//}
	//printf("\n");

}
