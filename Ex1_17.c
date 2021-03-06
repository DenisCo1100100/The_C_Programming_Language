#include <stdio.h>
#define MAXLINE 1000
#define REQNUMBERCHAR 10


int getline(char line[], int lim);
void copy(char to[], char from[]);

int main()
{
	int len;
	int max;
	char line[MAXLINE];
	char lingest[MAXLINE];

	while ((len = getline(line, MAXLINE)) > 0)
	{
		if (len > REQNUMBERCHAR)
		{
			for (int i = 0; line[i] != '\n'; ++i)
			{
				putchar(line[i]);
			}
		}
	}

	return 0;
}

int getline(char s[], int lim)
{
	int c, i;
	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
	{
		s[i] = c;
	}

	if (c == 'n')
	{
		s[i] = c;
		++i;
	}
	s[i] = '\0';

	return i;
}

void copy(char to[], char from[])
{
	int i;
	i = 0;
	while ((to[i] = from[i]) != '\0')
	{
		++i;
	}
}