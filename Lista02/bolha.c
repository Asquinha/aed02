#include <stdio.h>
#include <stdlib.h>
#include "bolha.h"

void ordenacaoPorBolha(int arr[], int tamanho) {
    int i, j, temp;
    for (i = 0; i < tamanho - 1; i++) {
        for (j = 0; j < tamanho - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void bolha(void) {
    int numeros[] = {5, 2, 8, 12, 3};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);
    int i;

    printf("Array original: ");
    for (i = 0; i < tamanho; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    ordenacaoPorBolha(numeros, tamanho);

    printf("Array ordenado: ");
    for (i = 0; i < tamanho; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}
