#include "snake.h"
#include "raylib.h"
#include <iostream>


Snake::Snake() {
    positions = {Position(2, 7), Position(3, 7), Position(4, 7), Position(5, 7), Position(6, 7)};
    head = &positions[positions.size() - 1];
}

void Snake::extendSnake()
{
    
}

void Snake::checkCollision()
{
}

void Snake::drawSnake() {
    
    for (Position item : positions) {
        Rectangle rect = {item.x * grid.cellWidth + grid.marginX, item.y * grid.cellWidth + grid.marginY, grid.cellWidth - 2, grid.cellWidth - 2};
        DrawRectangleRounded(rect, 0.5, 6, DARKGREEN);
    }
}

/*
Sistema di movimento
-   La testa si muove -> salvo la nuova posizione e la posizione corrente
-   la posizione corrente della testa diventa la nuova posizione del secondo elemento
-   la posizione del secondo elemento diventa la nuova posizione del terzo e così via, in maniera ricorsiva
*/

void Snake::move(Position newPosition, int index)
{
        if (index == 0) {
        positions[0] = newPosition;
        return;
    }
    Position old = positions[index];
    positions[index] = newPosition;
    move(old, index - 1);
    return;
}
