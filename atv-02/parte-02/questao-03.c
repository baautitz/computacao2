/**
 * 3) Faça um programa que leia um número inteiro e verifique se esse número é
 * par ou ímpar.
 */
#include <stdio.h>

void main() {
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    num % 2 == 0 ? printf("Número par!") : printf("Número ímpar!");
}
