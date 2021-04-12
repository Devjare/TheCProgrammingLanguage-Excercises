#include <stdio.h>

int main()
{
    int c, blanks, tabs, newlines = 0;
    blanks = tabs = newlines;
    while((c = getchar()) != EOF) 
    {
        if(c == ' ') blanks++;
        else if(c == '\t') tabs++;
        else if(c == '\n')
        {
            newlines++;
            printf("Total blanks: %d\n", blanks); 
            printf("Total tabs: %d\n", tabs); 
            printf("Total newlines: %d\n", newlines); 
        }
    }
    return 0;
}
