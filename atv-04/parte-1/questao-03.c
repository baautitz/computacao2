/**
 * 3) Faça um programa que leia cinco valores e os armazene em um vetor. Em seguida,
 * mostre todos os valores lidos juntamente com a média dos valores.
 */
#include <stdio.h>

void main() {
    int numeros[5], soma = 0;

    for (int i = 0; i < 5; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\nLista de números: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numeros[i]);
        soma += numeros[i];
    }

    printf("\nMédia dos números: %.2f", (soma / 5.0));
}
