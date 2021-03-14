#pragma once
#include "Snake.h"

class SnakeTail : public Snake
{
private:
	const Snake& m_parent;

public:
	SnakeTail(const Snake& snake) :
		Snake(snake.getOldX(), snake.getOldY(), 'o'),
		m_parent(snake)
	{
	}

	static SnakeTail* getSnakeTail(Snake* snake);

	virtual void move() override;
};

