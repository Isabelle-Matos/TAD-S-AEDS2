#ifndef LISTA_H
#define LISTA_H

typedef struct celula_str *apontador;
typedef struct {
    int numeros;
    char *nome;
}informacoes;

typedef struct  celula_str
{
    informacoes info;
    apontador prox;
}celula;

typedef apontador Lista;

void cria_lista(Lista *l);
int vazia(Lista l);
void insere(Lista l, informacoes info);
void tamanho(Lista l);
void imprime(Lista l);



#endif