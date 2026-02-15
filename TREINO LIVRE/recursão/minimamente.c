#include <stdio.h>

//arrumar quantos passos foram feitos para direcionar as funções
/*
int soma(int* a, int meta, int k){
    int total;

    if(total<=meta){
        return *a + soma(a+1, meta, k);
    }else{
        min(a,meta,k); //preciso indicar qual o indice. How? i'm still unpacking
    }
}
*/
void min(int *s,int f,int i){
    int pos=0;
    int venc=0;
    if(i<=0) return;  
    if(*(s+pos) == 0) return;
    long int total=0;
    
    /* COMENTEI PARA PEGAR DEPOIS MAIS FACILMENTE, NÃO IRÁ RODAR POIS ESTÁ COMENTADO
    while (total<=f && pos<i)
    {
        total+=*(s+pos);
        pos++;
    }
    */
    //tentando transformar totalmente recursivo e sem laços nas funções
    
    soma(s,f,i);

    if (total>f)
    {
        venc=*(s+(pos-1));
        min(s+pos, f,i-pos);
        printf("%d\n", venc);
    }else{
        return;
    }
    
}
int main( )
{
    int n, i=0,f;
    int k[10000];

    while(scanf("%d",&n)==1 && n!=0){
        k[i]=n;
        i++;
    }
    scanf("%d", &f);
    min(k,f,i);

    return 0;
}
