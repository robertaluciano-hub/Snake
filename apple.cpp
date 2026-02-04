#include "apple.h"
#include "raylib.h"

Apple::Apple() {
    radius = grid.cellWidth / 2 - 2;
}

void Apple::spawnAtRandomPosition()
{

}

void Apple::draw(int row, int column)
{
    //DrawRectangle(row*grid.cellWidth + grid.marginX, column*grid.cellWidth + grid.marginY, grid.cellWidth-2, grid.cellWidth-2, RED);
    DrawCircle(row*grid.cellWidth + grid.marginX + radius + 1, column*grid.cellWidth + grid.marginY + radius + 1, radius, RED);
}
