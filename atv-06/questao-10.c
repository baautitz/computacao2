/**
 * 10) Escreva uma função que receba um valor inteiro positivo N por parâmetro e retorne o ponteiro para um vetor de tamanho
 * N alocado dinamicamente. Esse vetor deverá ter os seus elementos preenchidos com certo valor, também passado por parâmetro.
 * Se N for negativo ou igual a zero, um ponteiro nulo deverá ser retornado.
 */
#include <stdio.h>
#include <stdlib.h>

int* cria_vetor(int tamanho, int numero) {
    if (tamanho <= 0)
        return NULL;

    int* vetor = (int*)malloc(tamanho * sizeof(int));
    if (vetor == NULL) {
        return NULL;
    }

    for (int i = 0; i < tamanho; i++) {
        vetor[i] = numero;
    }

    return vetor;
}

void main() {
    int tamanho, numero, *vetor;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    printf("Digite o numero no vetor: ");
    scanf("%d", &numero);

    vetor = cria_vetor(tamanho, numero);

    if (vetor == NULL) {
        printf("Não foi possível criar o vetor.");
        return;
    }

    printf("Vetor: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
}
