#pragma once
#include "Snake.h"
#include "SnakeHead.h"
#include <vector>

class GameField
{
public:
	static char m_field[20][20];

	static void print(SnakeHead* head);

	static void add(const std::vector<Snake*>& snakes);

	static void clear();
};


