#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int P[N];
    for(int i=0; i<N; i++) scanf("%d", &P[i]);

    int max_count = 0, count = 0;

    for(int i=0; i<N; i++){
        int next = (i+1)%N;
        if(P[i] + P[next] < 1000){
            count++;
            if(count > max_count) max_count = count;
        } else {
            count = 0;
        }
    }

    printf("%d\n", max_count);
    return 0;
}
