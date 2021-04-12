#include <stdio.h>

#define MAXLEN 1000

void revers(char line[], int len);
void reverseOnAnother(char reversed[], char line[], int len);

void nineTeen()
{
    int len = 0;
    char line[MAXLEN], reversed[MAXLEN];
    while((len = getline(line, MAXLEN)))
    {
        // reverseOnAnother(reversed, line, len);
        printf("Original: \n%s", line);
        reverse(line, len);
        printf("Reversed: \n%s", line);
    }
}

void reverse(char line[], int len)
{
    char tmp;
    for(int i = 0, j = len - 2;j >= 0 && i < (len-1)/2;j--,i++)
    {
        tmp = line[i];
        line[i] = line[j];
        line[j] = tmp;
    }
}

void reverseOnAnother(char reversed[], char line[], int len)
{
    for(int i = 0, j = len - 2;j >= 0 && i < len;j--,i++)
        reversed[i] = line[j];
    reversed[len - 1] = '\n';
}
