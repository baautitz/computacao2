/**
 * 14) Faça um programa que leia uma matriz de tamanho 5 × 5. Calcule a soma dos
 * elementos dessa matriz que pertencem à diagonal principal ou secundária. Calcule
 * também a soma dos elementos que não pertencem a nenhuma das duas diagonais.
 * Imprima na tela a diferença entre os dois valores.
 */
#include <stdio.h>

void main() {
    int matriz[5][5];
    int somaDiagonalPrincipal = 0;
    int somaDiagonalSecundaria = 0;
    int somaOutrosElementos = 0;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 5; i++) {
        somaDiagonalPrincipal += matriz[i][i];
    }

    for (int i = 0; i < 5; i++) {
        somaDiagonalSecundaria += matriz[i][4 - i];
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i != j && i + j != 4) {
                somaOutrosElementos += matriz[i][j];
            }
        }
    }

    int diferenca = somaDiagonalPrincipal + somaDiagonalSecundaria - somaOutrosElementos;
    printf("A diferença entre a soma dos elementos das diagonais e a soma dos outros elementos é: %d\n", diferenca);
}
