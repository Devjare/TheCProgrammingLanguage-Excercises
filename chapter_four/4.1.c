#include <stdio.h>
#include <string.h>

void chapter4_first(void);
int strindex(char s[], char t[]);
int strindex_rightmost(char s[], char t[]);

void chapter4_first()
{
    char pattern[] = "ould";
    char line[1000];
    int found = 0;
    while(getline(line, 1000) > 0)
    {
        if(strindex_rightmost(line, pattern) >= 0)
        {
            printf("%s\n", line);
            found++;
        }
    }

    printf("Total Found: %d\n", found);
}

int strindex_rightmost(char s[], char t[])
{
    int i, j, k;
    for (i = strlen(s) - 1; i >= 0; i--) {
        for (j = i, k = strlen(t) - 1; k >= 0 && s[j] == t[k]; j--, k--) {}
        // printf("K: %d, strlen(t): %d\n", k, strlen(t) - 1);
        if (k > (strlen(t) - 1)) return i;
    }
    return -1;
}

/* strindex: return index of t in s, -1 if none */
int strindex(char s[], char t[])
{
    int i, j, k;
    for (i = 0; s[i] != '\0'; i++) {
        for (j=i, k=0; t[k]!='\0' && s[j]==t[k]; j++, k++);
        if (k > 0 && t[k] == '\0') return i;
    }
    return -1;
}
