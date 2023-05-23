#include <stdio.h>
#include <stdlib.h>
#include "quick.h"


int partition(int arr[], int esquerda, int direita) {
    int pivo = arr[direita];
    int i = (esquerda - 1);
    int j;

    for (j = esquerda; j <= direita - 1; j++) {
        if (arr[j] <= pivo) {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    int temp = arr[i + 1];
    arr[i + 1] = arr[direita];
    arr[direita] = temp;

    return (i + 1);
}

void quickSort(int arr[], int esquerda, int direita) {
    if (esquerda < direita) {
        int indicePivo = partition(arr, esquerda, direita);

        quickSort(arr, esquerda, indicePivo - 1);
        quickSort(arr, indicePivo + 1, direita);
    }
}

void quicksort(void) {
    int numeros[] = {5, 2, 8, 12, 3};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);
    int i;

    printf("Array original: ");
    for (i = 0; i < tamanho; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    quickSort(numeros, 0, tamanho - 1);

    printf("Array ordenado: ");
    for (i = 0; i < tamanho; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}
