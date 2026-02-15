#include <stdio.h>

int main() {
    int N, G, M;
    scanf("%d %d %d", &N, &G, &M);

    int total_pedacos = 8 * G + 6 * M;
    int sobra = total_pedacos - N;
    if (sobra < 0) sobra = 0;

    printf("%d\n", sobra);
    return 0;
}
