#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 * followed by a new line.
 * alphabet a - z
 */
void print_alphabet_x10(void)
{
	for (int a = 1; a <= 10 ; a++)
	{
		for (int alph = 'a'; alph <= 'z'; alph++)
		{
			_putchar(alph);
		}
		_putchar('\n');
	}
}
