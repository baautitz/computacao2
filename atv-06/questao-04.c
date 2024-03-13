/**
 *  4) Elabore um programa que leia do usuário o tamanho de um vetor a ser lido. Em
 * seguida, faça a alocação dinâmica desse vetor. Por fim, leia o vetor do usuário e o
 * imprima.
 */
#include <stdio.h>
#include <stdlib.h>

int* vetor_cria(int tamanho) {
    int* i = (int*)malloc(tamanho * sizeof(int));

    return i;
}

void vetor_libera(int* i) {
    free(i);
}

void main() {
    unsigned int tamanho;
    int* vetor;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);
    getchar();

    vetor = vetor_cria(tamanho);

    for (int i = 0; i < tamanho; i++) {
        printf("Digite o valor %d de %d: ", i + 1, tamanho);
        scanf("%d", &(vetor[i]));
    }

    printf("\nVetor: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }

    vetor_libera(vetor);
}
