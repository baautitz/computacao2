/**
 * 6) Faça um programa que receba a altura e o sexo de uma pessoa e calcule e
 * mostre seu peso ideal, utilizando as seguintes fórmulas (em que “h”
 * corresponde à altura):
 *
 *                  Homens: (72,7 * h) – 58
 *                  Mulheres: (62,1 * h) – 44,7
 */
#include <stdio.h>

void main() {
    float altura, pesoIdeal;
    char sexo;

    printf("Digite sua altura (m): ");
    scanf("%f", &altura);

    printf("Digite o sexo (M ou F): ");
    scanf(" %c", &sexo);

    pesoIdeal = sexo == 'M' ? (72.7 * altura) - 58 : (62.1 * altura) - 44, 7;

    printf("Sue peso ideal é: %f kg", pesoIdeal);
}
