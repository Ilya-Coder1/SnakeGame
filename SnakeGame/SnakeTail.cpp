#include "SnakeTail.h"
#include "SnakeHead.h"

void SnakeTail::move()
{
	m_oldx = m_x;
	m_oldy = m_y;

	m_x = m_parent.getOldX();
	m_y = m_parent.getOldY();
}

SnakeTail* SnakeTail::getSnakeTail(Snake* snake)
{
	return new SnakeTail(*snake);
}