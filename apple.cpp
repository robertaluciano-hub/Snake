#include "apple.h"
#include "raylib.h"
#include <random>

Apple::Apple() {
    radius = grid.cellWidth / 2 - 2;
    position = Position(10,7);
}

void Apple::spawnAtRandomPosition()
{
    int randomX = rand() % grid.numRows;
    int randomY = rand() % grid.numCols;

    position = Position(randomX, randomY);
}

void Apple::draw()
{
    DrawCircle(position.y*grid.cellWidth + grid.marginX + radius + 1, position.x*grid.cellWidth + grid.marginY + radius + 1, radius, RED);
}
