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
		_putchar(48);

		for (b = a; b <= 9; b++)
		{
			_putchar(',');
			_putchar(' ');

			int result = a * b;

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
