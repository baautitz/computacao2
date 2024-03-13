/**
 * 8) Crie uma função que receba dois parâmetros: um vetor e um valor do mesmo tipo
 * do vetor. A função deverá preencher os elementos de vetor com esse valor. Não
 * utilize índices para percorrer o vetor, apenas aritmética de ponteiros.
 */
#include <stdio.h>

void preencheVetor(int num, int* vet, int vetSize) {
    for (int i = 0; i < vetSize; i++) {
        *(vet + i) = num;
    }
}

void main() {
    int num, vet[10];

    printf("Digite o valor: ");
    scanf("%d", &num);

    preencheVetor(num, vet, 10);

    printf("\nVetor: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", *(vet + i));
    }
}
