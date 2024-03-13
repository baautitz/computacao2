/**
 * 9) Crie uma função que receba uma string e retorne o ponteiro para essa string invertida.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* inverteString(char* string) {
    int tamanhoString = strlen(string);
    char* invertida = (char*)malloc((tamanhoString + 1) * sizeof(char));

    if (invertida == NULL) {
        return NULL;
    }

    for (int i = tamanhoString; i >= 0; i--) {
        invertida[tamanhoString - i] = string[i - 1];
    }

    invertida[tamanhoString] = '\0';

    return invertida;
}

void main() {
    char teste[] = "estou com muito sono";
    char* resultado;

    resultado = inverteString(teste);
    if (resultado == NULL) {
        printf("Impossível continuar, pois não foi possível alocar espaço na memória!\n");
        return;
    }

    printf("String Normal: %s", teste);
    printf("\nString invertida: %s", resultado);

    free(resultado);
}
