#include <stdio.h>

// TABSPACE = 3 cuz the replaced \t also counts as one of the tabs spaces.
#define TABSPACE 3
#define MAXLEN 1000

int detab(char s[], int length);
void moveNSpacesRight(char s[], int lenght, int n, int start); /* move n spaces to the right, from the indicated start */

void twenty()
{
    char s[MAXLEN];
    int len;
    while((len = getline(s, MAXLEN)))
    {
        printf("Tabbed string: ");
        printStringInASCII(s, len);
        len += detab(s, len);
        printf("Detabbed string: ");
        printStringInASCII(s, len);
    }
}

int detab(char s[], int length)
{
    int extraLength = 0;
    for(int i = 0;i < length;i++)
    {
        if(s[i] == '\t')
        {
            // replaces the tab to a blank, so it 'dissappears' from string.
            s[i] = ' ';
            moveNSpacesRight(s, length, TABSPACE , i);
            extraLength += TABSPACE;
            length += extraLength;
        }
    }
    return extraLength;
}

void moveNSpacesRight(char s[], int lenght, int n, int start)
{
    for(int i = lenght - 1;i > start;i--)
    {
        s[i+n] = s[i];
        s[i] = ' ';
    }
}

void printStringInASCII(char s[], int len)
{
    for(int i = 0;i < len;i++) printf(" %d ", s[i]);

    printf("\n");
}
