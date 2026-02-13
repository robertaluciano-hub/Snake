#pragma once
#include "grid.h"
#include "snake.h"
#include "apple.h"

class Game{
    public:
        Game();
        void start();           
        void goForward();  
        void GameOver();   
        void checkAppleCollision();   
        void checkWallCollision();
    
    private:
        Grid grid;
        Snake snake;
        Apple apple;
        bool gameOver;
        double lastUpdatedTime;
        void handleInput(int input);
        int lastMove;
        int userInput;     
        
};