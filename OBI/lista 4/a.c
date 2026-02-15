#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int mat[N][N];
    int zero_i = -1, zero_j = -1;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &mat[i][j]);
            if (mat[i][j] == 0) {
                zero_i = i;
                zero_j = j;
            }
        }
    }

    int soma_magica = 0;
    // Encontrar uma linha sem zero para calcular a soma mágica
    for (int i = 0; i < N; i++) {
        int linha_soma = 0;
        int tem_zero = 0;
        for (int j = 0; j < N; j++) {
            if (mat[i][j] == 0) tem_zero = 1;
            linha_soma += mat[i][j];
        }
        if (!tem_zero) {
            soma_magica = linha_soma;
            break;
        }
    }

    // Soma da linha com zero
    int soma_linha_zero = 0;
    for (int j = 0; j < N; j++) {
        soma_linha_zero += mat[zero_i][j];
    }

    int valor_zero = soma_magica - soma_linha_zero;
    if (valor_zero <= 0) valor_zero = soma_magica - (soma_linha_zero - 0);

    printf("%d\n", valor_zero);
    printf("%d\n", zero_i + 1);
    printf("%d\n", zero_j + 1);

    return 0;
}
