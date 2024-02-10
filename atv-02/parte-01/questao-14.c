/**
 * 14) Faça um programa que converta uma letra maiúscula em letra minúscula. Use
 * a tabela ASCII para isso
 */
#include <stdio.h>

void main() {
    char maiuscula, minuscula;

    printf("Digite uma letra maiúscula: ");
    scanf("%c", &maiuscula);

    minuscula = maiuscula + 32;

    printf("Letra convertida para minúscula: %c", minuscula);
}
