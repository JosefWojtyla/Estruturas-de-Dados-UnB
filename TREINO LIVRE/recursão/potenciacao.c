#include <stdio.h>

double potencia(double a, int b){
    if (b==0)
    {
        return 1;
    }
    if(b==1)
        return a;

    if(b>0)
        return a * potencia(a,b-1);

    if(b<0)
        return (1/a) * potencia(a, b+1);
}

int main(){

    int a,b;
    scanf("%d %d", &a,&b);

    double result=potencia((double)a,b);

    if(a == 0 && b <=0 ){
        printf("indefinido");
    }else{
        printf("%lf", result);
    }
    
}