/**
 * 12) Usando o comando switch, escreva um programa que leia um inteiro entre 1 e 7
 * e imprima o dia da semana correspondente a esse número. Isto é, domingo, se 1,
 * segunda-feira, se 2, e assim por diante.
 */
#include <stdio.h>
#include <string.h>

void main() {
    int mes;
    char nome[50];

    printf("Digite o número do dia: ");
    scanf("%d", &mes);

    switch (mes) {
        case 1:
            strcpy(nome, "Domingo");
            break;
        case 2:
            strcpy(nome, "Segunda-feira");
            break;
        case 3:
            strcpy(nome, "Terça-feira");
            break;
        case 4:
            strcpy(nome, "Quarta-feira");
            break;
        case 5:
            strcpy(nome, "Quinta-feira");
            break;
        case 6:
            strcpy(nome, "Sexta-feira");
            break;
        case 7:
            strcpy(nome, "Sábado");
            break;
        default:
            printf("Dia inválido!");
            return;
    }

    printf("Dia digitado: %s", nome);
}
