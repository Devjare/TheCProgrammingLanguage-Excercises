#include <stdio.h>

#define BUFFSIZE 100

char buff[BUFFSIZE];
int bufp = 0;

int getch()
{
    return (bufp > 0) ? buff[--bufp] : getchar();
}

void ungetch(int c)
{
    if(bufp >= BUFFSIZE)
        printf("Ungetch: too many characters\n");
    else
        buff[bufp++] = c;
}
