#include "Fruit.h"
#include <iostream>

int Fruit::m_x = 1 + rand() % 18;
int Fruit::m_y = 1 + rand() % 18;

void Fruit::newLocation()
{
	m_x = 1 + rand() % 18;
	m_y = 1 + rand() % 18;
}

bool Fruit::isEaten(SnakeHead* head)
{
	if (head->getX() == m_x && head->getY() == m_y)
	{
		newLocation();
		head->addScore();
		return true;
	}

	return false;
}