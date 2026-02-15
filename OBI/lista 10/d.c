#include <stdio.h>

int main() {
    int N, I, P;
    scanf("%d %d %d", &N, &I, &P);
    
    int pos = (I + P - 1) % N + 1;
    printf("%d\n", pos);
    return 0;
}
