#include "raylib.h"
#include <cstdio>

int main() {
    int screenOrigin_x = 0;
    int screenOrigin_y = 0;
    int screenWidth = 700;
    int screenHeight = 800;
    char windowName[] = "Axe Game";

    InitWindow(screenWidth, screenHeight, windowName);

    int circle_x = screenWidth/2;
    int circle_y = screenHeight/2;
    int circle_r = 25;

    SetTargetFPS(60);
    while(!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(WHITE);

        if(IsKeyDown(KEY_A) && circle_x - circle_r > screenOrigin_x) {
            circle_x -= 10;
        }
        if(IsKeyDown(KEY_D) && circle_x + circle_r < screenOrigin_x + screenWidth) {
            circle_x += 10;
        }
        if(IsKeyDown(KEY_S) && circle_y + circle_r < screenOrigin_y + screenHeight) {
            circle_y += 10;
        }
        if(IsKeyDown(KEY_W) && circle_y - circle_r > screenOrigin_y) {
            circle_y -= 10;
        }

        DrawCircle(circle_x, circle_y, circle_r, BLUE);

        EndDrawing();
    }

}