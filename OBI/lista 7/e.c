#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);
    
    char str[1001];
    scanf("%s", str);
    
    int count = 1;
    for (int i = 0; i < N; i++) {
        if (i == N - 1 || str[i] != str[i + 1]) {
            printf("%d %c", count, str[i]);
            if (i != N - 1) printf(" ");
            count = 1;
        } else {
            count++;
        }
    }
    printf("\n");
    
    return 0;
}