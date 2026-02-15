#include <stdio.h>

void desenha_linha(int n, int s){
    
    if (n==0)
    {
        printf("\n");
        return;
    }
    if (s==1)
    {
        printf(".");
    }
    
    printf("-");
    desenha_linha(n-1,0);

}
void regua(int n){
    if (n == 0)
    {
        return;
    }
    regua(n-1);
    desenha_linha(n,1);
    regua(n-1);
}
int main()
{
    int n;
    scanf("%d", &n);
    regua(n);
    return 0;
}
