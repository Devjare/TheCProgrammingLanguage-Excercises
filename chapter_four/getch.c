#include <stdio.h>
#include "calc.h"

#define BUFFSIZE 100

static char buff[BUFFSIZE];
static int bufp = 0;

int getch()
{
    return (bufp > 0) ? buff[--bufp] : getchar();
}

void ungetch(int c)
{
    if(bufp >= BUFFSIZE)
        printf("Error: too many characters!\n");
    else
        buff[bufp++] = c;
}
