#include <stdio.h>
#include <stdlib.h>
#include "questao20.h"

void entrada20(int *num1, int *num2, int *num3){
    printf("Digite o primeiro numero:\n");
    scanf("%d", num1);
    printf("Digite o segundo numero:\n");
    scanf("%d", num2);
    printf("Digite o terceiro numero:\n");
    scanf("%d", num3);
}

void maiorNumero20(int *n1, int *n2, int *n3){
    if((*n1 > *n2) && (*n1>*n3)){
        printf("%d e o maior numero", *n1);
    }else if((*n2> *n1) && (*n2 > *n3)){
        printf("%d e o maior numero", *n2);
    }else if((*n1 == *n2) && (*n1 == *n3)){
        printf("Numeros iguais");
    }else{
        printf("%d e o maior numero", *n3);
    }
}

void questao20(void){
    //declaracao
    int numero1, numero2, numero3;
    //entrada
    entrada20(&numero1,&numero2,&numero3);
    //maior numero entre os 3
    maiorNumero20(&numero1,&numero2,&numero3);
}
