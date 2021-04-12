#include <stdio.h>

#define IN 1
#define OUT 0
#define MAXLEN 1000

// 1.13 Print a histogram of the lenght of the words in the input.

void oneThirteen()
{
    int c, wordcount = 0, state = OUT;
    int arr[MAXLEN];
    arr[wordcount] = 0;

    while((c = getchar()) != EOF)
    {
        if(c == ' ' || c == '\t' || c == '\n')
        {
            if(state == IN)
            {
                wordcount++;
                arr[wordcount] = 0;
                state = OUT;
            }
        }
        else
        {
            arr[wordcount]++;
            state = IN;
        }
    }

    for(int i = 0;i < wordcount;i++)
    {
        printf("%3d |", i, arr[i]);
        for(int j = 0;j < arr[i];j++)
        {
            putchar(' ');
            putchar('*');
        }

        putchar('\n');
    }

    printf("%3c --------------------------------------------\n", 'y');
    printf("%3c | 1 2 3 4 5 6 7 8 9 10 11 12 13 14 ...\n", 'x');
}
