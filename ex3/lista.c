#include "lista.h"
#include <stdio.h>
#include <stdlib.h>

void cria_lista(Lista_descritor *l){
    l->primeiro= (apontador)malloc(sizeof(celula)); 
    l->ultimo = l->primeiro;
    l->primeiro->prox = NULL;
}

int vazia(Lista_descritor *l){
    return(l->primeiro==l->ultimo);
}

void insere(Lista_descritor *l, informacoes info){
   l->ultimo->prox = (apontador)malloc(sizeof(celula));
   l->ultimo = l->ultimo->prox;
   l->ultimo->info = info;
   l->ultimo->prox = NULL;
    
} 
void imprime(Lista_descritor *l){
    apontador aux = l->primeiro->prox;
    while(aux !=NULL){
        printf("%s %d\n", aux->info.nome, aux->info.numeros);
        aux = aux->prox;
    }
}
void tamanho(Lista_descritor *l){
    apontador aux = l->primeiro->prox;
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
void exclui(Lista_descritor *l){
    apontador aux;
    apontador q;
    aux = l->primeiro->prox;
    while ((aux!=NULL))
    {
        l->primeiro->prox = l->primeiro->prox->prox;
        free(aux);
        aux = l->primeiro->prox;
    }
    //nao está excluindo a lista
    free(l->primeiro);
   
}
