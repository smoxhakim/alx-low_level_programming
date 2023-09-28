#include "main.h"

/**
 * _puts_recursion - print a string 
 * @s: the input string
 * owned by: SmoxHAkim
 */

void _puts_recursion(char *s)
{
	int x = 0;

	_putchar(s[x]);
	x++;
	if (s[x] != '\0')
	{
		_puts_recursion(s);
	}
	else
	{
		_putchar('\n');
	}
}
