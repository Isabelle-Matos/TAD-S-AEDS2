#ifndef LISTA_H
#define LISTA_H

typedef struct Celula_str *apontador;

typedef struct{
    int numero;
    int expoente;
}polinomio;

typedef struct  Celula_str
{
    polinomio p;
    apontador prox;

}Celula;

typedef apontador Lista;
void cria_lista(Lista *l);
int vazia(Lista l);
void insere(polinomio po, Lista l);
int exclui(Lista *l1);
int exclui_celula(Lista *l1);
void soma_polinomios(Lista l1, Lista l2, Lista l3);



#endif
