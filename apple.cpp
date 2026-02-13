#include "apple.h"
#include "raylib.h"

Apple::Apple() {
    radius = grid.cellWidth / 2 - 2;
    position = Position(10,7);
}

void Apple::spawnAtRandomPosition()
{

}

void Apple::draw()
{
    DrawCircle(position.y*grid.cellWidth + grid.marginX + radius + 1, position.x*grid.cellWidth + grid.marginY + radius + 1, radius, RED);
}
