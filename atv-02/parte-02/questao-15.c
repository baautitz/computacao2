/**
 * 15) Faça um programa que leia os coeficientes de uma equação do segundo grau. Em
 * seguida, calcule e mostre as raízes dessa equação, lembrando que as raízes são
 * calculadas como
 *
 *      x = (-b +/- sqrt(∆)) / 2 * a
 *
 * em que
 *      ∆ = b^2 – 4 * a * c
 *      a * x^2 + b * x + c = 0
 * representa uma equação do segundo
 * grau. A variável a tem de ser diferente de zero. Caso seja igual, imprima a mensagem “Não é equação de segundo grau”. Do
 * contrário, imprima:
 *
 * Se ∆ < 0, não existe real. Imprima a mensagem “Não existe raiz”.
 * Se ∆ = 0 existe uma raiz real. Imprima a raiz e a mensagem “Raiz única”.
 * Se ∆ > 0, existem duas raízes reais. Imprima as raízes.
 */
#include <math.h>
#include <stdio.h>

void main() {
    int a, b, c, delta, x1, x2;

    printf("Entre com A, B e C: ");
    scanf("%d %d %d", &a, &b, &c);

    delta = pow(b, 2) - 4 * a * c;

    if (delta < 0) {
        printf("Não existe raiz.");
        return;
    }

    if (delta == 0) {
        x1 = (-b + sqrt(delta)) / (2 * a);
        printf("Raíz única: %d", x1);
        return;
    }

    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);

    printf("Raízes calculadas: \n  X1: %d\n  X2: %d", x1, x2);
}
