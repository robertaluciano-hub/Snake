#pragma once
#include "grid.h"
#include "snake.h"
#include "apple.h"

class Game{
    public:
        Game();
        void start();
    
    private:
        Grid grid;
        Snake snake;
        Apple apple;
        void handleInput(int userInput);
};