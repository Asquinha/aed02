#include <stdio.h>
#include <stdlib.h>
#include "questao03.h"

void entrada03(float *n1, float *n2, float *p1, float *p2){
    printf("Digite a primeira nota:\n");
    scanf("%f",n1);
    printf("Digite a segunda nota:\n");
    scanf("%f",n2);
    printf("Digite o primeiro peso:\n");
    scanf("%f",p1);
    printf("Digite o segundo peso:\n");
    scanf("%f",p2);
};

void processamento03(float *not1, float *not2, float *pe1, float *pe2,float *calculo){
    *calculo = ((*not1 * *pe1) + (*not2 * *pe2))/(*pe1+*pe2);
};

void saida03(float calculo){
    printf("A media das notas e: %.2f", calculo);
};

void questao03(void){
    //declaracao

    float nota1, nota2, peso1, peso2, calculo;
    //entrada
    entrada03(&nota1, &nota2, &peso1, &peso2);
    //processamento
    processamento03(&nota1, &nota2, &peso1, &peso2, &calculo);
    //saida
    saida03(calculo);
};
