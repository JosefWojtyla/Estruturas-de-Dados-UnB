#include <stdio.h>

int main() {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    if (A == B) printf("%d\n", C);
    else if (A == C) printf("%d\n", B);
    else printf("%d\n", A);

    return 0;
}
