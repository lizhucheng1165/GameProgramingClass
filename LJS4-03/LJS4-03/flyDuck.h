#pragma once

#include "duck.h"

class C_FLY_DUCK : public C_DUCK
{
public:
	C_FLY_DUCK() = default;
	void move() override;
};