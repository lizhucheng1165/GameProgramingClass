#pragma once
#include "parent.h"


class C_CHILD : public C_PARENT
{
	virtual void Test() override;
	virtual void Func() override;
};