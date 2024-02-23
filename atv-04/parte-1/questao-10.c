/**
 * 10) Faça um programa que preencha um vetor de tamanho 100 com os 100 primeiros
 * números naturais que não são múltiplos de 7. Ao final, imprima esse vetor na tela.
 */
#include <stdio.h>

void main() {
    int i = 0, j = 0, multiplosSete[100];

    while (i != 100) {
        if (j % 7 != 0) {
            multiplosSete[i] = j;
            i++;
        }

        j++;
    }

    printf("Lista dos 100 primeiros NÃO múltiplos de 7: \n\n");
    for (int i = 0; i < 100; i++) {
        printf("%03d ", multiplosSete[i]);

        if ((i + 1) % 10 == 0)
            printf("\n");
    }
}
