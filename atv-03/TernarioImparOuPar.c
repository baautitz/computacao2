/**
 * Usando o operador ternário "?" faça um programa em linguagem C que lê um número do teclado e diz se este número é par ou
 * ímpar. Se implementar um programa usando uma função para cada forma de resolver este problema (pelo menos duas formas), o
 * aluno será abonado em 0,5 pontos na média do primeiro bimestre de computação 2.
 */
#include <stdio.h>

void imparOuPar1(int num) {
    (num % 2) == 0 ? printf("Número par!\n") : printf("Número ímpar!\n");
}

void imparOuPar2(int num) {
    (num & 1) == 0 ? printf("Número par!\n") : printf("Número ímpar!\n");
}

void main() {
    int num;

    printf("\nDigite um número: ");
    scanf("%d", &num);

    printf("\nTestando com o 1º método: \n");
    imparOuPar1(num);

    printf("\nTestando com o 2º método: \n");
    imparOuPar2(num);
    printf("\n");
}
