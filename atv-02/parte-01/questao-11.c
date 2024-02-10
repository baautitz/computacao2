/**
 * 11) Leia o valor do raio de um círculo. Calcule e imprima a área do círculo
 * correspondente. A área do círculo é A = π * raio2 , sendo π = 3.141592
 */
#include <stdio.h>

#define PI 3.141592

void main() {
    float raio, area;

    printf("Digite o raio do círculo: ");
    scanf("%f", &raio);

    area = PI * (raio * raio);
    printf("Área do círculo calculada: %f", area);
}
