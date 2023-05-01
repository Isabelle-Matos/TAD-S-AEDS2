#ifndef LISTA_H
#define LISTA_H

typedef struct Celula_str *apontador;

typedef struct{
    int numero;
    char c;

}informacoes;

typedef struct Celula_str{
    informacoes info;
    apontador prox;
}celula;

typedef apontador Lista;

void cria_lista(Lista *l);
int vazia(Lista l);
void insere(Lista l, informacoes i);
int exclui(Lista *l);
void intersecao(Lista l1, Lista l2);
void uniao(Lista l1, Lista l2);





#endif