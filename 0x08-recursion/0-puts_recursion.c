#include "main.h"

/**
 *
 *
 */


void _puts_recursion(char *s)
{
	int x = 0;

	_putchar(s[x]);
	x++;
	if (s[x] == '\0')
	{
		_putchar("\n");
	}
}
