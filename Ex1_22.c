#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAXLINE 1000

int getline(char line[], int lim, int n)
{
	int c = getchar();
	int i;
	int lim_count = 0;

	for (i = 0; i < lim - 1 && (c = getchar()) != EOF;i++)
	{
		lim_count++;
		//
		if ((c == ' ' || c == '\t') && lim_count >= n)
		{
			line[i] = '\n';
			lim_count = 0;
		}
		else
		{
			line[i] = c;
		}
		
	}

	if (c == '\n')
	{
		line[i] = c;
		++i;
	}
	line[i] = '\0';

	return i;
}

void print_array(char arr[], int length)
{
	for (int i = 0; i < length; ++i)
	{
		putchar(arr[i]);
	}
}

int main()
{
	char line[MAXLINE];
	int length;
	int n;
	scanf("%d", &n);

	length = getline(line, MAXLINE, n);
	print_array(line, length);
}