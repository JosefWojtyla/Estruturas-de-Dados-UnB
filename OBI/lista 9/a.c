#include <stdio.h>

int N;
int grid[100][100];
int bandeiras[100][100] = {0};
int direcoes[4][2] = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}}; // N, E, S, W

void passa_bolinha(int i, int j, int numero) {
    if (i < 0 || i >= N || j < 0 || j >= N) return;
    if (bandeiras[i][j]) return;
    
    bandeiras[i][j] = 1;
    
    for (int d = 0; d < 4; d++) {
        int ni = i + direcoes[d][0];
        int nj = j + direcoes[d][1];
        
        if (ni >= 0 && ni < N && nj >= 0 && nj < N) {
            if (grid[ni][nj] >= numero && !bandeiras[ni][nj]) {
                passa_bolinha(ni, nj, grid[ni][nj]);
            }
        }
    }
}

int main() {
    scanf("%d", &N);
    
    int I, J;
    scanf("%d %d", &I, &J);
    I--; J--; // Convertendo para índice 0-based
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &grid[i][j]);
        }
    }
    
    passa_bolinha(I, J, grid[I][J]);
    
    int count = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (bandeiras[i][j]) {
                count++;
            }
        }
    }
    
    printf("%d\n", count);
    return 0;
}