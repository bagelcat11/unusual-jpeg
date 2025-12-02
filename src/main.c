#include "raylib.h"
#include <stdio.h>

int main(int argc, char** argv) {
    const int screenW = 800;
    const int screenH = 600;
    InitWindow(screenW, screenH, "img loaded");
    SetTargetFPS(30);

    // textures must be loaded after window is initialized
    Image car = LoadImage("../input-imgs/1998_pontiac.jpg");
    ImageResize(&car, screenW, screenH);

    for (int x = 0; x < screenW; x++) {
        if (x % 10 == 0) {
            for (int y = 0; y < screenH; y++) {
                ImageDrawPixel(&car, x, y, WHITE);
            }
        }
    }

    // make a texture so you can draw it in the window
    Texture2D car_tex = LoadTextureFromImage(car);

    while (!WindowShouldClose())
    {
        // update vars
        

        // draw
        BeginDrawing();
            ClearBackground(RAYWHITE);
            DrawTexture(car_tex, 0, 0, WHITE);
        EndDrawing();
    }

    UnloadTexture(car_tex);
    CloseWindow();
    return 0;
}
