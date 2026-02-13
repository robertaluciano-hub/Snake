#include <iostream>
#include "raylib.h"
#include "grid.h"
#include "utility.h"

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

void Grid::update(std::vector<Position> snake_pos, Position apple_pos) 
{
    // per ogni elemento della matrice controllo se quella posizione è occupata da snake o dalla mela
    // se è occupata da snake metto 1, se è occupata dalla mela metto 2, altrimenti metto 0

    for(int row=0;row<numRows;row++) {
       for(int column=0;column<numCols;column++) {
            Position pos = Position(row, column);
            if (Utility::contains(snake_pos, pos)) {
                grid[row][column] = 1;
            }
            else if(pos.equals(apple_pos)) {
                grid[row][column] = 2;
            }
            else {
                grid[row][column] = 0;
            }
       } 
       std::cout << std::endl;
    }
}


