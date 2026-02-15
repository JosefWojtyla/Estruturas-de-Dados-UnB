#include <stdio.h>
#include <string.h>

int main() {
    int K, N;
    scanf("%d %d", &K, &N);
    
    char alfabeto[69];
    char mensagem[101];
    
    scanf("%s", alfabeto);
    scanf("%s", mensagem);
    
    int alienigena = 1;
    
    for (int i = 0; i < N; i++) {
        int encontrou = 0;
        for (int j = 0; j < K; j++) {
            if (mensagem[i] == alfabeto[j]) {
                encontrou = 1;
                break;
            }
        }
        if (!encontrou) {
            alienigena = 0;
            break;
        }
    }
    
    printf("%c\n", alienigena ? 'S' : 'N');
    
    return 0;
}