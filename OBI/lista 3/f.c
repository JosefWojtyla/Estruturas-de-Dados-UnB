#include <stdio.h>

int main() {
    int N, M;
    scanf("%d", &N);

    int fila[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &fila[i]);
    }

    scanf("%d", &M);
    int saiu[M];
    int marca[100001] = {0};

    for (int i = 0; i < M; i++) {
        scanf("%d", &saiu[i]);
        marca[saiu[i]] = 1;
    }

    for (int i = 0; i < N; i++) {
        if (!marca[fila[i]]) {
            printf("%d ", fila[i]);
        }
    }
    printf("\n");

    return 0;
}
