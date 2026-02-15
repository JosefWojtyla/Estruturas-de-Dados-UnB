#include <stdio.h>

int main() {
    int R, M, L;
    scanf("%d %d %d", &R, &M, &L);

    if (R < M) printf("RM\n");
    else printf("*\n");

    if (R < L) printf("RO\n");
    else printf("*\n");

    return 0;
}
