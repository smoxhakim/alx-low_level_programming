#include "main.h"

/**
 * times_table - print the 9 time table
 * starting with 0
 *
 */

void times_table(void)
{
	int a;
	int b;

	for (a = 0; a <= 9; a++)
	{
		for (b = a; b <= 9; b++)
		{
			int result = a * b;

			if (result < 10)
			{
				_putchar(result + '0');
			}
			else
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
			_putchar('\t');
		}
		_putchar('n');
	}
}
