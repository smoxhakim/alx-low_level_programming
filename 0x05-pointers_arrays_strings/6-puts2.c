#include "main.h"

/**
 * puts2 - print other character
 * @str: the input
 */

void puts2(char *str)
{
	int cont = 0;
	int a;
	int b;

	while (str[cont] != '\0')
	{
		cont++;
	}

	for (a = 0; a < cont - 1; a++)
	{
		b = a * 2;
		_putchar(str[b]);
	}
	_putchar('\n');
}
