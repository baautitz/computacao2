/**
 * 14) Faça um programa que leia três caracteres do tipo char e depois os
 * imprima um em cada linha. Use um único comando printf() para isso.
 */
#include <stdio.h>

void main() {
    char car1, car2, car3;
    scanf("%c %c %c", &car1, &car2, &car3);

    printf("%c\n%c\n%c", car1, car2, car3);
}
