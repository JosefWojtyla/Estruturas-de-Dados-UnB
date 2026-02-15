#include <stdio.h>

int main() {
    int H, P, F, D;
    scanf("%d %d %d %d", &H, &P, &F, &D);
    
    int pos = F;
    int conseguiu = 0;
    
    for (int i = 0; i < 16; i++) {
        if (pos == H) {
            conseguiu = 1;
            break;
        }
        if (pos == P) {
            conseguiu = 0;
            break;
        }
        pos = (pos + D + 16) % 16;
    }
    
    printf("%c\n", conseguiu ? 'S' : 'N');
    return 0;
}
