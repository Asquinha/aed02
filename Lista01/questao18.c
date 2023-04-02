#include <stdio.h>
#include <stdlib.h>
#include "questao18.h"

void entrada18(float *unidade1, float *unidade2){
    printf("Escreva a nota da unidade 1:\n");
    scanf("%f", unidade1);
    printf("Escreva a nota da unidade 2:\n");
    scanf("%f", unidade2);
}
void mediaFinal(float *uni1, float *uni2, float *media){
    *media = (*uni1+*uni2)/2;
    if(*media>=7){
        printf("Aluno esta aprovado!");
    }else if(*media<3){
        printf("Aluno esta reprovado!");
    }else{
        printf("Aluno devera fazer a prova final!");
    }
}

void questao18(void){
    //declaracao
    float nota1, nota2, media;
    //entrada
    entrada18(&nota1,&nota2);
    //media final
    mediaFinal(&nota1,&nota2,&media);
}
