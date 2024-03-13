/**
 *
 */
#include <stdio.h>
#include <stdlib.h>

int** multiplicarMatrizes(int** A, int** B, int m, int n, int p) {
    if (n != p) {
        return NULL;
    }

    int** C = (int**)malloc(m * sizeof(int*));
    for (int i = 0; i < m; i++) {
        C[i] = (int*)malloc(p * sizeof(int));
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            C[i][j] = 0;
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    return C;
}

void imprimirMatriz(int** M, int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int A[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int B[3][2] = {{1, 2}, {3, 4}, {5, 6}};

    int** C = multiplicarMatrizes(A, B, 2, 3, 2);

    printf("Matriz C:\n");
    imprimirMatriz(C, 2, 2);

    for (int i = 0; i < 2; i++) {
        free(C[i]);
    }
    free(C);

    return 0;
}