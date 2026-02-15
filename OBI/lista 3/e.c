#include <stdio.h>

int min(int a, int b) {
    return a < b ? a : b;
}

int main() {
    int N;
    scanf("%d", &N);

    int fita[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &fita[i]);
    }

    int dist[N];

    // Passagem da esquerda para a direita
    int d = 10000;
    for (int i = 0; i < N; i++) {
        if (fita[i] == 0) d = 0;
        else d++;
        dist[i] = d;
    }

    // Passagem da direita para a esquerda
    d = 10000;
    for (int i = N - 1; i >= 0; i--) {
        if (fita[i] == 0) d = 0;
        else d++;
        dist[i] = min(dist[i], d);
    }

    for (int i = 0; i < N; i++) {
        int cor = dist[i];
        if (cor > 9) cor = 9;
        printf("%d", cor);
        if (i < N - 1) printf(" ");
    }
    printf("\n");

    return 0;
}
