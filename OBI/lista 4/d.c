#include <stdio.h>

int main() {
    int A, N;
    scanf("%d", &A);
    scanf("%d", &N);

    int moedas_marinheiro = A / (N + 2); // Capitão recebe o dobro, total = N*X + 2*X = (N+2)*X
    int moedas_capitao = 2 * moedas_marinheiro;

    printf("%d\n", moedas_capitao);
    return 0;
}
