#include <stdio.h>
#include <stdlib.h>

int main() {
    int D;
    scanf("%d", &D);
    
    // Pontos de ônibus: 0, 400, 800, 1200, 1600, 2000
    // Encontrar o ponto mais próximo
    int ponto = (D + 200) / 400; // Arredonda para o ponto mais próximo
    int distancia = abs(D - ponto * 400);
    
    // Verifica também o ponto anterior e posterior para garantir o mínimo
    int dist_anterior = abs(D - (ponto - 1) * 400);
    int dist_posterior = abs(D - (ponto + 1) * 400);
    
    int min_dist = distancia;
    if (dist_anterior < min_dist) min_dist = dist_anterior;
    if (dist_posterior < min_dist) min_dist = dist_posterior;
    
    printf("%d\n", min_dist);
    return 0;
}