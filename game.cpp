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
    gameOver = false;
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

void Game::checkAppleCollision() {
    if(snake.head->equals(apple.position)) {
        Position new_block = Position(snake.tail->x, snake.tail->y);
        snake.extendSnake(new_block);
        apple.spawnAtRandomPosition();
    }
}

void Game::checkWallCollision() {
    Position head_pos = *snake.head;

    if(head_pos.x >= grid.numRows || head_pos.x < 0 || head_pos.y >= grid.numCols || head_pos.y < 0) {
        std::cout << " GAME OVER ";
        gameOver = true;
    }
}

void Game::handleInput(int input) {
    if(!gameOver) {
        Position new_position = *snake.head;
        checkAppleCollision();    

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
        checkWallCollision();
        grid.update(snake.positions, apple.position);
    }
}


