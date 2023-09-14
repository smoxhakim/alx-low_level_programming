#include "main.h"

/**
 * print_times_table - prints the n times table
 *
 * @n: the input
*/

void print_times_table(int n)
{
	int a;
	int b;
	int re;

	if (n <= 15 && n >= 0)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar(48);
			for (b = 1; b <= n; b++)
			{
				_putchar(',');
				_putchar(' ');

				re = a * b;

				if (re <= 9)
					_putchar(' ');
				if (re <= 99)
					_putchar(' ');

				if (re >= 100)
				{
					_putchar((re / 100) + 48);
					_putchar((re / 10) % 10 + 48);
				} else if (re <= 99 && re >= 10)
					_putchar((re / 10) + 48);
				_putchar((re % 10) + 48);
			}
			_putchar('\n');
		}
	}
}
