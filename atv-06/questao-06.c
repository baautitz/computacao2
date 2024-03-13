/**
 * 6) Escreva um programa que aloque dinamicamente uma matriz de inteiros. As dimensões da matriz deverão ser lidas do usuário.
 * Em seguida, escreva uma função que receba um valor e retorne 1, caso o valor esteja na matriz, ou retorne 0, no caso
 * contrário.
 */
#include <stdio.h>
#include <stdlib.h>

int** cria_matriz(int linhas, int colunas) {
    int** matriz = (int**)malloc(linhas * sizeof(int*));
    int* col;

    for (int i = 0; i < linhas; i++) {
        col = (int*)malloc(colunas * sizeof(int));
        matriz[i] = col;
    }

    return matriz;
}

void libera_matriz(int** matriz) {
    free(matriz);
}

int contem_matriz(int valor, int** matriz, int linhas, int colunas) {
    int contem = 0;

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (matriz[i][j] != valor)
                continue;

            contem = 1;
            break;
        }

        if (contem == 1)
            break;
    }

    return contem;
}

void main() {
    int linhas, colunas;
    int** matriz;

    printf("Defina o tamanho de linhas e colunas: ");
    scanf("%d %d", &linhas, &colunas);

    matriz = cria_matriz(linhas, colunas);

    for (int i = 0; i < linhas; i++) {
        printf("Linha %d de %d:\n", i + 1, linhas);
        for (int j = 0; j < colunas; j++) {
            printf(" - Coluna %d de %d: ", j + 1, colunas);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nMatriz digitada: \n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    int num = 9;
    printf("\nA matriz %s o número: %d", contem_matriz(9, matriz, linhas, colunas) ? "contém" : "NÃO contém", num);
}
