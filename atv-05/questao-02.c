/**
 * 2) Escreva um programa que contenha duas variáveis inteiras. Leia essas variáveis do
 * teclado. Em seguida, compare seus endereços e exiba o conteúdo do maior endereço.
 */
#include <stdio.h>

void main() {
    int n1, n2;

    printf("Digite N1 e N2: ");
    scanf("%d %d", &n1, &n2);

    &n1 > &n2 ? printf("Maior endereço N1: %d", n1) : printf("Maior endereço N2: %d", n2);
}
