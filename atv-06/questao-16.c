/**
 * 16) Escreva uma função que receba como parâmetro uma matriz A contendo N linhas
 * e N colunas, e um vetor B de tamanho N. A função deve retornar o ponteiro para
 * um vetor C de tamanho N alocado dinamicamente, em que C é o produto da
 * matriz A pelo vetor B.
 */
#include <stdio.h>
#include <stdlib.h>

void* aloca_memoria(int tamanho) {
    void* ponteiro = malloc(tamanho);
    if (ponteiro == NULL) {
        printf("Erro ao alocar memória!");
        exit(1);
    }
    return ponteiro;
}

int* multiplica_matriz_vetor(int A[][3], int* B, int N) {
    int* C = (int*)aloca_memoria(N * sizeof(int));

    for (int i = 0; i < N; i++) {
        C[i] = 0;
        for (int j = 0; j < N; j++) {
            C[i] += A[i][j] * B[j];
        }
    }

    return C;
}

int main() {
    int A[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int B[3] = {1, 2, 3};

    int* C = multiplica_matriz_vetor(A, B, 3);

    for (int i = 0; i < 3; i++) {
        printf("C[%d] = %.2f\n", i, C[i]);
    }

    free(C);

    return 0;
}