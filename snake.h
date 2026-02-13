#pragma once
#include <vector>
#include "position.h"
#include "grid.h"

class Snake {
    public:
        Snake();
        void extendSnake(Position new_block);
        void checkCollision();
        Grid grid;
        void drawSnake();
        void move(Position newPosition, int index);
        Position *head;
        Position *tail;
        std::vector<Position> positions;
};