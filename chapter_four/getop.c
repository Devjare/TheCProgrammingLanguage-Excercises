#include <ctype.h>
#include <stdio.h>
#include "calc.h"

int a = 125;

int getop(char s[])
{
    int i, c;

    while((s[0] = c = getch()) == ' ' || c == '\t');
    s[1] = '\0';
    if(c == 's' && getch() == 'i' && getch() == 'n') return SIN;
    if(c == 'e' && getch() == 'x' && getch() == 'p') return EXP;
    if(c == 'p' && getch() == 'o' && getch() == 'w') return POW;
    if(!isdigit(c) && c != '.')
        return c;
    i = 0;
    if(isdigit(c))
        while(isdigit(s[++i] = c = getch()));
    if(c == '.')
        while(isdigit(s[++i] = c = getch()));
    s[i] = '\0';
    if(c != EOF)
        ungetch(c);
    return NUMBER;
}
