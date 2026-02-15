#include <stdio.h>
#include <stdlib.h>
#include "time.h"

void selectionsort(int *v, int n){

    for (int i = 0; i < n; i++)
    {
        int min=i;
        for (int j = i+1; j < n; j++)
        {
            if(v[j] < v[min]) min = j;
        }

        int aux = v[i];
        v[i] = v[min];
        v[min] = aux;
        
    }
}

int main(){

    int i=0, *v, n;

    printf("quantidade de posicoes no vetor: \n");
    scanf(" %d",&n);

    v = malloc(n * sizeof(int));

    srand(time(NULL));

    printf("DESORDENADO: \n");

    while (i < n)
    {
        v[i] = rand() % 20;
        printf(" %d |", v[i]);
        i++;
    }
    printf("\n");

    selectionsort(v,n);

    i=0;
    printf("ORDENADO: \n");
    while (i < n)
    {
        printf(" %d |", v[i]);
        i++;
    }

    return 0;
}