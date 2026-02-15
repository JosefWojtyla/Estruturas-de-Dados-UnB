#include <stdio.h>
#include <math.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int soma = 0;
    
    for (int i = 0; i < N; i++) {
        int termo;
        scanf("%d", &termo);
        
        // Separa o último dígito (expoente) do resto do número (base)
        int expoente = termo % 10;
        int base = termo / 10;
        
        // Calcula base^expoente e adiciona à soma
        int potencia = 1;
        for (int j = 0; j < expoente; j++) {
            potencia *= base;
        }
        soma += potencia;
    }
    
    printf("%d\n", soma);
    return 0;
}