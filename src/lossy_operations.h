#include "raylib.h"
#define SCREEN_W 800
#define SCREEN_H 600

void lossy_grayscale(Image* img);
void lossy_dither(Image* img, int r, int g, int b, int a);
void lossy_hori_lines(Image* img);
