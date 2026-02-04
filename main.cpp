#include <iostream>
#include <raylib.h>
#include "game.h"

int main () {

    const int SCREEN_WIDTH = 500;
    const int SCREEN_HEIGHT = 500;

    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Snake");
    SetTargetFPS(60);
    Game game = Game();

    while (WindowShouldClose() == false){        
        BeginDrawing();
            DrawRectangleRounded({40, 40, 420, 420}, 0, 6, WHITE);
            game.start();           
            ClearBackground(BLACK);
        EndDrawing();
    }
    CloseWindow();
}