#include <stdio.h>
#include <stdlib.h>
#include "questao09.h"

void entrada09(int *num){
    printf("Digite um numero:\n");
    scanf("%d", num);
};
void maior(int *n){
    if(*n>100){
        printf("O numero e maior que 100");
    }else{
        return 0;
    }
};

void questao09(void){
    //declaracao
    int numero;
    //entrada
    entrada09(&numero);
    //maior que 100
    maior(&numero);
};
