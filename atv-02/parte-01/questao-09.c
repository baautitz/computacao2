/**
 * 9) Leia um ângulo em graus e apresente-o convertido em radianos. A fórmula de
 * conversão é R = G * p/180, sendo G o ângulo em graus e R em radianos e π =
 * 3.141592.
 */
#include <stdio.h>

#define PI 3.141592

void main() {
    float graus, radianos;

    printf("Digite o ângulo em graus: ");
    scanf("%f", &graus);

    radianos = graus * PI / 180;
    printf("Valor convertido em radianos: %f", radianos);
}
