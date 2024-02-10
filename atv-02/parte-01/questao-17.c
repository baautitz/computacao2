/**
 * 17) Escreva um programa que leia um número inteiro e mostre o seu complemento
 * bit a bit.
 */
#include <stdio.h>

void main() {
    int num, bitbit;
    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    bitbit = ~num;

    printf("Valor bit a bit: %d", bitbit);
}
