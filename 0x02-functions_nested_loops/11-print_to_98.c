#include "main.h"

/**
 * print_to_98 - print all natural numbers
 * from n to 98
 * @n: the input
 */

void print_to_98(int n)
{
	int p;
	int ne;

	if (n < 98)
	{
		for (p = n; p <= 98; p++)
		{
			_putchar(p + 48);
		}
	else if (n > 98)
	{
		for (ne = n; ne >= 98; ne++)
		{
			_putchar(ne + 48);
		}
	}

	}

	_putchar('\n');
}

