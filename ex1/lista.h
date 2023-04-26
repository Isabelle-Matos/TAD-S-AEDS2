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
int soma_polinomios(polinomio po, polinomio p1, Lista l1, Lista l2);
void exclui(Lista *l1);
void imprime(Lista l3);

#endif
