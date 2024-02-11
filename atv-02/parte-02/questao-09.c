/**
 * 9) Faça um programa que leia a altura e o peso de uma pessoa. De acordo com a
 * tabela a seguir, verifique e mostre qual a classificação dessa pessoa.
 *
 *    x-------------------------------------------------------------------------------x
 *    |---------------------|                          Peso                           |
 *    |       Altura        |---------------------------------------------------------|
 *    |---------------------|   Até 60   |  Entre 60-90 (inclusive) |    Acima de 90  |
 *    | Menor do que 1,20   |       A    |              D           |         G       |
 *    | 1,20-1,70           |       B    |              E           |         H       |
 *    | Maior do que 1,70   |       C    |              F           |         I       |
 *    x-------------------------------------------------------------------------------x
 *
 */
#include <stdio.h>

void main() {
    float altura, peso;
    char class;

    printf("Digite a altura (m) e o peso (kg): ");
    scanf("%f %f", &altura, &peso);

    if (altura < 1.20) {
        if (peso < 60) {
            class = 'A';
        } else if (peso >= 60 && peso <= 90) {
            class = 'D';
        } else {
            class = 'G';
        }
    } else if (altura >= 1.20 && altura <= 1.70) {
        if (peso < 60) {
            class = 'B';
        } else if (peso >= 60 && peso <= 90) {
            class = 'E';
        } else {
            class = 'H';
        }
    } else {
        if (peso < 60) {
            class = 'C';
        } else if (peso >= 60 && peso <= 90) {
            class = 'F';
        } else {
            class = 'I';
        }
    }

    printf("Sua classificação é: %c", class);
}
