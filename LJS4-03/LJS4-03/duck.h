#pragma once

#include <stdio.h>
__interface interface_Duck
{
	virtual void move() abstract;
};

class C_DUCK abstract: public interface_Duck
{
public:
	C_DUCK() = default;
	virtual ~C_DUCK() = default;
};

