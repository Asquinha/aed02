#include <stdio.h>
#include <stdlib.h>
#include "ordenacao.h"


void ordenacaoPorSelecao(int arr[], int tamanho) {
    int i, j, indiceMenor, temp;
    for (i = 0; i < tamanho - 1; i++) {
        indiceMenor = i;
        for (j = i + 1; j < tamanho; j++) {
            if (arr[j] < arr[indiceMenor]) {
                indiceMenor = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[indiceMenor];
        arr[indiceMenor] = temp;
    }
}

void ordenacao(void) {
    int numeros[] = {5, 2, 8, 12, 3};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);
    int i;

    printf("Array original: ");
    for (i = 0; i < tamanho; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    ordenacaoPorSelecao(numeros, tamanho);

    printf("Array ordenado: ");
    for (i = 0; i < tamanho; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}
