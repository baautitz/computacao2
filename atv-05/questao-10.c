/**
 * 10) Considere a seguinte declaração: int a, *b, **c, ***d. Escreva um programa que leia
 * a variável a e calcule e exiba o dobro, o triplo e o quádruplo desse valor utilizando
 * apenas os ponteiros b, c e d. O ponteiro b deve ser usado para calcular o dobro, c, o
 * triplo, e d, o quádruplo.
 */
#include <stdio.h>

void main() {
    int a, *b, **c, ***d;

    b = &a;
    c = &b;
    d = &c;

    printf("Digite o valor: ");
    scanf("%d", &a);

    printf("\nDobro: %d", *b * 2);
    printf("\nTriplo: %d", **c * 3);
    printf("\nQuadruplo: %d", ***d * 4);
}
