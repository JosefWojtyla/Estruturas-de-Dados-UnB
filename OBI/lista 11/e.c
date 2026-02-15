#include <stdio.h>

int main() {
    int E, M, D;
    scanf("%d %d %d", &E, &M, &D);

    int group[E + 1]; // group[i] = índice do grupo do estudante i
    for(int i = 1; i <= E; i++) group[i] = -1;

    int pairs[M][2], notPairs[D][2];

    for(int i = 0; i < M; i++) scanf("%d %d", &pairs[i][0], &pairs[i][1]);
    for(int i = 0; i < D; i++) scanf("%d %d", &notPairs[i][0], &notPairs[i][1]);

    int numGroups = E / 3;
    for(int i = 0; i < numGroups; i++){
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        group[a] = i;
        group[b] = i;
        group[c] = i;
    }

    int violations = 0;

    for(int i = 0; i < M; i++){
        int x = pairs[i][0], y = pairs[i][1];
        if(group[x] != group[y]) violations++; // queriam estar juntos, mas não estão
    }

    for(int i = 0; i < D; i++){
        int u = notPairs[i][0], v = notPairs[i][1];
        if(group[u] == group[v]) violations++; // não queriam estar juntos, mas estão
    }

    printf("%d\n", violations);
    return 0;
}
