#include "main.h"

/**
 * _puts_recursion - print a string
 * @s: the input string
 * owned by: SmoxHAkim
 */

void _puts_recursion(char *s)
{
	int x = 0;

	if (s[x] == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(s[x]);
		x++;
		_puts_recursion(s + 1);
	}
}
