/**
 * 8) Leia um valor que represente uma temperatura em graus Celsius e
 * apresente-a convertida em graus Fahrenheit. A fórmula de conversão é: F = C *
 * (9.0/5.0) + 32.0, sendo F a temperatura em Fahrenheit e C a temperatura em
 * Celsius
 */
#include <stdio.h>

void main() {
    float celsius, fahrenheit;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = celsius * (9.0 / 5.0) + 32.0;
    printf("Valor convertido em Fahrenheit: %f", fahrenheit);
}
