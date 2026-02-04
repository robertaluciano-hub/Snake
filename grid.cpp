#include <iostream>
#include "raylib.h"
#include "grid.h"

Grid::Grid() {
    numRows = 14;
    numCols = 14;
    marginX = 40;
    marginY = 40;
    cellWidth = 30;
    create();
}

void Grid::create() {
    for(int i=0;i<numRows;i++) {
       for(int j=0;j<numCols;j++) {
            grid[i][j] = 0;
       } 
    }
}

void Grid::print()
{
    for(int i=0;i<numRows;i++) {
       for(int j=0;j<numCols;j++) {
            std::cout << grid[i][j] << " ";
       } 
       std::cout << std::endl;
    }
}

void Grid::draw()
{
    for(int row=0;row<numRows;row++) {
       for(int column=0;column<numCols;column++) {
            DrawRectangle(row*cellWidth + marginX, column*cellWidth + marginY, cellWidth-2, cellWidth-2, BLUE);
       } 
    }
}

void Grid::update(int row, int column, int val)
{
    grid[row][column] = val;
}
