#include <stdio.h>

int main() {
    int N;
    long long F;
    scanf("%d %lld", &N, &F);
    
    int C[N];
    int maxC = 0;
    for (int i = 0; i < N; i++) {
        scanf("%d", &C[i]);
        if (C[i] > maxC) maxC = C[i];
    }
    
    long long left = 1, right = 100000000; // limite máximo conforme enunciado
    long long ans = right;
    
    while (left <= right) {
        long long mid = (left + right) / 2;
        long long total = 0;
        for (int i = 0; i < N; i++) {
            total += mid / C[i];
        }
        if (total >= F) {
            ans = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    
    printf("%lld\n", ans);
    return 0;
}
