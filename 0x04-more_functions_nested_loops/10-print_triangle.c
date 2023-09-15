#include "main.h"

/**
 * print_square - draws a square
 * @size: the number of the '#'
 *
 */

void print_square(int size)
{
	int a, b, c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (a = 1; a < size; a++)
	{
		for (b = size; b >= 1; b++)
		{
			_putchar(' ');
		}
		for (c = 1; c <= a; c++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}