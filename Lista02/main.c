#include <stdio.h>
#include <stdlib.h>
#include "bolha.h"
#include "insercao.h"
#include "ordenacao.h"
#include "merge.h"
#include "quick.h"

int main()
{
    int menu;

    printf("Selecione um metodo de ordenacao:\n");
    printf("1 - Bolha\n2 - Insercao\n3 - Ordenacao\n4 - MergeSort\n5 - QuickSort\n");
    scanf("%d",&menu);

    switch(menu){
        case 1: bolha();
        break;
        case 2: insercao();
        break;
        case 3: ordenacao();
        break;
        case 4: mergesort();
        break;
        case 5: quicksort();
        break;
        default:
            break;
    }
}
