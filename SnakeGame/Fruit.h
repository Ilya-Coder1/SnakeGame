#pragma once
#include "SnakeHead.h"

class Fruit
{
public:
	static int m_x;
	static int m_y;
	static const char m_symbol = '*';

	static void newLocation();

	static bool isEaten(SnakeHead* head);
};

