/**
 * 4) Leia uma matriz de tamanho 4 × 4. Em seguida, conte e escreva na tela quantos
 * valores maiores do que 10 ela possui.
 */
#include <stdio.h>

void main() {
    int matriz[4][4];
    int count = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (matriz[i][j] > 10) {
                count++;
            }
        }
    }

    printf("A matriz possui %d valores maiores que 10.\n", count);
}
