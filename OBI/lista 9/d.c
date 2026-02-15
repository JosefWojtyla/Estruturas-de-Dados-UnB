#include <stdio.h>

int main() {
    char tab[7][8];
    for(int i=0;i<7;i++) {
        scanf("%s", tab[i]);
    }
    
    int movimentos = 0;
    
    for(int i=0;i<7;i++) {
        for(int j=0;j<7;j++) {
            if(tab[i][j]=='o') {
                // para cima
                if(i>=2 && tab[i-1][j]=='o' && tab[i-2][j]=='.') movimentos++;
                // para baixo
                if(i<=4 && tab[i+1][j]=='o' && tab[i+2][j]=='.') movimentos++;
                // para esquerda
                if(j>=2 && tab[i][j-1]=='o' && tab[i][j-2]=='.') movimentos++;
                // para direita
                if(j<=4 && tab[i][j+1]=='o' && tab[i][j+2]=='.') movimentos++;
            }
        }
    }
    
    printf("%d\n", movimentos);
    return 0;
}
