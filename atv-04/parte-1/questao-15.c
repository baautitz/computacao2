/**
 * 15) Leia um vetor com 10 números de ponto flutuante. Em seguida, ordene os elementos desse vetor e imprima o vetor na tela.
 */
#include <stdio.h>

void main() {
    float numeros[10];

    for (int i = 0; i < 10; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 9 - i; j++) {
            if (numeros[j] > numeros[j + 1]) {
                float temp = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp;
            }
        }
    }

    printf("\nVetor ordenado:\n");
    for (int i = 0; i < 10; i++) {
        printf("%.2f ", numeros[i]);
    }
}
