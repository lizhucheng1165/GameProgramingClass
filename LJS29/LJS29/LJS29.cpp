// LJS29.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
	//*
	//**
	//***
	//****
	//***** 출력

	int nStarCount{};
	int nAdd{};


	nStarCount = 1;
	nAdd = 1;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < nStarCount; j++)
		{
			printf("*");
		}
		printf("\n");
		nStarCount += nAdd;
	}



}

