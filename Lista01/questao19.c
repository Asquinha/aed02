#include <stdio.h>
#include <stdlib.h>
#include "questao19.h"

void entrada19(int *lado1,int *lado2, int *lado3){
    printf("Digite o valor do lado do triagulo:\n");
    scanf("%d", lado1);
    printf("Digite o valor do lado do triagulo:\n");
    scanf("%d", lado2);
    printf("Digite o valor do lado do triagulo:\n");
    scanf("%d", lado3);
};

void triangulo(int *l1,int *l2, int *l3){
    if((*l1 == *l2) && (*l2 == *l3)){
        printf("Equilatero!");
    }else if (((*l1 == *l2) && (*l2 != *l3)) || (*l2 == *l3) && (*l3!=*l1)){
        printf("Isosceles");
    }else{
        printf("Escaleno");
    }
};

void questao19(void){
    //declaracao
    int lad1,lad2,lad3;
    //entrada
    entrada(&lad1,&lad2,&lad3);
    //verificacao de tipo de triangulo
    triangulo(&lad1,&lad2,&lad3);
}
