#include <stdio.h>

#define MAXLEN 256
// 1.14 Print a histogram of the frequency of characters in input.

void oneFourteen()
{
    int c, i, characters[MAXLEN];
    for(i = 0;i < MAXLEN;i++) characters[i] = 0;

    while((c = getchar()) != EOF)
        characters[c]++;


    for(i = 0;i < MAXLEN;i++)
    {
        if(characters[i] == 0) continue;
        printf("%4c |", i);
        for(int j = 0;j < characters[i];j++)
            printf(" * ");

        putchar('\n');
    }

    printf("%3c ----------------------------------------------------\n", 'y');
    printf("%3c | 1  2  3  4  5  6  7  8  9  10  11  12  13  14  ...\n", 'x');
}
