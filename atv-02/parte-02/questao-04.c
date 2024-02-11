/**
 * 4) Faça um programa que leia o salário de um trabalhador e o valor da
 * prestação de um empréstimo. Se a prestação:
 *
 *       For maior que 20% do salário, imprima: “Empréstimo não concedido.”
 *       Caso contrário, imprima: “Empréstimo concedido.”
 */
#include <stdio.h>

void main() {
    float salario, emprestimo;

    printf("Digite o salário: ");
    scanf("%f", &salario);

    printf("Digite o valor do empréstimo: ");
    scanf("%f", &emprestimo);

    emprestimo > salario * 0.2 ? printf("Empréstimo não concedido.")
                               : printf("Empréstimo concedido.");
}
