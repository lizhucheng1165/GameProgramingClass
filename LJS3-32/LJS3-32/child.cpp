#include <stdio.h>
#include "child.h"


void C_CHILD_A::Test()
{
	//printf("�׽�Ʈ\n");
	C_PARENT::Test();
	printf("child A\n");
}

void C_CHILD_B::Test()
{
	//printf("�׽�Ʈ\n");
	C_PARENT::Test();
	printf("child B\n");
}

