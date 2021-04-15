#include <stdio.h>

#define MAXLEN 1000

void chapter2_fifth(void);
int any(char s1[], char s2[]);

void chapter2_fifth()
{

	char s1[MAXLEN];
	char s2[MAXLEN];
	int s1Len = getline(s1, MAXLEN);
	int s2Len = getline(s2, MAXLEN);

	int index = any(s1, s2);
	printf("First match of \n%sin\n%s: %d\n", s2, s1, index);
}

int any(char s1[], char s2[])
{
	int i, j;
	i = j = 0;

	while(s2[i++] != '\0')
	{
		while(s1[j] != '\0')
		{
			if(s1[j++] == s2[i])
			{
				printf("Match found with: %c\n", s1[j-1]);
				return j-1;
			}
		}
		j = 0;
	}
	return -1;
}
