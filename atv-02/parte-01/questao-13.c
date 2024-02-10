/**
 * 13) Sejam a e b os catetos de um triângulo cuja hipotenusa h é obtida pela
 * equação:
 *
 *                   h = sqrt(a^2 + b^2)
 *
 * Faça um programa que leia os valores de a e b, e calcule o valor da
 * hipotenusa através da fórmula dada. Imprima o resultado.
 */
#include <math.h>
#include <stdio.h>

void main() {
    double a, b, hip;

    printf("Defina os valores de A e B: ");
    scanf("%lf %lf", &a, &b);

    hip = sqrt(pow(a, 2) + pow(b, 2));

    printf("Valor da hipotenusa calculado: %lf", hip);
}
