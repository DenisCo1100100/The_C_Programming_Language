#include <stdio.h>

main() {
	char nc;
	int tab = 0;
	int space = 0;
	int newString = 0;

	while ((nc = getchar()) != EOF) 
	{
		if (nc == '\t')
		{
			tab++;
		}
		else if (nc == ' ')
		{
			space++;
		}
		else if (nc == '\n') 
		{
			newString++;
		}
	}

	printf("%d\n%d\n%d\n", tab, space, newString);
}