/**
 * 14) Faça um programa que calcule o desvio-padrão d de um vetor V contendo n números.
 * Considere n = 10.
 * O vetor v deve ser lido do teclado.
 */
#include <stdio.h>

#define TAM_NUMEROS 10

void main() {
    int numeros[TAM_NUMEROS], soma = 0;
    float media, desvioPardrao;

    for (int i = 0; i < TAM_NUMEROS; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    for (int i = 0; i < TAM_NUMEROS; i++) {
        soma += numeros[i];
    }

    media = soma / TAM_NUMEROS;

    soma = 0;
    for (int i = 0; i < TAM_NUMEROS; i++) {
        soma += (numeros[i] - media) * (numeros[i] - media);
    }

    desvioPardrao = soma / (TAM_NUMEROS - 1);

    printf("Desvio Padrão: %f", desvioPardrao);
}
