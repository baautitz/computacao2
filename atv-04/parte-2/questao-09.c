/**
 * 9) Faça um programa que permita ao usuário entrar com uma matriz de tamanho 3
 * × 3 de números inteiros. Em seguida, calcule um vetor contendo três posições, em
 * que cada posição deverá armazenar a soma dos números de cada coluna da matriz.
 * Exiba na tela esse array. Por exemplo, a matriz:
 *
 *              5   −8  10
 *              1    2  15
 *              25  10   7
 *
 * deverá gerar o vetor
 *
 *              31   4   32
 *
 */
#include <stdio.h>

void main() {
    int matriz[3][3];
    int somaColunas[3] = {0};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            somaColunas[i] += matriz[j][i];
        }
    }

    for (int i = 0; i < 3; i++) {
        printf("%d ", somaColunas[i]);
    }
    printf("\n");
}
