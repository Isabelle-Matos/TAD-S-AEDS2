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
            if(i==n-1) break;
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
void libera_lista(Lista* l){
    
    if(l!=NULL){
        Lista *no;
        while (l !=NULL)
        {
            no = l;
            l = l->prox;
            free(no);
        }
        
    }
    free(l);
      if(l == NULL){
        printf("1\n");
    }
    else {
        printf("0\n");
    }
}
