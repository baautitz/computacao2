/**
 * 7) Elabore uma função que receba duas strings como parâmetros e verifique se a segunda string ocorre dentro da primeira. Use
 * aritmética de ponteiros para acessar os caracteres das strings.
 */
#include <stdio.h>
#include <string.h>

int existeDentro(char* str1, char* str2) {
    int tamanho1 = strlen(str1);
    int tamanho2 = strlen(str2);

    if (tamanho2 > tamanho1)
        return 0;

    int aux = 0;
    for (int i = 0; i < tamanho1; i++) {
        if (*(str1 + i) != *(str2 + aux)) {
            if (aux != tamanho2)
                aux = 0;

            continue;
        }

        if (aux < tamanho2)
            aux++;
    }

    return aux;
}

void main() {
    char str1[] = "aaaaaaatesteaaaaaaa";
    char str2[] = "teste";

    printf("String 1 contém String 2? %s", existeDentro(str1, str2) > 0 ? "Sim" : "Não");
}
