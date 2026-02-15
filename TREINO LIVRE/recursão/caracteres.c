#include <stdio.h>

int pares(char *s){

    if(*s =='\0' || *(s+1) == '\0' || *(s+2) == '\0')
        return 0;

    if(*(s) == *(s+2)){
        return 1 + pares(s+1);
    }

    return pares(s+1);
}

int main(){

    char str[201];
    int qtd, cont=0;
    scanf(" %[^\n]",str);
    qtd=pares(str);
    printf("%d\n",qtd);

    return 0;
}