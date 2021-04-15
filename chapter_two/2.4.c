#include <stdio.h>

#define MAXLEN 1000

void chapter2_fourth(void);
void deleteMatches(char s1[], char s2[]);

void chapter2_fourth()
{

	char s1[MAXLEN];
	char s2[MAXLEN];
	int s1Len = getline(s1, MAXLEN);
	int s2Len = getline(s2, MAXLEN);

	printf("Deleting %s from %s\n", s2, s1);
	deleteMatches(s1, s2);
	printf("Resut: %s\n", s1);
}

void deleteMatches(char s1[], char s2[])
{
	int i, j;
	i = j = 0;
	while(s2[j] != '\0')
	{
		int k = 0;
		while(s1[i] != '\0')
		{
			if(s1[i] != s2[j]) s1[k++] = s1[i];
			i++;
		}
		s1[k] = '\0';
		i = 0;
		j++;
	}
}
