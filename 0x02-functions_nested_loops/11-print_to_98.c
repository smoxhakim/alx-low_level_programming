#include "main.h"

/**
 * print_to_98 - print all natural numbers
 * from n to 98
 * @n: the input
 */

void print_to_98(int n)
{
	int p;

	if (n < 98)
	{
		for (p = n; p <= 98; p++)
		{
			_putchar(p + 48);
			if (p != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('\n');
			}
		}
	}
	else
	{
		for (p = n; p >= 98; p++)
		{
			_putchar(p + 48);
			if (p != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('\n');
			}
		}
	}

}
