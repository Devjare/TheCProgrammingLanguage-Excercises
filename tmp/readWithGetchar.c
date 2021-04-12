#include <stdio.h>

int main()
{
    int c;
    printf("EOF %d", EOF);
    while((c = getchar()) != EOF) 
    {
        c = getchar();
        int d = c != EOF;
        printf("c is: %d", d);
    }

    printf("EOF Reached\n");
    return 0;
}
