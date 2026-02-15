#include <stdio.h>
#include <stdlib.h>
#include "time.h"

void bubblesort(int *v, int n){

    for(int i=0; i < n; i++){
        for(int j = 0; j < n - 1; j++){
            if(v[j+1] < v[j]){
                int aux = v[j+1];
                v[j+1] = v[j];
                v[j] = aux;
            }
            
        }
    }
}

int main(){
    
    int i=0, n = 10;
    int *v = malloc(n * sizeof(int));

    srand(time(NULL));

    printf("DESORDENADO: \n");
    while (i < n)
    {
        v[i] = rand() % 20;
        printf(" %d |", v[i]);
        i++;
    }
    printf("\n");


    clock_t t;
    t = clock();


    bubblesort(v,n);

    i=0;
    printf("ORDENADO: \n");
    while (i < n)
    {
        printf(" %d |", v[i]);
        i++;
    }

    double tempo_execucao = ((double)t) / CLOCKS_PER_SEC;

    printf("Tempo levado: %f segundos\n", tempo_execucao);

    free(v);

    return 0;
}