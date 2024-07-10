// LJS3_01.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

bool stringCopy(const char* strSrc, char* strDst, int nDstLength);
int main()
{
	char strData[64] = "aabaafadd";
	char strTest[50] = "zzzzzzzzzzzzzzzzz";

	if (stringCopy(strData, strTest, 50))
	{
		printf("%s\n", strTest);
	}

}

bool stringCopy(const char* strSrc, char* strDst, int nDstLength)
{
	int nIndex{};
	while (strSrc[nIndex] != '\0' && nIndex < nDstLength -1)
	{
		strDst[nIndex] = strSrc[nIndex];
		nIndex++;
	}
	strDst[nIndex] = '\0';
	if (strSrc[nIndex] != '\0')
	{
		return false;
	}

	return true;
}
