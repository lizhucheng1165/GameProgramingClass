#pragma once

#include "duck.h"

class C_SWIM_DUCK : public C_DUCK
{
public:
	C_SWIM_DUCK() = default;
	void move() override;
};