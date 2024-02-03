#include <stdio.h>

void main() {
    float numero, fracionado;
    int inteiro;

    printf("Digite um número decimal: ");
    scanf("%f", &numero);

    inteiro = numero;
    fracionado = numero - inteiro;

    printf("Inteiro: %d\nDecimal: %f", inteiro, fracionado);
}