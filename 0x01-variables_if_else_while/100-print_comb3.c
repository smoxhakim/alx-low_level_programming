#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num[] = {01, 02, 03, 04, 05, 06, 07, 08, 09,
		12, 13, 14, 15, 16, 17, 18, 19, 23, 24, 25, 26,
		27, 28, 29, 34, 35, 36, 37, 38, 39, 45, 46, 47,
		48, 49, 56, 57, 58, 59, 67, 68, 69, 78, 79, 89};
	int x;

	for (x = 0; x < 45; x++)
	{
		putchar('0' + num[x]);
		if (x <= 44)
		{
		putchar(',');
		putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
