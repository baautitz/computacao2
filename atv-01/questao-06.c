/**
 * 6) Faça um programa que leia um valor do tipo double e depois o imprima na
 * forma de notação científica.
 */
#include <stdio.h>

void main() {
    double numero;
    scanf("%lf", &numero);

    printf("%E", numero);
}
