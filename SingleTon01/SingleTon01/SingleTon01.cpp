// SingleTon01.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include "data.h"

int main()
{
	C_DATA::CreateInstance();

	C_DATA::GetInstance()->SetData(100);
	printf("%d\n", C_DATA::GetInstance()->GetData());

	C_DATA::ReleaseInstance();
}



