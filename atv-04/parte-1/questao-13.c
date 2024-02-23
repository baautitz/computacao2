/**
 * 13) Faça um programa para ler 10 números diferentes a serem armazenados em um vetor. Os números deverão ser armazenados no
 * vetor na ordem em que forem lidos, sendo que, caso o usuário digite um número que já foi digitado anteriormente, o programa
 * deverá pedir a ele para digitar outro número. Note que cada valor digitado pelo usuário deve ser pesquisado no vetor,
 * verificando se ele existe entre os números que já foram fornecidos. Exiba na tela o vetor final que foi digitado.
 */
#include <stdio.h>

void main() {
    int numeros[10], achou;

    int i = 0;
    while (i < 10) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &numeros[i]);

        achou = 0;
        for (int j = 0; j < i; j++) {
            if (numeros[i] == numeros[j]) {
                achou = 1;
                break;
            }
        }

        if (achou) {
            printf("Número já está na lista!\n");
            continue;
        }

        i++;
    }

    printf("Lista de números lidos: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", numeros[i]);
    }
}
