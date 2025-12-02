#include "lossy_operations.h"

void lossy_grayscale(Image* img) {
    ImageColorGrayscale(img);
}

// not sure how the Bpp values work really
void lossy_dither(Image* img, int r, int g, int b, int a) {
    ImageDither(img, r, g, b, a);
}

void lossy_hori_lines(Image* img) {
    for (int y = 0; y < SCREEN_H; y++) {
        if (y % 10 == 0) {
            for (int x = 0; x < SCREEN_W; x++) {
                ImageDrawPixel(img, x, y, WHITE);           
            }
        }
    }
}
