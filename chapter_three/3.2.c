
#include <stdio.h>
#define MAXLINE 1000

void chapter3_second(void);
void escape(char s[], char t[]);

void chapter3_second()
{
    int len;
    char s[MAXLINE], t[MAXLINE];
    while((len = getline(s, MAXLINE)))
    {
        escape(s, t);
        printf("%s\n", t);
    }
}

void escape(char s[], char t[])
{
    int i = 0, j = 0;
    while(s[i] != '\0')
    {
        switch(s[i])
        {
        case '\n':
            t[j++] = '\\';
            t[j++] = 'n';
            break;
        case '\t':
            t[j++] = '\\';
            t[j++] = 't';
            break;
        default:
            t[j++] = s[i];
        }
        i++;
    }
}
