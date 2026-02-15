#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    
    int* A = (int*)malloc(N * sizeof(int));
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }
    
    // Verificar se a sequência é possível
    for (int i = 1; i < N; i++) {
        int prev_min = (A[i-1] < M - A[i-1]) ? A[i-1] : M - A[i-1];
        int prev_max = (A[i-1] > M - A[i-1]) ? A[i-1] : M - A[i-1];
        int curr_min = (A[i] < M - A[i]) ? A[i] : M - A[i];
        int curr_max = (A[i] > M - A[i]) ? A[i] : M - A[i];
        
        // O próximo valor deve ser >= valor anterior
        if (curr_min < prev_min && curr_max < prev_min) {
            printf("-1\n");
            free(A);
            return 0;
        }
    }
    
    long long total = 0;
    int anterior = 0;
    
    for (int i = 0; i < N; i++) {
        int op1 = A[i];
        int op2 = M - A[i];
        
        int escolha;
        if (op1 >= anterior && op2 >= anterior) {
            // Ambos são válidos, escolher o menor
            escolha = (op1 < op2) ? op1 : op2;
        } else if (op1 >= anterior) {
            escolha = op1;
        } else if (op2 >= anterior) {
            escolha = op2;
        } else {
            // Nenhuma opção é válida
            printf("-1\n");
            free(A);
            return 0;
        }
        
        total += escolha;
        anterior = escolha;
    }
    
    printf("%lld\n", total);
    free(A);
    return 0;
}