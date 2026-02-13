#pragma once
#include "grid.h"
#include "position.h"

class Apple{
    public:
        Apple();
        void spawnAtRandomPosition();
        void draw();
        Grid grid;
        Position position;
    private:
        int radius;

};