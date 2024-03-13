/**
 * 12) Escreva uma função que receba como parâmetro um valor N e retorne o ponteiro
 * para uma matriz alocada dinamicamente contendo N linhas e N colunas. Essa
 * matriz deve conter o valor 1 na diagonal secundária e 0 nas demais posições.
 */
#include <stdio.h>
#include <stdlib.h>

int** cria_matriz(int tamanho) {
    int** linhas = (int**)malloc(tamanho * sizeof(int*));

    if (linhas == NULL) {
        return NULL;
    }

    int linhasPreenchidas = 0;
    for (linhasPreenchidas = 0; linhasPreenchidas < tamanho; linhasPreenchidas++) {
        int* colunas = (int*)malloc(tamanho * sizeof(int));

        if (colunas == NULL)
            break;

        linhas[linhasPreenchidas] = colunas;
    }

    if (linhasPreenchidas != tamanho) {
        for (int i = 0; i < linhasPreenchidas; i++) {
            free(linhas[i]);
        }

        return NULL;
    }

    return linhas;
}

void main() {
    int **matriz, tamanho;

    printf("Defina o tamanho da matriz: ");
    scanf("%d", &tamanho);

    matriz = cria_matriz(tamanho);

    if (matriz == NULL) {
        printf("Não foi possível alocar a matriz.");
        return;
    }

    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            if (i + j == tamanho - 1) {
                matriz[i][j] = 1;
            } else {
                matriz[i][j] = 0;
            }
        }
    }

    printf("Resultado: \n");
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            printf("%d  ", matriz[i][j]);
        }
        printf("\n");
    }
}
