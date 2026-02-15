#include <stdio.h>
#include <stdlib.h>

int abs_val(int x) {
    return x < 0 ? -x : x;
}

int main() {
    int A, B, C, D;
    scanf("%d %d %d %d", &A, &B, &C, &D);
    
    int diff1 = abs_val((A+B) - (C+D));
    int diff2 = abs_val((A+C) - (B+D));
    int diff3 = abs_val((A+D) - (B+C));
    
    int min_diff = diff1;
    if(diff2 < min_diff) min_diff = diff2;
    if(diff3 < min_diff) min_diff = diff3;
    
    printf("%d\n", min_diff);
    return 0;
}
