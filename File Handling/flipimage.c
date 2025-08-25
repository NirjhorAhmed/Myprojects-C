#include <stdio.h>
#include <stdlib.h>

typedef struct {
    unsigned char r, g, b;
} Pixel;

int main() {
    FILE *in = fopen("100dollars.tif", "rb");
    if (!in) {
        printf("Cannot open input file.\n");
        return 1;
    }

    char format[3];
    int width, height, maxval;
    fscanf(in, "%2s", format);
    if (format[0] != 'P' || format[1] != '6') {
        printf("Unsupported format. Use binary PPM (P6).\n");
        return 1;
    }

    int c;
    do { c = fgetc(in); } while (c == '#'); ungetc(c, in);
    fscanf(in, "%d %d", &width, &height);
    fscanf(in, "%d", &maxval);
    fgetc(in); 

    Pixel **img = malloc(height * sizeof(Pixel *));
    for (int i = 0; i < height; i++) {
        img[i] = malloc(width * sizeof(Pixel));
        fread(img[i], sizeof(Pixel), width, in);
    }
    fclose(in);

    for (int y = 0; y < height; y++) {
        for (int x = 0; x < width / 2; x++) {
            Pixel temp = img[y][x];
            img[y][x] = img[y][width - 1 - x];
            img[y][width - 1 - x] = temp;
        }
    }

    FILE *out = fopen("flipped_output.tif", "wb");
    fprintf(out, "P6\n%d %d\n255\n", width, height);
    for (int i = 0; i < height; i++) {
        fwrite(img[i], sizeof(Pixel), width, out);
        free(img[i]);
    }
    free(img);
    fclose(out);

    printf("Image flipped and saved as flipped_output.ppm\n");
    return 0;
}
