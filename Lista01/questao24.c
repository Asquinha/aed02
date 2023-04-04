#include <stdio.h>
#include <stdlib.h>
#include "questao24.h"

int entrada24(int *valorCompra, int *valorPagamento) {
    printf("Digite o valor da compra: ");
    scanf("%d", valorCompra);
    printf("Digite o valor do pagamento: ");
    scanf("%d", valorPagamento);
}


void troco(int *valorCompra, int *valorPagamento, int *valorTroco, int *notas100, int *notas10, int *notas1) {
    *valorTroco = *valorPagamento - *valorCompra;
    *notas100 = *valorTroco / 100;
    *notas10 = (*valorTroco % 100) / 10;
    *notas1 = (*valorTroco % 100) % 10;

    if (*valorTroco < 0) {
        printf("Pagamento Negado\n");
    } else {
        printf("Notas de 100: %d\n", *notas100);
        printf("Notas de 10: %d\n", *notas10);
        printf("Notas de 1: %d\n", *notas1);
    }
}

void questao24(void){
    //declaracao
    int vC, vP, vT, n100,n10,n1;
    //entrada
    entrada24(&vC,&vP);
    //troco
    troco(&vC,&vP,&vT,&n100,&n10,&n1);
}
