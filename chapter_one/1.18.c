#include <stdio.h>

#define MAXLINE 1000

void trimAndCopy(char to[], char from[]);
int getlineWithChars(char s[], int lim);

void eighTeen()
{
    int len = 0;
    int s[MAXLINE], trimmedLine[MAXLINE];
    while((len = getlineWithChars(s, MAXLINE)))
    {
        if(len != -1)
        {
            printf("Line: %s", s);
            trimAndCopy(trimmedLine, s);
            printf("Line trimmed: %s", trimmedLine);
        }

    }
}

int getlineWithChars(char s[], int lim)
{
    int lettersFound = 0;
    int c, i;
    for (i = 0;i < lim - 1 && (c = getchar()) != EOF && c != '\n';++i)
    {
        if(c != ' ' && c != '\t') lettersFound = 1;
        s[i] = c;
    }
    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }

    s[i] = '\0';

    if(lettersFound == 0) i = -1;
    return i;
}

void trimAndCopy(char to[], char from[])
{
    int i, spacecount, lastValidIndex, firstIsLetter = 0;
    i = spacecount = lastValidIndex = firstIsLetter = 0;
    while(from[i] != '\0')
    {
        if(from[i] == ' ' || from[i] == '\t')
        {
            if(spacecount == 0 && firstIsLetter)
            {
                to[lastValidIndex++] = ' ';
                spacecount++;
            }
            i++;
        }
        else
        {
            if(!firstIsLetter) firstIsLetter = 1;
            to[lastValidIndex++] = from[i++];
            spacecount = 0;
        }
    }
}
