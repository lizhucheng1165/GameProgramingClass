// LJS05-18.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include "mgr.h"
int main()
{
	C_MGR cMgr{};

	cMgr.Insert("aaa", 1);
	cMgr.Insert("bbb", 2);
	cMgr.Insert("ccc", 3);
	cMgr.Insert("ddd", 4);
	cMgr.Insert("eee", 5);

	cMgr.Erase("bbb");

	cMgr.Print();
	//std::string strA{};
	//std::string strB{};
	//std::string strC{};

	//strA = "123";
	//strB = "bbb";

	//strC = strA + strB;
	////printf("%s\n", strC.c_str());
	//
	////printf("%c\n", strA.at(1));

	////const char* p = strA.c_str();
	////printf("%c", p[1]);
	
}
