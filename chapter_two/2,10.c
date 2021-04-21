
#include <stdio.h>

void chapter2_tenth(void);
void toLower(char s[], int len);

void chapter2_tenth()
{
    char s[1000];
    int len;
    while((len = getline(s, 1000)))
    {
        toLower(s, len);
        printf("Lowered = %s\n", s);
    }
}

void toLower(char s[], int len)
{
    int i = 0;
    while(s[i] != '\0')
    {
        s[i] += (s[i] >= 'A' && s[i] <= 'Z') ? 'a' : 0;
        i++;
    }
}
