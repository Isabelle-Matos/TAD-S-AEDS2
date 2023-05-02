#include "lista.h"
#include <stdio.h>
#include <stdlib.h>
//Lista nao possui celula cabeça
Lista* inicializa(){
   return NULL;
}
int vazia(Lista* l){
    return (l==NULL);
}
Lista *constroi(int n, int *v){
    Lista *l, *aux;
   if(n==0){
        l = NULL;
        return l;
   }
   else{
        l =(Lista*)malloc(sizeof(Lista));
        aux = l;
        for(int i=0; i<n; i++){
            aux->info = v[i];
            aux->prox = (Lista*)malloc(sizeof(Lista));
            aux = aux->prox;  
        }
    aux->prox = NULL;
    return l;
   }
}
void imprime(Lista *l, int n){
    Lista *aux;
    aux = l;
    for(;aux!=NULL; aux = aux->prox)
        printf("%d\n", aux->info);
     
    
}