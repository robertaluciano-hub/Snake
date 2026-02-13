#include <iostream>
#include <raylib.h>
#include "game.h"

double lastUpdatedTime = 0;

bool timeTrigger(double interval) {
        double currentTime = GetTime();
        if (currentTime - lastUpdatedTime >= interval) {
            lastUpdatedTime = currentTime;
            return true;
        }
        return false;
    }

int main () {

    const int SCREEN_WIDTH = 500;
    const int SCREEN_HEIGHT = 500;
    double interval = 0.2;    

    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Snake");
    SetTargetFPS(60);
    Game game = Game();

    while (WindowShouldClose() == false){        
        BeginDrawing();
            DrawRectangleRounded({40, 40, 420, 420}, 0, 6, WHITE);
            game.start();   
            if (timeTrigger(interval) == true) {
                game.goForward();
            } 
            ClearBackground(BLACK);
        EndDrawing();
    }
    CloseWindow();
}