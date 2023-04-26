#include "lista.h"
#include <stdio.h>

void cria_lista(Lista *l){
    *l = (Celula *)malloc(sizeof(Celula));
    (*l)->prox = NULL;    
    
}
int vazia(Lista l){
    return(l->prox==NULL);
}
void insere(polinomio po, Lista l){
    for(; l->prox!=NULL; l=l->prox ){

    }
    l->prox = (apontador)malloc(sizeof(Celula));
    l->prox->p = po;
    l->prox->prox = NULL;
}
int soma_polinomios(polinomio po, Lista l){
    apontador aux1;

    while (aux1->prox != NULL && aux1->p.expoente != aux1->prox->p.expoente)
    {
        if(aux1->p.expoente != aux1->prox->p.expoente){
            aux1 = aux1->prox;
        }
        else{
            int soma = aux1->p.numero + aux1->prox->p.numero;
        }
    }
    
}