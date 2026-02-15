#include <stdio.h>

int main() {
    int N, M;
    scanf("%d", &N);
    scanf("%d", &M);

    int coladas[N + 1];
    for (int i = 1; i <= N; i++) coladas[i] = 0;

    for (int i = 0; i < M; i++) {
        int X;
        scanf("%d", &X);
        coladas[X] = 1;
    }

    int faltam = 0;
    for (int i = 1; i <= N; i++) {
        if (!coladas[i]) faltam++;
    }

    printf("%d\n", faltam);
    return 0;
}
