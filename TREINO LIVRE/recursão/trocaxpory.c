#include <stdio.h>
#include <string.h>
char trocarxpory(char *s){
    if (*s == '\0')
    {
        return;
    }
    if (*s != 'x')
    {
        printf("%c", *s);
        trocarxpory(s +1);
    }
    if (*s == 'x'){
        printf("y");
        trocarxpory(s+1);
    }
    
}

int main( )
{
    char n[80];
    scanf("%s",n);
    trocarxpory(n);
    return 0;
}
