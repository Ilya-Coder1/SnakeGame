#include <iostream>
#include <conio.h>
#include <time.h>
#include <Windows.h>
#include <vector>
#include "GameField.h"
#include "GameField.h"
#include "SnakeHead.h"
#include "SnakeTail.h"
#include "Fruit.h"

int main()
{
    srand((unsigned)time(NULL));
    //setlocale(LC_CTYPE, "rus");

    std::vector<Snake*> snakes;
    SnakeHead* head = SnakeHead::getRandomSnake();
    snakes.push_back(head);

    int size = 0;

    while(!head->isCrashed(snakes))
    {
        size = snakes.size();
        system("cls");
        GameField::add(snakes);
        GameField::print(head);
        if (_kbhit())
            head->setDirection();
        for (int i = 0; i < size; i++)
            snakes[i]->move();
        if (Fruit::isEaten(head))
            snakes.push_back(SnakeTail::getSnakeTail(snakes[size - 1]));
        GameField::clear();
        Sleep(80);
    }

    std::cout << "\nGAME OVER\n";

    for (int i = 0; i < size; i++)
        delete snakes[i];

    _getch();
}


