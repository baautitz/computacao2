/**
 * 9) Faça um programa que receba do usuário dois arrays, A e B, com 10 números inteiros cada.
 * Crie um novo array C calculando C = A − B. Mostre na tela os dados do array C.
 */
#include <stdio.h>

void main() {
    int a[10], b[10], c[10];

    printf("Lendo lista A: \n");
    for (int i = 0; i < 10; i++) {
        printf(" - Digite o número %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("\nLendo lista B: \n");
    for (int i = 0; i < 10; i++) {
        printf(" - Digite o número %d: ", i + 1);
        scanf("%d", &b[i]);
    }

    for (int i = 0; i < 10; i++) {
        c[i] = a[i] - b[i];
    }

    printf("\nLista C: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", c[i]);
    }
}
