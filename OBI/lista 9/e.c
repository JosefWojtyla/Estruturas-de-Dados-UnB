#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int mat[100][100];
    
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            int v1 = i<N-i ? i+1 : N-i;
            int v2 = j<N-j ? j+1 : N-j;
            mat[i][j] = v1<v2 ? v1 : v2;
        }
    }
    
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(j>0) printf(" ");
            printf("%d", mat[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
