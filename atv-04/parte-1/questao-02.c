/**
 * 2) Crie um programa que leia do teclado seis valores inteiros e em seguida mostre na
 * tela os valores lidos na ordem inversa.
 */
#include <stdio.h>

void main() {
    int numeros[6];

    for (int i = 0; i < 6; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\nNúmeros digitados na ordem inversa: ");
    for (int i = 5; i >= 0; i--) {
        printf("%d ", numeros[i]);
    }
}
