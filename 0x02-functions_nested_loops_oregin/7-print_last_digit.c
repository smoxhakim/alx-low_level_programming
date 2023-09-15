#include "main.h"

/**
 * print_last_digit - last digit of a number.
 *
 * @n: takes number input
 *
 * Return: end
*/
int print_last_digit(int n)
{
	int end;

	if (n < 0)
	{
		end = -1 * (n % 10);
	}
	else
	{
		end = n % 10;
	}
	_putchar(end + '0');
	return (end);
}
