#include <stdio.h>

int main() {
    int N, C, S;
    scanf("%d %d %d", &N, &C, &S);
    
    int pos = 1; // Posição inicial do robô
    int count = 0;
    
    // Verifica a posição inicial
    if (pos == S) {
        count++;
    }
    
    for (int i = 0; i < C; i++) {
        int comando;
        scanf("%d", &comando);
        
        // Move o robô
        if (comando == 1) {
            pos = (pos % N) + 1; // Sentido horário
        } else { // comando == -1
            pos = (pos == 1) ? N : pos - 1; // Sentido anti-horário
        }
        
        // Verifica se está na estação S
        if (pos == S) {
            count++;
        }
    }
    
    printf("%d\n", count);
    return 0;
}