/**
 * 12) Leia a altura e o raio de um cilindro circular e imprima o volume desse
 * cilindro. O volume de um cilindro circular é calculado por meio da seguinte
 * fórmula:
 *
 *                        V = π * raio2 * altura,
 *
 * em que π = 3.141592
 */
#include <stdio.h>

#define PI 3.141592

void main() {
    float altura, raio, volume;

    printf("Digite a altura e raio do cilindro: ");
    scanf("%f %f", &altura, &raio);

    volume = PI * (raio * raio) * altura;
    printf("Volume calculado: %f", volume);
}
