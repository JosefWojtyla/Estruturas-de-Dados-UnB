#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int sequencia[10000];
    for (int i = 0; i < N; i++) {
        scanf("%d", &sequencia[i]);
    }
    
    int count = 0;
    for (int i = 0; i < N - 2; i++) {
        if (sequencia[i] == 1 && sequencia[i + 1] == 0 && sequencia[i + 2] == 0) {
            count++;
        }
    }
    
    printf("%d\n", count);
    return 0;
}