#include <stdio.h>

main()
{
	//Ex 1.1
	printf("Hello,");
	printf("world.");
	printf("\n");
	printf("-----------------------------------\n");

	//Ex 1.2
	printf("\cHello\n");
	printf("-----------------------------------\n");

	//Ex 1.3, 1.4, 1.5
	float fahr, celsius;
	int lower, upper;

	lower = 0;
	upper = 300;

	printf(">Table FAHRONGATE<\n");

	for (fahr = 300; fahr >= 0; fahr -= 20)
	{
		printf("ss");
		celsius = (5.0 / 9.0) * (fahr - 32.0);
		printf("%6.1f\t%3.0f\n", celsius, fahr);
	}

	printf("----------------------------------\n");
}
