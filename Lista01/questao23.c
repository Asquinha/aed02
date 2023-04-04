#include <stdio.h>
#include <stdlib.h>
#include "questao23.h"

void entrada23(float *percurso, char *tipoCarro){
    printf("Digite o percurso em quilometros: ");
    scanf("%f", percurso);
    printf("Digite o tipo de carro (A, B ou C): ");
    scanf(" %c", tipoCarro);
};

void consumoCombustivel(float *consumo, float *percurso, char *tipoCarro){

    switch(*tipoCarro){
        case 'A':
            *consumo = *percurso / 8;
            break;
        case 'B':
            *consumo = *percurso / 9;
            break;
        case 'C':
            *consumo = *percurso / 12;
            break;
        default:
            return;
    }
}

void saida23(float *consumo){
    printf("O consumo estimado de combustivel e de: %.2f litros.\n", *consumo);
}

void questao23(void){
    //declaracao
    float consumo, percurso;
    char tipoCarro;

    //entrada
    entrada23(&percurso, &tipoCarro);

    //calculo do consumo de combustível
    consumoCombustivel(&consumo,&percurso, &tipoCarro);

    //saida
    saida23(&consumo);

    return 0;
}
