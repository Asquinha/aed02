#include <stdio.h>
#include <stdlib.h>
#include "questao17.h"

void entrada17(float *produto){
    printf("Digite o valor do produto comprado:\n");
    scanf("%f", produto);
}

void processamento17(float *prod, float *lucro, float *valor){
    if(*prod < 200){
        *lucro = *prod * 0.5;
        *valor = *prod + *lucro;
    }else{
        *lucro = *prod * 0.3;
        *valor = *prod + *lucro;
    }
}

void saida17(float *val){
    printf("O preco final e: R$%.2f",*val);
}

void questao17(void){
    //declaracao
    float produto, lucro, valor;
    //entrada
    entrada17(&produto);
    //processamento
    processamento17(&produto,&lucro,&valor);
    //saida
    saida17(&valor);
};
