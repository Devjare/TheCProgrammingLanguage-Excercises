#include <stdio.h>

void nine()
{
    int c;
    int spaceCount = 0;
    while((c = getchar()) == EOF)
    {
        if(spaceCount > 1)
        {
            spaceCount = 0;
        }
    }
}
