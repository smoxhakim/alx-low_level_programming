#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int x;

	for (x = 0; x <= 9; x++)
	{
                putchar(num[x]);
	}

	putchar('\n');

	return (0);
}
