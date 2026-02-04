#include <raylib.h>
#include <iostream>
#include "game.h"

Game::Game() {
    grid = Grid();
    snake = Snake();
    apple = Apple();
}

void Game::start() {
    grid.draw();
    snake.drawSnake();
    apple.draw(10,7);

    int userInput = GetKeyPressed();
    handleInput(userInput);
}

void Game::handleInput(int userInput) {
    Position new_position = *snake.head;

    switch(userInput) {
        case(KEY_LEFT):
            new_position.x -= 1;
            snake.move(new_position, 4);
            break;

        case(KEY_RIGHT):
            new_position.x += 1;
            snake.move(new_position, 4);
            break;

        case(KEY_UP):
            new_position.y -= 1;
            snake.move(new_position, 4);
            break;
            
        case(KEY_DOWN):            
            new_position.y += 1;
            snake.move(new_position, 4);
            break;
    }
}


