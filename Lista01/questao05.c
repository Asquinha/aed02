#include <stdio.h>
#include <stdlib.h>
#include "questao05.h"

void entrada05(float *sBase, float *dep){
    printf("Digite o seu salario base:\n");
    scanf("%f", sBase);

    printf("Digite suas dependencias: \n");
    scanf("%f", dep);
};
void processamento05(float *salBase, float *salBruto1, float *salBruto2, float *depend){
    *salBruto1 = *salBase + (*depend * 32.0);
    *salBruto2 = *salBruto1 - ((*salBruto1 * 27.5)/100);
};
void saida05(float salBruto2){
    printf("O salario bruto final e: %.2f", salBruto2);
};
void questao05(void){
    //declaracao
    float salarioBase, salarioBruto1, salarioBruto2, dependentes;
    //entrada
    entrada05(&salarioBase, &dependentes);
    //processamento
    processamento05(&salarioBase, &salarioBruto1, &salarioBruto2, &dependentes);
    //saida
    saida05(salarioBruto2);
};
