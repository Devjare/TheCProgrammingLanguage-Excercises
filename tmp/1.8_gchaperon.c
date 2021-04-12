#include <stdio.h>
#define MAXLINE 1000

void eightGchaperon()
{
	int len, i;
	char line[MAXLINE];

	while ((len = getline(line, MAXLINE)) > 0) {
		if (len == 1 && line[0] == '\n')
			continue;
		for (i = len-1; i>=0 && (line[i]==' ' || line[i]=='\t' || line[i]=='\n'); --i)
			;
		printf("%.*s", i+1, line);
		if (line[len-1] == '\n')
			putchar('\n');
	}
}
