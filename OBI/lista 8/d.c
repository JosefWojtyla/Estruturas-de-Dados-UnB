#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int pesos[N];
    for(int i = 0; i < N; i++) {
        scanf("%d", &pesos[i]);
    }
    
    if(pesos[N-1] - pesos[0] <= 8)
        printf("S\n");
    else
        printf("N\n");
    
    return 0;
}
