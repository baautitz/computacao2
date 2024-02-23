/**
 * 11) Leia um conjunto de números reais, armazenando-o em vetor. Em seguida, calcule o quadrado de cada elemento desse vetor
 * armazenando esse resultado em outro vetor. Os conjuntos têm, no máximo, 20 elementos. Imprima os dois conjuntos de números.
 */
#include <stdio.h>

void main() {
    double numeros[20], quadradoNumeros[20];

    for (int i = 0; i < 20; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%lf", &numeros[i]);
    }

    for (int i = 0; i < 20; i++) {
        quadradoNumeros[i] = numeros[i] * numeros[i];
    }

    printf("\nLista dos quadrados dos números lidos: \n\n");
    for (int i = 0; i < 20; i++) {
        printf("%lf ", quadradoNumeros[i]);
        if ((i + 1) % 5 == 0)
            printf("\n");
    }
}
