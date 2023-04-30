#include <stdio.h>
#include "lista.h"

int main(){

    polinomio p1, p2, p3, p4;
    Lista l1, l2, l3;
    cria_lista(&l1);
    cria_lista(&l2);
    cria_lista(&l3);
 
    //pre-estabelecer que os polinomios estao ordenados
    p1.numero = 3;
    p1.expoente = 4;
    insere(p1, l1);

    p3.numero = 2;
    p3.expoente = 2;
    insere(p3, l1);
    
    p2.numero = 1;
    p2.expoente =4;
    insere(p2, l2);

    p4.numero = 3;
    p4.expoente = 0;
    insere(p4, l2);
    
    printf("\n\n");

    soma_polinomios(l1, l2, l3);
    // printf("\n\n");
    //printf("%d\n",exclui(&l1));
    //printf("%d\n",exclui(&l2));
    //printf("%d\n",exclui(&l3));
  




    return 0;
}
