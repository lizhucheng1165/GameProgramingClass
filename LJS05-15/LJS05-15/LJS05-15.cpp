// LJS05-15.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include "data.h"

int main()
{
	//std::pair<int, float> pairData{};

	//pairData.

	C_DATA cData{};
	cData.Insert(1);
	cData.Insert(2);
	cData.Insert(3);

	if (!cData.Insert(1))
	{
		printf("실패\n");
	}
}

