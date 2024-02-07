/**
 * 10) Elabore um programa que solicite ao usuário entrar com o valor do dia,
 * mês e ano (inteiros). Em seguida, imprima os valores lidos separados por uma
 * barra (/).
 */
#include <stdio.h>

void main() {
    int dia, mes, ano;
    scanf("%d %d %d", &dia, &mes, &ano);

    printf("%02d/%02d/%d", dia, mes, ano);
}
