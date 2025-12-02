#include "lossy_operations.h"

int main(int argc, char** argv) {
    const int screenW = 800;
    const int screenH = 600;
    InitWindow(screenW, screenH, "img loaded");
    SetTargetFPS(30);

    // textures must be loaded after window is initialized
    // make a copy so you don't modify the original lol
    Image car = ImageCopy(LoadImage("../input-imgs/1998_pontiac.jpg"));
    ImageResize(&car, screenW, screenH);

    // make the export
    ExportImage(car, "../output-imgs/1998_pontiac_JUST_SMALL.jpg");

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
