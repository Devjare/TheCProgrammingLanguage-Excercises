#include <stdio.h>

int foo(char s[], int lim);
void chapter2_second(void);

void chapter2_second()
{
	char s[1000];
	int len = foo(s, 1000);
	printf("Word: %s, length: %d\n", s, len);
}

int foo(char s[],int lim)
{
    int c, i;
    c = getchar();
    for (i = 0;i < lim - 1;++i)
    {
		if(c != EOF)
		{
			if(c != '\n')
			{
				s[i] = c;
			}
		}
		c = getchar();
    }
    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }

    s[i] = '\0';
    return i;
}
