#include "position.h"
#include <iostream>

Position::Position() {
    x = 0;
    y = 0;
}

Position::Position(int x, int y) {
    this -> x = x;
    this -> y = y;
}

void Position::print()
{
    std::cout << x << " " << y << std::endl;
}

bool Position::equals(Position pos)
{
    if (pos.x == this->x && pos.y == this->y) {
        return true;
    }
        return false;
}
