#include "main.h"

/**
 * print_number - prints an integer
 * @n: input integer
 * owned by: SmoxHakim
 */
void print_number(int n)
{
	unsigned int x, y, c;

	if (n < 0)
	{
		_putchar(45);
		x = n * -1;
	}
	else
	{
		x = n;
	}

	y = x;
	c = 1;

	while (y > 9)
	{
		y /= 10;
		c *= 10;
	}

	for (; c >= 1; c /= 10)
	{
		_putchar(((x / c) % 10) + 48);
	}
}
