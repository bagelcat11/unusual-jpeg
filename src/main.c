#include "lossy_operations.h"

int main(int argc, char** argv) {
    InitWindow(SCREEN_W, SCREEN_H, "img loaded");
    SetTargetFPS(30);

    // textures must be loaded after window is initialized
    // make a copy so you don't modify the original lol
    Image car = ImageCopy(LoadImage("../input-imgs/1998_pontiac.jpg"));
    ImageResize(&car, SCREEN_W, SCREEN_H);

    // -- MESS WITH IMAGE HERE -- //
    
    lossy_hori_lines(&car);

    // -------------------------- //

    // make the export
    ExportImage(car, "../output-imgs/1998_pontiac_lines.jpg");

    // make a texture so you can draw it in the window
    Texture2D car_tex = LoadTextureFromImage(car);
    while (!WindowShouldClose())
    {
        BeginDrawing();
            ClearBackground(RAYWHITE);
            DrawTexture(car_tex, 0, 0, WHITE);
        EndDrawing();
    }
    UnloadTexture(car_tex);
    CloseWindow();
    return 0;
}
