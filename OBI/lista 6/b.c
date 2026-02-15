#include <stdio.h>

int main() {
    int A, S, D;
    scanf("%d %d %d", &A, &S, &D);
    
    int dias = 0;
    int altura = 0;
    
    while (altura < A) {
        dias++;
        altura += S;
        if (altura >= A) {
            break;
        }
        altura -= D;
    }
    
    printf("%d\n", dias);
    return 0;
}