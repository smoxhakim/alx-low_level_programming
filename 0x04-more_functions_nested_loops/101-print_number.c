#include "main.h"
/**
 * print_number - prints an integer
 * @n: the input number
 */
void print_number(int n)
{
	unsigned int number = n;

	if (number < 0)
	{
		_putchar(45);

		number = -number;
	}

	else if (number / 10)
	{
		print_number(number / 10);
	}

	else
	{
		_putchar(number % 10 + '0');
	}
}
