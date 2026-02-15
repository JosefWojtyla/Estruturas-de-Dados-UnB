#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int tab[N][N];
    
    for(int i=0;i<N;i++) {
        for(int j=0;j<N;j++) {
            scanf("%d", &tab[i][j]);
        }
    }
    
    for(int i=1;i<N;i++) {
        for(int j=1;j<N;j++) {
            if(tab[i][j]==9) {
                int brancas=0, pretas=0;
                int vals[3] = {tab[i][j-1], tab[i-1][j-1], tab[i-1][j]};
                for(int k=0;k<3;k++) {
                    if(vals[k]==0) brancas++;
                    else pretas++;
                }
                tab[i][j] = (brancas > pretas) ? 1 : 0;
            }
        }
    }
    
    printf("%d\n", tab[N-1][N-1]);
    return 0;
}
