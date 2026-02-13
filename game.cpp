#include <raylib.h>
#include <iostream>
#include <vector>
#include "game.h"
#include "position.h"

Game::Game() {
    grid = Grid();
    snake = Snake();
    apple = Apple();
    lastUpdatedTime = 0;
}

void Game::start() {
    grid.draw();
    snake.drawSnake();
    apple.draw();

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

void Game::GameOver()
{

}

void Game::handleInput(int input) {
    Position new_position = *snake.head;

    switch(input) {
        case(KEY_LEFT):
            new_position.y -= 1;
            snake.move(new_position, 0);
            break;

        case(KEY_RIGHT):
            new_position.y += 1;
            snake.move(new_position, 0);
            break;

        case(KEY_UP):
            new_position.x -= 1;
            snake.move(new_position, 0);
            break;
            
        case(KEY_DOWN):            
            new_position.x += 1;
            snake.move(new_position, 0);
            break;
    }
    grid.update(snake.positions, apple.position);

    if(snake.head->equals(apple.position)) {
        Position new_block = Position(snake.tail->x, (snake.tail->y)-1);     // SOSTITUIRE COORDINATE
        //snake.extendSnake(new_block);
        apple.spawnAtRandomPosition();
    }
}

