#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int bolas[65];
    for (int i = 0; i < N; i++) {
        scanf("%d", &bolas[i]);
    }
    
    // Reduz o triângulo até sobrar apenas uma bola
    int tamanho = N;
    while (tamanho > 1) {
        for (int i = 0; i < tamanho - 1; i++) {
            if (bolas[i] == bolas[i + 1]) {
                bolas[i] = 1; // Preta
            } else {
                bolas[i] = -1; // Branca
            }
        }
        tamanho--;
    }
    
    if (bolas[0] == 1) {
        printf("preta\n");
    } else {
        printf("branca\n");
    }
    
    return 0;
}