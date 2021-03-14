#pragma once
class Snake
{
protected:
	int m_x;
	int m_y;
	int m_oldx = 0;
	int m_oldy = 0;
	char m_symbol;

public:

	Snake(int x, int y, char symbol) :
		m_x(x), m_y(y), m_symbol(symbol)
	{
	}

	int getX() const { return m_x; }
	int getY() const { return m_y; }
	int getOldX() const { return m_oldx; }
	int getOldY() const { return m_oldy; }
	char getSymbol() const { return m_symbol; }

	virtual void move() = 0;
};

