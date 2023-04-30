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
    //printf("%d %d\n", l->prox->p.numero, l->prox->p.expoente);
}

int exclui(Lista *l1){
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
    // if(*l1 == NULL){
    //     return 1;
    // }
    // else {
    //     return 0;
    // }

}
int tamanho_lista(Lista *l1){
    int count = 0;
    if(*l1 == NULL) return 0;
    Celula *no = *l1;
    while ((no!=NULL))
    {
        count++;
        no = no->prox;
    }
    return count;
    
}
void soma_polinomios(Lista l1, Lista l2, Lista l3){
    Lista l4;
    cria_lista(&l4);
    apontador aux1 = l1->prox;
    apontador aux2;
    polinomio p3, p4;
  

    for(; aux1!=NULL; aux1=aux1->prox){
        aux2 = l2->prox;
        for(; aux2!=NULL; aux2 = aux2->prox){
            if(aux1->p.expoente == aux2->p.expoente){
                p3.expoente = aux1->p.expoente;
                p3.numero = aux1->p.numero + aux2->p.numero;
                insere(p3, l3);
            }
            
        }
    }
    aux1 = l1->prox;
    aux2 = l2->prox;
    apontador aux3;
    
    for(; aux1!=NULL; aux1=aux1->prox){
    
            p4.expoente = aux1->p.expoente;
            p4.numero = aux1->p.numero;
            insere(p4, l4);  
    }
    for(; aux2!=NULL; aux2=aux2->prox){
    
            p4.expoente = aux2->p.expoente;
            p4.numero = aux2->p.numero;
            insere(p4, l4);  
    }
    apontador aux4 = l4->prox;//lista concatenada
   
  
    for(; aux4!=NULL; aux4 = aux4->prox){
        
        for(;aux3!=NULL; aux3 = aux3->prox){
            if(aux4->p.expoente != aux3->p.expoente){
                p3.expoente = aux4->p.expoente;
                p3.numero = aux4->p.numero;
                insere(p3, l3);
            }
            aux3 = l3->prox;
        }
    }
    aux3 = l3->prox;
      for(;aux3!=NULL; aux3=aux3->prox){
             printf("%d %d\n", aux3->p.numero, aux3->p.expoente);
        }
    //     printf("\n");
    //     for(;aux4!=NULL; aux4=aux4->prox){
    //          printf("%d %d\n", aux4->p.numero, aux4->p.expoente);
    //     }
   
}


