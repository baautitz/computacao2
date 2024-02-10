/**
 * 1) Faça um programa que leia um número inteiro e retorne seu antecessor e seu
 * sucessor.
 */

#include <stdio.h>

void main() {
    int num;
    scanf("%d", &num);

    printf("%d %d", num - 1, num + 1);
}
