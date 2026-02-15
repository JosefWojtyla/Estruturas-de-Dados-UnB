#include <stdio.h>

int main() {
    int pontos[5];
    
    for (int i = 0; i < 5; i++) {
        scanf("%d", &pontos[i]);
    }
    
    int maior = pontos[0];
    int segundo_maior = -1;
    
    // Encontra a maior pontuação
    for (int i = 1; i < 5; i++) {
        if (pontos[i] < maior) {
            segundo_maior = pontos[i];
            break;
        }
    }
    
    // Se todas as pontuações são iguais
    if (segundo_maior == -1) {
        printf("5 0\n");
        return 0;
    }
    
    // Conta quantos têm a maior pontuação
    int trofeus = 1;
    for (int i = 1; i < 5; i++) {
        if (pontos[i] == maior) {
            trofeus++;
        } else {
            break;
        }
    }
    
    // Conta quantos têm a segunda maior pontuação
    int placas = 1;
    for (int i = trofeus + 1; i < 5; i++) {
        if (pontos[i] == segundo_maior) {
            placas++;
        } else {
            break;
        }
    }
    
    printf("%d %d\n", trofeus, placas);
    
    return 0;
}