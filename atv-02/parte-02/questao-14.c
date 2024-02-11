/**
 * 14) Faça um programa para verificar se determinado número inteiro lido é divisível
 * por 3 ou 5, mas não simultaneamente pelos dois.
 */
#include <stdio.h>

void main() {
    int num, div3 = 0, div5 = 0;

    printf("Digite um número: ");
    scanf("%d", &num);

    div3 = num % 3 == 0;
    div5 = num % 5 == 0;

    if (div3 && div5) {
        printf("Mais de um divisor!");
        return;
    }

    if (div3) {
        printf("Divisível por 3.");
        return;
    }

    if (div5) {
        printf("Divisível por 5.");
        return;
    }

    printf("Número inválido!");
}
