/**
 * 7) Faça um programa que receba do usuário um vetor X com 10 posições. Em seguida deverão ser impressos o maior e o menor
 * elemento desse vetor.
 */
#include <stdio.h>

void main() {
    int numeros[10], maior, menor;

    for (int i = 0; i < 10; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    maior = menor = numeros[0];

    for (int i = 1; i < 10; i++) {
        if (numeros[i] > maior)
            maior = numeros[i];

        if (numeros[i] < menor)
            menor = numeros[i];
    }

    printf("\nLista de números: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", numeros[i]);
    }

    printf("\nMaior: %d", maior);
    printf("\nMenor: %d", menor);
}
