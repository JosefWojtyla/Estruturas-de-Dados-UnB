#include <stdio.h>

int main() {
    int aposta[6], sorteio[6];
    
    for (int i = 0; i < 6; i++) {
        scanf("%d", &aposta[i]);
    }
    
    for (int i = 0; i < 6; i++) {
        scanf("%d", &sorteio[i]);
    }
    
    int acertos = 0;
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            if (aposta[i] == sorteio[j]) {
                acertos++;
                break;
            }
        }
    }
    
    if (acertos == 6) {
        printf("sena\n");
    } else if (acertos == 5) {
        printf("quina\n");
    } else if (acertos == 4) {
        printf("quadra\n");
    } else if (acertos == 3) {
        printf("terno\n");
    } else {
        printf("azar\n");
    }
    
    return 0;
}