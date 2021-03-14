#include "SnakeHead.h"
#include <iostream>
#include <conio.h>

SnakeHead* SnakeHead::getRandomSnake()
{
	int x = 1 + rand() % 18;
	int y = 1 + rand() % 18;
	return new SnakeHead(x, y);
}

void SnakeHead::setDirection()
{
	char choise = _getch();

	switch (choise)
	{
	case 'w':
		if (m_direction != D_DOWN)
			m_direction = D_UP;
		break;
	case 's':
		if (m_direction != D_UP)
			m_direction = D_DOWN;
		break;
	case 'a':
		if (m_direction != D_RIGHT)
			m_direction = D_LEFT;
		break;
	case 'd':
		if (m_direction != D_LEFT)
			m_direction = D_RIGHT;
		break;
	default:
		return;
	}
}

void SnakeHead::move()
{
	m_oldx = m_x;
	m_oldy = m_y;

	switch (m_direction)
	{
	case D_UP:
		m_x--;
		break;
	case D_DOWN:
		m_x++;
		break;
	case D_LEFT:
		m_y--;
		break;
	case D_RIGHT:
		m_y++;
		break;
	case D_STOP:
		return;
	default:
		return;
	}
}

bool SnakeHead::isCrashed(const std::vector<Snake*>& snakes)
{
	if (m_x < 1 || m_x > 18)
		return true;

	if (m_y < 1 || m_y > 18)
		return true;

	for (int i = 1; i < snakes.size(); i++)
	{
		if (m_x == snakes[i]->getX() && m_y == snakes[i]->getY())
			return true;
	}

	return false;
}