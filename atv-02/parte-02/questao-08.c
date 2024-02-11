/**
 * 8) Escreva um programa que, dada a idade de um nadador, o classifique em uma
 * das seguintes categorias:
 *
 *              x------------------------------------x
 *              | Categoria    |  Idade              |
 *              |--------------|---------------------|
 *              | Infantil A   |  5-7                |
 *              | Infantil B   |  8-10               |
 *              | Juvenil A    |  11-13              |
 *              | Juvenil B    |  14-17              |
 *              | Sênior       |  Maiores de 18 anos |
 *              x------------------------------------x
 *
 */
#include <stdio.h>
#include <string.h>

void main() {
    int idade;
    char categoria[50];

    printf("Digite a idade do nadador: ");
    scanf("%d", &idade);

    if (idade < 5) {
        printf("Não pode nadar!");
        return;
    }

    if (idade >= 5 && idade <= 7) {
        strcpy(categoria, "Infantil A");
    } else if (idade >= 8 && idade <= 10) {
        strcpy(categoria, "Infantil B");
    } else if (idade >= 11 && idade <= 13) {
        strcpy(categoria, "Juvenil A");
    } else if (idade >= 14 && idade <= 17) {
        strcpy(categoria, "Juvenil B");
    } else {
        strcpy(categoria, "Sênior");
    }

    printf("Categoria: %s", categoria);
}
