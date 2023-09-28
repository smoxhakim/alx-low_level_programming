#include "main.h"

/**
 * _print_rev_recursion - print reverse
 * @s: the input
 * owned by: SmoxHakim
 */

void _print_rev_recursion(char *s)
{
	int x = '\0';

	if (s[x] == '\0')
	{
		_putchar('\n');
		x--;
		_putchar(s[x]);
		_print_rev_recursion(s - 1);
	}
}
