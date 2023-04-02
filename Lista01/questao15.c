#include <stdio.h>
#include <stdlib.h>
#include "questao15.h"

void entrada15(int *numero1, int *numero2){
    printf("Digite o primeiro numero inteiro:\n");
    scanf("%d", numero1);
    printf("Digite o segundo numero inteiro:\n");
    scanf("%d", numero2);
}

void maiorNumero(int *num1, int *num2){
    if(*num1 > *num2){
        printf("%d e maior que %d", *num1,*num2);
    }else if(*num2 > *num1){
        printf("%d e maior que %d", *num2,*num1);
        }else{
            return 0;
        }
}

void questao15(void){
    //declaracao
    int n1, n2;
    //entrada
    entrada15(&n1,&n2);
    //funcao de maior numero
    maiorNumero(&n1,&n2);
}
