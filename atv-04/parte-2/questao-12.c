/**
 * 12) Faça um programa que leia uma matriz de tamanho 6 × 6. Calcule e imprima a
 * soma dos elementos dessa matriz que estão abaixo da diagonal principal.
 */
#include <stdio.h>

void main() {
    int matriz[6][6];
    int soma = 0;

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 1; i < 6; i++) {
        for (int j = 0; j < i; j++) {
            soma += matriz[i][j];
        }
    }

    printf("A soma dos elementos abaixo da diagonal principal é: %d\n", soma);
}