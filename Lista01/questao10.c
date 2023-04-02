#include <stdio.h>
#include <stdlib.h>
#include "questao10.h"

void entrada10(char senha[10]){
    printf("Digite a sua senha:\n");
    scanf("%s", senha);
}

void validar(char s[10]){
    if(strcasecmp(s, "LINGUAGEMC") == 0){
        printf("A senha esta correta!");
    } else{
        printf("SENHA INCORRETA!");
    }
}

void questao10(void){
    //declaracao
    char senha[10];
    //entrada
    entrada10(senha);
    //validacao de senha
    validar(senha);
}
