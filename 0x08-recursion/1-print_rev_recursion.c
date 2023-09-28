#include "main.h"

/**
 * _print_rev_recursion - print reverse
 * @s: the input
 * owned by: SmoxHakim
 */

void _print_rev_recursion(char *s)
{
	int x = NULL;

	if (s[x] == '\0')
	{
		_putchar('\n');
		x--;
		_print_rev_recursion(s - 1);
	}
	else
	{
		_putchar(s[x]);
	}
}
