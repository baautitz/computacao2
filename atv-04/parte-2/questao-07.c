/**
 * 7) Leia uma matriz de tamanho 3 × 3. Em seguida, imprima a soma dos valores
 * contidos em sua diagonal secundária.
 */
#include <stdio.h>

void main() {
    int matriz[3][3];
    int soma = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        soma += matriz[i][2 - i];
    }

    printf("A soma da diagonal secundária é: %d\n", soma);
}