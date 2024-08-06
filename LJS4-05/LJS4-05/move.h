#pragma once

__interface I_MOVE
{
	void move();
};

class C_MOVE abstract : public I_MOVE
{
public:
	C_MOVE() = default;
	virtual ~C_MOVE() = default;
	C_MOVE(const C_MOVE&) = delete;
	C_MOVE& operator = (const C_MOVE&) = delete;
};

class C_WALK : public C_MOVE
{
	// C_MOVE을(를) 통해 상속됨
	void move() override;
};
class C_SWIM : public C_MOVE
{
	// C_MOVE을(를) 통해 상속됨
	void move() override;
};
class C_FLY : public C_MOVE
{
	// C_MOVE을(를) 통해 상속됨
	void move() override;
};