/**
 * 8) Escreva uma função que receba um valor inteiro positivo N por parâmetro e retorne o ponteiro para um vetor de tamanho N
 * alocado dinamicamente. Se N for negativo ou igual a zero, um ponteiro nulo deverá ser retornado.
 */
#include <stdio.h>
#include <stdlib.h>

int* cria_vetor(int tamanho) {
    if (tamanho <= 0)
        return NULL;

    int* vetor = (int*)malloc(tamanho * sizeof(int));
    return vetor;
}

void main() {
    int tamanho, *vetor;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    vetor = cria_vetor(tamanho);

    if (vetor == NULL) {
        printf("Não foi possível criar o vetor.");
        return;
    }

    for (int i = 0; i < tamanho; i++) {
        printf("Digite o valor %d de %d: ", i + 1, tamanho);
        scanf("%d", &vetor[i]);
    }

    printf("Vetor digitado: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
}
