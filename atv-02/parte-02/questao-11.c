/**
 * 11) Faça um programa que informe o mês de acordo com o número digitado pelo
 * usuário. Exemplo: Entrada = 4. Saída = Abril.
 */
#include <stdio.h>
#include <string.h>

void main() {
    int mes;
    char nome[50];

    printf("Digite o número do mês: ");
    scanf("%d", &mes);

    switch (mes) {
        case 1:
            strcpy(nome, "Janeiro");
            break;
        case 2:
            strcpy(nome, "Fevereiro");
            break;
        case 3:
            strcpy(nome, "Março");
            break;
        case 4:
            strcpy(nome, "Abril");
            break;
        case 5:
            strcpy(nome, "Maio");
            break;
        case 6:
            strcpy(nome, "Junho");
            break;
        case 7:
            strcpy(nome, "Julho");
            break;
        case 8:
            strcpy(nome, "Agosto");
            break;
        case 9:
            strcpy(nome, "Setembro");
            break;
        case 10:
            strcpy(nome, "Outubro");
            break;
        case 11:
            strcpy(nome, "Novembro");
            break;
        case 12:
            strcpy(nome, "Dezembro");
            break;
        default:
            printf("Mes inválido!");
            return;
    }

    printf("Mês digitado: %s", nome);
}
