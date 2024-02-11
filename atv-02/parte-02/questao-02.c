/**
 * 2) Faça um programa que leia dois números e mostre o maior deles. Se, por
 * acaso, os dois números forem iguais, imprima a mensagem “Números iguais”.
 */
#include <stdio.h>

void main() {
    int num1, num2;
    printf("Digite o número 1 e 2: ");
    scanf("%d %d", &num1, &num2);

    if (num1 == num2) {
        printf("Numeros iguais!");
        return;
    }

    printf("Maior número: ");
    num1 > num2 ? printf("%d", num1) : printf("%d", num2);
}
