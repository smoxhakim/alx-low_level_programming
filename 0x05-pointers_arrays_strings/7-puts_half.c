#include "main.h"

/**
 * puts_half - print the half of a string
 * @str: the input
 */

void puts_half(char *str)
{
	int cont = 0;
	int half;

	while (str[cont] != '\0')
	{
		cont++;
	}

	half = cont / 2;

	while (str[half] != '\0')
	{
		_putchar(str[half]);
	}

	_putchar('\n');
}

