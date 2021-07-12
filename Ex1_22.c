#include <stdio.h>
#define MAXLINE 1000

int getline(char line[], int lim,int n);
void print_array();

int main()
{
	char line[MAXLINE];
	int length;
	int n = getchar();

	length = getline(line, MAXLINE, n);
	reverse(line, length);
}

int getline(char line[], int lim, int n)
{
	int c, i;
	int lim_count = 0;
	
	for (i = 0; i < lim - 1 && (c = getchar()) != EOF; ++i)
	{
		lim_count++;
		
		if((c == ' ' || c == '\t') && i >= n)
		{
			line[i] = '\n';
			lim_count = 0;
			++i;
		}
		
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

void print_array(char arr[])
{
	
}