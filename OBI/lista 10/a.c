#include <stdio.h>

unsigned long long gcd(unsigned long long a, unsigned long long b) {
    while (b != 0) {
        unsigned long long t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int main() {
    unsigned long long N, M;
    scanf("%llu %llu", &N, &M);
    
    unsigned long long X = M;
    while (gcd(X, N) != 1) {
        X--;
    }
    
    printf("%llu\n", X);
    return 0;
}