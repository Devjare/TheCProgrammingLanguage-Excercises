#include <stdio.h>

#define MAX 1000

void chapter3_third(void);
void expand(char s1[], char s2[]);

void chapter3_third()
{
    int len;
    char s1[MAX], s2[MAX];
    len = getline(s1, MAX);
    expand(s1, s2);
    printf("Expanded: %s\n", s2);
}

void expand(char s1[], char s2[])
{
    int i = 0, j = 0;
    while(s1[i] != '\0')
    {
        while(s1[i] == '-') s2[j++] = '-', i++;
        if(s1[i] != '-')
        {
            // a-z, a = min, z = max;
            char min = s1[i++];
            char max = s1[++i];
            for(int k = min;k <= max;k++)
            {
                s2[j++] = k;
            }
            i++;
            if(s1[i] == '-')
            {
                // third limit a-b-c
                char last = s1[++i];
                for(int k = max + 1;k <= last;k++)
                {
                    s2[j++] = k;
                }
            }
            else if(s1[i] == '\n')
            {
                s2[j] = '\n';
                break;
            }
            i++;
        }
    }
}
