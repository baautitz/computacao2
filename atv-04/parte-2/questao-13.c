/**
 * 13) Faça um programa que leia uma matriz de tamanho 5 × 5. Calcule e imprima a
 * soma dos elementos dessa matriz que não pertencem à diagonal principal nem à
 * diagonal secundária.
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
        for (int j = 0; j < 5; j++) {
            if ((i != j) && (i + j != 4)) {
                soma += matriz[i][j];
            }
        }
    }

    printf("A soma dos elementos que não pertencem à diagonal principal nem à diagonal secundária é: %d\n", soma);
}