/**
 * 6) Leia uma matriz de tamanho 3 × 3. Em seguida, imprima a soma dos valores
 * contidos em sua diagonal principal.
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
        soma += matriz[i][i];
    }

    printf("A soma da diagonal principal é: %d\n", soma);
}
