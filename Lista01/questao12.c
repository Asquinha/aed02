#include <stdio.h>
#include <stdlib.h>
#include "questao12.h"

void entrada12(int *n1, int *n2){
    printf("Digite o primeiro numero:\n");
    scanf("%d", n1);
    printf("Digite o segundo numero:\n");
    scanf("%d", n2);
};

void processamento12(int *valor1, int *valor2, int *resultado){
    *resultado = (*valor1+*valor2)/2;
};

void saida12(resultado){
    if(resultado >=7){
        printf("O aluno esta aprovado!");
    }else{
        printf("O aluno esta reprovado!");
    }
};

void questao12(void){

    //declaracao
    int numero1, numero2, resultado;
    //entrada
    entrada12(&numero1,&numero2);
    //processamento
    processamento12(&numero1,&numero2,&resultado);
    //saida
    saida12(resultado);
};
