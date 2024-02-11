/**
 * 5) Faça um programa que leia um número e, caso ele seja positivo, calcule e
 * mostre:
 *
 *           O número digitado ao quadrado.
 *           A raiz quadrada do número digitado.
 */
#include <math.h>
#include <stdio.h>

void main() {
    int num;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    if (num < 0)
        return;

    printf("Número ao quadrado: %d\n", num * num);
    printf("Raíz quadrado do número: %lf", sqrt(num));
}
