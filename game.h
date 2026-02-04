#pragma once
#include "grid.h"
#include "snake.h"
#include "apple.h"

class Game{
    public:
        Game();
        void start();           
        void goForward();        
    
    private:
        Grid grid;
        Snake snake;
        Apple apple;
        double lastUpdatedTime;
        void handleInput(int input);
        int lastMove;
        int userInput;     
        
};