#include <stdio.h>
#include <stdlib.h>
#include "questao04.h"

void entrada04(float *salario1, float *aumento){
    printf("Digite o seu atual salario:\n");
    scanf("%f", salario1);

    printf("Digite a porcentagem de aumento:\n");
    scanf("%f", aumento);

};
void processamento04(float *s1, float *a, float *calculo){
    *calculo = *s1 + ((*s1 * *a)/ 100);
};
void saida04(float calculo){
    printf("O valor do novo salario e: %.2f", calculo);
};
void questao04(void){
    //declaracao
    float sal1,aum, calculo;
    //entrada
    entrada04(&sal1,&aum);
    //processamento
    processamento04(&sal1,&aum,&calculo);
    //saida
    saida04(calculo);
}
