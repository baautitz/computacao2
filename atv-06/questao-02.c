/**
 * 2) Crie uma estrutura representando um aluno de uma disciplina. Essa estrutura
 * deve conter o número de matrícula do aluno, seu nome e as notas de três provas.
 * Escreva um programa que mostre o tamanho em byte dessa estrutura.
 */
#include <stdio.h>

struct aluno {
    int matricula;
    char nome[50];
    int notas[3];
};

void main() {
    printf("Tamanho struct aluno: %d", sizeof(struct aluno));
}
