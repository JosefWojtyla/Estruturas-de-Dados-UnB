#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    char estados[27][3];
    float A, G;
    int encontrou = 0;
    
    for (int i = 0; i < N; i++) {
        scanf("%s %f %f", estados[i], &A, &G);
        
        if (A <= 0.7 * G) {
            printf("%s\n", estados[i]);
            encontrou = 1;
        }
    }
    
    if (!encontrou) {
        printf("*\n");
    }
    
    return 0;
}