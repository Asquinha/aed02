#include <stdio.h>
#include <stdlib.h>
#include "questao21.h"

void entrada21(int *n1, int *n2, int *n3){
    printf("Digite o primeiro numero:\n");
    scanf("%d", n1);
    printf("Digite o segundo numero:\n");
    scanf("%d", n2);
    printf("Digite o terceiro numero:\n");
    scanf("%d", n3);
}

void processamento21(int *num1, int *num2, int *num3){
    int temp;
    if(*num1 > *num2){
        temp = *num1;
        *num1 = *num2;
        *num2 = temp;
    }
    if(*num1 > *num3){
        temp = *num1;
        *num1 = *num3;
        *num3 = temp;
    }
    if(*num2 > *num3){
        temp = *num2;
        *num2 = *num3;
        *num3 = temp;
    }
}

void saida21(int *numero1, int *numero2, int *numero3){
    printf("Os numeros em ordem crescente sao: %d, %d, %d\n", *numero1, *numero2, *numero3);
}

void questao21(void){
    //declaracao
    int numer1, numer2, numer3;
    //entrada
    entrada21(&numer1,&numer2,&numer3);
    //processamento
    processamento21(&numer1,&numer2,&numer3);
    //saida
    saida21(&numer1,&numer2,&numer3);
}
