#include "lossy_operations.h"

void lossy_grayscale(Image* img) {
    ImageColorGrayscale(img);
}

// not sure how the Bpp values work really
void lossy_dither(Image* img, int r, int g, int b, int a) {
    ImageDither(img, r, g, b, a);
}

