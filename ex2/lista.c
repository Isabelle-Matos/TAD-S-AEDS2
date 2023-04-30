#include "lista.h"
#include <stdio.h>
#include <stdlib.h>

void cria_lista(Lista *l){
    *l = (celula*)malloc(sizeof(celula)); 
    (*l)->prox = NULL;
}

int vazia(Lista l){
    return(l->prox==NULL);
}

void insere(Lista l, informacoes info){
    for(; l->prox != NULL; l=l->prox){

    }
    l->prox = (apontador)malloc(sizeof(celula));
    l->prox->info = info;
    l->prox->prox = NULL;
    
} 
void imprime(Lista l){
    apontador aux = l->prox;
    while(aux !=NULL){
        printf("%s %d\n", aux->info.nome, aux->info.numeros);
        aux = aux->prox;
    }
}
void tamanho(Lista l){
    apontador aux = l->prox;
    if(aux == NULL) printf("O tamanho da lista eh zero\n");
    else{ 
    int count = 0;
        while (aux != NULL)
        {
            aux = aux->prox;
            count++;
        }
        
    
   
    printf("O tamanho da lista eh %d\n", count);
    }
}