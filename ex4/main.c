#include <stdio.h>
#include "lista.h"

int main(){

    Lista l1, l2;
    informacoes info1, info2, info3, info4;
    cria_lista(&l1);
    cria_lista(&l2);

    printf("%d\n", vazia(l1));
    printf("%d\n", vazia(l2));

    printf("\n");

    info1.c = 'o';
    info1.numero = 5;
    insere(l1, info1);
    info2.c = 'p';
    info2.numero = 7;
    insere(l1, info2);

    info3.c = 'i';
    info3.numero = 4;
    insere(l2, info3);
    info4.c = 'o';
    info4.numero = 5;
    insere(l2, info4);

    intersecao(l1, l2);
    printf("\n");
    uniao(l1, l2);
    printf("\n");
    
    printf("%d\n",exclui(&l1));
    printf("%d\n",exclui(&l2));
  
    return 0;
}
