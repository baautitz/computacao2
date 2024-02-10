/**
 * 15) Faça um programa para ler um número inteiro positivo de três dígitos. Em
 * seguida, calcule e mostre o número formado pelos dígitos invertidos do número
 * lido. Exemplo: Número lido = 123 Número gerado = 321
 */
#include <stdio.h>

void main() {
    int num, x;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    while (num != 0) {
        x = num % 10;
        printf("%d", x);
        num /= 10;
    }
}
