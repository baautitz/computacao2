/**
 * 7) Faça um programa que leia um valor em reais e a cotação do dólar. Em
 * seguida, imprima o valor correspondente em dólares.
 */
#include <stdio.h>

void main() {
    float real, cotacao, dolar;

    printf("Digite o valor em real: ");
    scanf("%f", &real);

    printf("Digite o valor da cotação: ");
    scanf("%f", &cotacao);

    dolar = real * cotacao;
    printf("Valor convertido: %f", dolar);
}
