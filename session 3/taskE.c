#include <stdio.h>
#include <stdlib.h>

int **allocate_matrix(int rows, int cols) {
    int **matrix = malloc(rows * sizeof(int *));
    if (!matrix) return NULL;

    for (int i = 0; i < rows; i++) {
        matrix[i] = malloc(cols * sizeof(int));
        if (!matrix[i]) return NULL;
    }
    return matrix;
}

void input_matrix(int **mat, int rows, int cols, char name) {
    printf("Enter values for Matrix %c (%d x %d):\n", name, rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%c[%d][%d]: ", name, i, j);
            scanf("%d", &mat[i][j]);
        }
    }
}

int **multiply_matrices(int **A, int m, int n, int **B, int j, int k) {
    if (n != j) return NULL;

    int **C = allocate_matrix(m, k);
    if (!C) return NULL;

    for (int i = 0; i < m; i++) {
        for (int col = 0; col < k; col++) {
            C[i][col] = 0;
            for (int t = 0; t < n; t++) {
                C[i][col] += A[i][t] * B[t][col];
            }
        }
    }
    return C;
}

void save_matrix_to_file(int **mat, int rows, int cols, const char *filename) {
    FILE *fp = fopen(filename, "w");
    if (!fp) {
        printf("Error writing to file!\n");
        return;
    }

    fprintf(fp, "Resulting Matrix (%d x %d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            fprintf(fp, "%d\t", mat[i][j]);
        }
        fprintf(fp, "\n");
    }
    fclose(fp);
}

void free_matrix(int **mat, int rows) {
    if (!mat) return;
    for (int i = 0; i < rows; i++) free(mat[i]);
    free(mat);
}

int main() {
    int m, n, j, k;

    printf("Enter dimensions of Matrix A (rows m, cols n): ");
    scanf("%d %d", &m, &n);
    int **A = allocate_matrix(m, n);
    if (!A) {
        printf("Memory allocation failed for Matrix A\n");
        return 1;
    }
    input_matrix(A, m, n, 'A');

    printf("Enter dimensions of Matrix B (rows j, cols k): ");
    scanf("%d %d", &j, &k);
    int **B = allocate_matrix(j, k);
    if (!B) {
        printf("Memory allocation failed for Matrix B\n");
        free_matrix(A, m);
        return 1;
    }
    input_matrix(B, j, k, 'B');

    if (n != j) {
        printf("Matrix dimensions incompatible for multiplication (n ≠ j)\n");
        free_matrix(A, m);
        free_matrix(B, j);
        return 1;
    }

    int **C = multiply_matrices(A, m, n, B, j, k);
    if (!C) {
        printf("Multiplication failed\n");
        free_matrix(A, m);
        free_matrix(B, j);
        return 1;
    }

    save_matrix_to_file(C, m, k, "matrix_result.txt");
    printf("Multiplication complete. Result saved to matrix_result.txt\n");

    free_matrix(A, m);
    free_matrix(B, j);
    free_matrix(C, m);

    return 0;
}
