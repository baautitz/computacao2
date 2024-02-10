/**
 * 18) Elabore um programa que leia dois números inteiros e exiba o
 * deslocamento, à esquerda e à direita, do primeiro número pelo segundo.
 */
#include <stdio.h>

void main() {
    int num1, num2;

    printf("Digite o num1 e num2: ");
    scanf("%d %d", &num1, &num2);

    printf("Esquerda %d, Direita: %d", num1 >> num2, num1 << num2);
}
