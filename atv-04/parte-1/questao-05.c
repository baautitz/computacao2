/**
 * 5) Faça um programa que leia um vetor de oito posições. Em seguida, leia também dois
 * valores X e Y quaisquer correspondentes a duas posições no vetor. Seu programa
 * deverá exibir a soma dos valores encontrados nas respectivas posições X e Y.
 */
#include <stdio.h>

void main() {
    int numeros[8], x, y;

    for (int i = 0; i < 8; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &numeros[i]);

        if (i == 2)
            x = numeros[i];

        if (i == 7)
            y = numeros[i];
    }

    printf("\nLista de números: ");
    for (int i = 0; i < 8; i++) {
        printf("%d ", numeros[i]);
    }

    printf("\nSoma dos números X e Y: %d", (x + y));
}
