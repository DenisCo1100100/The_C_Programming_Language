#include <stdio.h>

main() {
	int nc;
	int lastChar = ' ';
	while ((nc = getchar()) != EOF) {
		if ((nc == ' ' && nc != lastChar) || nc != ' ') {
			putchar(nc);
		}
		lastChar = nc;
	}
}