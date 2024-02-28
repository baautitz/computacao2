/**
 * 1) Faça um programa que leia uma matriz de tamanho 3 × 3. Imprima na tela o
 * menor valor contido nessa matriz.
 */
#include <stdio.h>

void main() {
    int matriz[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    int menor = matriz[0][0];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] < menor) {
                menor = matriz[i][j];
            }
        }
    }

    printf("%d\n", menor);
}
