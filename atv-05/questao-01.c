/**
 * 1) Escreva um programa que contenha duas variáveis inteiras. Compare seus endereços e exiba o maior endereço.
 */
#include <stdio.h>

void main() {
    int n1, n2;

    n1 > n2 ? printf("N1 (%p) é maior que N2 (%p)", &n1, &n2) : printf("N2 (%p) é maior que N1 (%p)", &n2, &n2);
}
