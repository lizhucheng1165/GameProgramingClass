#pragma once

#include "duck.h"


class C_WALK_DUCK : public C_DUCK
{
public:
	C_WALK_DUCK() = default;
	void move() override;
};