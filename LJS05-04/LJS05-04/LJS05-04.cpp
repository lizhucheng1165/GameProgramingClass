// LJS05-04.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

#include "calculation.h"
int main()
{
	C_CALCULATION cCalculation{};

	cCalculation.Init();

	cCalculation.SetData(20,10 );
	//cCalculation.SetData(20,0 );
	
	cCalculation.Run(E_TYPE::E_DEFAULT);
	cCalculation.Run(E_TYPE::E_ADD);
	cCalculation.Run(E_TYPE::E_DIVIDE);
	cCalculation.Run(E_TYPE::E_MULTYPLY);
	cCalculation.Run(E_TYPE::E_SUBSTRACT);

}
