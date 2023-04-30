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

typedef struct{
    apontador primeiro, ultimo;

}Lista_descritor;



void cria_lista(Lista_descritor *l);
int vazia(Lista_descritor *l);
void insere(Lista_descritor *l, informacoes info);
void tamanho(Lista_descritor *l);
void imprime(Lista_descritor *l);
void exclui(Lista_descritor *l);




#endif