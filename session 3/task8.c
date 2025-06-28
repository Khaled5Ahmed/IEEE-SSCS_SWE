#include <stdio.h>
#include <stdlib.h>

void free_array(int **arr, int rows)
{
    if (arr == NULL) return;

    for (int i = 0; i < rows; i++) {
        free(arr[i]);   
        arr[i] = NULL;   
    }

    free(arr);   
    arr = NULL; 
}

int main() {
    int rows = 3, cols = 4;

    // array of arrays
    int **matrix = malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++) {
        matrix[i] = malloc(cols * sizeof(int));
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = i + j;
        }
    }

    printf("Matrix contents:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    free_array(matrix, rows);

    return 0;
}
