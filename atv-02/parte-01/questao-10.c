/**
 * 10) A importância de R$780.000,00 será dividida entre três ganhadores de um
 * concurso, sendo que: i. O primeiro ganhador receberá 46% do total. ii. O
 * segundo receberá 32% do total. iii. O terceiro receberá o restante. Calcule e
 * imprima a quantia recebida por cada um dos ganhadores.
 */
#include <stdio.h>

void main() {
    float g1, g2, g3, premio = 780000;

    g1 = premio * 0.46;
    g2 = premio * 0.32;
    g3 = premio * 0.22;

    printf("Ganhador 1: %.2f, Ganhador 2: %.2f, Ganhador 3: %.2f", g1, g2, g3);
}
