/**
 * 5) Crie um programa que contenha um array de inteiros contendo cinco elementos.
 * Utilizando apenas aritmética de ponteiros, leia esse array do teclado e imprima o
 * dobro de cada valor lido
 */
#include <stdio.h>

void main() {
    int num[5];

    for (int i = 0; i < 5; i++) {
        printf("Digite o valor %d de %d: ", i + 1, 5);
        scanf("%d", (num + i));
    }

    printf("\nValores dobrados: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(num + i) * 2);
    }
}
