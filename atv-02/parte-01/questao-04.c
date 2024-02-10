/**
 * 4) Leia quatro valores do tipo float. Calcule e exiba a média aritmética
 * desses valores.
 */
#include <stdio.h>

void main() {
    float n1, n2, n3, n4;
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    printf("%f", (n1 + n2 + n3 + n4) / 4);
}
