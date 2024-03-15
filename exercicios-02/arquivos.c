#include <stdio.h>
#include <string.h>

int main() {
    FILE* arq;
    char string[100];
    int i;

    arq = fopen("arquivo.txt", "w");
    if (arq == NULL) {
        printf("Erro na abertura do arquivo");
        return 1;
    }

    printf("Entre com a string a ser gravada no arquivo: ");
    fgets(string, 100, stdin);

    for (i = 0; i < strlen(string); i++) {
        fputc(string[i], arq);
    }

    fclose(arq);

    return 0;
}