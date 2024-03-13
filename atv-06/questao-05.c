/**
 * 5) Faça um programa que leia um valor inteiro N não negativo. Se o valor de N for
 * inválido, o usuário deverá digitar outro até que ele seja válido (ou seja, positivo).
 * Em seguida, leia um vetor V contendo N posições de inteiros, em que cada valor
 * deverá ser maior ou igual a 2. Esse vetor deverá ser alocado dinamicamente.
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
    int tamanho;
    int* vetor;

    do {
        printf("Digite o tamanho do vetor: ");
        scanf("%d", &tamanho);

        if (tamanho <= 0)
            printf("O tamanho deve ser um número positivo!\n\n");
    } while (tamanho <= 0);

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
