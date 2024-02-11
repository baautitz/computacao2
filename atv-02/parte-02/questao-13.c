/**
 * 13) Faça um programa que mostre ao usuário um menu com quatro opções de operações matemáticas (as operações básicas, por
 * exemplo). O usuário escolhe uma das opções, e o seu programa pede dois valores numéricos e realiza a operação, mostrando o
 * resultado.
 */
#include <stdio.h>

void main() {
    int num1, num2, op;
    float res;

    printf("Digite o número 1 e 2: ");
    scanf("%d %d", &num1, &num2);

    printf("\nDigite a operação:\n  1- Adição\n  2- Subtração\n  3- Multiplicação\n  4- Divisão\n\nOperação: ");
    scanf("%d", &op);

    switch (op) {
        case 1:
            res = num1 + num2;
            break;
        case 2:
            res = num1 - num2;
            break;
        case 3:
            res = num1 * num2;
            break;
        case 4:
            if (num2 == 0) {
                printf("\nNão é possível dividir por zero!");
                return;
            }
            res = num1 / num2;
            break;
        default:
            printf("\nOperação inválida!");
            return;
    }

    printf("\nResultado: %f", res);
}
