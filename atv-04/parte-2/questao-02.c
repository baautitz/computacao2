/**
 * 2) Faça um programa que leia uma matriz de tamanho 4 × 4. Imprima na tela o
 * maior valor contido nessa matriz e a sua localização (linha e coluna).
 */
#include <stdio.h>

void main() {
    int matriz[4][4];

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    int maior = matriz[0][0];
    int linhaMaior = 0, colunaMaior = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
                linhaMaior = i;
                colunaMaior = j;
            }
        }
    }

    printf("O maior valor da matriz é: %d\n", maior);
    printf("Localização: linha %d, coluna %d\n", linhaMaior + 1, colunaMaior + 1);
}
