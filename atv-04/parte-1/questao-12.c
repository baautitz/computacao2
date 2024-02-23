/**
 * 12) Faça um programa que leia um vetor de 10 posições. Verifique se existem valores
 * iguais e os escreva na tela.
 */
#include <stdio.h>

void main() {
    int numeros[10], iguais[10];
    int achou, posIguais = 0;

    for (int i = 0; i < 10; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    for (int i = 0; i < 9; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (numeros[i] != numeros[j])
                continue;

            achou = 0;
            for (int k = 0; k < posIguais; k++) {
                if (numeros[i] != iguais[k])
                    continue;

                achou = 1;
                break;
            }

            if (!achou) {
                iguais[posIguais] = numeros[i];
                posIguais++;
                break;
            }
        }
    }

    printf("\nLista dos número iguais: ");
    for (int i = 0; i < posIguais; i++) {
        printf("%d ", iguais[i]);
    }
}
