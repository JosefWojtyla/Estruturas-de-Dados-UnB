#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int posicao[100001]; // posicao[i] = posição do atleta i
    
    // Lê a ordem de chegada e armazena a posição de cada atleta
    for (int i = 1; i <= N; i++) {
        int atleta;
        scanf("%d", &atleta);
        posicao[atleta] = i; // O atleta 'atleta' chegou na posição i
    }
    
    // Imprime a posição de cada atleta (do atleta 1 ao atleta N)
    for (int i = 1; i <= N; i++) {
        printf("%d\n", posicao[i]);
    }
    
    return 0;
}