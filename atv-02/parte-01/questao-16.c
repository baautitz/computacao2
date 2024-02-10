/**
 * 16) Escreva um programa que leia um número inteiro e mostre a multiplicação e
 * a divisão desse número por dois (utilize os operadores de deslocamento de
 * bits).
 */
#include <stdio.h>

void main() {
    int num, mult, div;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    mult = num << 1;
    div = num >> 1;

    printf("Multiplicação: %d\nDivisão: %d", mult, div);
}
