#include <raylib.h>
#include <iostream>
#include "game.h"

Game::Game() {
    grid = Grid();
    snake = Snake();
    apple = Apple();
    lastUpdatedTime = 0;
}

void Game::start() {
    grid.draw();
    snake.drawSnake();
    apple.draw(10,7);

    userInput = GetKeyPressed();

    if (userInput != 0) {
        lastMove = userInput;
    }
    
    handleInput(userInput);
}

void Game::goForward()
{
    handleInput(lastMove);
}

void Game::handleInput(int input) {
    Position new_position = *snake.head;

    switch(input) {
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