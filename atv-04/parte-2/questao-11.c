/**
 * 11) Faça um programa que leia uma matriz de tamanho 5 × 5. Calcule e imprima a
 * soma dos elementos dessa matriz que estão acima da diagonal principal.
 */
#include <stdio.h>

void main() {
    int matriz[5][5];
    int soma = 0;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            soma += matriz[i][j];
        }
    }

    printf("A soma dos elementos acima da diagonal principal é: %d\n", soma);
}