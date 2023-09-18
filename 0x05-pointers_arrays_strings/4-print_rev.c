#include "main.h"

/**
 * print_rev - print reverse
 * @s: the input
 */

void print_rev(char *s)
{
	int rev = 0;
	int a;

	while (s[rev] != '\0')
	{
		rev++;
	}

	for (a = rev - 1; a >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}

