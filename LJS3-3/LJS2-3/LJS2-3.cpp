// LJS2-3.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>
//struct S_DATA
//{
//	int nData;
//	float fData;
//	char str[64];
//};
//
////typedef int aaaa;
//typedef struct S_DATA S_DATA;

//typedef struct S_DATA
//{
//	int nData;
//	float fData;
//	char str[64];
//}S_DATA;

typedef struct
{
	int nData;
	float fData;
	char str[64];
}S_DATA;

typedef struct _s_data
{
	int nData;
	float fData;
	char str[64];
}S_DATA;

int main()
{
	S_DATA sData;
	
	sData.nData = 100;

}
