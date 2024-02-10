/**
 *  19) Elabore um programa que leia dois números inteiros e exiba o resultado
 * das operações de “ou exclusivo”, “ou bit a bit” e “e bit a bit” entre
 * eles.
 */
#include <stdio.h>

void main() {
    int num1, num2;

    printf("Digite o num1 e num2: ");
    scanf("%d %d", &num1, &num2);

    printf("Ou exclusivo: %d\n", num1 ^ num2);
    printf("Ou bit a bit: %d\n", num1 | num2);
    printf("E bit a bit: %d\n", num1 & num2);
}
