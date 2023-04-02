#include <stdio.h>
#include <stdlib.h>
#include "questao13.h"

void entrada13(int *num){
    printf("Digite um numero inteiro:\n");
    scanf("%d", num);
};
void divisivel(int *numeroInt){
    if(*numeroInt % 5 == 0){
        printf("Esse numero e divisivel por 5!");
    }else{
        return 0;
    }
};

void questao13(void){
    //declarar
    int numeroInteiro;
    //entrada
    entrada13(&numeroInteiro);
    //numero e divisivel por 5?
    divisivel(&numeroInteiro);
};
