/**
 * 7) Faça uma função que retorne o ponteiro para um vetor de N elementos inteiros
 * alocados dinamicamente. O array deve ser preenchido com valores de 0 a N − 1.
 */
#include <stdio.h>
#include <stdlib.h>

int* cria_vetor(int tamanho) {
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
