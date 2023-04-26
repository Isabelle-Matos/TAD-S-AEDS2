#include <stdio.h>
#include "lista.h"

int main(){

    polinomio *p1;
    Lista l1;
    cria_lista(&l1);


    printf("%d\n", vazia(l1));
 

    p1->expoente = 2;
    p1->numero = 3;
    insere(*p1, l1);
    
    p1->expoente = 2;
    p1->numero = 1;
    insere(*p1, l1);
   



    return 0;
}