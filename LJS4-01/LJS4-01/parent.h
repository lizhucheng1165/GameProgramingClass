#pragma once

#include <stdio.h>

class C_PARENT
{
public:
	virtual ~C_PARENT() = default;
	//C_PARENT() = default;
	//C_PARENT() = delete;
	//C_PARENT();
	C_PARENT(int n1, int n2);
};