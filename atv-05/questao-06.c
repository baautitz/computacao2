/**
 * 6) Crie um programa que contenha um array contendo cinco elementos inteiros.
 * Leia esse array do teclado e imprima o endereço das posições contendo valores
 * pares
 */
#include <stdio.h>

void main() {
    int num[5];

    for (int i = 0; i < 5; i++) {
        printf("Digite o valor %d de %d: ", i + 1, 5);
        scanf("%d", (num + i));
    }

    printf("\nEnderços com valor de número par: ");
    for (int i = 0; i < 5; i++) {
        if ((num[i] & 1) == 0)
            printf("%p ", num + i);
    }
}
