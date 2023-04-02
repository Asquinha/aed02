#include <stdio.h>
#include <stdlib.h>
#include "questao01.h"
void entrada(int *num1, int *num2, int *num3){
    printf("Digite o primeiro numero:\n");
    scanf("%d",num1);
    printf("Digite o segundo numero:\n");
    scanf("%d",num2);
    printf("Digite o terceiro numero:\n");
    scanf("%d",num3);
}

void processamento(int *nume1,int*nume2,int *nume3, int*saida){
    *saida = *nume1+ *nume2+ *nume3;
};

void saida(int saida){
    printf("O resultado final e: %d", saida);
};

void questao01(void){
    int numero1, numero2, numero3, resultado; //declaracao de variaveis

    entrada(&numero1, &numero2, &numero3);

    processamento(&numero1, &numero2, &numero3, &resultado);

    saida(resultado);
};
