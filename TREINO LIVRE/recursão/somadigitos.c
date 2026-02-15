#include <stdio.h>
#include <string.h>
long long soma(char *s){

    if (*s == '\0')
    {
        return 0;
    }

    return (*s - '0') + soma(s+1);
    
}

int main()
{
    char n[20];
    if (scanf("%s", n) != EOF) {
        printf("%lld\n", soma(n));
    }
    return 0;
}
