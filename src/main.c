#include "raylib.h"
#include <stdio.h>

int main(int argc, char** argv) {
    const int screenW = 800;
    const int screenH = 600;
    InitWindow(screenW, screenH, "img loaded");
    SetTargetFPS(30);

    // textures must be loaded after window is initialized
    Image car = LoadImage("input-imgs/1998_pontiac.jpg");
    ImageCrop(&car, (Rectangle){ 0, 0, screenW, screenH });
    ImageResize(&car, screenW, screenH);

    // make a texture so you can draw it in the window
    Texture2D car_tex = LoadTextureFromImage(car);

    while (!WindowShouldClose())
    {
        // update vars
        

        // draw
        BeginDrawing();
            ClearBackground(RAYWHITE);
            DrawTexture(car_tex, screenW, screenH, WHITE);
            DrawText("yayyyyy", 200, 200, 20, LIGHTGRAY);
        EndDrawing();
    }

    UnloadTexture(car_tex);
    CloseWindow();
    return 0;
}
