/**
 * 14) Escreva uma função que receba como parâmetro dois vetores, A e B, de tamanho N cada. A função deve retornar o ponteiro
 * para um vetor C de tamanho N alocado dinamicamente, em que C[i] = A[i] + B[i].
 */
#include <stdio.h>
#include <stdlib.h>

void leia_vetor(int* vetor, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf(" - Digite o valor %d de %d: ", i + 1, tamanho);
        scanf("%d", &vetor[i]);
    }
}

int* cria_vetor(int tamanho) {
    int* vetor = malloc(tamanho * sizeof(int));
    if (vetor == NULL)
        return NULL;

    return vetor;
}

int* soma_vetor(int* vet1, int* vet2, int tamanho) {
    int* vetor = cria_vetor(tamanho);
    if (vetor == NULL)
        return NULL;

    for (int i = 0; i < tamanho; i++) {
        vetor[i] = vet1[i] + vet2[i];
    }

    return vetor;
}

void main() {
    int tamanho;
    int *vet1, *vet2, *vetResultado;

    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &tamanho);

    vet1 = cria_vetor(tamanho);
    vet2 = cria_vetor(tamanho);

    if (vet1 == NULL || vet2 == NULL) {
        printf("Não foi possível alocar os vetores.");
        return;
    }

    printf("Lendo vetor 1:\n");
    leia_vetor(vet1, tamanho);

    printf("Lendo vetor 2:\n");
    leia_vetor(vet2, tamanho);

    vetResultado = soma_vetor(vet1, vet2, tamanho);

    if (vetResultado == NULL) {
        printf("Não foi possível alocar o vetor resultado.");
        return;
    }

    printf("Vetor resultado:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetResultado[i]);
    }

    free(vet1);
    free(vet2);
    free(vetResultado);
}
