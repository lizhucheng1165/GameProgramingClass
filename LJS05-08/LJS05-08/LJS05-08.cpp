// LJS05-08.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

#include "data.h"
class C_ITEM
{

};

int main()
{
    C_DATA<int> cInt{};
    C_DATA<float> cFloat{};
    C_DATA<char> cChar{};

    cInt.SetData(100);
    cFloat.SetData(3.4f);
    cChar.SetData('a');

    printf("%d\n", cInt.GetData());
    printf("%f\n", cFloat.GetData());
    printf("%c\n", cChar.GetData());

    C_DATA<C_ITEM> cItem{};
    C_ITEM c{};

    cItem.SetData(c);
}


