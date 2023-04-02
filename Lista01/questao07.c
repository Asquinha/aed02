#include <stdio.h>
#include <stdlib.h>
#include "questao07.h"

void entrada07(float *raio){
    printf("Digite o valor do raio:\n");
    scanf("%f", raio);
};
void processamento07(float *r, float *p, float *a, float *d){
    *p = 2 * 3.14 * *r;
    *a = 3.14 * (*r * *r);
    *d = 2 * *r;

};
void saida07(float pe, float ar, float dia){
    printf("O perimetro e: %.2f, a area e: %.2f e o diametro e: %.2f", pe, ar, dia);
};

void questao07(void){
    //declaracao
    float raio, perimetro, area, diametro;
    //entrada
    entrada07(&raio);
    //processamento
    processamento07(&raio, &perimetro, &area, &diametro);
    //saida
    saida07(perimetro, area, diametro);
};
