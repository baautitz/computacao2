/**
 * 1) Faça um programa que leia dois números e mostre qual deles é o maior.
 */
#include <stdio.h>

void main() {
    int num1, num2;
    printf("Digite o número 1 e 2: ");
    scanf("%d %d", &num1, &num2);

    printf("Maior número: ");
    num1 > num2 ? printf("%d", num1) : printf("%d", num2);
}
