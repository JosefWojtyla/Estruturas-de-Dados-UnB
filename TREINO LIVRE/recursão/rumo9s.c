#include <stdio.h>
#include <string.h>
int grau(int n, int g){
    if (n==9) return g;
    
    int nova_soma=0;
    int temp=n;
    while (temp>0)
    {
        nova_soma += temp%10;
        temp /= 10;
    }
    return grau(nova_soma,g+1);
}
int main()
{   
    char n[1001];
    while (scanf("%s",n) && strcmp(n,"0") != 0)
    {
        int soma_inicial=0;
        for (int i = 0; n[i]!= '\0'; i++)
        {
            soma_inicial+= (n[i] - '0');
        }
        if (soma_inicial %9 == 0)
        {
            int resgrau;
            if (soma_inicial==9 && strlen(n)==1)
            {
                resgrau=1;
            }else{
                resgrau=grau(soma_inicial,1);
            }
            printf("%s is a multiple of 9 and has 9-degree %d.\n",n,resgrau);
            
        } else{
            printf("%s is not a multiple of 9.\n",n);
        }
           
    }
    return 0;
}
