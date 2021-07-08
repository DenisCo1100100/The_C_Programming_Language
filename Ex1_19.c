#include <stdio.h>
#define MAXLINE 1000

int getline(char line[], int lim);
void reverse(char line[], int length);

int main()
{
	char line[MAXLINE];
	int length;

	length = getline(line, MAXLINE);
	reverse(line, length);
}

int getline(char line[], int lim)
{
	int c, i;
	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
	{
		line[i] = c;
	}

	if (c == '\n')
	{
		line[i] = c;
		++i;
	}
	line[i] = '\0';

	return i;
}

void reverse(char line[], int length)
{
	for (int i = length; i >= 0; i--)
	{
		putchar(line[i]);
	}
}