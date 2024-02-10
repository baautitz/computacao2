/**
 * 6) Leia uma velocidade em km/h (quilômetros por hora) e apresente convertida
 * em m/s (metros por segundo). A fórmula de conversão é M = K/3,6, sendo K a
 * velocidade em km/h e M em m/s.
 */
#include <stdio.h>

void main() {
    float quilometros, metros;

    scanf("%f", &quilometros);
    metros = quilometros / 3.6;

    printf("%f", metros);
}
