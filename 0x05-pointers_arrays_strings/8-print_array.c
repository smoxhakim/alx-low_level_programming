#include "main.h"
#include <stdio.h>

/**
 * print_array - print n elements
 * @a: first input
 * @n: second input
 */

void print_array(int *a, int n)
{
	int b;

	for (b = 0; a < n; b++)
	{
		if (b != n - 1)
		{
			printf("%d, ", a[b]);
		}
		else
		{
			printf("%d", a[b]);
		}
	}
	_putchar('\n');
