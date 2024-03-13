/**
 * 3) Crie uma estrutura chamada Cadastro. Essa estrutura deve conter o nome, a idade e o endereço de uma pessoa. Agora, escreva
 * uma função que receba um inteiro e retorne o ponteiro para um vetor de tamanho N, alocado dinamicamente, dessa estrutura.
 * Solicite também que o usuário digite os dados desse vetor dentro da função.
 */
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[64], endereco[256];
    int idade;
} Cadastro;

Cadastro* cadastro_vetor_cria(int tamanho) {
    Cadastro* cadastro = (Cadastro*)malloc(tamanho * sizeof(Cadastro));

    return cadastro;
}

void cadastro_vetor_libera(Cadastro* cadastro) {
    free(cadastro);
}

void main() {
    unsigned int tamanho;
    Cadastro* cadastros;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);
    getchar();

    cadastros = cadastro_vetor_cria(tamanho);

    for (int i = 0; i < tamanho; i++) {
        printf("\nCadastro %d de %d:\n", i + 1, tamanho);
        printf(" - Nome: ");
        fgets(cadastros[i].nome, 64, stdin);

        printf(" - Idade: ");
        scanf("%d", &(cadastros[i].idade));
        getchar();

        printf(" - Endereço: ");
        fgets(cadastros[i].endereco, 256, stdin);
    }

    printf("\n\nLista de cadastros: \n");
    for (int i = 0; i < tamanho; i++) {
        printf("Cadastro %d:\n", i + 1);
        printf(" - Nome: %s", cadastros[i].nome);
        printf(" - Idade: %d\n", cadastros[i].idade);
        printf(" - Endereço: %s\n", cadastros[i].endereco);
    }

    cadastro_vetor_libera(cadastros);
}
