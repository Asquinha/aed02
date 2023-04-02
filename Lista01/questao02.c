#include <stdio.h>
#include <stdlib.h>
#include "questao02.h"

void entrada02(int *n1, int *n2, int *n3, int *n4){
    printf("Digite o primeiro numero:\n");
    scanf("%d", n1);
    printf("Digite o segundo numero:\n");
    scanf("%d", n2);
    printf("Digite o terceiro numero:\n");
    scanf("%d", n3);
    printf("Digite o quarto numero:\n");
    scanf("%d", n4);
};

void processamento02(int *valor1, int *valor2, int *valor3, int *valor4, int *resultado){
    *resultado = (*valor1+*valor2+*valor3+*valor4)/4;
};

void saida02(resultado){
    printf("A media e: %d", resultado);
};

void questao02(void){

    //declaracao
    int numero1, numero2, numero3, numero4, resultado;
    //entrada
    entrada02(&numero1,&numero2,&numero3,&numero4);
    //processamento
    processamento02(&numero1,&numero2,&numero3,&numero4,&resultado);
    //saida
    saida02(resultado);
};
