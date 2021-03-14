#pragma once
#include "Snake.h"
#include <vector>

class SnakeHead : public Snake
{
private:
	int m_score = 0;

public:
	enum Direction
	{
		D_UP,
		D_DOWN,
		D_LEFT,
		D_RIGHT,
		D_STOP
	};

private:
	Direction m_direction = D_STOP;

public:
	SnakeHead(int x, int y) :
		Snake(x, y , '@')
	{
	}

	static SnakeHead* getRandomSnake();

	void setDirection();

	virtual void move() override;

	void addScore() { m_score += 10; }

	int getScore() { return m_score; }

	bool isCrashed(const std::vector<Snake*>& snakes);
};

