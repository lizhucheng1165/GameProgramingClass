// LJS2-35.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

bool stringCopy(const char* strSrc, char* strDst, int nDstLength);
//void printStr(const char* str);
int main()
{
	//char str[10] = "aaaaaaaaa";

	//str[4] = 0;
	//str[9] = 'z';
	//printf("%s\n", str);

	//printStr("ariasdfhasjkfhd");
	char strSrc[5] = "aaaa";
	char strDst[3]{};

	stringCopy(strSrc, strDst, 3);

	printf("%s", strDst);
}

//void printStr(const char* str)
//{
//	printf("%s\n", str);
//}

bool stringCopy(const char* strSrc, char* strDst, int nDstLength)
{
	int nIndex{};
	while (strSrc[nIndex] != '\0')
	{
		strDst[nIndex] = strSrc[nIndex];
		nIndex++;
		
	}


	return true;
}
