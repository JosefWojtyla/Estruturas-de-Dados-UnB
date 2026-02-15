#include <stdio.h>

#define TAM 5 
void criaFila(int fila[], int N, int *p, int *u){
*p = 0;
*u = 0;

}

int filaVazia(int p, int u){
    return (p==u);
}

int filaCheia(int u, int N){
    return (u==N);
}

//encapsular a fila
//inserir na fila
int colocanafila(int fila[], int N, int *u, int y){
    if(filaCheia(*u, N)) return 0;

    fila[*u] = y;
    (*u)++;
    return 1;
}
//remover na fila
int tiradafila(int fila[], int *p, int u, int *x){
    if(filaVazia(*p,u)) return 0;

    *x = fila[*p];
    (*p)++;
    return 1;
}

int main(){
    int fila[TAM];
    int p,u;
    int x;

    criaFila(fila, TAM, &p, &u);

    colocanafila(fila, TAM, &u, 10);
    colocanafila(fila, TAM, &u, 20);
    colocanafila(fila, TAM, &u, 30);

    for (int  i = p; i < u; i++) printf("%d", fila[i]);

    printf("\n------------------------\n");

    while (!filaVazia(p,u))
    {
        tiradafila(fila, &p, u, &x);
        printf("Removido: %d\n",x);
    }

    for (int  i = p; i < u; i++) printf("%d", fila[i]);

    printf("------------------------\n");
    
    return 0;
}