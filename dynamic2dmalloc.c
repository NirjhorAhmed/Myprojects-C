#include <stdio.h>
#include <stdlib.h>

// Function to allocate memory for a 2D matrix
int **allocateMatrix(int rows, int cols) {
    int **matrix = (int **)malloc(rows * sizeof(int *)); // Allocate array of row pointers
    if (matrix == NULL) {
        printf("Memory allocation failed for row pointers!\n");
        return NULL;
    }

    for (int i = 0; i < rows; i++) {
        matrix[i] = (int *)malloc(cols * sizeof(int)); // Allocate memory for each row
        if (matrix[i] == NULL) {
            printf("Memory allocation failed for row %d!\n", i);
            return NULL;
        }
    }
    return matrix;
}

// Function to free allocated memory
void freeMatrix(int **matrix, int rows) {
    for (int i = 0; i < rows; i++) {
        free(matrix[i]); // Free each row
    }
    free(matrix); // Free row pointers
}

// Function to fill matrix with values
void fillMatrix(int **matrix, int rows, int cols) {
    int value = 1;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = value++;
        }
    }
}

// Function to print matrix
void printMatrix(int **matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows = 3, cols = 4;

    // Step 1: Allocate memory for the matrix
    int **matrix = allocateMatrix(rows, cols);
    if (matrix == NULL) {
        return 1; // Exit if memory allocation failed
    }

    // Step 2: Fill matrix with values
    fillMatrix(matrix, rows, cols);

    // Step 3: Print the matrix
    printf("Matrix:\n");
    printMatrix(matrix, rows, cols);

    // Step 4: Free allocated memory
    freeMatrix(matrix, rows);

    return 0;
}