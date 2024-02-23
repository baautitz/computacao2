/**
 * 14) O código de César é uma das técnicas de criptografia mais simples e conhecidas.
 * É um tipo de substituição no qual cada letra do texto é substituída por outra,
 * que se apresenta n posições após ela no alfabeto. Por exemplo, com uma troca de
 * três posições, a letra A seria substituída por D, B se tornaria E e assim por diante.
 * Escreva um programa que faça uso desse código de César para três posições. Entre
 * com uma string e imprima a string codificada. Exemplo:
 *
 *      String: a ligeira raposa marrom saltou sobre o cachorro cansado
 *      Nova string: d oljhlud udsrvd pduurp vdowrx vreuh r fdfkruur fdqvdgr
 */
#include <stdio.h>
#include <string.h>

#define TAM_TEXTO 100
#define POSICOES_CESAR 3

int textoValido(char* texto) {
    int valido = 1;
    for (int i = 0; i < strlen(texto); i++) {
        if ((texto[i] >= 97 && texto[i] <= 122) || texto[i] == '\0' || texto[i] == ' ' || texto[i] == '\n')
            continue;

        valido = 0;
        break;
    }

    return valido;
}

char getCharCodificado(char c) {
    char letra;

    if (c == '\0' || c == ' ' || c == '\n') {
        letra = c;
    } else {
        letra = c + POSICOES_CESAR;

        if (letra >= 123) {
            letra = letra - 123 + 97;
        }
    }

    return letra;
}

void main() {
    char texto[TAM_TEXTO], codificado[TAM_TEXTO];
    int valido = 0;

    while (!valido) {
        printf("\nDigite o texto (apenas letras minúsculas): ");
        fgets(texto, TAM_TEXTO, stdin);

        valido = textoValido(texto);

        if (!valido)
            printf("Texto inválido! Insira apenas letras minúsculas.\n");
    }

    for (int i = 0; i <= strlen(texto); i++)
        codificado[i] = getCharCodificado(texto[i]);

    printf("%s", codificado);
}
