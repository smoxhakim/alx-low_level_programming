#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the tirminal
 * @n: the number of the '\'
 *
 */

void print_diagonal(int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		_putchar(' ');
	}
	_putchar('\\');
	_putchar('\n');
}
