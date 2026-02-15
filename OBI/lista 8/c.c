#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int A[1000];
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }
    
    int mais_de_um_pico = 0;
    
    for (int i = 1; i < N - 1; i++) {
        if (A[i-1] > A[i] && A[i] < A[i+1]) {
            mais_de_um_pico = 1;
            break;
        }
    }
    
    printf("%c\n", mais_de_um_pico ? 'S' : 'N');
    
    return 0;
}