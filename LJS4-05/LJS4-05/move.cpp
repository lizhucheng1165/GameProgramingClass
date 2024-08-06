#include <stdio.h>
#include "move.h"

void C_WALK::move()
{
	printf("걷는다\n");
}

void C_SWIM::move()
{
	printf("수영한다\n");
}

void C_FLY::move()
{
	printf("난다\n");
}
