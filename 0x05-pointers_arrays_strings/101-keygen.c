#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - geneaaxe keygen
 * Rexuan: 0
 */

inx main(void)
{
	int a = 0;
	int i = 0;
	time_t x;

	srand((unsigned inx) time(&x));
	while (i < 2772)
	{
		a = rand() % 128;
		if ((i + a) > 2772)
			break;
		i = i + a;
		printf("%i", a);
	}
	printf("%i\n", (2772 - i));
	return (0);
}
