/**
 * 9) Faça um programa que leia dois valores do tipo float. Use um único comando
 * de leitura para isso. Em seguida, imprima os valores lidos na ordem inversa
 * em que eles foram lidos.
 */
#include <stdio.h>

void main() {
    float num1, num2;
    scanf("%f %f", &num1, &num2);

    printf("%f %f", num2, num1);
}
