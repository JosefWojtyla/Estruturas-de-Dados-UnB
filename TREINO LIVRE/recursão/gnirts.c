#include <stdio.h>
#include <string.h>
char trocar(char *s){
    if (*s == '\0')
    {
        return;
    }

    trocar(s+1);

    printf("%c", *s);
    
}
int main()
{   
    char n[500];
    scanf("%s",n);
    trocar(n);
    return 0;
}
