/**
 * 8) Faça um programa que preencha um vetor com 10 números reais. Em seguida,
 * calcule e mostre na tela a quantidade de números negativos e a soma dos números
 * positivos desse vetor.
 */
#include <stdio.h>

void main() {
    float numeros[10], somaPositivos = 0;
    int qtdeNegativos = 0;

    for (int i = 0; i < 10; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%f", &numeros[i]);
    }

    for (int i = 0; i < 10; i++) {
        if (numeros[i] < 0)
            qtdeNegativos++;

        if (numeros[i] >= 0)
            somaPositivos += numeros[i];
    }

    printf("\nLista de números: ");
    for (int i = 0; i < 10; i++) {
        printf("%f ", numeros[i]);
    }

    printf("\nQuantidade de negativos: %d", qtdeNegativos);
    printf("\nSoma dos positivos: %f", somaPositivos);
}
