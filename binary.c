#include <stdio.h>

int main() {
    FILE *file = fopen("binary_example.bin", "wb");
    if (!file) {
        printf("Failed to create file.\n");
        return 1;
    }

    unsigned char data[] = {0xFF, 0xD8, 0xFF, 0xE0}; // First 4 bytes of a JPEG file

    fwrite(data, sizeof(unsigned char), 4, file); // Write raw bytes

    fclose(file);
    printf("Binary file written successfully.\n");
    return 0;
}
