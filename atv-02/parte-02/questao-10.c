/**
 * 10) Faça um programa que leia três números inteiros positivos e efetue o cálculo de
 * uma das seguintes médias de acordo com um valor numérico digitado pelo usuário e mostrado na tabela a seguir:
 *
 *          x--------------------------------------------------------------------------x
 *          |  Número digitado  |                   Média                              |
 *          x--------------------------------------------------------------------------x
 *          |        1          |  Geométrica:      x * y * z                          |
 *          |        2          |  Ponderada:       (x + 2 * y + 3 * z) / 6            |
 *          |        3          |  Harmônica:       1 / ((1 / x) + (1 / y) + (1 / z))  |
 *          |        4          |  Aritmética:      (x + y + z) / 3                    |
 *          x--------------------------------------------------------------------------x
 */
#include <stdio.h>

void main() {
    int x, y, z, op;
    float res;

    printf("Digite três números inteiros: ");
    scanf("%d %d %d", &x, &y, &z);

    printf("\nDigite a operação: \n  1- Geométrica\n  2- Ponderada\n  3- Harmônica\n  4- Aritmética\n\nOperação: ");
    scanf("%d", &op);

    switch (op) {
        case 1:
            res = x * y * z;
            break;
        case 2:
            res = (x + 2 * y + 3 * z) / 6.0;
            break;
        case 3:
            res = 3.0 / ((1.0 / x) + (1.0 / y) + (1.0 / z));
            break;
        case 4:
            res = (x + y + z) / 3.0;
            break;
        default:
            printf("Operação inválida!");
            return;
    }

    printf("Média calculada: %f", res);
}
