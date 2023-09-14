#include "main.h"

/**
 * more_numbers - print the numbers from 0 to 14
 *
 */

void more_numbers(void)
{
	int a;
	int cont;

	for (cont = 0; cont < 10; cont++)
	{
		for (a = 0; a <= 14; a++)
		{
			_putchar(a + '0');
		}
	_putchar('\n');
	}
}
