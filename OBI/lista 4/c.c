#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int seq[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &seq[i]);
    }

    int count = 1; // Sempre marcamos o primeiro número
    int last = seq[0];

    for (int i = 1; i < N; i++) {
        if (seq[i] != last) {
            count++;
            last = seq[i];
        }
    }

    printf("%d\n", count);
    return 0;
}
