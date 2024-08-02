#pragma once
#include <stdio.h>

//class C_ANIMAL_INTERFACE
//{
//public:
//	virtual void move() abstract;
//};

__interface interface_ANIMAL
{
	void Move();
};

class C_ANIMAL abstract : public interface_ANIMAL
{
private:

public:
	virtual ~C_ANIMAL() = default;

};