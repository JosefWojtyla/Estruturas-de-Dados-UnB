#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d\n", &N); // Lemos o tamanho
    char fraseA[201], fraseB[201];
    fgets(fraseA, 201, stdin);
    fgets(fraseB, 201, stdin);

    int countA[26] = {0};
    int countB[26] = {0};

    for(int i = 0; i < N; i++) {
        char c = fraseA[i];
        if(c >= 'a' && c <= 'z') countA[c - 'a']++;
    }

    for(int i = 0; i < N; i++) {
        char c = fraseB[i];
        if(c >= 'a' && c <= 'z') countB[c - 'a']++;
    }

    int anagrama = 1;
    for(int i = 0; i < 26; i++) {
        if(countA[i] != countB[i]) {
            anagrama = 0;
            break;
        }
    }

    if(anagrama) printf("S\n");
    else printf("N\n");

    return 0;
}
