#include <stdio.h>
#include <stdlib.h>
#include "questao06.h"

void entrada06(float *vN,float *vA){
    printf("Digite o valor antigo do produto:\n");
    scanf("%f", vA);
    printf("Digite o valor Novo do produto:\n");
    scanf("%f", vN);
};
void processamento06(float *valN,float *valA, float *calculo){
    *calculo = ((*valN - *valA)/ *valA)*100;
};
void saida06(float calculo){
    printf("O aumento em porcetagem e de: %.2f %", calculo);
};

void questao06(void){
    //declaracao
    float valorNovo, valorAntigo, aumento;
    //entrada
    entrada06(&valorNovo, &valorAntigo);
    //processamento
    processamento06(&valorNovo, &valorAntigo, &aumento);
    //saida
    saida06(aumento);
}
