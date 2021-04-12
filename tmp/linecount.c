#include <stdio.h>

int main()
{
    int linecount = 0, c;
    while((c = getchar()) != EOF)
    {
        if(c == '\n')
            linecount++;
        if(linecount == 10) break;
    }

    printf("Lines: %d", linecount);
    return 0;
}
