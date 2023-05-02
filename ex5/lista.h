#ifndef LISTA_H
#define LISTA_H


struct lista{
    int info;
    struct lista *prox; //ponteiro para a celula, 
};

typedef struct lista Lista;//nó da lista

Lista* inicializa();
Lista *constroi(int n, int *v);
int vazia(Lista *l);
void imprime(Lista* l, int n);






#endif