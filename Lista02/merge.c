#include <stdio.h>
#include <stdlib.h>
#include "merge.h"


void merge(int arr[], int esquerda, int meio, int direita) {
    int i, j, k;
    int tamanhoEsquerda = meio - esquerda + 1;
    int tamanhoDireita = direita - meio;

    int L[tamanhoEsquerda], R[tamanhoDireita];

    for (i = 0; i < tamanhoEsquerda; i++) {
        L[i] = arr[esquerda + i];
    }
    for (j = 0; j < tamanhoDireita; j++) {
        R[j] = arr[meio + 1 + j];
    }

    i = 0;
    j = 0;
    k = esquerda;

    while (i < tamanhoEsquerda && j < tamanhoDireita) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < tamanhoEsquerda) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < tamanhoDireita) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int esquerda, int direita) {
    if (esquerda < direita) {
        int meio = esquerda + (direita - esquerda) / 2;

        mergeSort(arr, esquerda, meio);
        mergeSort(arr, meio + 1, direita);

        merge(arr, esquerda, meio, direita);
    }
}

void mergesort(void) {
    int numeros[] = {5, 2, 8, 12, 3};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);
    int i;

    printf("Array original: ");
    for (i = 0; i < tamanho; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    mergeSort(numeros, 0, tamanho - 1);

    printf("Array ordenado: ");
    for (i = 0; i < tamanho; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}
