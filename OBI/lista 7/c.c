#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char frase[201];
    fgets(frase, 201, stdin);
    
    // Alfabeto português sem k, w, y
    char alfabeto[] = "abcdefghijlmnopqrstuvxz";
    int letras[26] = {0}; // Para marcar letras encontradas
    
    int len = strlen(frase);
    
    for (int i = 0; i < len; i++) {
        char c = frase[i];
        if (isalpha(c)) {
            // Marca a letra como encontrada
            switch(c) {
                case 'a': letras[0] = 1; break;
                case 'b': letras[1] = 1; break;
                case 'c': letras[2] = 1; break;
                case 'd': letras[3] = 1; break;
                case 'e': letras[4] = 1; break;
                case 'f': letras[5] = 1; break;
                case 'g': letras[6] = 1; break;
                case 'h': letras[7] = 1; break;
                case 'i': letras[8] = 1; break;
                case 'j': letras[9] = 1; break;
                case 'l': letras[10] = 1; break;
                case 'm': letras[11] = 1; break;
                case 'n': letras[12] = 1; break;
                case 'o': letras[13] = 1; break;
                case 'p': letras[14] = 1; break;
                case 'q': letras[15] = 1; break;
                case 'r': letras[16] = 1; break;
                case 's': letras[17] = 1; break;
                case 't': letras[18] = 1; break;
                case 'u': letras[19] = 1; break;
                case 'v': letras[20] = 1; break;
                case 'x': letras[21] = 1; break;
                case 'z': letras[22] = 1; break;
            }
        }
    }
    
    // Verifica se todas as letras foram encontradas
    int pangrama = 1;
    for (int i = 0; i < 23; i++) {
        if (letras[i] == 0) {
            pangrama = 0;
            break;
        }
    }
    
    printf("%c\n", pangrama ? 'S' : 'N');
    return 0;
}