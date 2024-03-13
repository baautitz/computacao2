/**
 * 17) Escreva uma função que receba como parâmetro uma matriz A contendo N linhas
 * e N colunas. A função deve retornar o ponteiro para um vetor B de tamanho N
 * alocado dinamicamente, em que cada posição de B é a soma dos números daquela
 * coluna da matriz.
 */
#include <stdio.h>
#include <stdlib.h>

void leia_matriz(int** matriz, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            printf(" - Digite o valor: ");
            scanf("%d", &matriz[i][j]);
        }
    }
}

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

int* soma_coluna(int** matriz, int tamanho) {
    int** matriz = cria_matriz(tamanho);
    if (matriz == NULL)
        return NULL;

    for (int i = 0; i < tamanho; i++) {
        int soma = 0;
        for (int j = 0; j < tamanho; j++) {
            soma += matriz[j][i];
        }
        matriz[i] = soma;
    }

    return matriz;
}

void main() {
    int tamanho;
    int **matriz, **matResultado;

    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &tamanho);

    matriz = cria_matriz(tamanho);

    if (matriz == NULL) {
        printf("Não foi possível alocar a matriz.");
        return;
    }

    printf("Lendo matriz 1:\n");
    leia_matriz(matriz, tamanho);

    matResultado = soma_coluna(matriz, tamanho);

    if (matResultado == NULL) {
        printf("Não foi possível alocar a matriz resultado.");
        return;
    }

    printf("Matriz resultado:\n");
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            printf("%d ", matResultado[i][j]);
        }
    }

    free(matriz);
    free(matResultado);
}