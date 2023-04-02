#include <stdio.h>
#include <stdlib.h>
#include "questao11.h"

void entrada11(int *num){
    printf("Digite um numero inteiro:\n");
    scanf("%d", num);
};
void validarNum(int *numero){
    if((*numero >=100 && *numero<=500)){
        printf("O numero esta entre 100 e 500");
    }else{
        return 0;
    }
};

void questao11(void){
    //declaracao
    int numero;
    //entrada
    entrada11(&numero);
    //validar numero entre 100 e 500
    validarNum(&numero);
};
