#include <stdio.h>

void chapter3_fifth(void);
void itob(int n, char s[], int b);
int foofoo();

void chapter3_fifth()
{
    int n = 13;
    int b = 16;
    char s[1000];
    itob(n, s, b);
    printf("%d in base %d = %s\n", n, b, s);
}

void itob(int n, char s[], int b)
{
    int i = 0, mod;
    while(n > 0)
    {
        mod = n % b;
        s[i++] = mod > 9 ? ('7' + mod) : (mod + '0');
        n = n / b;
    }
    rev(s);
}
