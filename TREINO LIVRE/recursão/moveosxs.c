#include <stdio.h>
#include <string.h>
void moverosxs(char *s){
    if (*s == '\0'){
        return;
    } 
    if(*s != 'x'){
        printf("%c",*s);
        moverosxs(s+1);
    } else {
        moverosxs(s+1);
        printf("%c",*s);
    }
    
    
}
int main( )
{
    char n[101];
    if (scanf("%s", n) != EOF) {
        moverosxs(n);
        printf("\n"); 
    }
    return 0;
}
