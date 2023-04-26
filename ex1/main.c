#include <stdio.h>
#include "lista.h"

int main(){

    polinomio p1, p2;
    Lista l1, l2;
    cria_lista(&l1);
    cria_lista(&l2);


    printf("%d\n", vazia(l1));
    printf("%d\n", vazia(l2));
 
 

    p1.expoente = 2;
    p1.numero = 3;
    insere(p1, l1);
    
    p2.expoente = 2;
    p2.numero = 1;
    insere(p2, l1);
   



    return 0;
}
