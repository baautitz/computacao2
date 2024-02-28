/**
 * 10) Leia uma matriz de tamanho 10 × 3 com as notas de 10 alunos em três provas. Em
 * seguida, calcule e escreva na tela o número de alunos cuja pior nota foi na prova 1,
 * o número de alunos cuja pior nota foi na prova 2 e o número de alunos cuja pior
 * nota foi na prova 3.
 */
#include <stdio.h>

void main() {
    int notas[10][3];
    int pioresProvas[3] = {0};

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &notas[i][j]);
        }
    }

    for (int i = 0; i < 10; i++) {
        int piorNota = notas[i][0];
        int indicePiorProva = 0;
        for (int j = 1; j < 3; j++) {
            if (notas[i][j] < piorNota) {
                piorNota = notas[i][j];
                indicePiorProva = j;
            }
        }
        pioresProvas[indicePiorProva]++;
    }

    for (int i = 0; i < 3; i++) {
        printf("Número de alunos com pior nota na prova %d: %d\n", i + 1, pioresProvas[i]);
    }
}
