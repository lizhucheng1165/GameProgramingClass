// ClassTemplate.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include "template.h"

class C_ITEM
{};
int main()
{
	//C_DATA<int> cInt{};

	//cInt.Init(3);
	//cInt.SetData(0, 3);
	//cInt.SetData(1, 2);
	//cInt.SetData(2, 1);

	//C_DATA<float> cFloat{};

	//cFloat.Init(3);
	//cFloat.SetData(0, 3.1f);
	//cFloat.SetData(1, 2.4f);
	//cFloat.SetData(2, 1.2f);


	//for (int i = 0; i < 3; i++)
	//{
	//	printf("%d ", cInt.GetData(i));
	//}

	//printf("\n");
	//for (int i = 0; i < 3; i++)
	//{
	//	printf("%f ", cFloat.GetData(i));
	//}

	//------------------------------
	//C_DATA<int> cData{};
	//int nData{};

	//cData.Init(100);
	//cData.SetData(1, 99);
	//if (cData.GetData(1,&nData))
	//{
	//	printf("%d\n", nData);
	//}

	C_DATA<C_ITEM*> cGame{};
	C_ITEM* p = new C_ITEM{};

	cGame.SetData(50, p);
}

