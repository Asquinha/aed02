#include <stdio.h>
#include <stdlib.h>
#include "questao16.h"

void entrada16(float *salarioBruto){
    printf("Digite o seu salario Bruto:\n");
    scanf("%f", salarioBruto);
}

void processamento16(float *salarioB,float *salarioL){
    if(salarioB<2000){
        *salarioL = *salarioB * 0.9;
    }else{
        *salarioL =  *salarioB * 0.8;
    }
}

void saida16(float *sLiquido){
    printf("O salario liquido e de R$:%.2f", *sLiquido);
}

void questao16(void){
    //declaracao
    float sB, sL;
    //entrada
    entrada16(&sB);
    //processamento
    processamento16(&sB, &sL);
    //saida
    saida16(&sL);
}
