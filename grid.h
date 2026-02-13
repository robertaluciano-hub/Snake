#pragma once
#include <vector>
#include "position.h"

class Grid {
    public:
        int grid[14][14];
        int marginX;
        int marginY;
        int cellWidth;
        Grid();
        void create();
        void print();
        void draw();
        void update(std::vector<Position> snake_pos, Position apple_pos);
    private:
        int numRows;
        int numCols;
        
};
