// LJS04-28.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include "data.h"

int main()
{
	//C_DATA::SetData(100);

	//printf("%d ", C_DATA::GetData());

	C_DATA* pData{};

	pData = C_DATA::Create();
	pData->SetData(100);
	printf("%d\n", pData->GetData());
}

