#include <stdio.h>
#include <string.h>

int main() {
    char horizontal[1001], vertical[1001];
    scanf("%s %s", horizontal, vertical);
    
    int lenH = strlen(horizontal);
    int lenV = strlen(vertical);
    
    int bestH = -1, bestV = -1;
    
    // Procura a melhor letra de cruzamento
    for (int i = lenH - 1; i >= 0; i--) {
        for (int j = lenV - 1; j >= 0; j--) {
            if (horizontal[i] == vertical[j]) {
                // Encontrou um cruzamento possível
                bestH = i + 1;  // Índice começa em 1
                bestV = j + 1;
                // Continua procurando por um j maior (mais abaixo na vertical)
                // mas como estamos percorrendo de trás pra frente, o primeiro encontrado
                // já é o mais à direita e mais abaixo possível
                break;
            }
        }
        // Se encontrou um cruzamento, para a busca
        if (bestH != -1) break;
    }
    
    // Se não encontrou nenhum cruzamento
    if (bestH == -1) {
        printf("-1 -1\n");
    } else {
        printf("%d %d\n", bestH, bestV);
    }
    
    return 0;
}