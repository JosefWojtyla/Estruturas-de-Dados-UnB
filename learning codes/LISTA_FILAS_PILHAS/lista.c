#include <stdio.h>
#include <stdlib.h>

typedef struct registro{
    int dado;
    struct registro *prox;
}Celula;

void imprime_rec (Celula * le) {
    if (le != NULL) {
        printf("%d\n", le->dado);
        imprime_rec(le->prox);
    }
}

void imprime (Celula *le) {
    Celula *p;
    for (p = le->prox; p != NULL; p = p->prox)
        printf("%d\n", p->dado);
}

Celula * busca_rec(int x, Celula *le){
    if(le == NULL) return NULL;
    if(le->dado == x) return le;
    return busca_rec(x, le->prox);
}

//criar le
Celula * cria_le(){
    Celula * le;
    le = malloc(sizeof(Celula));
    le->prox = NULL;

    return le;
}
int main(){
    Celula *le = cria_le(), p1,p2;

    p1.dado = 5; // p1 recebe 5
    p1.prox = &p2; // aponta para o proximo, que é o p2
    le->prox=&p1;

    p2.dado = 10; // p2 recebe 10
    p2.prox = NULL; //pra onde o p2 aponta, que diz que não tem o proximo, ou seja, p2 é o ultimo da lista

    le = &p1;
    while (le)
    {
        printf("Dado = %d\n", le->dado);
        le = le->prox;
    }
    
    printf("sizeof (celula) = %ld\n", sizeof(Celula));

    return 0;
}
