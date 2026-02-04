#pragma once
#include "grid.h"

class Apple{
    public:
        Apple();
        void spawnAtRandomPosition();
        void draw(int row, int column);
        Grid grid;
    private:
        int radius;

};