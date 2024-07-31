#include "parent.h"

C_PARENT::C_PARENT()
{
	printf("parent 생성자\n");
}

C_PARENT::~C_PARENT()
{
	printf("parent 소멸자\n");
}

void C_PARENT::Use()
{
	printf("parent 기능 사용\n");
}
