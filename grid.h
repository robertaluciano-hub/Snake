#pragma once

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
        void update(int row, int column, int val);
    private:
        int numRows;
        int numCols;
        
};
