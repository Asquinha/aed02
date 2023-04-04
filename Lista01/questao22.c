#include <stdio.h>
#include <stdlib.h>
#include "questao22.h"

void entrada22(int *eleitores, int *votos, char municipio[50]){
    printf("Digite o nome do municipio:\n");
    scanf("%s", municipio);
    printf("Digite a quantidade de eleitores:\n");
    scanf("%d", eleitores);
    printf("Digite a quantidade de votos do candidato mais votado:\n");
    scanf("%d", votos);
};

void eleicao(float *percentualVotos, int *vot, int *eleit, char municipio[50]){
    *percentualVotos = (float)*vot / *eleit * 100;

    if(*eleit > 200000 && *percentualVotos < 50){
        printf("Havera segundo turno na eleicao municipal de %s\n", municipio);
    }else{
        printf("Nao havera segundo turno na eleicao municipal de %s\n", municipio);
    }
};

void questao22(void){
    //declaracao
    int e, v;
    char m[50];
    float pV;
    //entrada
    entrada22(&e,&v,m);
    //funcao para decreta a necessidade de um segundo turno
    eleicao(&pV,&v,&e,m);
}
