/**
 * 6) Escreva um programa que leia do teclado um vetor de 10 posições. Escreva na tela
 * quantos valores pares foram armazenados nesse vetor.
 */
#include <stdio.h>

void main() {
    int numeros[10];

    for (int i = 0; i < 10; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\nNúmeros pares na lista: ");
    for (int i = 0; i < 10; i++) {
        if (numeros[i] & 1)
            continue;

        printf("%d ", numeros[i]);
    }
}
