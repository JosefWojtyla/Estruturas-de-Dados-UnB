#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int A[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    int soma = A[0] + A[N - 1];
    int escher = 1;

    for (int i = 1; i < N; i++) {
        if (A[i] + A[N - 1 - i] != soma) {
            escher = 0;
            break;
        }
    }

    if (escher)
        printf("S\n");
    else
        printf("N\n");

    return 0;
}
