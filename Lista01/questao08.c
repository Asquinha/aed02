#include <stdio.h>
#include <stdlib.h>
#include "questao08.h"

void entrada08(float *vel){
    printf("Digite um velocidade (km/h):\n");
    scanf("%f", vel);
};
void processamento08(float *v, float *c){
    *c = *v / 3.6;
};
void saida08(float calculo){
    printf("A conversao da velocidade para m/s e: %.2f", calculo);
};

void questao08(void){
    //declaracao
    float velocidade, calculo;
    //entrada
    entrada08(&velocidade);
    //processamento;
    processamento08(&velocidade, &calculo);
    //saida
    saida08(calculo);
};
