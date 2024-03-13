/**
 * 9) Crie uma função que receba como parâmetro um vetor e o imprima. Não utilize
 * índices para percorrer o vetor, apenas aritmética de ponteiros.
 */
#include <stdio.h>

void printaVetor(int* vet, int len) {
    for (int i = 0; i < len; i++) {
        printf("%d ", *(vet + i));
    }
}

void main() {
    int vet[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printaVetor(vet, 10);
}
