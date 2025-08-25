#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 20

typedef struct {
    int r, g, b;
} Color;

typedef struct {
    int width, height;
    Color pixels[MAX_SIZE][MAX_SIZE];
} Image;

int clamp(int value) {
    if (value < 0) return 0;
    if (value > 255) return 255;
    return value;
}

Color createColor(int r, int g, int b) {
    Color c;
    c.r = clamp(r);
    c.g = clamp(g);
    c.b = clamp(b);
    return c;
}

Color blendColors(Color c1, Color c2, float ratio) {
    Color result;
    result.r = clamp((int)(c1.r * (1 - ratio) + c2.r * ratio));
    result.g = clamp((int)(c1.g * (1 - ratio) + c2.g * ratio));
    result.b = clamp((int)(c1.b * (1 - ratio) + c2.b * ratio));
    return result;
}

Color adjustBrightness(Color c, float factor) {
    Color result;
    result.r = clamp((int)(c.r * factor));
    result.g = clamp((int)(c.g * factor));
    result.b = clamp((int)(c.b * factor));
    return result;
}

Color invertColor(Color c) {
    Color result;
    result.r = 255 - c.r;
    result.g = 255 - c.g;
    result.b = 255 - c.b;
    return result;
}

Color convertToGrayscale(Color c) {
    int gray = (int)(0.299 * c.r + 0.587 * c.g + 0.114 * c.b);
    return createColor(gray, gray, gray);
}

Image createImage(int width, int height, Color fillColor) {
    Image img;
    img.width = width;
    img.height = height;
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            img.pixels[i][j] = fillColor;
        }
    }
    return img;
}

void setPixel(Image* img, int x, int y, Color c) {
    if (x >= 0 && x < img->width && y >= 0 && y < img->height) {
        img->pixels[y][x] = c;
    }
}

Color getPixel(Image img, int x, int y) {
    if (x >= 0 && x < img.width && y >= 0 && y < img.height) {
        return img.pixels[y][x];
    }
    return createColor(0, 0, 0);  // Return black if out of bounds
}

Image applyFilter(Image img, char filterType) {
    for (int i = 0; i < img.height; i++) {
        for (int j = 0; j < img.width; j++) {
            Color c = img.pixels[i][j];
            switch (filterType) {
                case 'G': c = convertToGrayscale(c); break;
                case 'I': c = invertColor(c); break;
                case 'B': c = adjustBrightness(c, 1.2); break;
                case 'D': c = adjustBrightness(c, 0.8); break;
            }
            img.pixels[i][j] = c;
        }
    }
    return img;
}

void displayImageInfo(Image img) {
    printf("Image (%dx%d):\n", img.width, img.height);
    for (int i = 0; i < img.height; i++) {
        for (int j = 0; j < img.width; j++) {
            Color c = img.pixels[i][j];
            printf("(%d,%d,%d) ", c.r, c.g, c.b);
        }
        printf("\n");
    }
}

int main() {
    Image img;
    int choice;
    int width, height, x, y, r, g, b;
    char filterType;

    while (1) {
        printf("===== Colorful Image Processor =====\n");
        printf("Menu:\n");
        printf("1. Create a new image\n2. Set pixel color\n3. Fill image with color\n4. Apply filter\n5. Display image\n6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter image width (max 20): ");
                scanf("%d", &width);
                printf("Enter image height (max 20): ");
                scanf("%d", &height);
                if (width > MAX_SIZE || height > MAX_SIZE) {
                    printf("Dimensions exceed maximum size.\n");
                    break;
                }
                printf("Fill color (RGB): ");
                scanf("%d %d %d", &r, &g, &b);
                img = createImage(width, height, createColor(r, g, b));
                printf("Image created: %dx%d\n", width, height);
                break;
            case 2:
                printf("Enter x coordinate: "); scanf("%d", &x);
                printf("Enter y coordinate: "); scanf("%d", &y);
                printf("Enter color (RGB): "); scanf("%d %d %d", &r, &g, &b);
                setPixel(&img, x, y, createColor(r, g, b));
                printf("Pixel set at (%d,%d)\n", x, y);
                break;
            case 3:
                printf("Enter fill color (RGB): ");
                scanf("%d %d %d", &r, &g, &b);
                img = createImage(img.width, img.height, createColor(r, g, b));
                printf("Image filled.\n");
                break;
            case 4:
                printf("Select filter:\nG - Grayscale\nI - Invert colors\nB - Increase brightness\nD - Decrease brightness\n");
                printf("Enter filter type: ");
                scanf(" %c", &filterType);
                img = applyFilter(img, filterType);
                printf("Filter applied.\n");
                break;
            case 5:
                displayImageInfo(img);
                break;
            case 6:
                printf("Thank you for using the Colorful Image Processor!\n");
                return 0;
            default:
                printf("Invalid choice.\n");
        }
    }
}
