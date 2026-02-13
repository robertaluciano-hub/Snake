#pragma once
#include <vector>
#include "position.h"
#include "grid.h"

class Snake {
    public:
        Snake();
        void extendSnake();
        void checkCollision();
        Grid grid;
        void drawSnake();
        void move(Position newPosition, int index);
        Position *head;
        std::vector<Position> positions;
};