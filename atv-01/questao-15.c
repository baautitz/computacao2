/**
 * 15) Escreva um programa que leia três variáveis: char, int e float. Em
 * seguida, imprimaas de três maneiras diferentes: separadas por espaços, por
 * uma tabulação horizontal e uma em cada linha. Use um único comando printf()
 * para cada operação de escrita das três variáveis
 */
#include <stdio.h>

void main() {
    char c;
    int i;
    float f;

    scanf("%c %i %f", &c, &i, &f);

    printf("%c %i %f\n", c, i, f);
    printf("%c\t%i\t%f\n", c, i, f);
    printf("%c\n%i\n%f\n", c, i, f);
}
