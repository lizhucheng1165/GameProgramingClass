// LJS05-26.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

enum E_WEAPON
{/*
	E_NONE,
	E_SWORD		= 1,
	E_BOW		= 2,
	E_AXE		= 4,
	E_SPEAR		= 8,
	E_HAMMER	= 16,
	E_DAGGER	= 32,
	E_DART		= 64,
	E_FRAIL		= 128,
	E_CROSSBOW	= 256	*/

	E_NONE,
	E_SWORD		= 0x00000001,
	E_BOW		= 0x00000002,
	E_AXE		= 0x00000004,
	E_SPEAR		= 0x00000008,
	E_HAMMER	= 0x00000010,
	E_DAGGER	= 0x00000020,
	E_DART		= 0x00000040,
	E_FRAIL		= 0x00000080,
	E_CROSSBOW	= 0x00000100,
};


int main()
{
	//int n1{};
	
	//---------------------------
	//int n2{};

	//n1 = 30;
	//n2 = 40;

	//printf("%d\n", n1 & n2);
	//printf("%d\n", n1 | n2);
	//printf("%d\n", n1 ^ n2);

	//---------------------------

	//n1 = 10;

	//printf("%d\n", n1 << 3);
	//printf("%d\n", n1 >> 2);

	//---------------------------

	//n1 = 1000000;

	//printf("%d\n", n1 & 0x00ff0000 >> 16);
	//printf("%d\n", (n1 & 0x00ff0000) >> 16);
	//printf("%d\n", (n1 >> 16) & 0x000000ff);
	
	//---------------------------

	//n1 = 32793394;

	//printf("숫자 1번 : %d\n", (n1 & 0xffff0000) >> 16);
	//printf("숫자 2번 : %d\n", (n1 & 0x0000ff00) >> 8);
	//printf("숫자 3번 : %d\n", n1 & 0x000000ff);

	//---------------------------

	int nWeapon{};

	nWeapon = E_SWORD | E_AXE | E_DAGGER;

	nWeapon = nWeapon | E_CROSSBOW;

	if (nWeapon & E_SWORD)
	{
		printf("사용가능\n");
	}
	else
	{
		printf("사용불가\n");
	}

	if (nWeapon & E_SWORD)
	{
		nWeapon = nWeapon ^ E_SWORD;
		//nWeapon ^= E_SWORD;
	}


	if (nWeapon & E_SWORD)
	{
		printf("사용가능\n");
	}
	else
	{
		printf("사용불가\n");
	}
}
