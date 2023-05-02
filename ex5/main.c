#include <stdio.h>
#include "lista.h"


int main(){

    Lista *l;
    l = inicializa();
    int vet[5] = {3,8,9,5,3};
    l = constroi(5, vet);
    imprime(l,5);



    return 0;
}