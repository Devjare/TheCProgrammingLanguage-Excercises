#include <stdio.h>
#define MAX 1000
#define THRESHOLD 80

void sevenTeen()
{
    int len = 0;
    char line[MAX];
    while((len = getline(line, MAX)))
        if(len > THRESHOLD)
            printf("Line:\n\t%s\n");
}
