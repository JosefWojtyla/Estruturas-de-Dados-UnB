#include <stdlib.h>

void criaPilha(int *t){
    *t = 0;
}
//verifica se está vazia
int pilhaVazia(int t){
    return (t==0);
}
//verifica se está cheia
int pilhaCheia(int t, int N){
    return (t==N);
}
//emplihar (push)
int empilha(int pilha[], int N, int *t, int y){
    if(pilhaCheia(*t,N)) return 0;

    pilha[*t] = y;
    (*t)++;
    return 1;
}
//desempilhar (pop)
int desempilha(int pilha[], int *t, int *x){
    if(pilhaVazia(*t)) return 0;

    (*t)--;
    *x = pilha[*t];
    return 1;
}

typedef struct No{
    int valor;
    struct No *proximo;
}No;

//inserindo no topo
void push(No **topo, int num){
    No *novo = malloc(sizeof(No));
    if(novo){
        novo -> valor = num;
        novo -> proximo = *topo;
        *topo = novo;
    }
}

