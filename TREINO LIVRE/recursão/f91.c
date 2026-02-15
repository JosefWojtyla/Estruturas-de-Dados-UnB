#include <stdio.h>

int f91(int n) {
    if (n >= 101) {
        return n - 10;
    } else {
        return f91(f91(n + 11));
    }
}

int main() {
    int n, m;
    while (scanf("%d", &n) == 1 && n != 0) {
        m = f91(n);
        printf("f91(%d) = %d\n", n, m);
    }

    return 0;
}