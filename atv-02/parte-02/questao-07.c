/**
 * 7) Uma empresa vende o mesmo produto para quatro diferentes estados. Cada
 * estado possui uma taxa diferente de imposto sobre o produto. Faça um programa
 * em que o usuário entre com o valor e o estado de destino do produto e o
 * programa retorne o preço final do produto acrescido do imposto do estado em
 * que ele será vendido. Se o estado digitado não for válido, mostrará uma
 * mensagem de erro.
 *
 *              Estado     MG    SP     RJ     MS
 *              Imposto    7%    12%    15%    8%
 */
#include <stdio.h>
#include <string.h>

void main() {
    float valor, valorFinal;
    char estado[3];

    printf("Digite o valor do produto: ");
    scanf("%f", &valor);

    printf("Digite o seu estado: ");
    scanf("%s", &estado);

    if (strcmp("MG", estado) == 0) {
        valorFinal = valor + (valor * 0.07);
    } else if (strcmp("SP", estado) == 0) {
        valorFinal = valor + (valor * 0.12);
    } else if (strcmp("SP", estado) == 0) {
        valorFinal = valor + (valor * 0.15);
    } else if (strcmp("SP", estado) == 0) {
        valorFinal = valor + (valor * 0.08);
    } else {
        printf("Estado inválido!");
        return;
    }

    printf("Valor final calculado: %f", valorFinal);
}
