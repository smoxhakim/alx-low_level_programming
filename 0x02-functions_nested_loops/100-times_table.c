#include "main.h"

/**
 * print_times_table - print the n times table
 *@n: the input
 */

void print_times_table(int n)
{
	int a;
	int b;
	int result;

	if (n > 0 && n <= 15)
	{
		for (a = 0; a <= 9; a++)
		{
			_putchar(48);

			for (b = 1; b <= 9; b++)
			{
				_putchar(',');
				_putchar(' ');

				result = a * b;

				if (result <= 9)
				{
					_putchar(' ');
				}
				else
				{
					_putchar((result / 10) + 48);
				}
				_putchar((result % 10) + 48);
			}
		_putchar('\n');
		}
	}
}

