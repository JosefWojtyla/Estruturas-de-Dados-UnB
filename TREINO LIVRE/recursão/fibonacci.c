#include <stdio.h>

long long int fibonacci(int n){

    static long long int val[81]={0};
    if(n==0) return 0;
    if(n==1 || n==2) return 1;
    
    if(val[n]!=0)
        return val[n];
    
    val[n]=fibonacci(n-1) + fibonacci(n-2);
    return val[n]; 
}
