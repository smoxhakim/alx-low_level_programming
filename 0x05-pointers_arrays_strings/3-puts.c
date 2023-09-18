#include "main.h"

/**
 * _puts - print a string
 * @str: the input
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
			str++;
	}
	_putchar('\n');
}
