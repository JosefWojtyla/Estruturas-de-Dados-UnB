#include <stdio.h>

int main() {
    int N;
    char pos;
    scanf("%d %c", &N, &pos);
    
    for (int i = 0; i < N; i++) {
        int movimento;
        scanf("%d", &movimento);
        
        if (movimento == 1) {
            // Troca A com B
            if (pos == 'A') pos = 'B';
            else if (pos == 'B') pos = 'A';
        }
        else if (movimento == 2) {
            // Troca B com C
            if (pos == 'B') pos = 'C';
            else if (pos == 'C') pos = 'B';
        }
        else if (movimento == 3) {
            // Troca A com C
            if (pos == 'A') pos = 'C';
            else if (pos == 'C') pos = 'A';
        }
    }
    
    printf("%c\n", pos);
    return 0;
}