#include <stdio.h>
#include <stdlib.h>
#include "time.h"

void insertionsort(int *v,int n){

    /* for (int j = 1; j < n; j++)
    {
        int x = v[j];
        int i;

        for (i = j-1; i >= 0 && v[i] > x; i--)
        {
            v[i+1] = v[i];
        }
        v[i+1] = x;

    } */

    for(int i = 1; i < n; i++){
        for(int j = i; j > 0 && v[j] < v[j-1]; j--){
    
                int aux = v[j];
                v[j] = v[j-1];
                v[j-1] = aux;

            }
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

    insertionsort(v,n);

    i=0;
    printf("ORDENADO: \n");
    while (i < n)
    {
        printf(" %d |", v[i]);
        i++;
    }

    return 0;
}