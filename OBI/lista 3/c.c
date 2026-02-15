#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int estoque[N + 1];
    for (int i = 1; i <= N; i++) {
        scanf("%d", &estoque[i]);
    }

    int P, pedidos, vendidos = 0;
    scanf("%d", &P);

    for (int i = 0; i < P; i++) {
        scanf("%d", &pedidos);
        if (estoque[pedidos] > 0) {
            estoque[pedidos]--;
            vendidos++;
        }
    }

    printf("%d\n", vendidos);
    return 0;
}
