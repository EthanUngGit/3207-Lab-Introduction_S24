#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int a;

	/* seed the randomizer */
	srand((unsigned)time(NULL));

	printf("Today's random word: ");
	// performs a rand on the ASCII 65 - 90 or A - Z
    for (a=0; a<7; a++) {
        putchar(rand() % 26 + 65);
	}

	putchar('\n');
	
	return(0);
}