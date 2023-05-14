#include "lista.h"
#include <stdio.h>
#include <stdlib.h>

void cria_lista(Lista *l){
    *l = (celula*)malloc(sizeof(celula));
    (*l)->prox = NULL;
}
int vazia(Lista l){
    return(l->prox == NULL);
}
void insere(Lista l, informacoes info){
    
    for(; l->prox!=NULL; l=l->prox){

    }
    l->prox = (apontador)malloc(sizeof(celula));
    l->prox->info = info;
    l->prox->prox = NULL;

}
int exclui(Lista *l){
    if(*l!=NULL){
        celula *no;
        while ((*l)!=NULL)
        {
            no = *l;
            *l = (*l)->prox;
            free(no);
        }
        
    }
    free(l);
    if(*l == NULL){
        return 1;
    }
    else {
        return 0;
    }
}
void intersecao(Lista l1, Lista l2){
    apontador aux1, aux2, aux3;
    aux1 = l1->prox;
    aux2 = l2->prox;
    informacoes info1, info2, info3;
    Lista l3;
    cria_lista(&l3);
    

    for(; aux1!=NULL; aux1 = aux1->prox){
        aux2 = l2->prox;
        for(; aux2!=NULL; aux2 = aux2->prox){
            if(aux1->info.c == aux2->info.c && aux1->info.numero == aux2->info.numero){
                info3.c = aux1->info.c;
                info3.numero = aux2->info.numero;
                insere(l3, info3);
            }
        }
    }
    aux3 = l3->prox;
    if(aux3 == NULL){
        printf("Nao possui intersecao\n");
    }
    else{
        aux3 = l3->prox;
        for(; aux3!=NULL; aux3 = aux3->prox){
            printf("%c %d\n", aux3->info.c, aux3->info.numero);
        }
    }
    exclui(&l3);

}
void uniao(Lista l1, Lista l2){
    apontador aux1, aux2, aux3;
    aux1 = l1->prox;
    aux2 = l2->prox;
    informacoes info3;
    Lista l3;
    cria_lista(&l3);
    

     for(; aux1!=NULL; aux1 = aux1->prox){
        info3.c = aux1->info.c;
        info3.numero = aux1->info.numero;
        insere(l3, info3);
    }
  
    for(; aux2!=NULL; aux2 = aux2->prox){
        info3.c = aux2->info.c;
        info3.numero = aux2->info.numero;
        insere(l3, info3);
    }
    aux3 = l3->prox;
    for(; aux3!=NULL; aux3 = aux3->prox){
        printf("%c %d\n", aux3->info.c, aux3->info.numero);
    }
    
}