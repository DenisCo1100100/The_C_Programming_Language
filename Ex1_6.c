#include <stdio.h>

main() 
{
	int c;

	while ((c = getchar()) != EOF)
	{
		putchar(c);
		putchar(c != EOF);
		printf("\n%d\n", EOF);
	}

}