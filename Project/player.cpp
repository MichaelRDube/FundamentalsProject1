#include "raylib.h"
#include <cstdio>
class Player {
    public:
    int x = 0;
    int y = 0;
    int r = 0;
    Color color = BLUE;
    
    Player(int xPos, int yPos, int rad, Color c) {
        x = xPos;
        y = yPos;
        r = rad;
        color = c; 
    }

    void render() {
        DrawCircle(x, y, r, color);
    }
};