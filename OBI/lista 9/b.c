#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int tabuleiro[1000][1000];
    int soma_linha[1000] = {0};
    int soma_coluna[1000] = {0};
    
    // Lê o tabuleiro e calcula somas das linhas e colunas
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &tabuleiro[i][j]);
            soma_linha[i] += tabuleiro[i][j];
            soma_coluna[j] += tabuleiro[i][j];
        }
    }
    
    int peso_maximo = 0;
    
    // Calcula o peso para cada posição (i, j)
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            // Peso = soma_linha[i] + soma_coluna[j] - 2 * tabuleiro[i][j]
            // (subtrai duas vezes porque o número na posição (i,j) está tanto na linha quanto na coluna)
            int peso = soma_linha[i] + soma_coluna[j] - 2 * tabuleiro[i][j];
            if (peso > peso_maximo) {
                peso_maximo = peso;
            }
        }
    }
    
    printf("%d\n", peso_maximo);
    
    return 0;
}