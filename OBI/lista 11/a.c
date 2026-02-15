#include <stdio.h>

int main() {
    int K, L;
    scanf("%d %d", &K, &L);
    
    int posK = K - 1;
    int posL = L - 1;
    
    int round = 1; // 1=oitavas,2=quartas,3=semifinal,4=final
    while ((posK/2) != (posL/2)) {
        posK /= 2;
        posL /= 2;
        round++;
    }
    
    if (round == 1) printf("oitavas\n");
    else if (round == 2) printf("quartas\n");
    else if (round == 3) printf("semifinal\n");
    else if (round == 4) printf("final\n");
    
    return 0;
}
