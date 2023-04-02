#include <stdio.h>
#include <stdlib.h>
#include "questao14.h"

void entrada14(int *numero){
    printf("Digite um numero inteiro:\n");
    scanf("%d", numero);
};
void parImpar(int *num){
    if(*num % 2 == 0){
        printf("O numero e par!");
    }else{
        printf("O numero e impar!");
    }
};

void questao14(void){
    //declaracao
    int n;
    //entrada
    entrada14(&n);
    //detectar par ou impar
    parImpar(&n);
};
