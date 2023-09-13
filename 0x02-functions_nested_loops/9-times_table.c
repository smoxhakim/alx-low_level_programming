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
			if (b < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('\n');
			}
		}
		_putchar('n');
	}
}
