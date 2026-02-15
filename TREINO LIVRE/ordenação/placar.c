#include <stdio.h>

void placar(int p, int *paulo, int c, int *camila){
    int i=0, j=0;

    printf("%d %d\n", i, j);

    while(i < p || j < c){
        if(i < p && (j == c || paulo[i] < camila[j])){
            i++;
            
        }else{
            j++;
        }
        printf("%d %d\n",i, j);
    }
}
int main(){
    int p, c, paulo[101], camila[101],min;
    scanf("%d", &p);
    for (int i = 0; i < p; i++)
    {
        scanf("%d", &paulo[i]);
    }
    
    scanf("%d", &c);
    for (int j = 0; j < c; j++)
    {
        scanf("%d", &camila[j]);
    }

    placar(p,paulo, c,camila);

    return 0;
}