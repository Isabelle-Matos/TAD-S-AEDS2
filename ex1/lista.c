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
int soma_polinomios(polinomio po, polinomio p1, Lista l1, Lista l2){
    apontador aux1 = l1;
    apontador aux2 = l2;
    polinomio p3;
    Lista l3;
    cria_lista(&l3);
    apontador aux3 = l3;
    Celula *no;
    
    for(; aux1->prox!= NULL; aux1=aux1->prox){
            if(aux1->p.expoente == aux2->p.expoente){
                
                p3.expoente = aux1->p.expoente;
                p3.numero = aux1->p.numero + aux2->p.numero;
                insere(p3, l3);
              
        }
        else{
                p3.expoente = aux1->p.expoente;
                p3.numero = aux1->p.numero;
                insere(p3,l3);
            
                p3.expoente = aux2->p.expoente;
                p3.numero = aux2->p.numero;
                insere(p3,l3);

        }
        }
        
    }
    
void exclui(Lista *l1){
    if(*l1!=NULL){
        Celula *no;
            while ((*l1)!=NULL)
            {
                no = *l1;
                *l1 = (*l1)->prox;
                free(no);
            }
            
    }
    free(l1);
}
