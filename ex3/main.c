#include "lista.h"
#include <stdio.h>
//lista simplesmente encadeada com descritor
int main(){

    Lista_descritor l1;
    informacoes info1, info2;
    cria_lista(&l1);
    info1.nome = "Isabelle";
    info1.numeros = 34;
    insere(&l1, info1);
    info2.nome= "Isabdora";
    info2.numeros = 45;
    insere(&l1, info2);

    imprime(&l1);
    tamanho(&l1);
    exclui(&l1);
    



    return 0;
}