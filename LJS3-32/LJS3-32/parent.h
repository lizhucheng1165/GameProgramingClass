#pragma once
#include<stdio.h>

class C_PARENT abstract
{
public:
	virtual ~C_PARENT() = default;
	virtual void Test() abstract;
};