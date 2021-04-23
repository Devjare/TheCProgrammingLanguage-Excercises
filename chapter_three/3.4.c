#include <stdio.h>
#include <string.h>
#include <limits.h>

#define MAX 1000

void chapter3_fourth();
void rev(char s[]);

void chapter3_fourth()
{
    char s[MAX];
    int n = INT_MIN;
    itoa(n, s);
    printf("%d as string: %s\n", n, s);
}
void itoa(int n, char s[])
{
    int i, sign, isMinInt = (n == INT_MIN);
    if ((sign = n) < 0) /* record sign */
        n = -n; /* make n positive */
    i = 0;
    do
    { /* generate digits in reverse order */
        if(isMinInt)
            s[i++] = -(n % 10) + '0'; /* get next digit making result positive. */
        else
            s[i++] = n % 10 + '0'; /* get next digit */
    } while (-(n /= 10) > 0); /* delete it */
    if (sign < 0)
        s[i++] = '-';
    s[i] = '\0';

    rev(s);
}

/* reverse: reverse string s in place */
void rev(char s[])
{
    int c, i, j;
    for (i = 0, j = strlen(s)-1; i < j; i++, j--)
    {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}
