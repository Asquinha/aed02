#include <stdio.h>
#include <stdlib.h>
#include "insercao.h"


void ordenacaoPorInsercao(int arr[], int tamanho) {
    int i, chave, j;
    for (i = 1; i < tamanho; i++) {
        chave = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > chave) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = chave;
    }
}

void insercao(void) {
    int numeros[] = {5, 2, 8, 12, 3};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);
    int i;

    printf("Array original: ");
    for (i = 0; i < tamanho; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    ordenacaoPorInsercao(numeros, tamanho);

    printf("Array ordenado: ");
    for (i = 0; i < tamanho; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}
