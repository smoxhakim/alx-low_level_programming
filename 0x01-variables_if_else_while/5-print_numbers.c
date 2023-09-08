#include <stdio.h>

/*
 * main - entry point
 *
 * return always 0
 */

int main(void)
{
	int num[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int x;
	for (x = 0; x <= 9; x++)
	{
		printf("%d", num[x]);
	}

	putchar('\n');

	return (0);
}
