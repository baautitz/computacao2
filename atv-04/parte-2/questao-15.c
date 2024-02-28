/**
 * 15) Faça um programa que leia uma matriz A de tamanho 5 × 5. Em seguida, calcule
 * e imprima a matriz B, sendo que B = A^2.
 */
#include <stdio.h>

void main() {
    int matrizA[5][5];
    int matrizB[5][5];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &matrizA[i][j]);
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            matrizB[i][j] = 0;
            for (int k = 0; k < 5; k++) {
                matrizB[i][j] += matrizA[i][k] * matrizA[k][j];
            }
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", matrizB[i][j]);
        }
        printf("\n");
    }
}
