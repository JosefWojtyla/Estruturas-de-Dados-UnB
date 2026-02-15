#include <stdio.h>

int main() {
    int T1, T2, T3;
    scanf("%d %d %d", &T1, &T2, &T3);

    // Ouro
    if (T1 < T2 && T1 < T3) printf("1\n");
    else if (T2 < T1 && T2 < T3) printf("2\n");
    else printf("3\n");

    // Prata
    if ((T1 > T2 && T1 < T3) || (T1 > T3 && T1 < T2)) printf("1\n");
    else if ((T2 > T1 && T2 < T3) || (T2 > T3 && T2 < T1)) printf("2\n");
    else printf("3\n");

    // Bronze
    if (T1 > T2 && T1 > T3) printf("1\n");
    else if (T2 > T1 && T2 > T3) printf("2\n");
    else printf("3\n");

    return 0;
}
