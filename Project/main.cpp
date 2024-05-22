#include "raylib.h"
#include <cstdio>
#include "player.cpp"

int main() {
    int screenOrigin_x = 0;
    int screenOrigin_y = 0;
    int screenWidth = 700;
    int screenHeight = 800;
    char windowName[] = "Axe Game";

    InitWindow(screenWidth, screenHeight, windowName);

    Player player(screenWidth/2, screenHeight/2, 25, BLUE);

    SetTargetFPS(60);
    while(!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(WHITE);

        if(IsKeyDown(KEY_A) && player.x - player.r > screenOrigin_x) {
            player.x -= 10;
        }
        if(IsKeyDown(KEY_D) && player.x + player.r < screenOrigin_x + screenWidth) {
            player.x += 10;
        }
        if(IsKeyDown(KEY_S) && player.y + player.r < screenOrigin_y + screenHeight) {
            player.y += 10;
        }
        if(IsKeyDown(KEY_W) && player.y - player.r > screenOrigin_y) {
            player.y -= 10;
        }

        player.render();

        EndDrawing();
    }

}