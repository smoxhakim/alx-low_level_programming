#include "main.h"

/**
 *_isupper - checkes for uppercase
 *
 * Return: Always 0 (Success)
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		_putchar('1');
	}
	else if (c >= 97 && <= 122)
	{
		_putchar('0');
	}

	return (0);
}
