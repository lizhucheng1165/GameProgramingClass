#pragma once

class C_PARENT abstract
{
public:
	virtual ~C_PARENT() = default;
	virtual void Test() abstract;
	virtual void Func() abstract;
};