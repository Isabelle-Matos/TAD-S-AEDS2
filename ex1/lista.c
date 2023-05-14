#include "lista.h"
#include <stdio.h>
#include <stdlib.h>

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
void exclui(Lista *l){
    if(*l!=NULL){
        Celula *no;
        while ((*l)!=NULL)
        {
            no = *l;
            *l = (*l)->prox;
            free(no);
        }
    }
    free(*l);
    if(*l == NULL){
        printf("Vazia\n");
    }
    else printf("Nao vazia\n");
}
void imprime(Lista l){
    apontador aux;
    aux = l->prox;
    for(; aux!=NULL; aux = aux->prox){
        printf("%d %d\n", aux->p.numero, aux->p.expoente);
    }
}
apontador soma_polinomios(Lista l1, Lista l2){
    Lista l3;
    polinomio p;
    cria_lista(&l3);

    while(l1->prox != NULL){
        while(l2->prox != NULL){
            if(l1->prox->p.expoente == l2->prox->p.expoente){
                p.numero = l1->prox->p.numero + l2->prox->p.numero;
                p.expoente = l1->prox->p.expoente;

                insere(p, l3);
                l2 = l2->prox;
                break;
            }
            if(l1->prox->p.expoente < l2->prox->p.expoente){
                insere(l2->prox->p, l3);
            }
            if(l1->prox->p.expoente > l2->prox->p.expoente){
                insere(l1->prox->p, l3);
                break;
            }
            l2 = l2->prox;
        }
        if(l2->prox == NULL) break;
        l1 = l1->prox;
    }

    while(l1->prox != NULL){
        insere(l1->prox->p, l3);
        l1 = l1->prox;
    } 
    while(l2->prox != NULL){
        insere(l2->prox->p, l3);
        l2 = l2->prox;
    } 

    return l3;
}
    


