/*
LISTA:
>encadeada/ligada:
    .E uma estrutura de dados formada por nos encadeados em sequencia.
    .Cada no aponta para o proximo.
    .Os nos guardam os dados.
    .O ultimo no da lista aponta para o endereco nulo.
    .O primeiro no e chamado de cabeca e o ultimo e chamado de cauda ou rabo.
>circular:
    .E uma estrutura de dados formada por nos encadeados em sequencia.
    .Os nos guardam os dados.
    .O ultimo no da lista aponta para o primeiro (logo nao existe primeiro ou ultmo).
>duplamente encadeada:
    .E uma lista encadeada comum, porem cada no aponta, tambem, para seu predecessor.
Existem tambem diversas outras formas de listas: generalizadas, duplamente encadeadas circulares e etc.
*/
#include<stdio.h>
#include<stdlib.h>
//Os algoritmos a seguir se referem a listas encadeadas
typedef int type;   //troque para o tipo da chave que desejar
typedef struct{
    char a;         //troque pelos dados desejados
}info;
typedef struct node{
    type key;
    info data;
    struct node *next;
}node;
typedef struct{
    node *head;
    //other informations about the list
}list;
//Funcao para buscar um no de chave=key
node* search(list *L, type key){
    node *aux=L->head;
    if(!aux)
        return NULL;
    while(aux->next && aux->key!=key)
        aux=aux->next;
    if(aux->key==key)
        return aux;
    return NULL;
}
//Funcao para inserir um no no inicio da lista
int insert(list *L, info data, type key){
    node *kid=malloc(sizeof(node));
    if(!kid)
        return 0;
    kid->key=key;
    kid->data=data;
    kid->next=L->head;
    L->head=kid;
    return 1;
}
//Funcao para remover um no de chave=key
int remov(list *L, type key){
    node *aux2=L->head;
    if(!aux2)
        return 0;
    if(aux2->key==key){
        L->head=aux2->next;
        free(aux2);
        return 1;
    }
    node *aux1;
    while(aux2->key!=key && aux2->next){
        aux1=aux2;
        aux2=aux2->next;
    }
    if(aux2->key==key){
        aux1->next=aux2->next;
        free(aux2);
        return 1;
    }
    return 0;
}
//Funcao principal
int main(void){
    //insira seu codigo aqui
    return 0;
}
